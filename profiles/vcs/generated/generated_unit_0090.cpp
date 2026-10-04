#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0090[4094] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0,
    9, 0, 0, 10, 0, 0, 0, 11, 0, 12, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 0, 21,
    0, 22, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0,
    30, 0, 31, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0,
    0, 39, 0, 40, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 45, 46, 0, 0, 47, 0, 0, 48,
    0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 55, 0, 56, 57, 0, 0, 0, 58, 0, 0, 59, 0, 60, 0, 0, 61,
    0, 62, 63, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 71,
    0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0,
    0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 83, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0,
    87, 0, 88, 0, 0, 89, 0, 90, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 0, 0, 97,
    0, 98, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 102, 103, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 107, 0, 108, 109, 0, 0,
    0, 110, 0, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 0, 114, 0, 115, 116, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 0, 120, 0, 121,
    122, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0,
    0, 0, 0, 131, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 136, 0, 137, 0, 138, 0, 0, 0, 139,
    0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 148, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0,
    155, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 161, 162, 0, 0, 0, 163, 0, 0, 164,
    0, 165, 0, 0, 166, 0, 167, 168, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 174, 0, 175, 0, 0, 176,
    0, 0, 177, 0, 178, 179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 182, 0, 183, 0, 0, 184, 0, 185, 186, 0, 0, 0, 0, 187,
    0, 0, 0, 0, 188, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 0, 203, 0, 0, 0,
    0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 208, 0, 209, 210, 0, 0, 0, 211, 0, 0, 212, 0, 213, 0, 0, 214,
    0, 215, 216, 0, 0, 0, 217, 0, 0, 218, 0, 219, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 224, 0, 0, 0, 225, 0,
    0, 226, 0, 227, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 231, 0, 232, 0, 0, 233, 0, 234, 235, 0, 0, 0, 0, 236, 0,
    0, 0, 0, 237, 0, 0, 238, 0, 239, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0, 0, 0, 243, 0, 244, 0, 245, 0, 0, 246, 0, 0,
    247, 0, 248, 0, 249, 0, 0, 250, 0, 251, 0, 0, 252, 0, 253, 0, 254, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266,
    0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272,
    0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 283, 0, 284, 0, 285, 0, 0, 0, 0, 0,
    0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 288, 0, 0, 289, 0, 0, 290, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 297, 0, 298, 0,
    0, 0, 0, 299, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0,
    305, 0, 0, 306, 0, 0, 307, 0, 0, 308, 0, 309, 310, 0, 311, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 315,
    0, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 320, 321, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325,
    0, 326, 0, 327, 0, 0, 328, 0, 0, 329, 0, 330, 331, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 338, 0, 0, 339, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 344, 0, 0, 345, 0, 346, 0, 347, 0, 0, 0, 0, 0, 348, 349, 0, 350, 0, 0, 0, 0, 0, 351, 352, 0, 353, 0, 0, 0, 0,
    0, 354, 355, 0, 356, 0, 0, 0, 0, 0, 357, 358, 0, 359, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362,
    0, 363, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 380, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 383, 384,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    388, 0, 389, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 394, 0, 395, 0, 0, 0, 396, 397,
    0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0,
    402, 0, 0, 0, 403, 0, 404, 0, 405, 0, 406, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 412, 413, 0,
    414, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0,
    426, 0, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0, 0, 432, 0, 0, 433, 0, 0, 434, 0, 0, 435, 0, 0, 436,
    0, 0, 437, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 0,
    447, 0, 0, 448, 0, 0, 449, 0, 0, 450, 0, 451, 0, 452, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 455, 456, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 461, 0, 462, 0,
    0, 0, 463, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 470, 0, 471, 0, 472, 0, 0, 0, 473, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0,
    476, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 479, 0, 480, 0, 0, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 485, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0,
    0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 493, 494, 0, 0, 495, 0, 496, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0,
    0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 505, 0, 506, 0, 507, 0, 508, 0, 0, 0, 509,
    0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 518, 0, 0, 519, 0, 0, 0, 520, 0, 0, 521,
    0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 527, 0,
    528, 0, 0, 0, 0, 529, 0, 0, 0, 530, 531, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 535, 0, 536, 0, 537, 0, 538, 0, 539, 0, 540, 0, 541, 0, 542, 0, 543, 0, 544,
    0, 545, 0, 0, 0, 546, 0, 0, 0, 547, 0, 548, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0,
    551, 0, 0, 552, 0, 0, 553, 0, 0, 0, 554, 0, 555, 556, 0, 557, 0, 558, 0, 559, 0, 0, 0, 0, 0, 560, 0, 561, 0, 562, 563, 0,
    564, 0, 0, 0, 0, 0, 565, 0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0,
    0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 578, 0, 579, 0, 580, 0, 581, 0, 582, 0,
    583, 0, 584, 0, 0, 585, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 588, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 0, 594, 595, 0, 0, 0,
    596, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 600, 0, 601, 0, 602, 0, 603, 0, 604, 0, 605,
    0, 606, 0, 607, 0, 608, 0, 609, 0, 610, 0, 611, 612, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0,
    617, 0, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 623,
    0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0,
    0, 629, 0, 630, 0, 0, 631, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 634, 0, 0, 0,
    0, 0, 635, 0, 0, 0, 636, 0, 0, 637, 0, 638, 639, 0, 0, 640, 0, 0, 0, 641, 642, 0, 643, 0, 644, 0, 0, 645, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 650, 0, 651, 652, 0,
    0, 653, 0, 0, 0, 654, 655, 0, 656, 0, 657, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 663,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 665, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    667, 0, 0, 0, 0, 668, 0, 669, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 672, 0, 0,
    673, 0, 0, 0, 0, 674, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 679, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 681, 0, 0, 682, 0, 0, 683, 0, 0, 0, 0, 684, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 688, 0, 689, 0, 0, 0, 0, 690, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 692, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 698, 0, 0, 699, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 702, 0, 0, 703, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 709, 0, 0, 0, 0, 0,
    0, 0, 710, 0, 711, 0, 712, 0, 713, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 717, 0, 0, 0, 718, 0, 0, 0,
    0, 0, 719, 0, 0, 720, 0, 721, 0, 722, 0, 723, 724, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0,
    0, 0, 727, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 730, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 732, 0, 0, 733,
    0, 0, 0, 0, 0, 0, 0, 0, 734, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 737, 738, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 0, 0, 742, 0, 0, 743, 0, 744, 0, 0,
    745, 0, 746, 0, 747, 748, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 755, 0,
    0, 0, 0, 756, 0, 0, 757, 0, 0, 0, 0, 758, 0, 759, 0, 0, 0, 760, 0, 0, 0, 0, 761, 0, 762, 0, 0, 0, 763, 0, 0, 0,
    0, 764, 0, 765, 0, 0, 0, 766, 0, 0, 767, 0, 768, 0, 0, 0, 769, 0, 0, 0, 0, 770, 0, 0, 771, 0, 772, 0, 0, 773, 0, 774,
    0, 775, 0, 776, 0, 0, 777, 0, 778, 0, 0, 0, 779, 0, 0, 0, 0, 780, 0, 0, 781, 0, 782, 0, 0, 0, 0, 783, 0, 784, 0, 0,
    0, 0, 785, 0, 786, 0, 0, 0, 0, 787, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 790, 0, 0,
    791, 0, 792, 0, 793, 0, 794, 0, 795, 0, 796, 0, 797, 0, 798, 0, 799, 0, 800, 0, 801, 0, 802, 0, 0, 803, 0, 0, 804, 0, 805, 0,
    806, 0, 807, 0, 808, 0, 809, 0, 810, 0, 811, 0, 812, 813, 0, 814, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 815, 0, 0, 816, 0, 0, 0, 0, 817, 0, 0, 0, 818, 0, 819, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0, 0, 821,
    0, 0, 0, 822, 0, 0, 0, 0, 0, 823, 0, 0, 0, 824, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0,
    827, 0, 828, 0, 0, 0, 829, 0, 0, 0, 0, 0, 830, 0, 0, 0, 831, 0, 0, 0, 0, 832, 0, 0, 0, 833, 0, 0, 0, 0, 0, 834,
    0, 0, 0, 835, 836, 0, 0, 0, 0, 0, 837, 0, 0, 0, 838, 0, 0, 839, 0, 0, 0, 840, 0, 0, 841, 0, 842, 843, 0, 844, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 845, 0, 0, 0, 846, 0, 0, 0, 847, 0, 0, 848, 0, 0, 849, 0, 850, 851, 0, 852, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 853, 0, 0, 0, 0, 0, 854, 0, 0, 855,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 856, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 857, 0, 858, 0, 0,
    0, 0, 0, 0, 0, 859, 0, 0, 860, 0, 0, 0, 861, 0, 862, 0, 863, 0, 864, 0, 865, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 867, 0, 0, 0, 0, 0, 868, 0, 0, 869, 0, 0, 870, 0, 0, 871, 0, 0, 872, 0, 873, 0, 0, 874, 0, 0, 0, 0, 0, 875,
    0, 0, 0, 0, 0, 876, 0, 0, 0, 877, 0, 0, 0, 0, 0, 878, 0, 0, 879, 0, 0, 880, 0, 0, 881, 0, 0, 882, 0, 883, 0, 0,
    884, 0, 0, 0, 0, 0, 885, 0, 0, 0, 0, 0, 886, 0, 0, 0, 887, 0, 0, 0, 0, 0, 0, 888, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 889, 0, 0, 0, 0, 890, 891, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 892, 0, 893, 0, 894, 0, 895,
};
void recomp_unit_0090_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0896C000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0090[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0896C000;
    case 2u: goto L_0896C020;
    case 3u: goto L_0896C028;
    case 4u: goto L_0896C034;
    case 5u: goto L_0896C048;
    case 6u: goto L_0896C050;
    case 7u: goto L_0896C05C;
    case 8u: goto L_0896C070;
    case 9u: goto L_0896C080;
    case 10u: goto L_0896C08C;
    case 11u: goto L_0896C09C;
    case 12u: goto L_0896C0A4;
    case 13u: goto L_0896C0A8;
    case 14u: goto L_0896C0C0;
    case 15u: goto L_0896C124;
    case 16u: goto L_0896C138;
    case 17u: goto L_0896C14C;
    case 18u: goto L_0896C154;
    case 19u: goto L_0896C160;
    case 20u: goto L_0896C16C;
    case 21u: goto L_0896C17C;
    case 22u: goto L_0896C184;
    case 23u: goto L_0896C188;
    case 24u: goto L_0896C1A0;
    case 25u: goto L_0896C1BC;
    case 26u: goto L_0896C1D0;
    case 27u: goto L_0896C1D8;
    case 28u: goto L_0896C1E4;
    case 29u: goto L_0896C1F0;
    case 30u: goto L_0896C200;
    case 31u: goto L_0896C208;
    case 32u: goto L_0896C20C;
    case 33u: goto L_0896C224;
    case 34u: goto L_0896C240;
    case 35u: goto L_0896C254;
    case 36u: goto L_0896C25C;
    case 37u: goto L_0896C268;
    case 38u: goto L_0896C274;
    case 39u: goto L_0896C284;
    case 40u: goto L_0896C28C;
    case 41u: goto L_0896C290;
    case 42u: goto L_0896C2A8;
    case 43u: goto L_0896C2C4;
    case 44u: goto L_0896C2D8;
    case 45u: goto L_0896C2E0;
    case 46u: goto L_0896C2E4;
    case 47u: goto L_0896C2F0;
    case 48u: goto L_0896C2FC;
    case 49u: goto L_0896C304;
    case 50u: goto L_0896C344;
    case 51u: goto L_0896C388;
    case 52u: goto L_0896C394;
    case 53u: goto L_0896C3A0;
    case 54u: goto L_0896C3B4;
    case 55u: goto L_0896C3C0;
    case 56u: goto L_0896C3C8;
    case 57u: goto L_0896C3CC;
    case 58u: goto L_0896C3DC;
    case 59u: goto L_0896C3E8;
    case 60u: goto L_0896C3F0;
    case 61u: goto L_0896C3FC;
    case 62u: goto L_0896C404;
    case 63u: goto L_0896C408;
    case 64u: goto L_0896C418;
    case 65u: goto L_0896C424;
    case 66u: goto L_0896C42C;
    case 67u: goto L_0896C43C;
    case 68u: goto L_0896C454;
    case 69u: goto L_0896C464;
    case 70u: goto L_0896C474;
    case 71u: goto L_0896C47C;
    case 72u: goto L_0896C498;
    case 73u: goto L_0896C4A4;
    case 74u: goto L_0896C4AC;
    case 75u: goto L_0896C4BC;
    case 76u: goto L_0896C4CC;
    case 77u: goto L_0896C4EC;
    case 78u: goto L_0896C508;
    case 79u: goto L_0896C51C;
    case 80u: goto L_0896C528;
    case 81u: goto L_0896C534;
    case 82u: goto L_0896C540;
    case 83u: goto L_0896C548;
    case 84u: goto L_0896C54C;
    case 85u: goto L_0896C560;
    case 86u: goto L_0896C574;
    case 87u: goto L_0896C580;
    case 88u: goto L_0896C588;
    case 89u: goto L_0896C594;
    case 90u: goto L_0896C59C;
    case 91u: goto L_0896C5A0;
    case 92u: goto L_0896C5B4;
    case 93u: goto L_0896C5C8;
    case 94u: goto L_0896C5D4;
    case 95u: goto L_0896C5DC;
    case 96u: goto L_0896C5EC;
    case 97u: goto L_0896C5FC;
    case 98u: goto L_0896C604;
    case 99u: goto L_0896C60C;
    case 100u: goto L_0896C620;
    case 101u: goto L_0896C62C;
    case 102u: goto L_0896C634;
    case 103u: goto L_0896C638;
    case 104u: goto L_0896C648;
    case 105u: goto L_0896C654;
    case 106u: goto L_0896C65C;
    case 107u: goto L_0896C668;
    case 108u: goto L_0896C670;
    case 109u: goto L_0896C674;
    case 110u: goto L_0896C684;
    case 111u: goto L_0896C690;
    case 112u: goto L_0896C698;
    case 113u: goto L_0896C6AC;
    case 114u: goto L_0896C6B8;
    case 115u: goto L_0896C6C0;
    case 116u: goto L_0896C6C4;
    case 117u: goto L_0896C6D4;
    case 118u: goto L_0896C6E0;
    case 119u: goto L_0896C6E8;
    case 120u: goto L_0896C6F4;
    case 121u: goto L_0896C6FC;
    case 122u: goto L_0896C700;
    case 123u: goto L_0896C710;
    case 124u: goto L_0896C71C;
    case 125u: goto L_0896C724;
    case 126u: goto L_0896C738;
    case 127u: goto L_0896C740;
    case 128u: goto L_0896C750;
    case 129u: goto L_0896C75C;
    case 130u: goto L_0896C774;
    case 131u: goto L_0896C78C;
    case 132u: goto L_0896C79C;
    case 133u: goto L_0896C7A4;
    case 134u: goto L_0896C7C0;
    case 135u: goto L_0896C7D4;
    case 136u: goto L_0896C7DC;
    case 137u: goto L_0896C7E4;
    case 138u: goto L_0896C7EC;
    case 139u: goto L_0896C7FC;
    case 140u: goto L_0896C804;
    case 141u: goto L_0896C820;
    case 142u: goto L_0896C82C;
    case 143u: goto L_0896C834;
    case 144u: goto L_0896C844;
    case 145u: goto L_0896C854;
    case 146u: goto L_0896C860;
    case 147u: goto L_0896C868;
    case 148u: goto L_0896C874;
    case 149u: goto L_0896C8A8;
    case 150u: goto L_0896C8B0;
    case 151u: goto L_0896C8C0;
    case 152u: goto L_0896C8D0;
    case 153u: goto L_0896C8E4;
    case 154u: goto L_0896C8EC;
    case 155u: goto L_0896C900;
    case 156u: goto L_0896C908;
    case 157u: goto L_0896C920;
    case 158u: goto L_0896C938;
    case 159u: goto L_0896C948;
    case 160u: goto L_0896C954;
    case 161u: goto L_0896C95C;
    case 162u: goto L_0896C960;
    case 163u: goto L_0896C970;
    case 164u: goto L_0896C97C;
    case 165u: goto L_0896C984;
    case 166u: goto L_0896C990;
    case 167u: goto L_0896C998;
    case 168u: goto L_0896C99C;
    case 169u: goto L_0896C9AC;
    case 170u: goto L_0896C9B8;
    case 171u: goto L_0896C9C0;
    case 172u: goto L_0896C9D0;
    case 173u: goto L_0896C9E0;
    case 174u: goto L_0896C9E8;
    case 175u: goto L_0896C9F0;
    case 176u: goto L_0896C9FC;
    case 177u: goto L_0896CA08;
    case 178u: goto L_0896CA10;
    case 179u: goto L_0896CA14;
    case 180u: goto L_0896CA28;
    case 181u: goto L_0896CA3C;
    case 182u: goto L_0896CA48;
    case 183u: goto L_0896CA50;
    case 184u: goto L_0896CA5C;
    case 185u: goto L_0896CA64;
    case 186u: goto L_0896CA68;
    case 187u: goto L_0896CA7C;
    case 188u: goto L_0896CA90;
    case 189u: goto L_0896CA9C;
    case 190u: goto L_0896CAA4;
    case 191u: goto L_0896CAB4;
    case 192u: goto L_0896CABC;
    case 193u: goto L_0896CAC8;
    case 194u: goto L_0896CAD0;
    case 195u: goto L_0896CB04;
    case 196u: goto L_0896CB0C;
    case 197u: goto L_0896CB1C;
    case 198u: goto L_0896CB2C;
    case 199u: goto L_0896CB40;
    case 200u: goto L_0896CB48;
    case 201u: goto L_0896CB5C;
    case 202u: goto L_0896CB64;
    case 203u: goto L_0896CB70;
    case 204u: goto L_0896CB84;
    case 205u: goto L_0896CB8C;
    case 206u: goto L_0896CBA0;
    case 207u: goto L_0896CBB4;
    case 208u: goto L_0896CBC0;
    case 209u: goto L_0896CBC8;
    case 210u: goto L_0896CBCC;
    case 211u: goto L_0896CBDC;
    case 212u: goto L_0896CBE8;
    case 213u: goto L_0896CBF0;
    case 214u: goto L_0896CBFC;
    case 215u: goto L_0896CC04;
    case 216u: goto L_0896CC08;
    case 217u: goto L_0896CC18;
    case 218u: goto L_0896CC24;
    case 219u: goto L_0896CC2C;
    case 220u: goto L_0896CC3C;
    case 221u: goto L_0896CC48;
    case 222u: goto L_0896CC58;
    case 223u: goto L_0896CC60;
    case 224u: goto L_0896CC68;
    case 225u: goto L_0896CC78;
    case 226u: goto L_0896CC84;
    case 227u: goto L_0896CC8C;
    case 228u: goto L_0896CC90;
    case 229u: goto L_0896CCA4;
    case 230u: goto L_0896CCB8;
    case 231u: goto L_0896CCC4;
    case 232u: goto L_0896CCCC;
    case 233u: goto L_0896CCD8;
    case 234u: goto L_0896CCE0;
    case 235u: goto L_0896CCE4;
    case 236u: goto L_0896CCF8;
    case 237u: goto L_0896CD0C;
    case 238u: goto L_0896CD18;
    case 239u: goto L_0896CD20;
    case 240u: goto L_0896CD30;
    case 241u: goto L_0896CD3C;
    case 242u: goto L_0896CD44;
    case 243u: goto L_0896CD58;
    case 244u: goto L_0896CD60;
    case 245u: goto L_0896CD68;
    case 246u: goto L_0896CD74;
    case 247u: goto L_0896CD80;
    case 248u: goto L_0896CD88;
    case 249u: goto L_0896CD90;
    case 250u: goto L_0896CD9C;
    case 251u: goto L_0896CDA4;
    case 252u: goto L_0896CDB0;
    case 253u: goto L_0896CDB8;
    case 254u: goto L_0896CDC0;
    case 255u: goto L_0896CDCC;
    case 256u: goto L_0896CDE0;
    case 257u: goto L_0896CE08;
    case 258u: goto L_0896CE30;
    case 259u: goto L_0896CE94;
    case 260u: goto L_0896CE9C;
    case 261u: goto L_0896CEB0;
    case 262u: goto L_0896CEC0;
    case 263u: goto L_0896CED0;
    case 264u: goto L_0896CEDC;
    case 265u: goto L_0896CEEC;
    case 266u: goto L_0896CEFC;
    case 267u: goto L_0896CF14;
    case 268u: goto L_0896CF20;
    case 269u: goto L_0896CF28;
    case 270u: goto L_0896CF34;
    case 271u: goto L_0896CF70;
    case 272u: goto L_0896CF7C;
    case 273u: goto L_0896CF84;
    case 274u: goto L_0896CF94;
    case 275u: goto L_0896CFA8;
    case 276u: goto L_0896CFBC;
    case 277u: goto L_0896CFC4;
    case 278u: goto L_0896CFE8;
    case 279u: goto L_0896D010;
    case 280u: goto L_0896D020;
    case 281u: goto L_0896D040;
    case 282u: goto L_0896D050;
    case 283u: goto L_0896D058;
    case 284u: goto L_0896D060;
    case 285u: goto L_0896D068;
    case 286u: goto L_0896D084;
    case 287u: goto L_0896D0A8;
    case 288u: goto L_0896D0AC;
    case 289u: goto L_0896D0B8;
    case 290u: goto L_0896D0C4;
    case 291u: goto L_0896D0C8;
    case 292u: goto L_0896D0DC;
    case 293u: goto L_0896D0F0;
    case 294u: goto L_0896D128;
    case 295u: goto L_0896D154;
    case 296u: goto L_0896D164;
    case 297u: goto L_0896D170;
    case 298u: goto L_0896D178;
    case 299u: goto L_0896D18C;
    case 300u: goto L_0896D194;
    case 301u: goto L_0896D19C;
    case 302u: goto L_0896D1C4;
    case 303u: goto L_0896D1EC;
    case 304u: goto L_0896D1F4;
    case 305u: goto L_0896D200;
    case 306u: goto L_0896D20C;
    case 307u: goto L_0896D218;
    case 308u: goto L_0896D224;
    case 309u: goto L_0896D22C;
    case 310u: goto L_0896D230;
    case 311u: goto L_0896D238;
    case 312u: goto L_0896D240;
    case 313u: goto L_0896D264;
    case 314u: goto L_0896D274;
    case 315u: goto L_0896D27C;
    case 316u: goto L_0896D288;
    case 317u: goto L_0896D294;
    case 318u: goto L_0896D2A0;
    case 319u: goto L_0896D2AC;
    case 320u: goto L_0896D2B4;
    case 321u: goto L_0896D2B8;
    case 322u: goto L_0896D2C0;
    case 323u: goto L_0896D2C8;
    case 324u: goto L_0896D2EC;
    case 325u: goto L_0896D2FC;
    case 326u: goto L_0896D304;
    case 327u: goto L_0896D30C;
    case 328u: goto L_0896D318;
    case 329u: goto L_0896D324;
    case 330u: goto L_0896D32C;
    case 331u: goto L_0896D330;
    case 332u: goto L_0896D338;
    case 333u: goto L_0896D340;
    case 334u: goto L_0896D350;
    case 335u: goto L_0896D36C;
    case 336u: goto L_0896D3B4;
    case 337u: goto L_0896D3C0;
    case 338u: goto L_0896D3C8;
    case 339u: goto L_0896D3D4;
    case 340u: goto L_0896D3D8;
    case 341u: goto L_0896D3E8;
    case 342u: goto L_0896D418;
    case 343u: goto L_0896D450;
    case 344u: goto L_0896D488;
    case 345u: goto L_0896D494;
    case 346u: goto L_0896D49C;
    case 347u: goto L_0896D4A4;
    case 348u: goto L_0896D4BC;
    case 349u: goto L_0896D4C0;
    case 350u: goto L_0896D4C8;
    case 351u: goto L_0896D4E0;
    case 352u: goto L_0896D4E4;
    case 353u: goto L_0896D4EC;
    case 354u: goto L_0896D504;
    case 355u: goto L_0896D508;
    case 356u: goto L_0896D510;
    case 357u: goto L_0896D528;
    case 358u: goto L_0896D52C;
    case 359u: goto L_0896D534;
    case 360u: goto L_0896D53C;
    case 361u: goto L_0896D574;
    case 362u: goto L_0896D57C;
    case 363u: goto L_0896D584;
    case 364u: goto L_0896D588;
    case 365u: goto L_0896D590;
    case 366u: goto L_0896D5C4;
    case 367u: goto L_0896D5CC;
    case 368u: goto L_0896D5D0;
    case 369u: goto L_0896D5D8;
    case 370u: goto L_0896D60C;
    case 371u: goto L_0896D648;
    case 372u: goto L_0896D6A0;
    case 373u: goto L_0896D6A8;
    case 374u: goto L_0896D6B0;
    case 375u: goto L_0896D6BC;
    case 376u: goto L_0896D6F0;
    case 377u: goto L_0896D728;
    case 378u: goto L_0896D734;
    case 379u: goto L_0896D740;
    case 380u: goto L_0896D748;
    case 381u: goto L_0896D74C;
    case 382u: goto L_0896D754;
    case 383u: goto L_0896D778;
    case 384u: goto L_0896D77C;
    case 385u: goto L_0896D7A8;
    case 386u: goto L_0896D7C0;
    case 387u: goto L_0896D7C8;
    case 388u: goto L_0896D800;
    case 389u: goto L_0896D808;
    case 390u: goto L_0896D810;
    case 391u: goto L_0896D818;
    case 392u: goto L_0896D850;
    case 393u: goto L_0896D858;
    case 394u: goto L_0896D860;
    case 395u: goto L_0896D868;
    case 396u: goto L_0896D878;
    case 397u: goto L_0896D87C;
    case 398u: goto L_0896D890;
    case 399u: goto L_0896D898;
    case 400u: goto L_0896D8DC;
    case 401u: goto L_0896D8E4;
    case 402u: goto L_0896D900;
    case 403u: goto L_0896D910;
    case 404u: goto L_0896D918;
    case 405u: goto L_0896D920;
    case 406u: goto L_0896D928;
    case 407u: goto L_0896D938;
    case 408u: goto L_0896D948;
    case 409u: goto L_0896D954;
    case 410u: goto L_0896D960;
    case 411u: goto L_0896D96C;
    case 412u: goto L_0896D974;
    case 413u: goto L_0896D978;
    case 414u: goto L_0896D980;
    case 415u: goto L_0896D988;
    case 416u: goto L_0896D9AC;
    case 417u: goto L_0896D9B8;
    case 418u: goto L_0896D9D4;
    case 419u: goto L_0896D9E4;
    case 420u: goto L_0896D9FC;
    case 421u: goto L_0896DA24;
    case 422u: goto L_0896DA40;
    case 423u: goto L_0896DA4C;
    case 424u: goto L_0896DA54;
    case 425u: goto L_0896DA64;
    case 426u: goto L_0896DA80;
    case 427u: goto L_0896DA90;
    case 428u: goto L_0896DA9C;
    case 429u: goto L_0896DAA8;
    case 430u: goto L_0896DAB4;
    case 431u: goto L_0896DAC0;
    case 432u: goto L_0896DACC;
    case 433u: goto L_0896DAD8;
    case 434u: goto L_0896DAE4;
    case 435u: goto L_0896DAF0;
    case 436u: goto L_0896DAFC;
    case 437u: goto L_0896DB08;
    case 438u: goto L_0896DB14;
    case 439u: goto L_0896DB20;
    case 440u: goto L_0896DB2C;
    case 441u: goto L_0896DB38;
    case 442u: goto L_0896DB44;
    case 443u: goto L_0896DB50;
    case 444u: goto L_0896DB5C;
    case 445u: goto L_0896DB68;
    case 446u: goto L_0896DB74;
    case 447u: goto L_0896DB80;
    case 448u: goto L_0896DB8C;
    case 449u: goto L_0896DB98;
    case 450u: goto L_0896DBA4;
    case 451u: goto L_0896DBAC;
    case 452u: goto L_0896DBB4;
    case 453u: goto L_0896DBB8;
    case 454u: goto L_0896DBC0;
    case 455u: goto L_0896DBE4;
    case 456u: goto L_0896DBE8;
    case 457u: goto L_0896DC18;
    case 458u: goto L_0896DC30;
    case 459u: goto L_0896DC60;
    case 460u: goto L_0896DC68;
    case 461u: goto L_0896DC70;
    case 462u: goto L_0896DC78;
    case 463u: goto L_0896DC88;
    case 464u: goto L_0896DC8C;
    case 465u: goto L_0896DCA0;
    case 466u: goto L_0896DCC4;
    case 467u: goto L_0896DCC8;
    case 468u: goto L_0896DCF0;
    case 469u: goto L_0896DD20;
    case 470u: goto L_0896DD28;
    case 471u: goto L_0896DD30;
    case 472u: goto L_0896DD38;
    case 473u: goto L_0896DD48;
    case 474u: goto L_0896DD4C;
    case 475u: goto L_0896DD60;
    case 476u: goto L_0896DD80;
    case 477u: goto L_0896DDA4;
    case 478u: goto L_0896DDB4;
    case 479u: goto L_0896DDBC;
    case 480u: goto L_0896DDC4;
    case 481u: goto L_0896DDD4;
    case 482u: goto L_0896DDDC;
    case 483u: goto L_0896DE4C;
    case 484u: goto L_0896DE54;
    case 485u: goto L_0896DF08;
    case 486u: goto L_0896DF18;
    case 487u: goto L_0896DF24;
    case 488u: goto L_0896DF34;
    case 489u: goto L_0896DF48;
    case 490u: goto L_0896DF60;
    case 491u: goto L_0896DF84;
    case 492u: goto L_0896DFA8;
    case 493u: goto L_0896DFB0;
    case 494u: goto L_0896DFB4;
    case 495u: goto L_0896DFC0;
    case 496u: goto L_0896DFC8;
    case 497u: goto L_0896DFCC;
    case 498u: goto L_0896E03C;
    case 499u: goto L_0896E044;
    case 500u: goto L_0896E0F8;
    case 501u: goto L_0896E108;
    case 502u: goto L_0896E118;
    case 503u: goto L_0896E128;
    case 504u: goto L_0896E148;
    case 505u: goto L_0896E154;
    case 506u: goto L_0896E15C;
    case 507u: goto L_0896E164;
    case 508u: goto L_0896E16C;
    case 509u: goto L_0896E17C;
    case 510u: goto L_0896E198;
    case 511u: goto L_0896E1AC;
    case 512u: goto L_0896E1B8;
    case 513u: goto L_0896E1C8;
    case 514u: goto L_0896E1E8;
    case 515u: goto L_0896E228;
    case 516u: goto L_0896E244;
    case 517u: goto L_0896E24C;
    case 518u: goto L_0896E254;
    case 519u: goto L_0896E260;
    case 520u: goto L_0896E270;
    case 521u: goto L_0896E27C;
    case 522u: goto L_0896E298;
    case 523u: goto L_0896E2A8;
    case 524u: goto L_0896E2B0;
    case 525u: goto L_0896E2E8;
    case 526u: goto L_0896E2F0;
    case 527u: goto L_0896E2F8;
    case 528u: goto L_0896E300;
    case 529u: goto L_0896E314;
    case 530u: goto L_0896E324;
    case 531u: goto L_0896E328;
    case 532u: goto L_0896E338;
    case 533u: goto L_0896E39C;
    case 534u: goto L_0896E3AC;
    case 535u: goto L_0896E3B4;
    case 536u: goto L_0896E3BC;
    case 537u: goto L_0896E3C4;
    case 538u: goto L_0896E3CC;
    case 539u: goto L_0896E3D4;
    case 540u: goto L_0896E3DC;
    case 541u: goto L_0896E3E4;
    case 542u: goto L_0896E3EC;
    case 543u: goto L_0896E3F4;
    case 544u: goto L_0896E3FC;
    case 545u: goto L_0896E404;
    case 546u: goto L_0896E414;
    case 547u: goto L_0896E424;
    case 548u: goto L_0896E42C;
    case 549u: goto L_0896E43C;
    case 550u: goto L_0896E470;
    case 551u: goto L_0896E480;
    case 552u: goto L_0896E48C;
    case 553u: goto L_0896E498;
    case 554u: goto L_0896E4A8;
    case 555u: goto L_0896E4B0;
    case 556u: goto L_0896E4B4;
    case 557u: goto L_0896E4BC;
    case 558u: goto L_0896E4C4;
    case 559u: goto L_0896E4CC;
    case 560u: goto L_0896E4E4;
    case 561u: goto L_0896E4EC;
    case 562u: goto L_0896E4F4;
    case 563u: goto L_0896E4F8;
    case 564u: goto L_0896E500;
    case 565u: goto L_0896E518;
    case 566u: goto L_0896E524;
    case 567u: goto L_0896E53C;
    case 568u: goto L_0896E568;
    case 569u: goto L_0896E570;
    case 570u: goto L_0896E584;
    case 571u: goto L_0896E5C0;
    case 572u: goto L_0896E620;
    case 573u: goto L_0896E630;
    case 574u: goto L_0896E638;
    case 575u: goto L_0896E640;
    case 576u: goto L_0896E648;
    case 577u: goto L_0896E650;
    case 578u: goto L_0896E658;
    case 579u: goto L_0896E660;
    case 580u: goto L_0896E668;
    case 581u: goto L_0896E670;
    case 582u: goto L_0896E678;
    case 583u: goto L_0896E680;
    case 584u: goto L_0896E688;
    case 585u: goto L_0896E694;
    case 586u: goto L_0896E69C;
    case 587u: goto L_0896E6B8;
    case 588u: goto L_0896E6C0;
    case 589u: goto L_0896E6CC;
    case 590u: goto L_0896E6DC;
    case 591u: goto L_0896E710;
    case 592u: goto L_0896E744;
    case 593u: goto L_0896E74C;
    case 594u: goto L_0896E76C;
    case 595u: goto L_0896E770;
    case 596u: goto L_0896E780;
    case 597u: goto L_0896E7A4;
    case 598u: goto L_0896E7B4;
    case 599u: goto L_0896E7CC;
    case 600u: goto L_0896E7D4;
    case 601u: goto L_0896E7DC;
    case 602u: goto L_0896E7E4;
    case 603u: goto L_0896E7EC;
    case 604u: goto L_0896E7F4;
    case 605u: goto L_0896E7FC;
    case 606u: goto L_0896E804;
    case 607u: goto L_0896E80C;
    case 608u: goto L_0896E814;
    case 609u: goto L_0896E81C;
    case 610u: goto L_0896E824;
    case 611u: goto L_0896E82C;
    case 612u: goto L_0896E830;
    case 613u: goto L_0896E838;
    case 614u: goto L_0896E8C0;
    case 615u: goto L_0896E8D4;
    case 616u: goto L_0896E8E8;
    case 617u: goto L_0896E900;
    case 618u: goto L_0896E914;
    case 619u: goto L_0896E924;
    case 620u: goto L_0896E93C;
    case 621u: goto L_0896E950;
    case 622u: goto L_0896E964;
    case 623u: goto L_0896E97C;
    case 624u: goto L_0896E990;
    case 625u: goto L_0896E9A0;
    case 626u: goto L_0896EA8C;
    case 627u: goto L_0896EACC;
    case 628u: goto L_0896EAF8;
    case 629u: goto L_0896EB04;
    case 630u: goto L_0896EB0C;
    case 631u: goto L_0896EB18;
    case 632u: goto L_0896EB24;
    case 633u: goto L_0896EB64;
    case 634u: goto L_0896EB70;
    case 635u: goto L_0896EB88;
    case 636u: goto L_0896EB98;
    case 637u: goto L_0896EBA4;
    case 638u: goto L_0896EBAC;
    case 639u: goto L_0896EBB0;
    case 640u: goto L_0896EBBC;
    case 641u: goto L_0896EBCC;
    case 642u: goto L_0896EBD0;
    case 643u: goto L_0896EBD8;
    case 644u: goto L_0896EBE0;
    case 645u: goto L_0896EBEC;
    case 646u: goto L_0896EC2C;
    case 647u: goto L_0896EC38;
    case 648u: goto L_0896EC50;
    case 649u: goto L_0896EC60;
    case 650u: goto L_0896EC6C;
    case 651u: goto L_0896EC74;
    case 652u: goto L_0896EC78;
    case 653u: goto L_0896EC84;
    case 654u: goto L_0896EC94;
    case 655u: goto L_0896EC98;
    case 656u: goto L_0896ECA0;
    case 657u: goto L_0896ECA8;
    case 658u: goto L_0896ECB8;
    case 659u: goto L_0896ECD4;
    case 660u: goto L_0896ED38;
    case 661u: goto L_0896ED5C;
    case 662u: goto L_0896ED70;
    case 663u: goto L_0896ED7C;
    case 664u: goto L_0896EDA4;
    case 665u: goto L_0896EDB8;
    case 666u: goto L_0896EDBC;
    case 667u: goto L_0896EE00;
    case 668u: goto L_0896EE14;
    case 669u: goto L_0896EE1C;
    case 670u: goto L_0896EE24;
    case 671u: goto L_0896EE68;
    case 672u: goto L_0896EE74;
    case 673u: goto L_0896EE80;
    case 674u: goto L_0896EE94;
    case 675u: goto L_0896EE98;
    case 676u: goto L_0896EEC4;
    case 677u: goto L_0896EF20;
    case 678u: goto L_0896EF34;
    case 679u: goto L_0896EF3C;
    case 680u: goto L_0896EF44;
    case 681u: goto L_0896EF90;
    case 682u: goto L_0896EF9C;
    case 683u: goto L_0896EFA8;
    case 684u: goto L_0896EFBC;
    case 685u: goto L_0896EFC0;
    case 686u: goto L_0896EFEC;
    case 687u: goto L_0896F048;
    case 688u: goto L_0896F05C;
    case 689u: goto L_0896F064;
    case 690u: goto L_0896F078;
    case 691u: goto L_0896F0A8;
    case 692u: goto L_0896F0B0;
    case 693u: goto L_0896F0B8;
    case 694u: goto L_0896F118;
    case 695u: goto L_0896F130;
    case 696u: goto L_0896F148;
    case 697u: goto L_0896F15C;
    case 698u: goto L_0896F168;
    case 699u: goto L_0896F174;
    case 700u: goto L_0896F1AC;
    case 701u: goto L_0896F1C0;
    case 702u: goto L_0896F208;
    case 703u: goto L_0896F214;
    case 704u: goto L_0896F21C;
    case 705u: goto L_0896F260;
    case 706u: goto L_0896F2AC;
    case 707u: goto L_0896F2BC;
    case 708u: goto L_0896F2E0;
    case 709u: goto L_0896F2E8;
    case 710u: goto L_0896F308;
    case 711u: goto L_0896F310;
    case 712u: goto L_0896F318;
    case 713u: goto L_0896F320;
    case 714u: goto L_0896F32C;
    case 715u: goto L_0896F340;
    case 716u: goto L_0896F358;
    case 717u: goto L_0896F360;
    case 718u: goto L_0896F370;
    case 719u: goto L_0896F388;
    case 720u: goto L_0896F394;
    case 721u: goto L_0896F39C;
    case 722u: goto L_0896F3A4;
    case 723u: goto L_0896F3AC;
    case 724u: goto L_0896F3B0;
    case 725u: goto L_0896F3C4;
    case 726u: goto L_0896F3E4;
    case 727u: goto L_0896F408;
    case 728u: goto L_0896F414;
    case 729u: goto L_0896F434;
    case 730u: goto L_0896F440;
    case 731u: goto L_0896F458;
    case 732u: goto L_0896F470;
    case 733u: goto L_0896F47C;
    case 734u: goto L_0896F4A0;
    case 735u: goto L_0896F4A4;
    case 736u: goto L_0896F4CC;
    case 737u: goto L_0896F4E8;
    case 738u: goto L_0896F4EC;
    case 739u: goto L_0896F514;
    case 740u: goto L_0896F53C;
    case 741u: goto L_0896F54C;
    case 742u: goto L_0896F560;
    case 743u: goto L_0896F56C;
    case 744u: goto L_0896F574;
    case 745u: goto L_0896F580;
    case 746u: goto L_0896F588;
    case 747u: goto L_0896F590;
    case 748u: goto L_0896F594;
    case 749u: goto L_0896F5A4;
    case 750u: goto L_0896F5E8;
    case 751u: goto L_0896F618;
    case 752u: goto L_0896F62C;
    case 753u: goto L_0896F64C;
    case 754u: goto L_0896F660;
    case 755u: goto L_0896F678;
    case 756u: goto L_0896F68C;
    case 757u: goto L_0896F698;
    case 758u: goto L_0896F6AC;
    case 759u: goto L_0896F6B4;
    case 760u: goto L_0896F6C4;
    case 761u: goto L_0896F6D8;
    case 762u: goto L_0896F6E0;
    case 763u: goto L_0896F6F0;
    case 764u: goto L_0896F704;
    case 765u: goto L_0896F70C;
    case 766u: goto L_0896F71C;
    case 767u: goto L_0896F728;
    case 768u: goto L_0896F730;
    case 769u: goto L_0896F740;
    case 770u: goto L_0896F754;
    case 771u: goto L_0896F760;
    case 772u: goto L_0896F768;
    case 773u: goto L_0896F774;
    case 774u: goto L_0896F77C;
    case 775u: goto L_0896F784;
    case 776u: goto L_0896F78C;
    case 777u: goto L_0896F798;
    case 778u: goto L_0896F7A0;
    case 779u: goto L_0896F7B0;
    case 780u: goto L_0896F7C4;
    case 781u: goto L_0896F7D0;
    case 782u: goto L_0896F7D8;
    case 783u: goto L_0896F7EC;
    case 784u: goto L_0896F7F4;
    case 785u: goto L_0896F808;
    case 786u: goto L_0896F810;
    case 787u: goto L_0896F824;
    case 788u: goto L_0896F82C;
    case 789u: goto L_0896F868;
    case 790u: goto L_0896F874;
    case 791u: goto L_0896F880;
    case 792u: goto L_0896F888;
    case 793u: goto L_0896F890;
    case 794u: goto L_0896F898;
    case 795u: goto L_0896F8A0;
    case 796u: goto L_0896F8A8;
    case 797u: goto L_0896F8B0;
    case 798u: goto L_0896F8B8;
    case 799u: goto L_0896F8C0;
    case 800u: goto L_0896F8C8;
    case 801u: goto L_0896F8D0;
    case 802u: goto L_0896F8D8;
    case 803u: goto L_0896F8E4;
    case 804u: goto L_0896F8F0;
    case 805u: goto L_0896F8F8;
    case 806u: goto L_0896F900;
    case 807u: goto L_0896F908;
    case 808u: goto L_0896F910;
    case 809u: goto L_0896F918;
    case 810u: goto L_0896F920;
    case 811u: goto L_0896F928;
    case 812u: goto L_0896F930;
    case 813u: goto L_0896F934;
    case 814u: goto L_0896F93C;
    case 815u: goto L_0896F990;
    case 816u: goto L_0896F99C;
    case 817u: goto L_0896F9B0;
    case 818u: goto L_0896F9C0;
    case 819u: goto L_0896F9C8;
    case 820u: goto L_0896F9DC;
    case 821u: goto L_0896F9FC;
    case 822u: goto L_0896FA0C;
    case 823u: goto L_0896FA24;
    case 824u: goto L_0896FA34;
    case 825u: goto L_0896FA48;
    case 826u: goto L_0896FA60;
    case 827u: goto L_0896FA80;
    case 828u: goto L_0896FA88;
    case 829u: goto L_0896FA98;
    case 830u: goto L_0896FAB0;
    case 831u: goto L_0896FAC0;
    case 832u: goto L_0896FAD4;
    case 833u: goto L_0896FAE4;
    case 834u: goto L_0896FAFC;
    case 835u: goto L_0896FB0C;
    case 836u: goto L_0896FB10;
    case 837u: goto L_0896FB28;
    case 838u: goto L_0896FB38;
    case 839u: goto L_0896FB44;
    case 840u: goto L_0896FB54;
    case 841u: goto L_0896FB60;
    case 842u: goto L_0896FB68;
    case 843u: goto L_0896FB6C;
    case 844u: goto L_0896FB74;
    case 845u: goto L_0896FBAC;
    case 846u: goto L_0896FBBC;
    case 847u: goto L_0896FBCC;
    case 848u: goto L_0896FBD8;
    case 849u: goto L_0896FBE4;
    case 850u: goto L_0896FBEC;
    case 851u: goto L_0896FBF0;
    case 852u: goto L_0896FBF8;
    case 853u: goto L_0896FC58;
    case 854u: goto L_0896FC70;
    case 855u: goto L_0896FC7C;
    case 856u: goto L_0896FCF4;
    case 857u: goto L_0896FD6C;
    case 858u: goto L_0896FD74;
    case 859u: goto L_0896FD94;
    case 860u: goto L_0896FDA0;
    case 861u: goto L_0896FDB0;
    case 862u: goto L_0896FDB8;
    case 863u: goto L_0896FDC0;
    case 864u: goto L_0896FDC8;
    case 865u: goto L_0896FDD0;
    case 866u: goto L_0896FDD8;
    case 867u: goto L_0896FE08;
    case 868u: goto L_0896FE20;
    case 869u: goto L_0896FE2C;
    case 870u: goto L_0896FE38;
    case 871u: goto L_0896FE44;
    case 872u: goto L_0896FE50;
    case 873u: goto L_0896FE58;
    case 874u: goto L_0896FE64;
    case 875u: goto L_0896FE7C;
    case 876u: goto L_0896FE94;
    case 877u: goto L_0896FEA4;
    case 878u: goto L_0896FEBC;
    case 879u: goto L_0896FEC8;
    case 880u: goto L_0896FED4;
    case 881u: goto L_0896FEE0;
    case 882u: goto L_0896FEEC;
    case 883u: goto L_0896FEF4;
    case 884u: goto L_0896FF00;
    case 885u: goto L_0896FF18;
    case 886u: goto L_0896FF30;
    case 887u: goto L_0896FF40;
    case 888u: goto L_0896FF5C;
    case 889u: goto L_0896FF94;
    case 890u: goto L_0896FFA8;
    case 891u: goto L_0896FFAC;
    case 892u: goto L_0896FFDC;
    case 893u: goto L_0896FFE4;
    case 894u: goto L_0896FFEC;
    case 895u: goto L_0896FFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0896C000:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896C020u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x0896C020u) goto L_0896C020;
    return;
L_0896C020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C034;
      }
      goto L_0896C028;
    }
L_0896C028:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1288)));
    ctx.gpr[31] = (0x0896C034u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem) && ctx.pc == 0x0896C034u) goto L_0896C034;
    return;
L_0896C034:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x0896C048u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x0896C048u) goto L_0896C048;
    return;
L_0896C048:
    ctx.gpr[31] = (0x0896C050u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x0896C050u) goto L_0896C050;
    return;
L_0896C050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1540)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C154;
      }
      goto L_0896C05C;
    }
L_0896C05C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17345)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C080;
      }
      goto L_0896C070;
    }
L_0896C070:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(404));
    ctx.gpr[31] = (0x0896C080u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 336u, 0x08969998u>(ctx, &aot_mem) && ctx.pc == 0x0896C080u) goto L_0896C080;
    return;
L_0896C080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1540)));
      if (branch_taken) {
          goto L_0896C0A4;
      }
      goto L_0896C08C;
    }
L_0896C08C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896C0A8;
      }
      goto L_0896C09C;
    }
L_0896C09C:
    ctx.gpr[31] = (0x0896C0A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x0896C0A4u) goto L_0896C0A4;
    return;
L_0896C0A4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_0896C0A8;
L_0896C0A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[31] = (0x0896C0C0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x0896C0C0u) goto L_0896C0C0;
    return;
L_0896C0C0:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1516)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896C124u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem) && ctx.pc == 0x0896C124u) goto L_0896C124;
    return;
L_0896C124:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1516)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1592)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[31] = (0x0896C138u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C138u) goto L_0896C138;
    return;
L_0896C138:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x0896C14Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x0896C14Cu) goto L_0896C14C;
    return;
L_0896C14C:
    ctx.gpr[31] = (0x0896C154u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x0896C154u) goto L_0896C154;
    return;
L_0896C154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1564)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C1D8;
      }
      goto L_0896C160;
    }
L_0896C160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1564)));
      if (branch_taken) {
          goto L_0896C184;
      }
      goto L_0896C16C;
    }
L_0896C16C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896C188;
      }
      goto L_0896C17C;
    }
L_0896C17C:
    ctx.gpr[31] = (0x0896C184u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x0896C184u) goto L_0896C184;
    return;
L_0896C184:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_0896C188;
L_0896C188:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[31] = (0x0896C1A0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x0896C1A0u) goto L_0896C1A0;
    return;
L_0896C1A0:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1596)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0896C1BCu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x0896C1BCu) goto L_0896C1BC;
    return;
L_0896C1BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x0896C1D0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x0896C1D0u) goto L_0896C1D0;
    return;
L_0896C1D0:
    ctx.gpr[31] = (0x0896C1D8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x0896C1D8u) goto L_0896C1D8;
    return;
L_0896C1D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1568)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C25C;
      }
      goto L_0896C1E4;
    }
L_0896C1E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1568)));
      if (branch_taken) {
          goto L_0896C208;
      }
      goto L_0896C1F0;
    }
L_0896C1F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896C20C;
      }
      goto L_0896C200;
    }
L_0896C200:
    ctx.gpr[31] = (0x0896C208u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x0896C208u) goto L_0896C208;
    return;
L_0896C208:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_0896C20C;
L_0896C20C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[31] = (0x0896C224u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x0896C224u) goto L_0896C224;
    return;
L_0896C224:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1600)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0896C240u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x0896C240u) goto L_0896C240;
    return;
L_0896C240:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x0896C254u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x0896C254u) goto L_0896C254;
    return;
L_0896C254:
    ctx.gpr[31] = (0x0896C25Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x0896C25Cu) goto L_0896C25C;
    return;
L_0896C25C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1572)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_0896C2E4;
    }
    goto L_0896C268;
L_0896C268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1572)));
      if (branch_taken) {
          goto L_0896C28C;
      }
      goto L_0896C274;
    }
L_0896C274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0896C290;
      }
      goto L_0896C284;
    }
L_0896C284:
    ctx.gpr[31] = (0x0896C28Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x0896C28Cu) goto L_0896C28C;
    return;
L_0896C28C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_0896C290;
L_0896C290:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[31] = (0x0896C2A8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x0896C2A8u) goto L_0896C2A8;
    return;
L_0896C2A8:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1604)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0896C2C4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x0896C2C4u) goto L_0896C2C4;
    return;
L_0896C2C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x0896C2D8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x0896C2D8u) goto L_0896C2D8;
    return;
L_0896C2D8:
    ctx.gpr[31] = (0x0896C2E0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x0896C2E0u) goto L_0896C2E0;
    return;
L_0896C2E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_0896C2E4;
L_0896C2E4:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C304;
      }
      goto L_0896C2F0;
    }
L_0896C2F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C304;
      }
      goto L_0896C2FC;
    }
L_0896C2FC:
    ctx.gpr[31] = (0x0896C304u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x0896C304u) goto L_0896C304;
    return;
L_0896C304:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C344:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 496u);
    ctx.gpr[8] = (0u | 64u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0896C740;
      }
      goto L_0896C388;
    }
L_0896C388:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C454;
      }
      goto L_0896C394;
    }
L_0896C394:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(620))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0896C454;
      }
      goto L_0896C3A0;
    }
L_0896C3A0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (2203u << 16u);
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-21176));
      if (branch_taken) {
          goto L_0896C3F0;
      }
      goto L_0896C3B4;
    }
L_0896C3B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0896C3CC;
    }
    goto L_0896C3C0;
L_0896C3C0:
    ctx.gpr[31] = (0x0896C3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0896C3C8u) goto L_0896C3C8;
    return;
L_0896C3C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0896C3CC;
L_0896C3CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0896C3DCu);
    ctx.gpr[7] = (0u | 118u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x0896C3DCu) goto L_0896C3DC;
    return;
L_0896C3DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896C3E8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x0896C3E8u) goto L_0896C3E8;
    return;
L_0896C3E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C424;
      }
      goto L_0896C3F0;
    }
L_0896C3F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0896C408;
    }
    goto L_0896C3FC;
L_0896C3FC:
    ctx.gpr[31] = (0x0896C404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0896C404u) goto L_0896C404;
    return;
L_0896C404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0896C408;
L_0896C408:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0896C418u);
    ctx.gpr[7] = (0u | 119u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x0896C418u) goto L_0896C418;
    return;
L_0896C418:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896C424u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x0896C424u) goto L_0896C424;
    return;
L_0896C424:
    ctx.gpr[31] = (0x0896C42Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0896C42Cu) goto L_0896C42C;
    return;
L_0896C42C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896C43Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0896C43Cu) goto L_0896C43C;
    return;
L_0896C43C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(615))))));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896CD3C;
      }
      goto L_0896C454;
    }
L_0896C454:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896C4CC;
      }
      goto L_0896C464;
    }
L_0896C464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[20] = (2203u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(13856));
      if (branch_taken) {
          goto L_0896C47C;
      }
      goto L_0896C474;
    }
L_0896C474:
    ctx.gpr[31] = (0x0896C47Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0896C47Cu) goto L_0896C47C;
    return;
L_0896C47C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (16576u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1508)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[31] = (0x0896C498u);
    ctx.gpr[7] = (0u | 196u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem) && ctx.pc == 0x0896C498u) goto L_0896C498;
    return;
L_0896C498:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896C4A4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x0896C4A4u) goto L_0896C4A4;
    return;
L_0896C4A4:
    ctx.gpr[31] = (0x0896C4ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0896C4ACu) goto L_0896C4AC;
    return;
L_0896C4AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0896C4BCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0896C4BCu) goto L_0896C4BC;
    return;
L_0896C4BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896CD3C;
      }
      goto L_0896C4CC;
    }
L_0896C4CC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_0896C5FC;
      }
      goto L_0896C4EC;
    }
L_0896C4EC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (48896u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0896C5FC;
      }
      goto L_0896C508;
    }
L_0896C508:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896C5FC;
      }
      goto L_0896C51C;
    }
L_0896C51C:
    ctx.gpr[20] = (2203u << 16u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(13856));
      if (branch_taken) {
          goto L_0896C534;
      }
      goto L_0896C528;
    }
L_0896C528:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896C588;
      }
      goto L_0896C534;
    }
L_0896C534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0896C54C;
    }
    goto L_0896C540;
L_0896C540:
    ctx.gpr[31] = (0x0896C548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0896C548u) goto L_0896C548;
    return;
L_0896C548:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0896C54C;
L_0896C54C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1508)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896C560u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 294u, 0x08A59500u>(ctx, &aot_mem) && ctx.pc == 0x0896C560u) goto L_0896C560;
    return;
L_0896C560:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896C574u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x0896C574u) goto L_0896C574;
    return;
L_0896C574:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896C580u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x0896C580u) goto L_0896C580;
    return;
L_0896C580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C5D4;
      }
      goto L_0896C588;
    }
L_0896C588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0896C5A0;
    }
    goto L_0896C594;
L_0896C594:
    ctx.gpr[31] = (0x0896C59Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0896C59Cu) goto L_0896C59C;
    return;
L_0896C59C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0896C5A0;
L_0896C5A0:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1508)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896C5B4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 294u, 0x08A59500u>(ctx, &aot_mem) && ctx.pc == 0x0896C5B4u) goto L_0896C5B4;
    return;
L_0896C5B4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896C5C8u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x0896C5C8u) goto L_0896C5C8;
    return;
L_0896C5C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896C5D4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x0896C5D4u) goto L_0896C5D4;
    return;
L_0896C5D4:
    ctx.gpr[31] = (0x0896C5DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0896C5DCu) goto L_0896C5DC;
    return;
L_0896C5DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0896C5ECu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0896C5ECu) goto L_0896C5EC;
    return;
L_0896C5EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896CD3C;
      }
      goto L_0896C5FC;
    }
L_0896C5FC:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_0896C60C;
      }
      goto L_0896C604;
    }
L_0896C604:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896C698;
      }
      goto L_0896C60C;
    }
L_0896C60C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896C65C;
      }
      goto L_0896C620;
    }
L_0896C620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0896C638;
    }
    goto L_0896C62C;
L_0896C62C:
    ctx.gpr[31] = (0x0896C634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0896C634u) goto L_0896C634;
    return;
L_0896C634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0896C638;
L_0896C638:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0896C648u);
    ctx.gpr[7] = (0u | 114u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x0896C648u) goto L_0896C648;
    return;
L_0896C648:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896C654u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x0896C654u) goto L_0896C654;
    return;
L_0896C654:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C71C;
      }
      goto L_0896C65C;
    }
L_0896C65C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0896C674;
    }
    goto L_0896C668;
L_0896C668:
    ctx.gpr[31] = (0x0896C670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0896C670u) goto L_0896C670;
    return;
L_0896C670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0896C674;
L_0896C674:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0896C684u);
    ctx.gpr[7] = (0u | 116u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x0896C684u) goto L_0896C684;
    return;
L_0896C684:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896C690u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x0896C690u) goto L_0896C690;
    return;
L_0896C690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C71C;
      }
      goto L_0896C698;
    }
L_0896C698:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896C6E8;
      }
      goto L_0896C6AC;
    }
L_0896C6AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0896C6C4;
    }
    goto L_0896C6B8;
L_0896C6B8:
    ctx.gpr[31] = (0x0896C6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0896C6C0u) goto L_0896C6C0;
    return;
L_0896C6C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0896C6C4;
L_0896C6C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0896C6D4u);
    ctx.gpr[7] = (0u | 115u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x0896C6D4u) goto L_0896C6D4;
    return;
L_0896C6D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896C6E0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x0896C6E0u) goto L_0896C6E0;
    return;
L_0896C6E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C71C;
      }
      goto L_0896C6E8;
    }
L_0896C6E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0896C700;
    }
    goto L_0896C6F4;
L_0896C6F4:
    ctx.gpr[31] = (0x0896C6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0896C6FCu) goto L_0896C6FC;
    return;
L_0896C6FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0896C700;
L_0896C700:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0896C710u);
    ctx.gpr[7] = (0u | 117u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x0896C710u) goto L_0896C710;
    return;
L_0896C710:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896C71Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x0896C71Cu) goto L_0896C71C;
    return;
L_0896C71C:
    ctx.gpr[31] = (0x0896C724u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0896C724u) goto L_0896C724;
    return;
L_0896C724:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896C738u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12000));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0896C738u) goto L_0896C738;
    return;
L_0896C738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CD3C;
      }
      goto L_0896C740;
    }
L_0896C740:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896C854;
      }
      goto L_0896C750;
    }
L_0896C750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C7EC;
      }
      goto L_0896C75C;
    }
L_0896C75C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896C7DC;
      }
      goto L_0896C774;
    }
L_0896C774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C7DC;
      }
      goto L_0896C78C;
    }
L_0896C78C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[20] = (2203u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(13856));
      if (branch_taken) {
          goto L_0896C7A4;
      }
      goto L_0896C79C;
    }
L_0896C79C:
    ctx.gpr[31] = (0x0896C7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0896C7A4u) goto L_0896C7A4;
    return;
L_0896C7A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (16576u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1508)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[31] = (0x0896C7C0u);
    ctx.gpr[7] = (0u | 196u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem) && ctx.pc == 0x0896C7C0u) goto L_0896C7C0;
    return;
L_0896C7C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(780), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0896C7D4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0896C7D4u) goto L_0896C7D4;
    return;
L_0896C7D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
      if (branch_taken) {
          goto L_0896CD30;
      }
      goto L_0896C7DC;
    }
L_0896C7DC:
    ctx.gpr[31] = (0x0896C7E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x0896C7E4u) goto L_0896C7E4;
    return;
L_0896C7E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CD30;
      }
      goto L_0896C7EC;
    }
L_0896C7EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[20] = (2203u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(13856));
      if (branch_taken) {
          goto L_0896C804;
      }
      goto L_0896C7FC;
    }
L_0896C7FC:
    ctx.gpr[31] = (0x0896C804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0896C804u) goto L_0896C804;
    return;
L_0896C804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (16576u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1508)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[31] = (0x0896C820u);
    ctx.gpr[7] = (0u | 196u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem) && ctx.pc == 0x0896C820u) goto L_0896C820;
    return;
L_0896C820:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896C82Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x0896C82Cu) goto L_0896C82C;
    return;
L_0896C82C:
    ctx.gpr[31] = (0x0896C834u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0896C834u) goto L_0896C834;
    return;
L_0896C834:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0896C844u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0896C844u) goto L_0896C844;
    return;
L_0896C844:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896CD30;
      }
      goto L_0896C854;
    }
L_0896C854:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_0896C868;
      }
      goto L_0896C860;
    }
L_0896C860:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896CABC;
      }
      goto L_0896C868;
    }
L_0896C868:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C9F0;
      }
      goto L_0896C874;
    }
L_0896C874:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (15948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896C908;
      }
      goto L_0896C8A8;
    }
L_0896C8A8:
    ctx.gpr[31] = (0x0896C8B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x0896C8B0u) goto L_0896C8B0;
    return;
L_0896C8B0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896C8D0;
      }
      goto L_0896C8C0;
    }
L_0896C8C0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896C8EC;
      }
      goto L_0896C8D0;
    }
L_0896C8D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[6] = (0u | 31u);
    ctx.gpr[31] = (0x0896C8E4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem) && ctx.pc == 0x0896C8E4u) goto L_0896C8E4;
    return;
L_0896C8E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C900;
      }
      goto L_0896C8EC;
    }
L_0896C8EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[6] = (0u | 29u);
    ctx.gpr[31] = (0x0896C900u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem) && ctx.pc == 0x0896C900u) goto L_0896C900;
    return;
L_0896C900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CDE0;
      }
      goto L_0896C908;
    }
L_0896C908:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[6] = (0u | 55u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2228));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896C9E0;
      }
      goto L_0896C920;
    }
L_0896C920:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C9E0;
      }
      goto L_0896C938;
    }
L_0896C938:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (2203u << 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-21176));
      if (branch_taken) {
          goto L_0896C984;
      }
      goto L_0896C948;
    }
L_0896C948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0896C960;
    }
    goto L_0896C954;
L_0896C954:
    ctx.gpr[31] = (0x0896C95Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0896C95Cu) goto L_0896C95C;
    return;
L_0896C95C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0896C960;
L_0896C960:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0896C970u);
    ctx.gpr[7] = (0u | 118u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x0896C970u) goto L_0896C970;
    return;
L_0896C970:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896C97Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x0896C97Cu) goto L_0896C97C;
    return;
L_0896C97C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C9B8;
      }
      goto L_0896C984;
    }
L_0896C984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0896C99C;
    }
    goto L_0896C990;
L_0896C990:
    ctx.gpr[31] = (0x0896C998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0896C998u) goto L_0896C998;
    return;
L_0896C998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0896C99C;
L_0896C99C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0896C9ACu);
    ctx.gpr[7] = (0u | 119u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x0896C9ACu) goto L_0896C9AC;
    return;
L_0896C9AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896C9B8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x0896C9B8u) goto L_0896C9B8;
    return;
L_0896C9B8:
    ctx.gpr[31] = (0x0896C9C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0896C9C0u) goto L_0896C9C0;
    return;
L_0896C9C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896C9D0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0896C9D0u) goto L_0896C9D0;
    return;
L_0896C9D0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896CD30;
      }
      goto L_0896C9E0;
    }
L_0896C9E0:
    ctx.gpr[31] = (0x0896C9E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x0896C9E8u) goto L_0896C9E8;
    return;
L_0896C9E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CD30;
      }
      goto L_0896C9F0;
    }
L_0896C9F0:
    ctx.gpr[20] = (2203u << 16u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(13856));
      if (branch_taken) {
          goto L_0896CA50;
      }
      goto L_0896C9FC;
    }
L_0896C9FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0896CA14;
    }
    goto L_0896CA08;
L_0896CA08:
    ctx.gpr[31] = (0x0896CA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0896CA10u) goto L_0896CA10;
    return;
L_0896CA10:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0896CA14;
L_0896CA14:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1508)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896CA28u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 294u, 0x08A59500u>(ctx, &aot_mem) && ctx.pc == 0x0896CA28u) goto L_0896CA28;
    return;
L_0896CA28:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896CA3Cu);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x0896CA3Cu) goto L_0896CA3C;
    return;
L_0896CA3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896CA48u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x0896CA48u) goto L_0896CA48;
    return;
L_0896CA48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CA9C;
      }
      goto L_0896CA50;
    }
L_0896CA50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0896CA68;
    }
    goto L_0896CA5C;
L_0896CA5C:
    ctx.gpr[31] = (0x0896CA64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0896CA64u) goto L_0896CA64;
    return;
L_0896CA64:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0896CA68;
L_0896CA68:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1508)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896CA7Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 294u, 0x08A59500u>(ctx, &aot_mem) && ctx.pc == 0x0896CA7Cu) goto L_0896CA7C;
    return;
L_0896CA7C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896CA90u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x0896CA90u) goto L_0896CA90;
    return;
L_0896CA90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896CA9Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x0896CA9Cu) goto L_0896CA9C;
    return;
L_0896CA9C:
    ctx.gpr[31] = (0x0896CAA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0896CAA4u) goto L_0896CAA4;
    return;
L_0896CAA4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0896CAB4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0896CAB4u) goto L_0896CAB4;
    return;
L_0896CAB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CD30;
      }
      goto L_0896CABC;
    }
L_0896CABC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896CAC8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CAC8u) goto L_0896CAC8;
    return;
L_0896CAC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CC68;
      }
      goto L_0896CAD0;
    }
L_0896CAD0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
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
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896CB64;
      }
      goto L_0896CB04;
    }
L_0896CB04:
    ctx.gpr[31] = (0x0896CB0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x0896CB0Cu) goto L_0896CB0C;
    return;
L_0896CB0C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896CB2C;
      }
      goto L_0896CB1C;
    }
L_0896CB1C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896CB48;
      }
      goto L_0896CB2C;
    }
L_0896CB2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[6] = (0u | 31u);
    ctx.gpr[31] = (0x0896CB40u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem) && ctx.pc == 0x0896CB40u) goto L_0896CB40;
    return;
L_0896CB40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CB5C;
      }
      goto L_0896CB48;
    }
L_0896CB48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[6] = (0u | 29u);
    ctx.gpr[31] = (0x0896CB5Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem) && ctx.pc == 0x0896CB5Cu) goto L_0896CB5C;
    return;
L_0896CB5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CDE0;
      }
      goto L_0896CB64;
    }
L_0896CB64:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896CB70u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CB70u) goto L_0896CB70;
    return;
L_0896CB70:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0896CC58;
      }
      goto L_0896CB84;
    }
L_0896CB84:
    ctx.gpr[31] = (0x0896CB8Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CB8Cu) goto L_0896CB8C;
    return;
L_0896CB8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896CC58;
      }
      goto L_0896CBA0;
    }
L_0896CBA0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (2203u << 16u);
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-21176));
      if (branch_taken) {
          goto L_0896CBF0;
      }
      goto L_0896CBB4;
    }
L_0896CBB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0896CBCC;
    }
    goto L_0896CBC0;
L_0896CBC0:
    ctx.gpr[31] = (0x0896CBC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0896CBC8u) goto L_0896CBC8;
    return;
L_0896CBC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0896CBCC;
L_0896CBCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0896CBDCu);
    ctx.gpr[7] = (0u | 118u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x0896CBDCu) goto L_0896CBDC;
    return;
L_0896CBDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896CBE8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x0896CBE8u) goto L_0896CBE8;
    return;
L_0896CBE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CC24;
      }
      goto L_0896CBF0;
    }
L_0896CBF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0896CC08;
    }
    goto L_0896CBFC;
L_0896CBFC:
    ctx.gpr[31] = (0x0896CC04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0896CC04u) goto L_0896CC04;
    return;
L_0896CC04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0896CC08;
L_0896CC08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0896CC18u);
    ctx.gpr[7] = (0u | 119u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x0896CC18u) goto L_0896CC18;
    return;
L_0896CC18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896CC24u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x0896CC24u) goto L_0896CC24;
    return;
L_0896CC24:
    ctx.gpr[31] = (0x0896CC2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0896CC2Cu) goto L_0896CC2C;
    return;
L_0896CC2C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896CC3Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0896CC3Cu) goto L_0896CC3C;
    return;
L_0896CC3C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896CC48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CC48u) goto L_0896CC48;
    return;
L_0896CC48:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896CD30;
      }
      goto L_0896CC58;
    }
L_0896CC58:
    ctx.gpr[31] = (0x0896CC60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x0896CC60u) goto L_0896CC60;
    return;
L_0896CC60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CD30;
      }
      goto L_0896CC68;
    }
L_0896CC68:
    ctx.gpr[20] = (2203u << 16u);
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(13856));
      if (branch_taken) {
          goto L_0896CCCC;
      }
      goto L_0896CC78;
    }
L_0896CC78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0896CC90;
    }
    goto L_0896CC84;
L_0896CC84:
    ctx.gpr[31] = (0x0896CC8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0896CC8Cu) goto L_0896CC8C;
    return;
L_0896CC8C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0896CC90;
L_0896CC90:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1508)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896CCA4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 294u, 0x08A59500u>(ctx, &aot_mem) && ctx.pc == 0x0896CCA4u) goto L_0896CCA4;
    return;
L_0896CCA4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896CCB8u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x0896CCB8u) goto L_0896CCB8;
    return;
L_0896CCB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896CCC4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x0896CCC4u) goto L_0896CCC4;
    return;
L_0896CCC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CD18;
      }
      goto L_0896CCCC;
    }
L_0896CCCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_0896CCE4;
    }
    goto L_0896CCD8;
L_0896CCD8:
    ctx.gpr[31] = (0x0896CCE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0896CCE0u) goto L_0896CCE0;
    return;
L_0896CCE0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0896CCE4;
L_0896CCE4:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1508)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896CCF8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 294u, 0x08A59500u>(ctx, &aot_mem) && ctx.pc == 0x0896CCF8u) goto L_0896CCF8;
    return;
L_0896CCF8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896CD0Cu);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x0896CD0Cu) goto L_0896CD0C;
    return;
L_0896CD0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896CD18u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x0896CD18u) goto L_0896CD18;
    return;
L_0896CD18:
    ctx.gpr[31] = (0x0896CD20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0896CD20u) goto L_0896CD20;
    return;
L_0896CD20:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0896CD30u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0896CD30u) goto L_0896CD30;
    return;
L_0896CD30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0896CD3C;
L_0896CD3C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CDE0;
      }
      goto L_0896CD44;
    }
L_0896CD44:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896CD58u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 567u, 0x089AE4F4u>(ctx, &aot_mem) && ctx.pc == 0x0896CD58u) goto L_0896CD58;
    return;
L_0896CD58:
    ctx.gpr[31] = (0x0896CD60u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CD60u) goto L_0896CD60;
    return;
L_0896CD60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[19] = (0u | 6u);
      if (branch_taken) {
          goto L_0896CD74;
      }
      goto L_0896CD68;
    }
L_0896CD68:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0896CD74u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 119u, 0x089B4624u>(ctx, &aot_mem) && ctx.pc == 0x0896CD74u) goto L_0896CD74;
    return;
L_0896CD74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0896CDA4;
      }
      goto L_0896CD80;
    }
L_0896CD80:
    ctx.gpr[31] = (0x0896CD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0896CD88u) goto L_0896CD88;
    return;
L_0896CD88:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896CDA4;
      }
      goto L_0896CD90;
    }
L_0896CD90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0896CDA4;
      }
      goto L_0896CD9C;
    }
L_0896CD9C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2301), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0896CDA4;
L_0896CDA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0896CDE0;
      }
      goto L_0896CDB0;
    }
L_0896CDB0:
    ctx.gpr[31] = (0x0896CDB8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CDB8u) goto L_0896CDB8;
    return;
L_0896CDB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CDE0;
      }
      goto L_0896CDC0;
    }
L_0896CDC0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896CDCCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CDCCu) goto L_0896CDCC;
    return;
L_0896CDCC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 11u);
    ctx.gpr[31] = (0x0896CDE0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 567u, 0x089AE4F4u>(ctx, &aot_mem) && ctx.pc == 0x0896CDE0u) goto L_0896CDE0;
    return;
L_0896CDE0:
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
L_0896CE08:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896CE30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17328), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17336), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17340), 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17331), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17330), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17324), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17320), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17316), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17312), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17308), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17304), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17300), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17296), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17292), 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2247u << 16u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17332), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14768));
    goto L_0896CE94;
L_0896CE94:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_0896CE9C;
L_0896CE9C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_0896CE9C;
      }
      goto L_0896CEB0;
    }
L_0896CEB0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0896CE94;
      }
      goto L_0896CEC0;
    }
L_0896CEC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x0896CED0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 497u, 0x08A05F1Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CED0u) goto L_0896CED0;
    return;
L_0896CED0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0896CEEC;
      }
      goto L_0896CEDC;
    }
L_0896CEDC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896CEECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 501u, 0x08A05F5Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CEECu) goto L_0896CEEC;
    return;
L_0896CEEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896CEFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17328), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0896CF28;
      }
      goto L_0896CF14;
    }
L_0896CF14:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0896CF20u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 499u, 0x08A05F3Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CF20u) goto L_0896CF20;
    return;
L_0896CF20:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344), ctx.gpr[4]);
    goto L_0896CF28;
L_0896CF28:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896CF34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9216), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32304));
    ctx.gpr[17] = (2246u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1988), 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(17840));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1992), 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_0896CF70;
L_0896CF70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(61)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CF84;
      }
      goto L_0896CF7C;
    }
L_0896CF7C:
    ctx.gpr[31] = (0x0896CF84u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 583u, 0x08B36790u>(ctx, &aot_mem) && ctx.pc == 0x0896CF84u) goto L_0896CF84;
    return;
L_0896CF84:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0896CF70;
      }
      goto L_0896CF94;
    }
L_0896CF94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896D068;
      }
      goto L_0896CFA8;
    }
L_0896CFA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17288)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17288), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0896CFC4;
      }
      goto L_0896CFBC;
    }
L_0896CFBC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17288), 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896CFC4;
L_0896CFC4:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(61)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0896D068;
      }
      goto L_0896CFE8;
    }
L_0896CFE8:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
        goto L_0896D010;
    }
    goto L_0896D010;
L_0896D010:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896D050;
      }
      goto L_0896D020;
    }
L_0896D020:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
        goto L_0896D040;
    }
    goto L_0896D040;
L_0896D040:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896D060;
      }
      goto L_0896D050;
    }
L_0896D050:
    ctx.gpr[31] = (0x0896D058u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 233u, 0x08B3507Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D058u) goto L_0896D058;
    return;
L_0896D058:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D068;
      }
      goto L_0896D060;
    }
L_0896D060:
    ctx.gpr[31] = (0x0896D068u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 255u, 0x08B35218u>(ctx, &aot_mem) && ctx.pc == 0x0896D068u) goto L_0896D068;
    return;
L_0896D068:
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
L_0896D084:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17328)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2246u << 16u);
      if (branch_taken) {
          goto L_0896D0DC;
      }
      goto L_0896D0A8;
    }
L_0896D0A8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(17840));
    goto L_0896D0AC;
L_0896D0AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D0C8;
      }
      goto L_0896D0B8;
    }
L_0896D0B8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(61)));
    ctx.gpr[31] = (0x0896D0C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896F260;
L_0896D0C4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0896D0C8;
L_0896D0C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17328)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0896D0AC;
      }
      goto L_0896D0DC;
    }
L_0896D0DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D0F0:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (2246u << 16u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(17840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D128:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17340)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D350;
      }
      goto L_0896D154;
    }
L_0896D154:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17336)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D350;
      }
      goto L_0896D164;
    }
L_0896D164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(9200));
      if (branch_taken) {
          goto L_0896D178;
      }
      goto L_0896D170;
    }
L_0896D170:
    ctx.gpr[31] = (0x0896D178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0896D178u) goto L_0896D178;
    return;
L_0896D178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6849), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0896D18Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x0896D18Cu) goto L_0896D18C;
    return;
L_0896D18C:
    ctx.gpr[31] = (0x0896D194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D194u) goto L_0896D194;
    return;
L_0896D194:
    ctx.gpr[31] = (0x0896D19Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem) && ctx.pc == 0x0896D19Cu) goto L_0896D19C;
    return;
L_0896D19C:
    ctx.gpr[4] = (0u | 27u);
    ctx.gpr[5] = (0u | 89u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 130u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0896D1C4u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x0896D1C4u) goto L_0896D1C4;
    return;
L_0896D1C4:
    ctx.gpr[5] = (17385u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (16720u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[31] = (0x0896D1ECu);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem) && ctx.pc == 0x0896D1ECu) goto L_0896D1EC;
    return;
L_0896D1EC:
    ctx.gpr[31] = (0x0896D1F4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem) && ctx.pc == 0x0896D1F4u) goto L_0896D1F4;
    return;
L_0896D1F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9212)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_0896D27C;
      }
      goto L_0896D200;
    }
L_0896D200:
    ctx.gpr[17] = (2238u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-8144));
      if (branch_taken) {
          goto L_0896D238;
      }
      goto L_0896D20C;
    }
L_0896D20C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896D218u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0896D218u) goto L_0896D218;
    return;
L_0896D218:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D230;
      }
      goto L_0896D224;
    }
L_0896D224:
    ctx.gpr[31] = (0x0896D22Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D22Cu) goto L_0896D22C;
    return;
L_0896D22C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896D230;
L_0896D230:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0896D238;
L_0896D238:
    ctx.gpr[31] = (0x0896D240u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0896D240u) goto L_0896D240;
    return;
L_0896D240:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9208)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9212)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0896D264u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 515u, 0x08ABAD24u>(ctx, &aot_mem) && ctx.pc == 0x0896D264u) goto L_0896D264;
    return;
L_0896D264:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896D274u);
    ctx.gpr[6] = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x0896D274u) goto L_0896D274;
    return;
L_0896D274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D350;
      }
      goto L_0896D27C;
    }
L_0896D27C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9208)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0896D304;
      }
      goto L_0896D288;
    }
L_0896D288:
    ctx.gpr[17] = (2238u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-8144));
      if (branch_taken) {
          goto L_0896D2C0;
      }
      goto L_0896D294;
    }
L_0896D294:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896D2A0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0896D2A0u) goto L_0896D2A0;
    return;
L_0896D2A0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D2B8;
      }
      goto L_0896D2AC;
    }
L_0896D2AC:
    ctx.gpr[31] = (0x0896D2B4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D2B4u) goto L_0896D2B4;
    return;
L_0896D2B4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896D2B8;
L_0896D2B8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0896D2C0;
L_0896D2C0:
    ctx.gpr[31] = (0x0896D2C8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0896D2C8u) goto L_0896D2C8;
    return;
L_0896D2C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9208)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0896D2ECu);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 515u, 0x08ABAD24u>(ctx, &aot_mem) && ctx.pc == 0x0896D2ECu) goto L_0896D2EC;
    return;
L_0896D2EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896D2FCu);
    ctx.gpr[6] = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x0896D2FCu) goto L_0896D2FC;
    return;
L_0896D2FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D350;
      }
      goto L_0896D304;
    }
L_0896D304:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D338;
      }
      goto L_0896D30C;
    }
L_0896D30C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0896D318u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0896D318u) goto L_0896D318;
    return;
L_0896D318:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D330;
      }
      goto L_0896D324;
    }
L_0896D324:
    ctx.gpr[31] = (0x0896D32Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D32Cu) goto L_0896D32C;
    return;
L_0896D32C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0896D330;
L_0896D330:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896D338;
L_0896D338:
    ctx.gpr[31] = (0x0896D340u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0896D340u) goto L_0896D340;
    return;
L_0896D340:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896D350u);
    ctx.gpr[6] = (0u | 170u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x0896D350u) goto L_0896D350;
    return;
L_0896D350:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D36C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] << 7u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2246u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17840));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(171), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0896D3D8;
      }
      goto L_0896D3B4;
    }
L_0896D3B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D3D4;
      }
      goto L_0896D3C0;
    }
L_0896D3C0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0896D3D4;
      }
      goto L_0896D3C8;
    }
L_0896D3C8:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0896D3D4u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x0896D3D4u) goto L_0896D3D4;
    return;
L_0896D3D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_0896D3D8;
L_0896D3D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D3E8:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(169)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D418:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(62)));
    ctx.gpr[2] = (ctx.gpr[4] ^ 5u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D450:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (2246u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(61)));
    ctx.gpr[6] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0896D510;
      }
      goto L_0896D488;
    }
L_0896D488:
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 7u);
      if (branch_taken) {
          goto L_0896D4EC;
      }
      goto L_0896D494;
    }
L_0896D494:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 6u);
      if (branch_taken) {
          goto L_0896D4C8;
      }
      goto L_0896D49C;
    }
L_0896D49C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896D534;
      }
      goto L_0896D4A4;
    }
L_0896D4A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17312)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D4C0;
      }
      goto L_0896D4BC;
    }
L_0896D4BC:
    ctx.gpr[2] = (0u | 1u);
    goto L_0896D4C0;
L_0896D4C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D534;
      }
      goto L_0896D4C8;
    }
L_0896D4C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17308)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D4E4;
      }
      goto L_0896D4E0;
    }
L_0896D4E0:
    ctx.gpr[2] = (0u | 1u);
    goto L_0896D4E4;
L_0896D4E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D534;
      }
      goto L_0896D4EC;
    }
L_0896D4EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17304)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D508;
      }
      goto L_0896D504;
    }
L_0896D504:
    ctx.gpr[2] = (0u | 1u);
    goto L_0896D508;
L_0896D508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D534;
      }
      goto L_0896D510;
    }
L_0896D510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17300)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D52C;
      }
      goto L_0896D528;
    }
L_0896D528:
    ctx.gpr[2] = (0u | 1u);
    goto L_0896D52C;
L_0896D52C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D534;
      }
      goto L_0896D534;
    }
L_0896D534:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D53C:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(62)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_0896D57C;
      }
      goto L_0896D574;
    }
L_0896D574:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896D584;
      }
      goto L_0896D57C;
    }
L_0896D57C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0896D588;
      }
      goto L_0896D584;
    }
L_0896D584:
    ctx.gpr[2] = (0u | 0u);
    goto L_0896D588;
L_0896D588:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D590:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(62)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D5CC;
      }
      goto L_0896D5C4;
    }
L_0896D5C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0896D5D0;
      }
      goto L_0896D5CC;
    }
L_0896D5CC:
    ctx.gpr[2] = (0u | 0u);
    goto L_0896D5D0;
L_0896D5D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D5D8:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(65)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D60C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17840));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(77)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D6B0;
      }
      goto L_0896D648;
    }
L_0896D648:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[7] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (0u | 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (15820u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(140));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896D6A8;
      }
      goto L_0896D6A0;
    }
L_0896D6A0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0896D6A8;
      }
      goto L_0896D6A8;
    }
L_0896D6A8:
    ctx.gpr[31] = (0x0896D6B0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem) && ctx.pc == 0x0896D6B0u) goto L_0896D6B0;
    return;
L_0896D6B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D6BC:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (2246u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17840));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D6F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (2246u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17840));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896D728u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 615u, 0x08B32E84u>(ctx, &aot_mem) && ctx.pc == 0x0896D728u) goto L_0896D728;
    return;
L_0896D728:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D734:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17296)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896D748;
      }
      goto L_0896D740;
    }
L_0896D740:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0896D74C;
      }
      goto L_0896D748;
    }
L_0896D748:
    ctx.gpr[2] = (0u | 0u);
    goto L_0896D74C;
L_0896D74C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D754:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D878;
      }
      goto L_0896D778;
    }
L_0896D778:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0896D77C;
L_0896D77C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(61)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D818;
      }
      goto L_0896D7A8;
    }
L_0896D7A8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-8520)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D7C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D868;
      }
      goto L_0896D7C8;
    }
L_0896D7C8:
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[31] = (0x0896D800u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 314u, 0x08B356F8u>(ctx, &aot_mem) && ctx.pc == 0x0896D800u) goto L_0896D800;
    return;
L_0896D800:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D810;
      }
      goto L_0896D808;
    }
L_0896D808:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D868;
      }
      goto L_0896D810;
    }
L_0896D810:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0896D87C;
      }
      goto L_0896D818;
    }
L_0896D818:
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[31] = (0x0896D850u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 314u, 0x08B356F8u>(ctx, &aot_mem) && ctx.pc == 0x0896D850u) goto L_0896D850;
    return;
L_0896D850:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D860;
      }
      goto L_0896D858;
    }
L_0896D858:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D868;
      }
      goto L_0896D860;
    }
L_0896D860:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0896D87C;
      }
      goto L_0896D868;
    }
L_0896D868:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0896D77C;
      }
      goto L_0896D878;
    }
L_0896D878:
    ctx.gpr[2] = (0u | 0u);
    goto L_0896D87C;
L_0896D87C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D890:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9216)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D898:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[7] << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    ctx.gpr[19] = (ctx.gpr[6] & 65535u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896D8E4;
      }
      goto L_0896D8DC;
    }
L_0896D8DC:
    ctx.gpr[31] = (0x0896D8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0896D8E4u) goto L_0896D8E4;
    return;
L_0896D8E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(538));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D920;
      }
      goto L_0896D900;
    }
L_0896D900:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(9200));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896D910u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x0896D910u) goto L_0896D910;
    return;
L_0896D910:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D948;
      }
      goto L_0896D918;
    }
L_0896D918:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
      if (branch_taken) {
          goto L_0896D928;
      }
      goto L_0896D920;
    }
L_0896D920:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D9FC;
      }
      goto L_0896D928;
    }
L_0896D928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17340)));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D948;
      }
      goto L_0896D938;
    }
L_0896D938:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17336)));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D9D4;
      }
      goto L_0896D948;
    }
L_0896D948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0896D980;
    }
    goto L_0896D954;
L_0896D954:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x0896D960u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0896D960u) goto L_0896D960;
    return;
L_0896D960:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D978;
      }
      goto L_0896D96C;
    }
L_0896D96C:
    ctx.gpr[31] = (0x0896D974u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D974u) goto L_0896D974;
    return;
L_0896D974:
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_0896D978;
L_0896D978:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0896D980;
L_0896D980:
    ctx.gpr[31] = (0x0896D988u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0896D988u) goto L_0896D988;
    return;
L_0896D988:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0896D9ACu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 493u, 0x08ABAB74u>(ctx, &aot_mem) && ctx.pc == 0x0896D9ACu) goto L_0896D9AC;
    return;
L_0896D9AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896D9B8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D9B8u) goto L_0896D9B8;
    return;
L_0896D9B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9208), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17340), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17336), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9212), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0896D9FC;
      }
      goto L_0896D9D4;
    }
L_0896D9D4:
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(501) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D9FC;
      }
      goto L_0896D9E4;
    }
L_0896D9E4:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-500));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17340), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17336), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9208), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9212), ctx.gpr[18]);
    goto L_0896D9FC;
L_0896D9FC:
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
L_0896DA24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2246u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(17840));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    goto L_0896DA40;
L_0896DA40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(61)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DA54;
      }
      goto L_0896DA4C;
    }
L_0896DA4C:
    ctx.gpr[31] = (0x0896DA54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 694u, 0x08B36EECu>(ctx, &aot_mem) && ctx.pc == 0x0896DA54u) goto L_0896DA54;
    return;
L_0896DA54:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0896DA40;
      }
      goto L_0896DA64;
    }
L_0896DA64:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17336), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17340), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896DA80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DA90;
    }
L_0896DA90:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DA9C;
    }
L_0896DA9C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DAA8;
    }
L_0896DAA8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(90)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DAB4;
    }
L_0896DAB4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DAC0;
    }
L_0896DAC0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DACC;
    }
L_0896DACC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DAD8;
    }
L_0896DAD8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(98)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DAE4;
    }
L_0896DAE4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DAF0;
    }
L_0896DAF0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(102)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DAFC;
    }
L_0896DAFC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DB08;
    }
L_0896DB08:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(106)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DB14;
    }
L_0896DB14:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DB20;
    }
L_0896DB20:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(110)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DB2C;
    }
L_0896DB2C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DB38;
    }
L_0896DB38:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(114)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DB44;
    }
L_0896DB44:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DB50;
    }
L_0896DB50:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(118)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DB5C;
    }
L_0896DB5C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DB68;
    }
L_0896DB68:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(122)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DB74;
    }
L_0896DB74:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DB80;
    }
L_0896DB80:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(126)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DB8C;
    }
L_0896DB8C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896DBAC;
      }
      goto L_0896DB98;
    }
L_0896DB98:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(298)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896DBB4;
      }
      goto L_0896DBA4;
    }
L_0896DBA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0896DBB8;
      }
      goto L_0896DBAC;
    }
L_0896DBAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0896DBB8;
      }
      goto L_0896DBB4;
    }
L_0896DBB4:
    ctx.gpr[2] = (0u | 0u);
    goto L_0896DBB8;
L_0896DBB8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896DBC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DC88;
      }
      goto L_0896DBE4;
    }
L_0896DBE4:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    goto L_0896DBE8;
L_0896DBE8:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(61)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14));
      if (branch_taken) {
          goto L_0896DC78;
      }
      goto L_0896DC18;
    }
L_0896DC18:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-8432)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896DC30:
    ctx.gpr[4] = (ctx.gpr[17] << 7u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
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
    ctx.gpr[31] = (0x0896DC60u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 300u, 0x08B35604u>(ctx, &aot_mem) && ctx.pc == 0x0896DC60u) goto L_0896DC60;
    return;
L_0896DC60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896DC70;
      }
      goto L_0896DC68;
    }
L_0896DC68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DC78;
      }
      goto L_0896DC70;
    }
L_0896DC70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0896DC8C;
      }
      goto L_0896DC78;
    }
L_0896DC78:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0896DBE8;
      }
      goto L_0896DC88;
    }
L_0896DC88:
    ctx.gpr[2] = (0u | 0u);
    goto L_0896DC8C;
L_0896DC8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896DCA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DD48;
      }
      goto L_0896DCC4;
    }
L_0896DCC4:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    goto L_0896DCC8;
L_0896DCC8:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(61)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DD38;
      }
      goto L_0896DCF0;
    }
L_0896DCF0:
    ctx.gpr[4] = (ctx.gpr[17] << 7u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
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
    ctx.gpr[31] = (0x0896DD20u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 300u, 0x08B35604u>(ctx, &aot_mem) && ctx.pc == 0x0896DD20u) goto L_0896DD20;
    return;
L_0896DD20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896DD30;
      }
      goto L_0896DD28;
    }
L_0896DD28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DD38;
      }
      goto L_0896DD30;
    }
L_0896DD30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0896DD4C;
      }
      goto L_0896DD38;
    }
L_0896DD38:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0896DCC8;
      }
      goto L_0896DD48;
    }
L_0896DD48:
    ctx.gpr[2] = (0u | 0u);
    goto L_0896DD4C;
L_0896DD4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896DD60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896DD80u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_0896E5C0;
L_0896DD80:
    ctx.gpr[4] = (0u | 8132u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17328)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17331)));
    ctx.gpr[18] = (2246u << 16u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17840));
      if (branch_taken) {
          goto L_0896DDB4;
      }
      goto L_0896DDA4;
    }
L_0896DDA4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17330)));
      if (branch_taken) {
          goto L_0896DDBC;
      }
      goto L_0896DDB4;
    }
L_0896DDB4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17330)));
    goto L_0896DDBC;
L_0896DDBC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896DDD4;
      }
      goto L_0896DDC4;
    }
L_0896DDC4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17324)));
      if (branch_taken) {
          goto L_0896DDDC;
      }
      goto L_0896DDD4;
    }
L_0896DDD4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17324)));
    goto L_0896DDDC;
L_0896DDDC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17316)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17312)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17308)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17304)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17300)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17292)));
    ctx.gpr[7] = (2247u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(14768));
    goto L_0896DE4C;
L_0896DE4C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[7]);
    goto L_0896DE54;
L_0896DE54:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(37)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(38)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(39)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(41)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(42)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(43)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(45))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(46))))));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(192));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0896DE54;
      }
      goto L_0896DF08;
    }
L_0896DF08:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0896DE4C;
      }
      goto L_0896DF18;
    }
L_0896DF18:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_0896DF24;
L_0896DF24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0896DF34u);
    ctx.gpr[6] = (0u | 176u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0896DF34u) goto L_0896DF34;
    return;
L_0896DF34:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0896DF24;
      }
      goto L_0896DF48;
    }
L_0896DF48:
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
L_0896DF60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896DF84u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0896E5C0;
L_0896DF84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17328), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (2246u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(17840));
      if (branch_taken) {
          goto L_0896DFB0;
      }
      goto L_0896DFA8;
    }
L_0896DFA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17331), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0896DFB4;
      }
      goto L_0896DFB0;
    }
L_0896DFB0:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17331), static_cast<std::uint8_t>(0u));
    goto L_0896DFB4;
L_0896DFB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896DFC8;
      }
      goto L_0896DFC0;
    }
L_0896DFC0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17330), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0896DFCC;
      }
      goto L_0896DFC8;
    }
L_0896DFC8:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17330), static_cast<std::uint8_t>(0u));
    goto L_0896DFCC;
L_0896DFCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17324), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17320), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17316), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17312), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17308), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17304), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17300), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2247u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17292), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(14768));
    goto L_0896E03C;
L_0896E03C:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_0896E044;
L_0896E044:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(37)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(39)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(41)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(42)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(43)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45))))));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(46))))));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_0896E044;
      }
      goto L_0896E0F8;
    }
L_0896E0F8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0896E03C;
      }
      goto L_0896E108;
    }
L_0896E108:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (0u | 11u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_0896E118;
L_0896E118:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896E128u);
    ctx.gpr[6] = (0u | 176u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0896E128u) goto L_0896E128;
    return;
L_0896E128:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(164), 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896E148u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 80u, 0x08B346D4u>(ctx, &aot_mem) && ctx.pc == 0x0896E148u) goto L_0896E148;
    return;
L_0896E148:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(61)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0896E164;
      }
      goto L_0896E154;
    }
L_0896E154:
    ctx.gpr[31] = (0x0896E15Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 75u, 0x08B34680u>(ctx, &aot_mem) && ctx.pc == 0x0896E15Cu) goto L_0896E15C;
    return;
L_0896E15C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E16C;
      }
      goto L_0896E164;
    }
L_0896E164:
    ctx.gpr[31] = (0x0896E16Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem) && ctx.pc == 0x0896E16Cu) goto L_0896E16C;
    return;
L_0896E16C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0896E118;
      }
      goto L_0896E17C;
    }
L_0896E17C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17336), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17340), 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9216), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896E1C8;
      }
      goto L_0896E198;
    }
L_0896E198:
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x0896E1ACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 497u, 0x08A05F1Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E1ACu) goto L_0896E1AC;
    return;
L_0896E1AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17344), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0896E1C8;
      }
      goto L_0896E1B8;
    }
L_0896E1B8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896E1C8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 501u, 0x08A05F5Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E1C8u) goto L_0896E1C8;
    return;
L_0896E1C8:
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
L_0896E1E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (2246u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(170)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E24C;
      }
      goto L_0896E228;
    }
L_0896E228:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2000));
    ctx.gpr[31] = (0x0896E244u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem) && ctx.pc == 0x0896E244u) goto L_0896E244;
    return;
L_0896E244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E254;
      }
      goto L_0896E24C;
    }
L_0896E24C:
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0896E254;
L_0896E254:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E260:
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17840));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (0u | 10u);
    goto L_0896E270;
L_0896E270:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(61)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0896E298;
      }
      goto L_0896E27C;
    }
L_0896E27C:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17328)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17328), ctx.gpr[7]);
    goto L_0896E298;
L_0896E298:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0896E270;
      }
      goto L_0896E2A8;
    }
L_0896E2A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E2B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (2246u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17840));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0896E2F8;
      }
      goto L_0896E2E8;
    }
L_0896E2E8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0896E300;
      }
      goto L_0896E2F0;
    }
L_0896E2F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E314;
      }
      goto L_0896E2F8;
    }
L_0896E2F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), 0u);
      if (branch_taken) {
          goto L_0896E328;
      }
      goto L_0896E300;
    }
L_0896E300:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(164));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0896E314u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x0896E314u) goto L_0896E314;
    return;
L_0896E314:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(62)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896E328;
      }
      goto L_0896E324;
    }
L_0896E324:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    goto L_0896E328;
L_0896E328:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E338:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (2246u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(17840));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[4] = (17948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u | 25u);
    ctx.gpr[23] = (0u | 26u);
    ctx.gpr[22] = (0u | 27u);
    ctx.gpr[21] = (0u | 28u);
    ctx.gpr[20] = (0u | 29u);
    ctx.gpr[19] = (0u | 30u);
    goto L_0896E39C;
L_0896E39C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(61)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_0896E404;
      }
      goto L_0896E3AC;
    }
L_0896E3AC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_0896E404;
      }
      goto L_0896E3B4;
    }
L_0896E3B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 22u);
      if (branch_taken) {
          goto L_0896E404;
      }
      goto L_0896E3BC;
    }
L_0896E3BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 23u);
      if (branch_taken) {
          goto L_0896E404;
      }
      goto L_0896E3C4;
    }
L_0896E3C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 24u);
      if (branch_taken) {
          goto L_0896E404;
      }
      goto L_0896E3CC;
    }
L_0896E3CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896E404;
      }
      goto L_0896E3D4;
    }
L_0896E3D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0896E404;
      }
      goto L_0896E3DC;
    }
L_0896E3DC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0896E404;
      }
      goto L_0896E3E4;
    }
L_0896E3E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0896E404;
      }
      goto L_0896E3EC;
    }
L_0896E3EC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0896E404;
      }
      goto L_0896E3F4;
    }
L_0896E3F4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0896E404;
      }
      goto L_0896E3FC;
    }
L_0896E3FC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0896E42C;
      }
      goto L_0896E404;
    }
L_0896E404:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0896E414u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 650u, 0x08B3312Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E414u) goto L_0896E414;
    return;
L_0896E414:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896E42C;
      }
      goto L_0896E424;
    }
L_0896E424:
    ctx.gpr[31] = (0x0896E42Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 641u, 0x08B330A8u>(ctx, &aot_mem) && ctx.pc == 0x0896E42Cu) goto L_0896E42C;
    return;
L_0896E42C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0896E39C;
      }
      goto L_0896E43C;
    }
L_0896E43C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E470:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 191 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 247 ? 1u : 0u);
      if (branch_taken) {
          goto L_0896E4C4;
      }
      goto L_0896E480;
    }
L_0896E480:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < -965 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-950));
      if (branch_taken) {
          goto L_0896E4B4;
      }
      goto L_0896E48C;
    }
L_0896E48C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < -966 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E4BC;
      }
      goto L_0896E498;
    }
L_0896E498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896E4EC;
      }
      goto L_0896E4A8;
    }
L_0896E4A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_0896E4E4;
      }
      goto L_0896E4B0;
    }
L_0896E4B0:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-950));
    goto L_0896E4B4;
L_0896E4B4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896E498;
      }
      goto L_0896E4BC;
    }
L_0896E4BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0896E4F8;
      }
      goto L_0896E4C4;
    }
L_0896E4C4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-191));
      if (branch_taken) {
          goto L_0896E498;
      }
      goto L_0896E4CC;
    }
L_0896E4CC:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-8360)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E4E4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896E4F4;
      }
      goto L_0896E4EC;
    }
L_0896E4EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0896E4F8;
      }
      goto L_0896E4F4;
    }
L_0896E4F4:
    ctx.gpr[2] = (0u | 1u);
    goto L_0896E4F8;
L_0896E4F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E500:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0896E518u) goto L_0896E518;
    return;
L_0896E518:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896E524u);
    ctx.gpr[4] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x0896E524u) goto L_0896E524;
    return;
L_0896E524:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 36u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0896E53Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x0896E53Cu) goto L_0896E53C;
    return;
L_0896E53C:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1676)));
    ctx.gpr[5] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896E570;
      }
      goto L_0896E568;
    }
L_0896E568:
    ctx.gpr[4] = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1676), ctx.gpr[4]);
    goto L_0896E570;
L_0896E570:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E584:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[14];
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E5C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (2246u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(17840));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[18] = (2247u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[30] = (0u | 25u);
    ctx.gpr[23] = (0u | 26u);
    ctx.gpr[22] = (0u | 27u);
    ctx.gpr[21] = (0u | 28u);
    ctx.gpr[20] = (0u | 29u);
    ctx.gpr[19] = (0u | 30u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14768));
    goto L_0896E620;
L_0896E620:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(61)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_0896E688;
      }
      goto L_0896E630;
    }
L_0896E630:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_0896E688;
      }
      goto L_0896E638;
    }
L_0896E638:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 22u);
      if (branch_taken) {
          goto L_0896E688;
      }
      goto L_0896E640;
    }
L_0896E640:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 23u);
      if (branch_taken) {
          goto L_0896E688;
      }
      goto L_0896E648;
    }
L_0896E648:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 24u);
      if (branch_taken) {
          goto L_0896E688;
      }
      goto L_0896E650;
    }
L_0896E650:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896E688;
      }
      goto L_0896E658;
    }
L_0896E658:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0896E688;
      }
      goto L_0896E660;
    }
L_0896E660:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0896E688;
      }
      goto L_0896E668;
    }
L_0896E668:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0896E688;
      }
      goto L_0896E670;
    }
L_0896E670:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0896E688;
      }
      goto L_0896E678;
    }
L_0896E678:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0896E688;
      }
      goto L_0896E680;
    }
L_0896E680:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0896E6CC;
      }
      goto L_0896E688;
    }
L_0896E688:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(62)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E6CC;
      }
      goto L_0896E694;
    }
L_0896E694:
    ctx.gpr[31] = (0x0896E69Cu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    goto L_0896E7A4;
L_0896E69C:
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896E6B8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 189u, 0x08B34D54u>(ctx, &aot_mem) && ctx.pc == 0x0896E6B8u) goto L_0896E6B8;
    return;
L_0896E6B8:
    ctx.gpr[31] = (0x0896E6C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 39u, 0x08B3430Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E6C0u) goto L_0896E6C0;
    return;
L_0896E6C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0896E6CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem) && ctx.pc == 0x0896E6CCu) goto L_0896E6CC;
    return;
L_0896E6CC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0896E620;
      }
      goto L_0896E6DC;
    }
L_0896E6DC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E710:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (2247u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(14768));
    goto L_0896E744;
L_0896E744:
    ctx.gpr[31] = (0x0896E74Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0896E7A4;
L_0896E74C:
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E770;
      }
      goto L_0896E76C;
    }
L_0896E76C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0896E770;
L_0896E770:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0896E744;
      }
      goto L_0896E780;
    }
L_0896E780:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_0896E7A4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E82C;
      }
      goto L_0896E7B4;
    }
L_0896E7B4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-8136)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E7CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0896E830;
      }
      goto L_0896E7D4;
    }
L_0896E7D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0896E830;
      }
      goto L_0896E7DC;
    }
L_0896E7DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0896E830;
      }
      goto L_0896E7E4;
    }
L_0896E7E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_0896E830;
      }
      goto L_0896E7EC;
    }
L_0896E7EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0896E830;
      }
      goto L_0896E7F4;
    }
L_0896E7F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_0896E830;
      }
      goto L_0896E7FC;
    }
L_0896E7FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 6u);
      if (branch_taken) {
          goto L_0896E830;
      }
      goto L_0896E804;
    }
L_0896E804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 7u);
      if (branch_taken) {
          goto L_0896E830;
      }
      goto L_0896E80C;
    }
L_0896E80C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 8u);
      if (branch_taken) {
          goto L_0896E830;
      }
      goto L_0896E814;
    }
L_0896E814:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_0896E830;
      }
      goto L_0896E81C;
    }
L_0896E81C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_0896E830;
      }
      goto L_0896E824;
    }
L_0896E824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 11u);
      if (branch_taken) {
          goto L_0896E830;
      }
      goto L_0896E82C;
    }
L_0896E82C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0896E830;
L_0896E830:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E838:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[17] + ctx.fpr[15];
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17328)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[4] << 7u);
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[16];
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[19];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (2246u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(17840));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    if (ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
        goto L_0896E8C0;
    }
    goto L_0896E8C0;
L_0896E8C0:
    ctx.fpr[4] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[4]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[4] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
        goto L_0896E8D4;
    }
    goto L_0896E8D4;
L_0896E8D4:
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_fpu_condition((ctx.fpr[4] < ctx.fpr[3]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[4]));
        goto L_0896E8E8;
    }
    goto L_0896E8E8;
L_0896E8E8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[3]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
        goto L_0896E900;
    }
    goto L_0896E900;
L_0896E900:
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.set_fpu_condition((ctx.fpr[3] <= ctx.fpr[1]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[3]));
        goto L_0896E914;
    }
    goto L_0896E914;
L_0896E914:
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
        goto L_0896E924;
    }
    goto L_0896E924;
L_0896E924:
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
        goto L_0896E93C;
    }
    goto L_0896E93C;
L_0896E93C:
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
        goto L_0896E950;
    }
    goto L_0896E950;
L_0896E950:
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[2]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
        goto L_0896E964;
    }
    goto L_0896E964;
L_0896E964:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[1]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
        goto L_0896E97C;
    }
    goto L_0896E97C;
L_0896E97C:
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[2]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
        goto L_0896E990;
    }
    goto L_0896E990;
L_0896E990:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
        goto L_0896E9A0;
    }
    goto L_0896E9A0;
L_0896E9A0:
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[17] - ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[2] + ctx.fpr[1];
    ctx.gpr[7] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[17] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(156), 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17328)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0896EA8Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_0896F260;
L_0896EA8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17328)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17328), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EACC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[17]);
    ctx.gpr[17] = (2246u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(17840));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_0896EAF8;
L_0896EAF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(61)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896EB0C;
      }
      goto L_0896EB04;
    }
L_0896EB04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896ECA8;
      }
      goto L_0896EB0C;
    }
L_0896EB0C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896EB18u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 80u, 0x08B346D4u>(ctx, &aot_mem) && ctx.pc == 0x0896EB18u) goto L_0896EB18;
    return;
L_0896EB18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EBE0;
      }
      goto L_0896EB24;
    }
L_0896EB24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 8u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EBB0;
      }
      goto L_0896EB64;
    }
L_0896EB64:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.gpr[31] = (0x0896EB70u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem) && ctx.pc == 0x0896EB70u) goto L_0896EB70;
    return;
L_0896EB70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.gpr[31] = (0x0896EB88u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem) && ctx.pc == 0x0896EB88u) goto L_0896EB88;
    return;
L_0896EB88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EBAC;
      }
      goto L_0896EB98;
    }
L_0896EB98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EBAC;
      }
      goto L_0896EBA4;
    }
L_0896EBA4:
    ctx.gpr[31] = (0x0896EBACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x0896EBACu) goto L_0896EBAC;
    return;
L_0896EBAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0896EBB0;
L_0896EBB0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EBD0;
      }
      goto L_0896EBBC;
    }
L_0896EBBC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0896EBCCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 74u, 0x08B345C4u>(ctx, &aot_mem) && ctx.pc == 0x0896EBCCu) goto L_0896EBCC;
    return;
L_0896EBCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0896EBD0;
L_0896EBD0:
    ctx.gpr[31] = (0x0896EBD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x0896EBD8u) goto L_0896EBD8;
    return;
L_0896EBD8:
    ctx.gpr[31] = (0x0896EBE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem) && ctx.pc == 0x0896EBE0u) goto L_0896EBE0;
    return;
L_0896EBE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896ECA8;
      }
      goto L_0896EBEC;
    }
L_0896EBEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 8u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EC78;
      }
      goto L_0896EC2C;
    }
L_0896EC2C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.gpr[31] = (0x0896EC38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem) && ctx.pc == 0x0896EC38u) goto L_0896EC38;
    return;
L_0896EC38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.gpr[31] = (0x0896EC50u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem) && ctx.pc == 0x0896EC50u) goto L_0896EC50;
    return;
L_0896EC50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EC74;
      }
      goto L_0896EC60;
    }
L_0896EC60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EC74;
      }
      goto L_0896EC6C;
    }
L_0896EC6C:
    ctx.gpr[31] = (0x0896EC74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x0896EC74u) goto L_0896EC74;
    return;
L_0896EC74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_0896EC78;
L_0896EC78:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(77)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EC98;
      }
      goto L_0896EC84;
    }
L_0896EC84:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0896EC94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 74u, 0x08B345C4u>(ctx, &aot_mem) && ctx.pc == 0x0896EC94u) goto L_0896EC94;
    return;
L_0896EC94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_0896EC98;
L_0896EC98:
    ctx.gpr[31] = (0x0896ECA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x0896ECA0u) goto L_0896ECA0;
    return;
L_0896ECA0:
    ctx.gpr[31] = (0x0896ECA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem) && ctx.pc == 0x0896ECA8u) goto L_0896ECA8;
    return;
L_0896ECA8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0896EAF8;
      }
      goto L_0896ECB8;
    }
L_0896ECB8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896ECD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[21]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896ED38u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 940u, 0x0885FF78u>(ctx, &aot_mem) && ctx.pc == 0x0896ED38u) goto L_0896ED38;
    return;
L_0896ED38:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17204u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[22];
    ctx.gpr[31] = (0x0896ED5Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 916u, 0x0885F93Cu>(ctx, &aot_mem) && ctx.pc == 0x0896ED5Cu) goto L_0896ED5C;
    return;
L_0896ED5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(294)));
    ctx.gpr[31] = (0x0896ED70u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x0896ED70u) goto L_0896ED70;
    return;
L_0896ED70:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0896ED7Cu);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 392u, 0x0882B994u>(ctx, &aot_mem) && ctx.pc == 0x0896ED7Cu) goto L_0896ED7C;
    return;
L_0896ED7C:
    ctx.gpr[4] = (16549u << 16u);
    ctx.gpr[23] = (65532u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 24642u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0896EDBC;
      }
      goto L_0896EDA4;
    }
L_0896EDA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(294)));
    ctx.gpr[31] = (0x0896EDB8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 351u, 0x0882B688u>(ctx, &aot_mem) && ctx.pc == 0x0896EDB8u) goto L_0896EDB8;
    return;
L_0896EDB8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0896EDBC;
L_0896EDBC:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[20] / ctx.fpr[22];
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
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0896EE00u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x0896EE00u) goto L_0896EE00;
    return;
L_0896EE00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (0x0896EE14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x0896EE14u) goto L_0896EE14;
    return;
L_0896EE14:
    ctx.gpr[31] = (0x0896EE1Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x0896EE1Cu) goto L_0896EE1C;
    return;
L_0896EE1C:
    ctx.gpr[31] = (0x0896EE24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem) && ctx.pc == 0x0896EE24u) goto L_0896EE24;
    return;
L_0896EE24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(296)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x0896EE68u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x0896EE68u) goto L_0896EE68;
    return;
L_0896EE68:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0896EE74u);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 392u, 0x0882B994u>(ctx, &aot_mem) && ctx.pc == 0x0896EE74u) goto L_0896EE74;
    return;
L_0896EE74:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EE98;
      }
      goto L_0896EE80;
    }
L_0896EE80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (0x0896EE94u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 351u, 0x0882B688u>(ctx, &aot_mem) && ctx.pc == 0x0896EE94u) goto L_0896EE94;
    return;
L_0896EE94:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_0896EE98;
L_0896EE98:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (16564u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 31457u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0896EEC4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_0896CE08;
L_0896EEC4:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[20] / ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0896EF20u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x0896EF20u) goto L_0896EF20;
    return;
L_0896EF20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (0x0896EF34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x0896EF34u) goto L_0896EF34;
    return;
L_0896EF34:
    ctx.gpr[31] = (0x0896EF3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x0896EF3Cu) goto L_0896EF3C;
    return;
L_0896EF3C:
    ctx.gpr[31] = (0x0896EF44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem) && ctx.pc == 0x0896EF44u) goto L_0896EF44;
    return;
L_0896EF44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(298)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x0896EF90u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x0896EF90u) goto L_0896EF90;
    return;
L_0896EF90:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x0896EF9Cu);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 392u, 0x0882B994u>(ctx, &aot_mem) && ctx.pc == 0x0896EF9Cu) goto L_0896EF9C;
    return;
L_0896EF9C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EFC0;
      }
      goto L_0896EFA8;
    }
L_0896EFA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(298)));
    ctx.gpr[31] = (0x0896EFBCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 351u, 0x0882B688u>(ctx, &aot_mem) && ctx.pc == 0x0896EFBCu) goto L_0896EFBC;
    return;
L_0896EFBC:
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
    goto L_0896EFC0;
L_0896EFC0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (49332u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 31457u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0896EFECu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_0896CE08;
L_0896EFEC:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[20] / ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0896F048u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x0896F048u) goto L_0896F048;
    return;
L_0896F048:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[31] = (0x0896F05Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x0896F05Cu) goto L_0896F05C;
    return;
L_0896F05C:
    ctx.gpr[31] = (0x0896F064u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x0896F064u) goto L_0896F064;
    return;
L_0896F064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[31] = (0x0896F078u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem) && ctx.pc == 0x0896F078u) goto L_0896F078;
    return;
L_0896F078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x0896F0A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896F0A8u) goto L_0896F0A8;
    return;
L_0896F0A8:
    ctx.gpr[31] = (0x0896F0B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896F0B0u) goto L_0896F0B0;
    return;
L_0896F0B0:
    ctx.gpr[31] = (0x0896F0B8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896F0B8u) goto L_0896F0B8;
    return;
L_0896F0B8:
    ctx.gpr[4] = (49216u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49248u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0896F118u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0896CE08;
L_0896F118:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0896F130u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_0896CE08;
L_0896F130:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0896F148u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_0896CE08;
L_0896F148:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896F15Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0896F15Cu) goto L_0896F15C;
    return;
L_0896F15C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0896F168u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0896F168u) goto L_0896F168;
    return;
L_0896F168:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F174u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0896F174u) goto L_0896F174;
    return;
L_0896F174:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[0];
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x0896F1ACu);
    ctx.gpr[5] = (0u | 0u);
    goto L_0896E838;
L_0896F1AC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (ctx.gpr[16] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.gpr[31] = (0x0896F1C0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_0896D6BC;
L_0896F1C0:
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F21C;
      }
      goto L_0896F208;
    }
L_0896F208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F21C;
      }
      goto L_0896F214;
    }
L_0896F214:
    ctx.gpr[31] = (0x0896F21Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x0896F21Cu) goto L_0896F21C;
    return;
L_0896F21C:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
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
L_0896F260:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (2246u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17840));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896F2ACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 80u, 0x08B346D4u>(ctx, &aot_mem) && ctx.pc == 0x0896F2ACu) goto L_0896F2AC;
    return;
L_0896F2AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0896F2E0;
      }
      goto L_0896F2BC;
    }
L_0896F2BC:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0896F2E0;
L_0896F2E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0896F308;
      }
      goto L_0896F2E8;
    }
L_0896F2E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0896F308;
L_0896F308:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F320;
      }
      goto L_0896F310;
    }
L_0896F310:
    ctx.gpr[31] = (0x0896F318u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    goto L_0896E584;
L_0896F318:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0896F32C;
      }
      goto L_0896F320;
    }
L_0896F320:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0896F32C;
L_0896F32C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(30) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0896F388;
      }
      goto L_0896F340;
    }
L_0896F340:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-8064)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F358:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0896F388;
      }
      goto L_0896F360;
    }
L_0896F360:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[16]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896F388;
      }
      goto L_0896F370;
    }
L_0896F370:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896F388;
      }
      goto L_0896F388;
    }
L_0896F388:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896F3A4;
      }
      goto L_0896F394;
    }
L_0896F394:
    ctx.gpr[31] = (0x0896F39Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 75u, 0x08B34680u>(ctx, &aot_mem) && ctx.pc == 0x0896F39Cu) goto L_0896F39C;
    return;
L_0896F39C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_0896F3B0;
      }
      goto L_0896F3A4;
    }
L_0896F3A4:
    ctx.gpr[31] = (0x0896F3ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0204_entry, 204u, 60u, 0x08B34444u>(ctx, &aot_mem) && ctx.pc == 0x0896F3ACu) goto L_0896F3AC;
    return;
L_0896F3AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    goto L_0896F3B0;
L_0896F3B0:
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0896F3C4;
    }
    goto L_0896F3C4;
L_0896F3C4:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
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
L_0896F3E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2246u << 16u);
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17840));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896F408u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(11684));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0896F408u) goto L_0896F408;
    return;
L_0896F408:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F414:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896F590;
      }
      goto L_0896F434;
    }
L_0896F434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F590;
      }
      goto L_0896F440;
    }
L_0896F440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0896F458u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x0896F458u) goto L_0896F458;
    return;
L_0896F458:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_0896F47C;
      }
      goto L_0896F470;
    }
L_0896F470:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0896F47C;
L_0896F47C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (49097u << 16u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F4CC;
      }
      goto L_0896F4A0;
    }
L_0896F4A0:
    ctx.gpr[4] = (16457u << 16u);
    goto L_0896F4A4;
L_0896F4A4:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (49097u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16457u << 16u);
      if (branch_taken) {
          goto L_0896F4A4;
      }
      goto L_0896F4CC;
    }
L_0896F4CC:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F514;
      }
      goto L_0896F4E8;
    }
L_0896F4E8:
    ctx.gpr[4] = (16457u << 16u);
    goto L_0896F4EC;
L_0896F4EC:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16457u << 16u);
      if (branch_taken) {
          goto L_0896F4EC;
      }
      goto L_0896F514;
    }
L_0896F514:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15205u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (ctx.gpr[4] | 24642u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0896F53C;
    }
    goto L_0896F53C;
L_0896F53C:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F588;
      }
      goto L_0896F54C;
    }
L_0896F54C:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F574;
      }
      goto L_0896F560;
    }
L_0896F560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x0896F56Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 926u, 0x0885FD1Cu>(ctx, &aot_mem) && ctx.pc == 0x0896F56Cu) goto L_0896F56C;
    return;
L_0896F56C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F580;
      }
      goto L_0896F574;
    }
L_0896F574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x0896F580u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 926u, 0x0885FD1Cu>(ctx, &aot_mem) && ctx.pc == 0x0896F580u) goto L_0896F580;
    return;
L_0896F580:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0896F594;
      }
      goto L_0896F588;
    }
L_0896F588:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0896F594;
      }
      goto L_0896F590;
    }
L_0896F590:
    ctx.gpr[2] = (0u | 1u);
    goto L_0896F594;
L_0896F594:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F5A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896F82C;
      }
      goto L_0896F5E8;
    }
L_0896F5E8:
    ctx.gpr[4] = (15395u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u | 80u);
    ctx.gpr[4] = (17274u << 16u);
    ctx.gpr[23] = (ctx.gpr[17] + static_cast<std::uint32_t>(108));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17256));
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17248));
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17240));
    goto L_0896F618;
L_0896F618:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0896F824;
      }
      goto L_0896F62C;
    }
L_0896F62C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F824;
      }
      goto L_0896F64C;
    }
L_0896F64C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F824;
      }
      goto L_0896F660;
    }
L_0896F660:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F824;
      }
      goto L_0896F678;
    }
L_0896F678:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F824;
      }
      goto L_0896F68C;
    }
L_0896F68C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F824;
      }
      goto L_0896F698;
    }
L_0896F698:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(320)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F6B4;
      }
      goto L_0896F6AC;
    }
L_0896F6AC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_0896F6B4;
      }
      goto L_0896F6B4;
    }
L_0896F6B4:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F824;
      }
      goto L_0896F6C4;
    }
L_0896F6C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(324)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F6E0;
      }
      goto L_0896F6D8;
    }
L_0896F6D8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_0896F6E0;
      }
      goto L_0896F6E0;
    }
L_0896F6E0:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F824;
      }
      goto L_0896F6F0;
    }
L_0896F6F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F70C;
      }
      goto L_0896F704;
    }
L_0896F704:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_0896F70C;
      }
      goto L_0896F70C;
    }
L_0896F70C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F824;
      }
      goto L_0896F71C;
    }
L_0896F71C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_0896F730;
      }
      goto L_0896F728;
    }
L_0896F728:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896F824;
      }
      goto L_0896F730;
    }
L_0896F730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0896F824;
      }
      goto L_0896F740;
    }
L_0896F740:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F824;
      }
      goto L_0896F754;
    }
L_0896F754:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[31] = (0x0896F760u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896F868;
L_0896F760:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F7A0;
      }
      goto L_0896F768;
    }
L_0896F768:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F784;
      }
      goto L_0896F774;
    }
L_0896F774:
    ctx.gpr[31] = (0x0896F77Cu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 16u, 0x08970150u>(ctx, &aot_mem) && ctx.pc == 0x0896F77Cu) goto L_0896F77C;
    return;
L_0896F77C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F7A0;
      }
      goto L_0896F784;
    }
L_0896F784:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0896F798;
      }
      goto L_0896F78C;
    }
L_0896F78C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896F798u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x0896F798u) goto L_0896F798;
    return;
L_0896F798:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_0896F824;
      }
      goto L_0896F7A0;
    }
L_0896F7A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[5] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F824;
      }
      goto L_0896F7B0;
    }
L_0896F7B0:
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(614), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F810;
      }
      goto L_0896F7C4;
    }
L_0896F7C4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[31] = (0x0896F7D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896F868;
L_0896F7D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F7F4;
      }
      goto L_0896F7D8;
    }
L_0896F7D8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[31] = (0x0896F7ECu);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0896D898;
L_0896F7EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F824;
      }
      goto L_0896F7F4;
    }
L_0896F7F4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[31] = (0x0896F808u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0896D898;
L_0896F808:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F824;
      }
      goto L_0896F810;
    }
L_0896F810:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[31] = (0x0896F824u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0896D898;
L_0896F824:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F618;
      }
      goto L_0896F82C;
    }
L_0896F82C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F868:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(119)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F8D8;
      }
      goto L_0896F874;
    }
L_0896F874:
    ctx.gpr[4] = (0u | 194u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 241u);
      if (branch_taken) {
          goto L_0896F8C8;
      }
      goto L_0896F880;
    }
L_0896F880:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-958));
      if (branch_taken) {
          goto L_0896F8C8;
      }
      goto L_0896F888;
    }
L_0896F888:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-966));
      if (branch_taken) {
          goto L_0896F8C8;
      }
      goto L_0896F890;
    }
L_0896F890:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-950));
      if (branch_taken) {
          goto L_0896F8C8;
      }
      goto L_0896F898;
    }
L_0896F898:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 237u);
      if (branch_taken) {
          goto L_0896F8C8;
      }
      goto L_0896F8A0;
    }
L_0896F8A0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 234u);
      if (branch_taken) {
          goto L_0896F8C8;
      }
      goto L_0896F8A8;
    }
L_0896F8A8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 220u);
      if (branch_taken) {
          goto L_0896F8C8;
      }
      goto L_0896F8B0;
    }
L_0896F8B0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 216u);
      if (branch_taken) {
          goto L_0896F8C8;
      }
      goto L_0896F8B8;
    }
L_0896F8B8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 246u);
      if (branch_taken) {
          goto L_0896F8C8;
      }
      goto L_0896F8C0;
    }
L_0896F8C0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896F8D0;
      }
      goto L_0896F8C8;
    }
L_0896F8C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0896F934;
      }
      goto L_0896F8D0;
    }
L_0896F8D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0896F934;
      }
      goto L_0896F8D8;
    }
L_0896F8D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F930;
      }
      goto L_0896F8E4;
    }
L_0896F8E4:
    ctx.gpr[4] = (0u | 194u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 227u);
      if (branch_taken) {
          goto L_0896F920;
      }
      goto L_0896F8F0;
    }
L_0896F8F0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 234u);
      if (branch_taken) {
          goto L_0896F920;
      }
      goto L_0896F8F8;
    }
L_0896F8F8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 193u);
      if (branch_taken) {
          goto L_0896F920;
      }
      goto L_0896F900;
    }
L_0896F900:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 246u);
      if (branch_taken) {
          goto L_0896F920;
      }
      goto L_0896F908;
    }
L_0896F908:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 218u);
      if (branch_taken) {
          goto L_0896F920;
      }
      goto L_0896F910;
    }
L_0896F910:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 207u);
      if (branch_taken) {
          goto L_0896F920;
      }
      goto L_0896F918;
    }
L_0896F918:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896F928;
      }
      goto L_0896F920;
    }
L_0896F920:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0896F934;
      }
      goto L_0896F928;
    }
L_0896F928:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0896F934;
      }
      goto L_0896F930;
    }
L_0896F930:
    ctx.gpr[2] = (0u | 1u);
    goto L_0896F934;
L_0896F934:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F93C:
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 3670u);
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (49225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 3670u);
    ctx.fpr[1] = ctx.fpr[12] - ctx.fpr[3];
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[5] = (15820u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (15733u << 16u);
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] | 49807u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0896F9B0;
      }
      goto L_0896F990;
    }
L_0896F990:
    ctx.gpr[5] = (16585u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 3670u);
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_0896F99C;
L_0896F99C:
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[4];
    ctx.set_fpu_condition((ctx.fpr[1] <= ctx.fpr[6]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F99C;
      }
      goto L_0896F9B0;
    }
L_0896F9B0:
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[5]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (16585u << 16u);
      if (branch_taken) {
          goto L_0896F9DC;
      }
      goto L_0896F9C0;
    }
L_0896F9C0:
    ctx.gpr[5] = (ctx.gpr[5] | 3670u);
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_0896F9C8;
L_0896F9C8:
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[4];
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[5]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F9C8;
      }
      goto L_0896F9DC;
    }
L_0896F9DC:
    ctx.gpr[5] = (15235u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.set_fpu_condition((ctx.fpr[4] < ctx.fpr[17]));
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    if (ctx.fpu_condition()) {
    ctx.fpr[4] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]) ^ 0x80000000u);
        goto L_0896F9FC;
    }
    goto L_0896F9FC;
L_0896F9FC:
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[4]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896FA24;
      }
      goto L_0896FA0C;
    }
L_0896FA0C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[5] = (0u | 1u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_0896FA98;
      }
      goto L_0896FA24;
    }
L_0896FA24:
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896FA60;
      }
      goto L_0896FA34;
    }
L_0896FA34:
    ctx.fpr[3] = ctx.fpr[3] - ctx.fpr[2];
    ctx.set_fpu_condition((ctx.fpr[3] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
      if (branch_taken) {
          goto L_0896FA88;
      }
      goto L_0896FA48;
    }
L_0896FA48:
    ctx.gpr[5] = (16585u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 3670u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[3] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896FA88;
      }
      goto L_0896FA60;
    }
L_0896FA60:
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[2];
    ctx.gpr[5] = (16585u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 3670u);
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[3] <= ctx.fpr[4]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
      if (branch_taken) {
          goto L_0896FA88;
      }
      goto L_0896FA80;
    }
L_0896FA80:
    ctx.fpr[12] = ctx.fpr[3] - ctx.fpr[4];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0896FA88;
L_0896FA88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[5] = (0u | 0u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    goto L_0896FA98;
L_0896FA98:
    ctx.fpr[2] = ctx.fpr[13] - ctx.fpr[19];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[17]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]) ^ 0x80000000u);
        goto L_0896FAB0;
    }
    goto L_0896FAB0;
L_0896FAB0:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896FAD4;
      }
      goto L_0896FAC0;
    }
L_0896FAC0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
      if (branch_taken) {
          goto L_0896FB10;
      }
      goto L_0896FAD4;
    }
L_0896FAD4:
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[17]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[19] + ctx.fpr[0];
        goto L_0896FAFC;
    }
    goto L_0896FAE4;
L_0896FAE4:
    ctx.fpr[12] = ctx.fpr[19] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
      if (branch_taken) {
          goto L_0896FB0C;
      }
      goto L_0896FAFC;
    }
L_0896FAFC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    goto L_0896FB0C;
L_0896FB0C:
    ctx.gpr[5] = (0u | 0u);
    goto L_0896FB10;
L_0896FB10:
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[17]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
        goto L_0896FB28;
    }
    goto L_0896FB28;
L_0896FB28:
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896FB44;
      }
      goto L_0896FB38;
    }
L_0896FB38:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0896FB6C;
      }
      goto L_0896FB44;
    }
L_0896FB44:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896FB60;
      }
      goto L_0896FB54;
    }
L_0896FB54:
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[18];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896FB68;
      }
      goto L_0896FB60;
    }
L_0896FB60:
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0896FB68;
L_0896FB68:
    ctx.gpr[2] = (0u | 0u);
    goto L_0896FB6C;
L_0896FB6C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FB74:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[16] = ctx.fpr[12] - ctx.fpr[17];
    ctx.gpr[5] = (15733u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] | 49807u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]) ^ 0x80000000u);
        goto L_0896FBAC;
    }
    goto L_0896FBAC;
L_0896FBAC:
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896FBD8;
      }
      goto L_0896FBBC;
    }
L_0896FBBC:
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896FBE4;
      }
      goto L_0896FBCC;
    }
L_0896FBCC:
    ctx.fpr[12] = ctx.fpr[17] - ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896FBEC;
      }
      goto L_0896FBD8;
    }
L_0896FBD8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0896FBF0;
      }
      goto L_0896FBE4;
    }
L_0896FBE4:
    ctx.fpr[12] = ctx.fpr[17] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0896FBEC;
L_0896FBEC:
    ctx.gpr[2] = (0u | 0u);
    goto L_0896FBF0;
L_0896FBF0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FBF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[24] - ctx.fpr[13];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896FC58u);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x0896FC58u) goto L_0896FC58;
    return;
L_0896FC58:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_0896FC7C;
      }
      goto L_0896FC70;
    }
L_0896FC70:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0896FC7C;
L_0896FC7C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[24] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[14];
    ctx.fpr[15] = ctx.fpr[22] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FCF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FD6C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FD74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896FDC0;
      }
      goto L_0896FD94;
    }
L_0896FD94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17264)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896FDB0;
      }
      goto L_0896FDA0;
    }
L_0896FDA0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17264), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17260), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0896FDD0;
      }
      goto L_0896FDB0;
    }
L_0896FDB0:
    ctx.gpr[31] = (0x0896FDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 129u, 0x0897084Cu>(ctx, &aot_mem) && ctx.pc == 0x0896FDB8u) goto L_0896FDB8;
    return;
L_0896FDB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FF00;
      }
      goto L_0896FDC0;
    }
L_0896FDC0:
    ctx.gpr[31] = (0x0896FDC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 125u, 0x089707FCu>(ctx, &aot_mem) && ctx.pc == 0x0896FDC8u) goto L_0896FDC8;
    return;
L_0896FDC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FF00;
      }
      goto L_0896FDD0;
    }
L_0896FDD0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    goto L_0896FDD8;
L_0896FDD8:
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FE64;
      }
      goto L_0896FE08;
    }
L_0896FE08:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0896FE50;
      }
      goto L_0896FE20;
    }
L_0896FE20:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0896FE50;
      }
      goto L_0896FE2C;
    }
L_0896FE2C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0896FE50;
      }
      goto L_0896FE38;
    }
L_0896FE38:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0896FE50;
      }
      goto L_0896FE44;
    }
L_0896FE44:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896FE58;
      }
      goto L_0896FE50;
    }
L_0896FE50:
    ctx.gpr[31] = (0x0896FE58u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_0896FF18;
L_0896FE58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896FE08;
      }
      goto L_0896FE64;
    }
L_0896FE64:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
      if (branch_taken) {
          goto L_0896FDD8;
      }
      goto L_0896FE7C;
    }
L_0896FE7C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896FDD0;
      }
      goto L_0896FE94;
    }
L_0896FE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25488)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FF00;
      }
      goto L_0896FEA4;
    }
L_0896FEA4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0896FEEC;
      }
      goto L_0896FEBC;
    }
L_0896FEBC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0896FEEC;
      }
      goto L_0896FEC8;
    }
L_0896FEC8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0896FEEC;
      }
      goto L_0896FED4;
    }
L_0896FED4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0896FEEC;
      }
      goto L_0896FEE0;
    }
L_0896FEE0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896FEF4;
      }
      goto L_0896FEEC;
    }
L_0896FEEC:
    ctx.gpr[31] = (0x0896FEF4u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_0896FF18;
L_0896FEF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896FEA4;
      }
      goto L_0896FF00;
    }
L_0896FF00:
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
L_0896FF18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896FF30u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 941u, 0x0885FF98u>(ctx, &aot_mem) && ctx.pc == 0x0896FF30u) goto L_0896FF30;
    return;
L_0896FF30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17264)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 1u, 0x08970000u>(ctx, &aot_mem); return;
      }
      goto L_0896FF40;
    }
L_0896FF40:
    ctx.gpr[5] = (2247u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 7u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(17072));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896FF5Cu);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x0896FF5Cu) goto L_0896FF5C;
    return;
L_0896FF5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17264)));
    ctx.gpr[5] = (16585u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] | 3670u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0896FFAC;
      }
      goto L_0896FF94;
    }
L_0896FF94:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896FF94;
      }
      goto L_0896FFA8;
    }
L_0896FFA8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0896FFAC;
L_0896FFAC:
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(121), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896FFE4;
      }
      goto L_0896FFDC;
    }
L_0896FFDC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(122), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0896FFEC;
      }
      goto L_0896FFE4;
    }
L_0896FFE4:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(122), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0896FFEC;
L_0896FFEC:
    ctx.gpr[31] = (0x0896FFF4u);
    // nop
    goto L_0896FD6C;
L_0896FFF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17264)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17264), ctx.gpr[4]);
    ctx.pc = 0x08970000u; return;
}

void recomp_unit_0090(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0090_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_90(Runtime &runtime) {
    runtime.register_generated_unit(90u, 0x0896C000u, 16384u, &recomp_unit_0090, &recomp_unit_0090_entry);
    runtime.register_function(0x0896C000u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C020u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C028u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C034u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C048u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C050u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C05Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C070u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C080u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C08Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C09Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C124u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C138u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C14Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C154u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C160u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C16Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C17Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C184u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C188u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C200u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C208u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C20Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C224u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C240u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C254u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C25Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C268u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C274u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C284u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C28Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C290u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C304u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C344u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C388u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C394u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C3A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C3B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C3C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C3C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C3CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C3DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C3E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C3F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C3FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C404u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C408u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C418u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C424u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C42Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C43Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C454u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C464u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C474u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C47Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C498u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C508u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C51Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C528u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C534u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C540u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C548u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C54Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C560u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C574u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C580u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C588u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C594u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C59Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C604u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C60Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C620u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C62Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C634u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C638u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C648u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C654u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C65Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C668u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C670u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C674u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C684u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C690u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C698u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C700u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C710u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C71Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C724u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C738u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C740u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C750u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C75Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C774u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C78Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C79Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C804u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C820u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C82Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C834u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C844u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C854u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C860u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C868u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C874u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C900u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C908u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C920u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C938u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C948u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C954u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C95Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C960u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C970u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C97Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C984u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C990u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C998u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C99Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA28u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA3Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA48u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA50u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA5Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA7Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA90u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CAA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CAB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CABCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CAC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CAD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB04u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB48u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB5Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB70u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CBA0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CBB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CBC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CBC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CBCCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CBDCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CBE8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CBF0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CBFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC04u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC3Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC48u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC58u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC78u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC90u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CCA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CCB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CCC4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CCCCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CCD8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CCE0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CCE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CCF8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD3Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD58u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD88u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD90u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CDA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CDB0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CDB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CDC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CDCCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CDE0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CEB0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CEC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CED0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CEDCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CEECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CEFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF28u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF70u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF7Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CFA8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CFBCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CFC4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CFE8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D010u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D020u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D040u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D050u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D058u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D060u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D068u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D084u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D0A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D0ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D0B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D0C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D0C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D0DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D0F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D128u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D154u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D164u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D170u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D178u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D18Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D194u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D19Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D200u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D20Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D218u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D224u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D22Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D230u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D238u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D240u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D264u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D274u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D27Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D288u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D294u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D304u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D30Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D318u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D324u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D32Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D330u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D338u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D340u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D350u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D36Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D418u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D450u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D488u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D494u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D49Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D4A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D4BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D4C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D4C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D4E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D4E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D4ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D504u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D508u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D510u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D528u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D52Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D534u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D53Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D574u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D57Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D584u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D588u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D590u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D5C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D5CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D5D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D5D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D60Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D648u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D728u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D734u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D740u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D748u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D74Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D754u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D778u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D77Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D7A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D7C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D7C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D800u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D808u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D810u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D818u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D850u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D858u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D860u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D868u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D878u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D87Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D890u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D898u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D8DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D8E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D900u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D910u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D918u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D920u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D928u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D938u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D948u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D954u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D960u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D96Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D974u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D978u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D980u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D988u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D9ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D9B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D9D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D9E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D9FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA4Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA54u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA90u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DAA8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DAB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DAC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DACCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DAD8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DAE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DAF0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DAFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB38u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB50u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB5Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBE8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC70u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC78u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC88u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DCA0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DCC4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DCC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DCF0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD28u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD38u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD48u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD4Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DDA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DDB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DDBCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DDC4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DDD4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DDDCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE4Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE54u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF48u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DFA8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DFB0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DFB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DFC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DFC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DFCCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E03Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E044u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E0F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E108u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E118u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E128u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E148u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E154u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E15Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E164u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E16Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E17Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E198u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E1ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E1B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E1C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E1E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E228u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E244u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E24Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E254u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E260u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E270u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E27Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E298u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E300u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E314u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E324u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E328u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E338u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E39Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E404u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E414u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E424u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E42Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E43Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E470u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E480u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E48Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E498u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E500u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E518u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E524u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E53Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E568u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E570u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E584u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E5C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E620u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E630u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E638u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E640u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E648u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E650u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E658u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E660u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E668u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E670u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E678u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E680u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E688u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E694u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E69Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E6B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E6C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E6CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E6DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E710u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E744u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E74Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E76Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E770u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E780u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E804u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E80Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E814u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E81Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E824u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E82Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E830u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E838u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E900u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E914u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E924u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E93Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E950u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E964u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E97Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E990u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EACCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EAF8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB04u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB70u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB88u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBB0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBBCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBCCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBD8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBE0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC38u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC50u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC6Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC78u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECA0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECA8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECD4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED38u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED5Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED70u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED7Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDBCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE00u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EEC4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF3Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF90u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EFA8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EFBCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EFC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EFECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F048u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F05Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F064u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F078u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F0A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F0B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F0B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F118u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F130u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F148u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F15Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F168u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F174u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F1ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F1C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F208u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F214u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F21Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F260u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F2ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F2BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F2E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F2E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F308u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F310u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F318u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F320u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F32Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F340u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F358u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F360u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F370u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F388u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F394u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F39Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F408u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F414u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F434u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F440u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F458u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F470u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F47Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F514u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F53Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F54Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F560u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F56Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F574u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F580u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F588u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F590u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F594u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F5A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F5E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F618u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F62Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F64Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F660u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F678u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F68Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F698u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F704u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F70Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F71Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F728u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F730u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F740u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F754u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F760u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F768u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F774u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F77Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F784u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F78Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F798u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F808u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F810u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F824u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F82Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F868u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F874u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F880u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F888u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F890u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F898u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F900u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F908u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F910u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F918u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F920u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F928u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F930u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F934u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F93Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F990u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F99Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F9B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F9C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F9C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F9DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F9FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA48u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA88u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FAB0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FAC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FAD4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FAE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FAFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB28u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB38u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB54u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB6Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBBCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBCCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBD8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBF0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBF8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC58u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC70u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC7Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD6Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDA0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDB0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDD8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE38u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE50u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE58u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE7Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FEA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FEBCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FEC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FED4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FEE0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FEECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FEF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF00u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF5Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFA8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFDCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFF4u, &recomp_unit_0090, "recomp_unit_0090");
}
} // namespace psprecomp
