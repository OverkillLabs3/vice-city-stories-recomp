#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0214[4092] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 0, 0, 7, 0, 0, 0, 8, 9, 0, 0, 10, 0, 0, 0,
    11, 12, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 18, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 22, 0, 23, 0, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 29, 0, 30, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 41, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0,
    46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0,
    62, 0, 0, 63, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0,
    0, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0, 76, 0, 0, 77, 0, 0, 0, 78, 79, 0, 0, 0,
    0, 0, 0, 80, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0,
    0, 88, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 100, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 103, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0,
    115, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0,
    0, 0, 122, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0,
    0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0,
    0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0,
    0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 164, 0, 0, 0, 0, 165,
    0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 0,
    172, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 179, 0, 180, 181, 0, 0,
    0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0,
    191, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196,
    0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 208, 0, 0, 0, 209,
    0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 213, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 219, 0, 0, 220, 221, 222, 0, 223, 0, 0, 224, 0, 225, 0, 226, 0, 0, 0, 227, 0, 0,
    0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 233, 234, 235, 0, 0, 0,
    236, 0, 237, 0, 0, 0, 238, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0,
    0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 250, 0, 0, 251, 0, 252, 0, 0, 0,
    253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 258, 0, 259, 0, 0, 260,
    0, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0,
    268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 0, 0, 275, 0, 276, 0, 277, 0,
    278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284,
    0, 285, 0, 286, 0, 0, 0, 287, 0, 288, 0, 0, 0, 289, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0,
    293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 301, 0, 302,
    0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0,
    309, 0, 310, 0, 311, 0, 0, 0, 312, 0, 313, 0, 0, 0, 314, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 322, 0, 0, 323, 0, 0, 0, 324, 0, 0, 325, 0, 326, 0,
    0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 332, 0, 333, 0, 0, 334,
    0, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0,
    0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 347, 0, 0, 0, 348, 0, 349, 0, 0, 0, 350, 0,
    351, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 357, 0, 358, 0, 0,
    359, 0, 0, 0, 360, 361, 0, 0, 362, 0, 0, 0, 363, 364, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 367, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0,
    0, 372, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 375, 0, 376, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 380,
    0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 385, 386, 0, 387, 388, 0, 0, 0, 389, 0, 0, 390, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 393, 0, 394, 0, 0, 395, 0, 396, 0, 397, 0, 398,
    0, 0, 399, 0, 400, 0, 0, 401, 0, 0, 402, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0,
    0, 0, 407, 0, 408, 0, 0, 0, 409, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 415, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 420,
    421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 426,
    0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0,
    0, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 434, 0, 435, 0, 0, 436, 0, 437, 0, 0, 438, 439, 0, 440, 0, 0, 0, 441, 0,
    442, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 447, 0, 448, 0, 0, 449, 0, 450, 0,
    0, 0, 451, 0, 452, 0, 453, 0, 454, 0, 455, 0, 456, 0, 457, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0,
    462, 0, 0, 463, 0, 464, 465, 0, 466, 0, 467, 468, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0,
    473, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 476, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 0, 480, 0, 0, 481,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0,
    486, 0, 487, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0,
    494, 0, 495, 0, 0, 496, 0, 0, 497, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 502,
    0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 510,
    0, 511, 0, 0, 0, 0, 0, 0, 0, 512, 513, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0, 520, 0, 0, 0, 0, 521,
    0, 0, 0, 0, 522, 0, 0, 523, 0, 524, 0, 525, 0, 526, 527, 0, 0, 528, 0, 529, 530, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 532,
    0, 0, 533, 0, 0, 534, 0, 535, 536, 0, 537, 0, 0, 538, 0, 539, 540, 541, 542, 0, 543, 0, 544, 0, 0, 545, 0, 0, 546, 0, 547, 548,
    0, 549, 0, 0, 550, 0, 551, 552, 553, 554, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 559, 0,
    560, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 564, 0, 0, 565, 0,
    0, 0, 566, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 571, 0, 0, 572, 0, 0, 573, 0, 574, 0, 0, 575, 0, 576, 0, 577, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 580, 0, 0,
    0, 0, 0, 581, 582, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 586, 0,
    587, 0, 0, 0, 0, 0, 588, 0, 0, 589, 0, 0, 0, 590, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 596,
    0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 600, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    602, 0, 0, 0, 0, 0, 603, 0, 604, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 607,
    0, 608, 0, 609, 0, 610, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 617,
    0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 0, 620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0,
    623, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 0, 628,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0,
    0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0,
    636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 641, 0,
    0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647,
    0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0,
    652, 0, 0, 653, 0, 0, 0, 0, 654, 0, 0, 0, 0, 655, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0,
    0, 658, 0, 0, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 0, 667, 0, 668, 0, 0, 0, 0, 0, 0, 0, 669, 0,
    0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 0, 672, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 677,
    0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 679, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 682, 0,
    0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 690,
    0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0,
    0, 0, 0, 695, 0, 0, 696, 0, 0, 697, 698, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 701, 0, 0, 702,
    703, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 706, 0, 0, 707, 708, 0, 0, 0, 0, 709, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 711, 0, 0, 712, 713, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 716,
    0, 0, 717, 718, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 721, 0, 0, 722, 723, 0, 0, 0, 0, 724,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 0, 728, 0, 0, 0, 0, 729, 730,
    0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 734, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0,
    736, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 739, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 742, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0,
    746, 0, 0, 0, 747, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    750, 0, 0, 0, 751, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 753, 0, 754, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 756, 0, 0, 757,
    0, 758, 0, 759, 760, 0, 0, 0, 0, 0, 761, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 764, 0, 765, 0, 0, 0,
    766, 0, 767, 0, 0, 768, 0, 769, 0, 0, 770, 0, 771, 0, 0, 772, 0, 0, 773, 0, 774, 0, 775, 0, 0, 0, 776, 0, 0, 777, 0, 778,
    0, 0, 0, 779, 0, 780, 0, 0, 781, 0, 782, 0, 783, 0, 0, 784, 0, 0, 785, 0, 786, 0, 0, 787, 0, 788, 0, 0, 789, 0, 790, 0,
    0, 791, 0, 792, 0, 793, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 796, 0, 797, 0, 0,
    0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 800, 801, 0, 0, 0, 802, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 804, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 806, 0, 807, 0, 0, 808, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 810, 811, 812, 0, 0, 0, 813, 814, 0, 815, 0, 0, 816, 0, 817, 0, 0, 0, 818, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 820, 821, 0, 0, 822, 0, 0, 0, 823, 0, 0, 824, 0, 0, 825, 0, 826, 0, 0, 827,
    0, 0, 828, 829, 0, 830, 0, 0, 0, 0, 831, 0, 0, 0, 832, 0, 0, 833, 0, 834, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 839, 0,
    0, 0, 0, 840, 0, 0, 0, 0, 0, 841, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 843, 0, 844, 0, 845, 0, 0, 0, 0, 0,
    846, 0, 0, 0, 0, 0, 847, 0, 0, 848, 0, 0, 0, 0, 849, 0, 0, 0, 0, 0, 0, 0, 850, 0, 851, 0, 0, 0, 0, 852, 0, 0,
    0, 0, 0, 853, 0, 854, 0, 855, 0, 856, 0, 857, 0, 0, 0, 0, 0, 0, 0, 858, 0, 0, 859, 0, 0, 860, 0, 0, 0, 0, 0, 861,
    0, 862, 0, 0, 0, 0, 0, 0, 0, 863, 0, 0, 864, 0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 0, 868, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 869, 870, 0, 0, 871, 0, 0, 0, 872, 0, 0, 0, 873, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 874, 0, 0, 0, 0, 0, 875, 0, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 877, 0, 0, 0, 878, 0, 0, 0, 879,
};
void recomp_unit_0214_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B5C000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0214[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B5C000;
    case 2u: goto L_08B5C00C;
    case 3u: goto L_08B5C01C;
    case 4u: goto L_08B5C034;
    case 5u: goto L_08B5C03C;
    case 6u: goto L_08B5C044;
    case 7u: goto L_08B5C050;
    case 8u: goto L_08B5C060;
    case 9u: goto L_08B5C064;
    case 10u: goto L_08B5C070;
    case 11u: goto L_08B5C080;
    case 12u: goto L_08B5C084;
    case 13u: goto L_08B5C090;
    case 14u: goto L_08B5C0A4;
    case 15u: goto L_08B5C0D8;
    case 16u: goto L_08B5C128;
    case 17u: goto L_08B5C130;
    case 18u: goto L_08B5C134;
    case 19u: goto L_08B5C138;
    case 20u: goto L_08B5C164;
    case 21u: goto L_08B5C188;
    case 22u: goto L_08B5C190;
    case 23u: goto L_08B5C198;
    case 24u: goto L_08B5C1A4;
    case 25u: goto L_08B5C1AC;
    case 26u: goto L_08B5C1B4;
    case 27u: goto L_08B5C1BC;
    case 28u: goto L_08B5C1C4;
    case 29u: goto L_08B5C1C8;
    case 30u: goto L_08B5C1D0;
    case 31u: goto L_08B5C1E0;
    case 32u: goto L_08B5C1E8;
    case 33u: goto L_08B5C1F0;
    case 34u: goto L_08B5C214;
    case 35u: goto L_08B5C220;
    case 36u: goto L_08B5C230;
    case 37u: goto L_08B5C240;
    case 38u: goto L_08B5C248;
    case 39u: goto L_08B5C258;
    case 40u: goto L_08B5C268;
    case 41u: goto L_08B5C26C;
    case 42u: goto L_08B5C280;
    case 43u: goto L_08B5C2A8;
    case 44u: goto L_08B5C2E0;
    case 45u: goto L_08B5C2F0;
    case 46u: goto L_08B5C300;
    case 47u: goto L_08B5C31C;
    case 48u: goto L_08B5C350;
    case 49u: goto L_08B5C354;
    case 50u: goto L_08B5C380;
    case 51u: goto L_08B5C390;
    case 52u: goto L_08B5C39C;
    case 53u: goto L_08B5C3AC;
    case 54u: goto L_08B5C3D8;
    case 55u: goto L_08B5C404;
    case 56u: goto L_08B5C420;
    case 57u: goto L_08B5C42C;
    case 58u: goto L_08B5C4B8;
    case 59u: goto L_08B5C4D0;
    case 60u: goto L_08B5C4E8;
    case 61u: goto L_08B5C4F4;
    case 62u: goto L_08B5C500;
    case 63u: goto L_08B5C50C;
    case 64u: goto L_08B5C518;
    case 65u: goto L_08B5C528;
    case 66u: goto L_08B5C538;
    case 67u: goto L_08B5C548;
    case 68u: goto L_08B5C564;
    case 69u: goto L_08B5C574;
    case 70u: goto L_08B5C58C;
    case 71u: goto L_08B5C594;
    case 72u: goto L_08B5C59C;
    case 73u: goto L_08B5C5AC;
    case 74u: goto L_08B5C5BC;
    case 75u: goto L_08B5C5C8;
    case 76u: goto L_08B5C5D0;
    case 77u: goto L_08B5C5DC;
    case 78u: goto L_08B5C5EC;
    case 79u: goto L_08B5C5F0;
    case 80u: goto L_08B5C60C;
    case 81u: goto L_08B5C61C;
    case 82u: goto L_08B5C624;
    case 83u: goto L_08B5C63C;
    case 84u: goto L_08B5C648;
    case 85u: goto L_08B5C654;
    case 86u: goto L_08B5C660;
    case 87u: goto L_08B5C66C;
    case 88u: goto L_08B5C684;
    case 89u: goto L_08B5C690;
    case 90u: goto L_08B5C698;
    case 91u: goto L_08B5C6A0;
    case 92u: goto L_08B5C6B0;
    case 93u: goto L_08B5C6C4;
    case 94u: goto L_08B5C6E0;
    case 95u: goto L_08B5C6E8;
    case 96u: goto L_08B5C6F8;
    case 97u: goto L_08B5C724;
    case 98u: goto L_08B5C734;
    case 99u: goto L_08B5C73C;
    case 100u: goto L_08B5C748;
    case 101u: goto L_08B5C74C;
    case 102u: goto L_08B5C778;
    case 103u: goto L_08B5C788;
    case 104u: goto L_08B5C794;
    case 105u: goto L_08B5C7A4;
    case 106u: goto L_08B5C7B4;
    case 107u: goto L_08B5C7BC;
    case 108u: goto L_08B5C7C8;
    case 109u: goto L_08B5C810;
    case 110u: goto L_08B5C828;
    case 111u: goto L_08B5C838;
    case 112u: goto L_08B5C840;
    case 113u: goto L_08B5C860;
    case 114u: goto L_08B5C868;
    case 115u: goto L_08B5C880;
    case 116u: goto L_08B5C888;
    case 117u: goto L_08B5C8A4;
    case 118u: goto L_08B5C8B0;
    case 119u: goto L_08B5C8B8;
    case 120u: goto L_08B5C8C0;
    case 121u: goto L_08B5C8F4;
    case 122u: goto L_08B5C908;
    case 123u: goto L_08B5C910;
    case 124u: goto L_08B5C91C;
    case 125u: goto L_08B5C940;
    case 126u: goto L_08B5C94C;
    case 127u: goto L_08B5C964;
    case 128u: goto L_08B5C96C;
    case 129u: goto L_08B5C984;
    case 130u: goto L_08B5C998;
    case 131u: goto L_08B5C9B0;
    case 132u: goto L_08B5C9C0;
    case 133u: goto L_08B5C9C8;
    case 134u: goto L_08B5C9E8;
    case 135u: goto L_08B5C9F0;
    case 136u: goto L_08B5CA08;
    case 137u: goto L_08B5CA10;
    case 138u: goto L_08B5CA28;
    case 139u: goto L_08B5CA34;
    case 140u: goto L_08B5CA3C;
    case 141u: goto L_08B5CA44;
    case 142u: goto L_08B5CA54;
    case 143u: goto L_08B5CA8C;
    case 144u: goto L_08B5CAB4;
    case 145u: goto L_08B5CABC;
    case 146u: goto L_08B5CAC8;
    case 147u: goto L_08B5CADC;
    case 148u: goto L_08B5CAEC;
    case 149u: goto L_08B5CAF8;
    case 150u: goto L_08B5CB04;
    case 151u: goto L_08B5CB0C;
    case 152u: goto L_08B5CB20;
    case 153u: goto L_08B5CB34;
    case 154u: goto L_08B5CB50;
    case 155u: goto L_08B5CB64;
    case 156u: goto L_08B5CB6C;
    case 157u: goto L_08B5CB8C;
    case 158u: goto L_08B5CB94;
    case 159u: goto L_08B5CBAC;
    case 160u: goto L_08B5CBB4;
    case 161u: goto L_08B5CBCC;
    case 162u: goto L_08B5CBD8;
    case 163u: goto L_08B5CBE0;
    case 164u: goto L_08B5CBE8;
    case 165u: goto L_08B5CBFC;
    case 166u: goto L_08B5CC18;
    case 167u: goto L_08B5CC30;
    case 168u: goto L_08B5CC38;
    case 169u: goto L_08B5CC58;
    case 170u: goto L_08B5CC60;
    case 171u: goto L_08B5CC78;
    case 172u: goto L_08B5CC80;
    case 173u: goto L_08B5CC98;
    case 174u: goto L_08B5CCA4;
    case 175u: goto L_08B5CCAC;
    case 176u: goto L_08B5CCB4;
    case 177u: goto L_08B5CCC8;
    case 178u: goto L_08B5CCE0;
    case 179u: goto L_08B5CCE8;
    case 180u: goto L_08B5CCF0;
    case 181u: goto L_08B5CCF4;
    case 182u: goto L_08B5CD0C;
    case 183u: goto L_08B5CD14;
    case 184u: goto L_08B5CD2C;
    case 185u: goto L_08B5CD34;
    case 186u: goto L_08B5CD3C;
    case 187u: goto L_08B5CD44;
    case 188u: goto L_08B5CD4C;
    case 189u: goto L_08B5CD5C;
    case 190u: goto L_08B5CD78;
    case 191u: goto L_08B5CD80;
    case 192u: goto L_08B5CD8C;
    case 193u: goto L_08B5CD94;
    case 194u: goto L_08B5CDB8;
    case 195u: goto L_08B5CDF4;
    case 196u: goto L_08B5CDFC;
    case 197u: goto L_08B5CE04;
    case 198u: goto L_08B5CE14;
    case 199u: goto L_08B5CE20;
    case 200u: goto L_08B5CE4C;
    case 201u: goto L_08B5CE50;
    case 202u: goto L_08B5CE8C;
    case 203u: goto L_08B5CECC;
    case 204u: goto L_08B5CEFC;
    case 205u: goto L_08B5CF30;
    case 206u: goto L_08B5CF60;
    case 207u: goto L_08B5CF68;
    case 208u: goto L_08B5CF6C;
    case 209u: goto L_08B5CF7C;
    case 210u: goto L_08B5CF88;
    case 211u: goto L_08B5CF9C;
    case 212u: goto L_08B5CFB8;
    case 213u: goto L_08B5CFBC;
    case 214u: goto L_08B5CFD4;
    case 215u: goto L_08B5CFDC;
    case 216u: goto L_08B5D00C;
    case 217u: goto L_08B5D018;
    case 218u: goto L_08B5D024;
    case 219u: goto L_08B5D02C;
    case 220u: goto L_08B5D038;
    case 221u: goto L_08B5D03C;
    case 222u: goto L_08B5D040;
    case 223u: goto L_08B5D048;
    case 224u: goto L_08B5D054;
    case 225u: goto L_08B5D05C;
    case 226u: goto L_08B5D064;
    case 227u: goto L_08B5D074;
    case 228u: goto L_08B5D084;
    case 229u: goto L_08B5D0A8;
    case 230u: goto L_08B5D0B8;
    case 231u: goto L_08B5D0D8;
    case 232u: goto L_08B5D0E0;
    case 233u: goto L_08B5D0E8;
    case 234u: goto L_08B5D0EC;
    case 235u: goto L_08B5D0F0;
    case 236u: goto L_08B5D100;
    case 237u: goto L_08B5D108;
    case 238u: goto L_08B5D118;
    case 239u: goto L_08B5D120;
    case 240u: goto L_08B5D130;
    case 241u: goto L_08B5D140;
    case 242u: goto L_08B5D168;
    case 243u: goto L_08B5D174;
    case 244u: goto L_08B5D198;
    case 245u: goto L_08B5D1A4;
    case 246u: goto L_08B5D1AC;
    case 247u: goto L_08B5D1BC;
    case 248u: goto L_08B5D1CC;
    case 249u: goto L_08B5D1D8;
    case 250u: goto L_08B5D1DC;
    case 251u: goto L_08B5D1E8;
    case 252u: goto L_08B5D1F0;
    case 253u: goto L_08B5D200;
    case 254u: goto L_08B5D210;
    case 255u: goto L_08B5D234;
    case 256u: goto L_08B5D240;
    case 257u: goto L_08B5D260;
    case 258u: goto L_08B5D268;
    case 259u: goto L_08B5D270;
    case 260u: goto L_08B5D27C;
    case 261u: goto L_08B5D28C;
    case 262u: goto L_08B5D298;
    case 263u: goto L_08B5D2A4;
    case 264u: goto L_08B5D2B0;
    case 265u: goto L_08B5D2C0;
    case 266u: goto L_08B5D2D0;
    case 267u: goto L_08B5D2F4;
    case 268u: goto L_08B5D300;
    case 269u: goto L_08B5D320;
    case 270u: goto L_08B5D32C;
    case 271u: goto L_08B5D334;
    case 272u: goto L_08B5D340;
    case 273u: goto L_08B5D350;
    case 274u: goto L_08B5D358;
    case 275u: goto L_08B5D368;
    case 276u: goto L_08B5D370;
    case 277u: goto L_08B5D378;
    case 278u: goto L_08B5D380;
    case 279u: goto L_08B5D390;
    case 280u: goto L_08B5D3A0;
    case 281u: goto L_08B5D3C4;
    case 282u: goto L_08B5D3D4;
    case 283u: goto L_08B5D3F4;
    case 284u: goto L_08B5D3FC;
    case 285u: goto L_08B5D404;
    case 286u: goto L_08B5D40C;
    case 287u: goto L_08B5D41C;
    case 288u: goto L_08B5D424;
    case 289u: goto L_08B5D434;
    case 290u: goto L_08B5D43C;
    case 291u: goto L_08B5D44C;
    case 292u: goto L_08B5D45C;
    case 293u: goto L_08B5D480;
    case 294u: goto L_08B5D48C;
    case 295u: goto L_08B5D4AC;
    case 296u: goto L_08B5D4B4;
    case 297u: goto L_08B5D4BC;
    case 298u: goto L_08B5D4C8;
    case 299u: goto L_08B5D4D8;
    case 300u: goto L_08B5D4E0;
    case 301u: goto L_08B5D4F4;
    case 302u: goto L_08B5D4FC;
    case 303u: goto L_08B5D504;
    case 304u: goto L_08B5D514;
    case 305u: goto L_08B5D524;
    case 306u: goto L_08B5D548;
    case 307u: goto L_08B5D558;
    case 308u: goto L_08B5D578;
    case 309u: goto L_08B5D580;
    case 310u: goto L_08B5D588;
    case 311u: goto L_08B5D590;
    case 312u: goto L_08B5D5A0;
    case 313u: goto L_08B5D5A8;
    case 314u: goto L_08B5D5B8;
    case 315u: goto L_08B5D5C0;
    case 316u: goto L_08B5D5D0;
    case 317u: goto L_08B5D5E0;
    case 318u: goto L_08B5D608;
    case 319u: goto L_08B5D614;
    case 320u: goto L_08B5D638;
    case 321u: goto L_08B5D640;
    case 322u: goto L_08B5D648;
    case 323u: goto L_08B5D654;
    case 324u: goto L_08B5D664;
    case 325u: goto L_08B5D670;
    case 326u: goto L_08B5D678;
    case 327u: goto L_08B5D688;
    case 328u: goto L_08B5D698;
    case 329u: goto L_08B5D6B8;
    case 330u: goto L_08B5D6C8;
    case 331u: goto L_08B5D6E0;
    case 332u: goto L_08B5D6E8;
    case 333u: goto L_08B5D6F0;
    case 334u: goto L_08B5D6FC;
    case 335u: goto L_08B5D70C;
    case 336u: goto L_08B5D718;
    case 337u: goto L_08B5D724;
    case 338u: goto L_08B5D73C;
    case 339u: goto L_08B5D744;
    case 340u: goto L_08B5D754;
    case 341u: goto L_08B5D764;
    case 342u: goto L_08B5D788;
    case 343u: goto L_08B5D798;
    case 344u: goto L_08B5D7B8;
    case 345u: goto L_08B5D7C0;
    case 346u: goto L_08B5D7C8;
    case 347u: goto L_08B5D7D0;
    case 348u: goto L_08B5D7E0;
    case 349u: goto L_08B5D7E8;
    case 350u: goto L_08B5D7F8;
    case 351u: goto L_08B5D800;
    case 352u: goto L_08B5D810;
    case 353u: goto L_08B5D820;
    case 354u: goto L_08B5D83C;
    case 355u: goto L_08B5D84C;
    case 356u: goto L_08B5D864;
    case 357u: goto L_08B5D86C;
    case 358u: goto L_08B5D874;
    case 359u: goto L_08B5D880;
    case 360u: goto L_08B5D890;
    case 361u: goto L_08B5D894;
    case 362u: goto L_08B5D8A0;
    case 363u: goto L_08B5D8B0;
    case 364u: goto L_08B5D8B4;
    case 365u: goto L_08B5D8C0;
    case 366u: goto L_08B5D8D4;
    case 367u: goto L_08B5D908;
    case 368u: goto L_08B5D918;
    case 369u: goto L_08B5D924;
    case 370u: goto L_08B5D960;
    case 371u: goto L_08B5D968;
    case 372u: goto L_08B5D984;
    case 373u: goto L_08B5D9A4;
    case 374u: goto L_08B5D9B4;
    case 375u: goto L_08B5D9B8;
    case 376u: goto L_08B5D9C0;
    case 377u: goto L_08B5D9CC;
    case 378u: goto L_08B5D9DC;
    case 379u: goto L_08B5D9F4;
    case 380u: goto L_08B5D9FC;
    case 381u: goto L_08B5DA08;
    case 382u: goto L_08B5DA1C;
    case 383u: goto L_08B5DA28;
    case 384u: goto L_08B5DA34;
    case 385u: goto L_08B5DA4C;
    case 386u: goto L_08B5DA50;
    case 387u: goto L_08B5DA58;
    case 388u: goto L_08B5DA5C;
    case 389u: goto L_08B5DA6C;
    case 390u: goto L_08B5DA78;
    case 391u: goto L_08B5DAC0;
    case 392u: goto L_08B5DAC8;
    case 393u: goto L_08B5DAD0;
    case 394u: goto L_08B5DAD8;
    case 395u: goto L_08B5DAE4;
    case 396u: goto L_08B5DAEC;
    case 397u: goto L_08B5DAF4;
    case 398u: goto L_08B5DAFC;
    case 399u: goto L_08B5DB08;
    case 400u: goto L_08B5DB10;
    case 401u: goto L_08B5DB1C;
    case 402u: goto L_08B5DB28;
    case 403u: goto L_08B5DB30;
    case 404u: goto L_08B5DB44;
    case 405u: goto L_08B5DB6C;
    case 406u: goto L_08B5DB74;
    case 407u: goto L_08B5DB88;
    case 408u: goto L_08B5DB90;
    case 409u: goto L_08B5DBA0;
    case 410u: goto L_08B5DBA8;
    case 411u: goto L_08B5DBB4;
    case 412u: goto L_08B5DBE0;
    case 413u: goto L_08B5DC24;
    case 414u: goto L_08B5DC2C;
    case 415u: goto L_08B5DC3C;
    case 416u: goto L_08B5DC44;
    case 417u: goto L_08B5DC50;
    case 418u: goto L_08B5DC5C;
    case 419u: goto L_08B5DC74;
    case 420u: goto L_08B5DC7C;
    case 421u: goto L_08B5DC80;
    case 422u: goto L_08B5DCA4;
    case 423u: goto L_08B5DCC8;
    case 424u: goto L_08B5DCD0;
    case 425u: goto L_08B5DCF4;
    case 426u: goto L_08B5DCFC;
    case 427u: goto L_08B5DD20;
    case 428u: goto L_08B5DD38;
    case 429u: goto L_08B5DD40;
    case 430u: goto L_08B5DD64;
    case 431u: goto L_08B5DD78;
    case 432u: goto L_08B5DD94;
    case 433u: goto L_08B5DDA0;
    case 434u: goto L_08B5DDB4;
    case 435u: goto L_08B5DDBC;
    case 436u: goto L_08B5DDC8;
    case 437u: goto L_08B5DDD0;
    case 438u: goto L_08B5DDDC;
    case 439u: goto L_08B5DDE0;
    case 440u: goto L_08B5DDE8;
    case 441u: goto L_08B5DDF8;
    case 442u: goto L_08B5DE00;
    case 443u: goto L_08B5DE10;
    case 444u: goto L_08B5DE1C;
    case 445u: goto L_08B5DE2C;
    case 446u: goto L_08B5DE3C;
    case 447u: goto L_08B5DE5C;
    case 448u: goto L_08B5DE64;
    case 449u: goto L_08B5DE70;
    case 450u: goto L_08B5DE78;
    case 451u: goto L_08B5DE88;
    case 452u: goto L_08B5DE90;
    case 453u: goto L_08B5DE98;
    case 454u: goto L_08B5DEA0;
    case 455u: goto L_08B5DEA8;
    case 456u: goto L_08B5DEB0;
    case 457u: goto L_08B5DEB8;
    case 458u: goto L_08B5DEC0;
    case 459u: goto L_08B5DED0;
    case 460u: goto L_08B5DEE8;
    case 461u: goto L_08B5DEF0;
    case 462u: goto L_08B5DF00;
    case 463u: goto L_08B5DF0C;
    case 464u: goto L_08B5DF14;
    case 465u: goto L_08B5DF18;
    case 466u: goto L_08B5DF20;
    case 467u: goto L_08B5DF28;
    case 468u: goto L_08B5DF2C;
    case 469u: goto L_08B5DF34;
    case 470u: goto L_08B5DF54;
    case 471u: goto L_08B5DF60;
    case 472u: goto L_08B5DF6C;
    case 473u: goto L_08B5DF80;
    case 474u: goto L_08B5DF8C;
    case 475u: goto L_08B5DF9C;
    case 476u: goto L_08B5DFAC;
    case 477u: goto L_08B5DFB4;
    case 478u: goto L_08B5DFC8;
    case 479u: goto L_08B5DFE4;
    case 480u: goto L_08B5DFF0;
    case 481u: goto L_08B5DFFC;
    case 482u: goto L_08B5E040;
    case 483u: goto L_08B5E048;
    case 484u: goto L_08B5E060;
    case 485u: goto L_08B5E078;
    case 486u: goto L_08B5E080;
    case 487u: goto L_08B5E088;
    case 488u: goto L_08B5E094;
    case 489u: goto L_08B5E0A8;
    case 490u: goto L_08B5E0B4;
    case 491u: goto L_08B5E0CC;
    case 492u: goto L_08B5E0E0;
    case 493u: goto L_08B5E0F8;
    case 494u: goto L_08B5E100;
    case 495u: goto L_08B5E108;
    case 496u: goto L_08B5E114;
    case 497u: goto L_08B5E120;
    case 498u: goto L_08B5E12C;
    case 499u: goto L_08B5E13C;
    case 500u: goto L_08B5E150;
    case 501u: goto L_08B5E158;
    case 502u: goto L_08B5E17C;
    case 503u: goto L_08B5E190;
    case 504u: goto L_08B5E1A4;
    case 505u: goto L_08B5E1BC;
    case 506u: goto L_08B5E1C4;
    case 507u: goto L_08B5E1CC;
    case 508u: goto L_08B5E1E8;
    case 509u: goto L_08B5E1F0;
    case 510u: goto L_08B5E1FC;
    case 511u: goto L_08B5E204;
    case 512u: goto L_08B5E224;
    case 513u: goto L_08B5E228;
    case 514u: goto L_08B5E22C;
    case 515u: goto L_08B5E254;
    case 516u: goto L_08B5E2AC;
    case 517u: goto L_08B5E2BC;
    case 518u: goto L_08B5E2D8;
    case 519u: goto L_08B5E2E0;
    case 520u: goto L_08B5E2E8;
    case 521u: goto L_08B5E2FC;
    case 522u: goto L_08B5E310;
    case 523u: goto L_08B5E31C;
    case 524u: goto L_08B5E324;
    case 525u: goto L_08B5E32C;
    case 526u: goto L_08B5E334;
    case 527u: goto L_08B5E338;
    case 528u: goto L_08B5E344;
    case 529u: goto L_08B5E34C;
    case 530u: goto L_08B5E350;
    case 531u: goto L_08B5E374;
    case 532u: goto L_08B5E37C;
    case 533u: goto L_08B5E388;
    case 534u: goto L_08B5E394;
    case 535u: goto L_08B5E39C;
    case 536u: goto L_08B5E3A0;
    case 537u: goto L_08B5E3A8;
    case 538u: goto L_08B5E3B4;
    case 539u: goto L_08B5E3BC;
    case 540u: goto L_08B5E3C0;
    case 541u: goto L_08B5E3C4;
    case 542u: goto L_08B5E3C8;
    case 543u: goto L_08B5E3D0;
    case 544u: goto L_08B5E3D8;
    case 545u: goto L_08B5E3E4;
    case 546u: goto L_08B5E3F0;
    case 547u: goto L_08B5E3F8;
    case 548u: goto L_08B5E3FC;
    case 549u: goto L_08B5E404;
    case 550u: goto L_08B5E410;
    case 551u: goto L_08B5E418;
    case 552u: goto L_08B5E41C;
    case 553u: goto L_08B5E420;
    case 554u: goto L_08B5E424;
    case 555u: goto L_08B5E42C;
    case 556u: goto L_08B5E440;
    case 557u: goto L_08B5E454;
    case 558u: goto L_08B5E46C;
    case 559u: goto L_08B5E478;
    case 560u: goto L_08B5E480;
    case 561u: goto L_08B5E4A0;
    case 562u: goto L_08B5E4B0;
    case 563u: goto L_08B5E4D4;
    case 564u: goto L_08B5E4EC;
    case 565u: goto L_08B5E4F8;
    case 566u: goto L_08B5E508;
    case 567u: goto L_08B5E510;
    case 568u: goto L_08B5E534;
    case 569u: goto L_08B5E53C;
    case 570u: goto L_08B5E55C;
    case 571u: goto L_08B5E584;
    case 572u: goto L_08B5E590;
    case 573u: goto L_08B5E59C;
    case 574u: goto L_08B5E5A4;
    case 575u: goto L_08B5E5B0;
    case 576u: goto L_08B5E5B8;
    case 577u: goto L_08B5E5C0;
    case 578u: goto L_08B5E5C8;
    case 579u: goto L_08B5E5F0;
    case 580u: goto L_08B5E5F4;
    case 581u: goto L_08B5E60C;
    case 582u: goto L_08B5E610;
    case 583u: goto L_08B5E618;
    case 584u: goto L_08B5E648;
    case 585u: goto L_08B5E658;
    case 586u: goto L_08B5E678;
    case 587u: goto L_08B5E680;
    case 588u: goto L_08B5E698;
    case 589u: goto L_08B5E6A4;
    case 590u: goto L_08B5E6B4;
    case 591u: goto L_08B5E6C0;
    case 592u: goto L_08B5E714;
    case 593u: goto L_08B5E72C;
    case 594u: goto L_08B5E744;
    case 595u: goto L_08B5E774;
    case 596u: goto L_08B5E77C;
    case 597u: goto L_08B5E7A0;
    case 598u: goto L_08B5E7B8;
    case 599u: goto L_08B5E7D4;
    case 600u: goto L_08B5E804;
    case 601u: goto L_08B5E814;
    case 602u: goto L_08B5E880;
    case 603u: goto L_08B5E898;
    case 604u: goto L_08B5E8A0;
    case 605u: goto L_08B5E8AC;
    case 606u: goto L_08B5E8DC;
    case 607u: goto L_08B5E8FC;
    case 608u: goto L_08B5E904;
    case 609u: goto L_08B5E90C;
    case 610u: goto L_08B5E914;
    case 611u: goto L_08B5E934;
    case 612u: goto L_08B5E954;
    case 613u: goto L_08B5E968;
    case 614u: goto L_08B5E998;
    case 615u: goto L_08B5E9CC;
    case 616u: goto L_08B5E9DC;
    case 617u: goto L_08B5E9FC;
    case 618u: goto L_08B5EA14;
    case 619u: goto L_08B5EA28;
    case 620u: goto L_08B5EA34;
    case 621u: goto L_08B5EA48;
    case 622u: goto L_08B5EA78;
    case 623u: goto L_08B5EA80;
    case 624u: goto L_08B5EAA0;
    case 625u: goto L_08B5EAC0;
    case 626u: goto L_08B5EAD4;
    case 627u: goto L_08B5EAE8;
    case 628u: goto L_08B5EAFC;
    case 629u: goto L_08B5EB2C;
    case 630u: goto L_08B5EB44;
    case 631u: goto L_08B5EB60;
    case 632u: goto L_08B5EB70;
    case 633u: goto L_08B5EB94;
    case 634u: goto L_08B5EBBC;
    case 635u: goto L_08B5EBE8;
    case 636u: goto L_08B5EC00;
    case 637u: goto L_08B5EC14;
    case 638u: goto L_08B5EC2C;
    case 639u: goto L_08B5EC40;
    case 640u: goto L_08B5EC60;
    case 641u: goto L_08B5EC78;
    case 642u: goto L_08B5EC8C;
    case 643u: goto L_08B5ECA4;
    case 644u: goto L_08B5ECB8;
    case 645u: goto L_08B5ECD0;
    case 646u: goto L_08B5ECE4;
    case 647u: goto L_08B5ECFC;
    case 648u: goto L_08B5ED20;
    case 649u: goto L_08B5ED3C;
    case 650u: goto L_08B5ED50;
    case 651u: goto L_08B5ED6C;
    case 652u: goto L_08B5ED80;
    case 653u: goto L_08B5ED8C;
    case 654u: goto L_08B5EDA0;
    case 655u: goto L_08B5EDB4;
    case 656u: goto L_08B5EDBC;
    case 657u: goto L_08B5EDE4;
    case 658u: goto L_08B5EE04;
    case 659u: goto L_08B5EE18;
    case 660u: goto L_08B5EE2C;
    case 661u: goto L_08B5EE40;
    case 662u: goto L_08B5EE54;
    case 663u: goto L_08B5EE84;
    case 664u: goto L_08B5EE9C;
    case 665u: goto L_08B5EEB0;
    case 666u: goto L_08B5EEBC;
    case 667u: goto L_08B5EED0;
    case 668u: goto L_08B5EED8;
    case 669u: goto L_08B5EEF8;
    case 670u: goto L_08B5EF18;
    case 671u: goto L_08B5EF2C;
    case 672u: goto L_08B5EF40;
    case 673u: goto L_08B5EF54;
    case 674u: goto L_08B5EF84;
    case 675u: goto L_08B5EFCC;
    case 676u: goto L_08B5EFE4;
    case 677u: goto L_08B5EFFC;
    case 678u: goto L_08B5F020;
    case 679u: goto L_08B5F028;
    case 680u: goto L_08B5F044;
    case 681u: goto L_08B5F05C;
    case 682u: goto L_08B5F078;
    case 683u: goto L_08B5F09C;
    case 684u: goto L_08B5F0AC;
    case 685u: goto L_08B5F0C0;
    case 686u: goto L_08B5F0E4;
    case 687u: goto L_08B5F11C;
    case 688u: goto L_08B5F150;
    case 689u: goto L_08B5F164;
    case 690u: goto L_08B5F17C;
    case 691u: goto L_08B5F190;
    case 692u: goto L_08B5F1B0;
    case 693u: goto L_08B5F1C4;
    case 694u: goto L_08B5F1E8;
    case 695u: goto L_08B5F20C;
    case 696u: goto L_08B5F218;
    case 697u: goto L_08B5F224;
    case 698u: goto L_08B5F228;
    case 699u: goto L_08B5F23C;
    case 700u: goto L_08B5F264;
    case 701u: goto L_08B5F270;
    case 702u: goto L_08B5F27C;
    case 703u: goto L_08B5F280;
    case 704u: goto L_08B5F294;
    case 705u: goto L_08B5F2C0;
    case 706u: goto L_08B5F2CC;
    case 707u: goto L_08B5F2D8;
    case 708u: goto L_08B5F2DC;
    case 709u: goto L_08B5F2F0;
    case 710u: goto L_08B5F31C;
    case 711u: goto L_08B5F328;
    case 712u: goto L_08B5F334;
    case 713u: goto L_08B5F338;
    case 714u: goto L_08B5F34C;
    case 715u: goto L_08B5F370;
    case 716u: goto L_08B5F37C;
    case 717u: goto L_08B5F388;
    case 718u: goto L_08B5F38C;
    case 719u: goto L_08B5F3A0;
    case 720u: goto L_08B5F3CC;
    case 721u: goto L_08B5F3D8;
    case 722u: goto L_08B5F3E4;
    case 723u: goto L_08B5F3E8;
    case 724u: goto L_08B5F3FC;
    case 725u: goto L_08B5F430;
    case 726u: goto L_08B5F43C;
    case 727u: goto L_08B5F450;
    case 728u: goto L_08B5F464;
    case 729u: goto L_08B5F478;
    case 730u: goto L_08B5F47C;
    case 731u: goto L_08B5F48C;
    case 732u: goto L_08B5F4A8;
    case 733u: goto L_08B5F4C8;
    case 734u: goto L_08B5F4D4;
    case 735u: goto L_08B5F4F0;
    case 736u: goto L_08B5F500;
    case 737u: goto L_08B5F508;
    case 738u: goto L_08B5F52C;
    case 739u: goto L_08B5F534;
    case 740u: goto L_08B5F54C;
    case 741u: goto L_08B5F5A0;
    case 742u: goto L_08B5F5A8;
    case 743u: goto L_08B5F5B8;
    case 744u: goto L_08B5F5D4;
    case 745u: goto L_08B5F5F4;
    case 746u: goto L_08B5F600;
    case 747u: goto L_08B5F610;
    case 748u: goto L_08B5F620;
    case 749u: goto L_08B5F634;
    case 750u: goto L_08B5F680;
    case 751u: goto L_08B5F690;
    case 752u: goto L_08B5F6A0;
    case 753u: goto L_08B5F6BC;
    case 754u: goto L_08B5F6C4;
    case 755u: goto L_08B5F6E0;
    case 756u: goto L_08B5F6F0;
    case 757u: goto L_08B5F6FC;
    case 758u: goto L_08B5F704;
    case 759u: goto L_08B5F70C;
    case 760u: goto L_08B5F710;
    case 761u: goto L_08B5F728;
    case 762u: goto L_08B5F738;
    case 763u: goto L_08B5F758;
    case 764u: goto L_08B5F768;
    case 765u: goto L_08B5F770;
    case 766u: goto L_08B5F780;
    case 767u: goto L_08B5F788;
    case 768u: goto L_08B5F794;
    case 769u: goto L_08B5F79C;
    case 770u: goto L_08B5F7A8;
    case 771u: goto L_08B5F7B0;
    case 772u: goto L_08B5F7BC;
    case 773u: goto L_08B5F7C8;
    case 774u: goto L_08B5F7D0;
    case 775u: goto L_08B5F7D8;
    case 776u: goto L_08B5F7E8;
    case 777u: goto L_08B5F7F4;
    case 778u: goto L_08B5F7FC;
    case 779u: goto L_08B5F80C;
    case 780u: goto L_08B5F814;
    case 781u: goto L_08B5F820;
    case 782u: goto L_08B5F828;
    case 783u: goto L_08B5F830;
    case 784u: goto L_08B5F83C;
    case 785u: goto L_08B5F848;
    case 786u: goto L_08B5F850;
    case 787u: goto L_08B5F85C;
    case 788u: goto L_08B5F864;
    case 789u: goto L_08B5F870;
    case 790u: goto L_08B5F878;
    case 791u: goto L_08B5F884;
    case 792u: goto L_08B5F88C;
    case 793u: goto L_08B5F894;
    case 794u: goto L_08B5F8B4;
    case 795u: goto L_08B5F8D0;
    case 796u: goto L_08B5F8EC;
    case 797u: goto L_08B5F8F4;
    case 798u: goto L_08B5F918;
    case 799u: goto L_08B5F938;
    case 800u: goto L_08B5F964;
    case 801u: goto L_08B5F968;
    case 802u: goto L_08B5F978;
    case 803u: goto L_08B5F9A0;
    case 804u: goto L_08B5F9B0;
    case 805u: goto L_08B5F9B8;
    case 806u: goto L_08B5FA18;
    case 807u: goto L_08B5FA20;
    case 808u: goto L_08B5FA2C;
    case 809u: goto L_08B5FA3C;
    case 810u: goto L_08B5FA94;
    case 811u: goto L_08B5FA98;
    case 812u: goto L_08B5FA9C;
    case 813u: goto L_08B5FAAC;
    case 814u: goto L_08B5FAB0;
    case 815u: goto L_08B5FAB8;
    case 816u: goto L_08B5FAC4;
    case 817u: goto L_08B5FACC;
    case 818u: goto L_08B5FADC;
    case 819u: goto L_08B5FB0C;
    case 820u: goto L_08B5FB30;
    case 821u: goto L_08B5FB34;
    case 822u: goto L_08B5FB40;
    case 823u: goto L_08B5FB50;
    case 824u: goto L_08B5FB5C;
    case 825u: goto L_08B5FB68;
    case 826u: goto L_08B5FB70;
    case 827u: goto L_08B5FB7C;
    case 828u: goto L_08B5FB88;
    case 829u: goto L_08B5FB8C;
    case 830u: goto L_08B5FB94;
    case 831u: goto L_08B5FBA8;
    case 832u: goto L_08B5FBB8;
    case 833u: goto L_08B5FBC4;
    case 834u: goto L_08B5FBCC;
    case 835u: goto L_08B5FBF0;
    case 836u: goto L_08B5FC24;
    case 837u: goto L_08B5FC34;
    case 838u: goto L_08B5FC54;
    case 839u: goto L_08B5FC78;
    case 840u: goto L_08B5FC8C;
    case 841u: goto L_08B5FCA4;
    case 842u: goto L_08B5FCB0;
    case 843u: goto L_08B5FCD8;
    case 844u: goto L_08B5FCE0;
    case 845u: goto L_08B5FCE8;
    case 846u: goto L_08B5FD00;
    case 847u: goto L_08B5FD18;
    case 848u: goto L_08B5FD24;
    case 849u: goto L_08B5FD38;
    case 850u: goto L_08B5FD58;
    case 851u: goto L_08B5FD60;
    case 852u: goto L_08B5FD74;
    case 853u: goto L_08B5FD8C;
    case 854u: goto L_08B5FD94;
    case 855u: goto L_08B5FD9C;
    case 856u: goto L_08B5FDA4;
    case 857u: goto L_08B5FDAC;
    case 858u: goto L_08B5FDCC;
    case 859u: goto L_08B5FDD8;
    case 860u: goto L_08B5FDE4;
    case 861u: goto L_08B5FDFC;
    case 862u: goto L_08B5FE04;
    case 863u: goto L_08B5FE24;
    case 864u: goto L_08B5FE30;
    case 865u: goto L_08B5FE50;
    case 866u: goto L_08B5FE88;
    case 867u: goto L_08B5FEE0;
    case 868u: goto L_08B5FEEC;
    case 869u: goto L_08B5FF2C;
    case 870u: goto L_08B5FF30;
    case 871u: goto L_08B5FF3C;
    case 872u: goto L_08B5FF4C;
    case 873u: goto L_08B5FF5C;
    case 874u: goto L_08B5FF84;
    case 875u: goto L_08B5FF9C;
    case 876u: goto L_08B5FFAC;
    case 877u: goto L_08B5FFCC;
    case 878u: goto L_08B5FFDC;
    case 879u: goto L_08B5FFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B5C000:
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5C060;
      }
      goto L_08B5C00C;
    }
L_08B5C00C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5C01Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5C01Cu) goto L_08B5C01C;
    return;
L_08B5C01C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5C060;
      }
      goto L_08B5C034;
    }
L_08B5C034:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5C050;
      }
      goto L_08B5C03C;
    }
L_08B5C03C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5C050;
      }
      goto L_08B5C044;
    }
L_08B5C044:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[21]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B5C050;
L_08B5C050:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B5C060u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 682u, 0x08B5A818u>(ctx, &aot_mem) && ctx.pc == 0x08B5C060u) goto L_08B5C060;
    return;
L_08B5C060:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08B5C064;
L_08B5C064:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
        goto L_08B5C070;
    }
    goto L_08B5C070;
L_08B5C070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 712u, 0x08B5AAF4u>(ctx, &aot_mem); return;
      }
      goto L_08B5C080;
    }
L_08B5C080:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    goto L_08B5C084;
L_08B5C084:
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5C0A4;
      }
      goto L_08B5C090;
    }
L_08B5C090:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B5C0A4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 682u, 0x08B5A818u>(ctx, &aot_mem) && ctx.pc == 0x08B5C0A4u) goto L_08B5C0A4;
    return;
L_08B5C0A4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5C0D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[29] = (ctx.gpr[29] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08B5C164;
      }
      goto L_08B5C128;
    }
L_08B5C128:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5C164;
      }
      goto L_08B5C130;
    }
L_08B5C130:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5C164;
      }
      goto L_08B5C138;
    }
L_08B5C134:
    // nop
    goto L_08B5C138;
L_08B5C138:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[13] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[11] = (0u | 2u);
    ctx.gpr[2] = (0u | 101u);
    ctx.gpr[3] = (0u | 69u);
    ctx.gpr[12] = (0u | 46u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[14] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[6] < ctx.gpr[13] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5C188;
      }
      goto L_08B5C164;
    }
L_08B5C164:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[29] = (ctx.gpr[30] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5C188:
    if (ctx.gpr[10] != 0u) {
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
        goto L_08B5C1D0;
    }
    goto L_08B5C190;
L_08B5C190:
    if (ctx.gpr[9] == ctx.gpr[11]) {
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
        goto L_08B5C1D0;
    }
    goto L_08B5C198;
L_08B5C198:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[10] == ctx.gpr[2]) {
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
        goto L_08B5C1C4;
    }
    goto L_08B5C1A4;
L_08B5C1A4:
    if (ctx.gpr[10] == ctx.gpr[3]) {
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
        goto L_08B5C1C4;
    }
    goto L_08B5C1AC;
L_08B5C1AC:
    if (ctx.gpr[10] != ctx.gpr[12]) {
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
        goto L_08B5C1C8;
    }
    goto L_08B5C1B4;
L_08B5C1B4:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[14] = (ctx.gpr[13] | 0u);
      if (branch_taken) {
          goto L_08B5C1C4;
      }
      goto L_08B5C1BC;
    }
L_08B5C1BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u | 1u);
      if (branch_taken) {
          goto L_08B5C1C4;
      }
      goto L_08B5C1C4;
    }
L_08B5C1C4:
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    goto L_08B5C1C8;
L_08B5C1C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[6] < ctx.gpr[13] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5C188;
      }
      goto L_08B5C1D0;
    }
L_08B5C1D0:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(20), ctx.gpr[14]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[11];
    ctx.gpr[10] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5C1F0;
      }
      goto L_08B5C1E0;
    }
L_08B5C1E0:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B5C214;
      }
      goto L_08B5C1E8;
    }
L_08B5C1E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_08B5C26C;
      }
      goto L_08B5C1F0;
    }
L_08B5C1F0:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[29] = (ctx.gpr[30] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5C214:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
    ctx.gpr[11] = (0u | 3u);
    ctx.gpr[2] = (0u | 44u);
    goto L_08B5C220;
L_08B5C220:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[10] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B5C258;
      }
      goto L_08B5C230;
    }
L_08B5C230:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[11]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[9] = (ctx.hi);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_08B5C258;
    }
    goto L_08B5C240;
L_08B5C240:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_08B5C258;
    }
    goto L_08B5C248;
L_08B5C248:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08B5C258;
L_08B5C258:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B5C220;
      }
      goto L_08B5C268;
    }
L_08B5C268:
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    goto L_08B5C26C;
L_08B5C26C:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08B5C280u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5C280u) goto L_08B5C280;
    return;
L_08B5C280:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[29] = (ctx.gpr[30] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5C2A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B5C300;
      }
      goto L_08B5C2E0;
    }
L_08B5C2E0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (2236u << 16u);
      if (branch_taken) {
          goto L_08B5C3AC;
      }
      goto L_08B5C2F0;
    }
L_08B5C2F0:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(16932));
    ctx.gpr[20] = (2234u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5C350;
      }
      goto L_08B5C300;
    }
L_08B5C300:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[16] = (2234u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16932));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16672)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5C31Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 305u, 0x08B55164u>(ctx, &aot_mem) && ctx.pc == 0x08B5C31Cu) goto L_08B5C31C;
    return;
L_08B5C31C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16672), 0u);
    ctx.gpr[4] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16676), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5C350:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_08B5C354;
L_08B5C354:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16676)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16676)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16672)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16676), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16672), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5C39C;
      }
      goto L_08B5C380;
    }
L_08B5C380:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5C390u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 305u, 0x08B55164u>(ctx, &aot_mem) && ctx.pc == 0x08B5C390u) goto L_08B5C390;
    return;
L_08B5C390:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16676), ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16672), 0u);
      if (branch_taken) {
          goto L_08B5C3D8;
      }
      goto L_08B5C39C;
    }
L_08B5C39C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B5C354;
      }
      goto L_08B5C3AC;
    }
L_08B5C3AC:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5C3D8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5C404:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B5C420u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    goto L_08B5C42C;
L_08B5C420:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5C42C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16680));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16696));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25916));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25936));
    ctx.gpr[6] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25908));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25888));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[31]);
    goto L_08B5C4B8;
L_08B5C4B8:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (0u | 37u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
    ctx.gpr[22] = (2234u << 16u);
    ctx.gpr[30] = (2234u << 16u);
    goto L_08B5C4D0;
L_08B5C4D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(15532)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16752)));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5C4E8u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 953u, 0x08B578C8u>(ctx, &aot_mem) && ctx.pc == 0x08B5C4E8u) goto L_08B5C4E8;
    return;
L_08B5C4E8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[16]) <= 0) {
    ctx.gpr[18] = (ctx.gpr[17] - ctx.gpr[19]);
        goto L_08B5C50C;
    }
    goto L_08B5C4F4;
L_08B5C4F4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B5C4D0;
      }
      goto L_08B5C500;
    }
L_08B5C500:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[17] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B5C50C;
      }
      goto L_08B5C50C;
    }
L_08B5C50C:
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5C5C8;
      }
      goto L_08B5C518;
    }
L_08B5C518:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[6] & 512u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5C58C;
    }
    goto L_08B5C528;
L_08B5C528:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5C564;
      }
      goto L_08B5C538;
    }
L_08B5C538:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5C548u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5C548u) goto L_08B5C548;
    return;
L_08B5C548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5C5BC;
      }
      goto L_08B5C564;
    }
L_08B5C564:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5C574u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5C574u) goto L_08B5C574;
    return;
L_08B5C574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5C5BC;
      }
      goto L_08B5C58C;
    }
L_08B5C58C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5C5AC;
      }
      goto L_08B5C594;
    }
L_08B5C594:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5C5AC;
      }
      goto L_08B5C59C;
    }
L_08B5C59C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B5C5AC;
L_08B5C5AC:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5C5BCu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5C2A8;
L_08B5C5BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    goto L_08B5C5C8;
L_08B5C5C8:
    if (static_cast<std::int32_t>(ctx.gpr[16]) <= 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
        goto L_08B5D8B4;
    }
    goto L_08B5C5D0;
L_08B5C5D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B5C5F0;
      }
      goto L_08B5C5DC;
    }
L_08B5C5DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
        goto L_08B5D8B4;
    }
    goto L_08B5C5EC;
L_08B5C5EC:
    ctx.gpr[4] = (0u | 0u);
    goto L_08B5C5F0;
L_08B5C5F0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08B5C60C;
L_08B5C60C:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    goto L_08B5C61C;
L_08B5C61C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5CFD4;
      }
      goto L_08B5C624;
    }
L_08B5C624:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25856)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5C63C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5C60C;
      }
      goto L_08B5C648;
    }
L_08B5C648:
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B5C60C;
      }
      goto L_08B5C654;
    }
L_08B5C654:
    ctx.gpr[21] = (ctx.gpr[21] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5C60C;
      }
      goto L_08B5C660;
    }
L_08B5C660:
    ctx.gpr[21] = (ctx.gpr[21] | 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5C60C;
      }
      goto L_08B5C66C;
    }
L_08B5C66C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5C60C;
      }
      goto L_08B5C684;
    }
L_08B5C684:
    ctx.gpr[30] = (0u - ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[21] | 4u);
      if (branch_taken) {
          goto L_08B5C698;
      }
      goto L_08B5C690;
    }
L_08B5C690:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[21] | 4u);
    goto L_08B5C698;
L_08B5C698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5C60C;
      }
      goto L_08B5C6A0;
    }
L_08B5C6A0:
    ctx.gpr[4] = (0u | 43u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5C60C;
      }
      goto L_08B5C6B0;
    }
L_08B5C6B0:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B5C6E8;
      }
      goto L_08B5C6C4;
    }
L_08B5C6C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08B5C6E0;
    }
    goto L_08B5C6E0;
L_08B5C6E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5C60C;
      }
      goto L_08B5C6E8;
    }
L_08B5C6E8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08B5C724;
      }
      goto L_08B5C6F8;
    }
L_08B5C6F8:
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B5C6F8;
      }
      goto L_08B5C724;
    }
L_08B5C724:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08B5C734;
    }
    goto L_08B5C734;
L_08B5C734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5C61C;
      }
      goto L_08B5C73C;
    }
L_08B5C73C:
    ctx.gpr[21] = (ctx.gpr[21] | 128u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5C60C;
      }
      goto L_08B5C748;
    }
L_08B5C748:
    ctx.gpr[5] = (0u | 0u);
    goto L_08B5C74C;
L_08B5C74C:
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B5C74C;
      }
      goto L_08B5C778;
    }
L_08B5C778:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5C61C;
      }
      goto L_08B5C788;
    }
L_08B5C788:
    ctx.gpr[21] = (ctx.gpr[21] | 64u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5C60C;
      }
      goto L_08B5C794;
    }
L_08B5C794:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 108u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5C7B4;
      }
      goto L_08B5C7A4;
    }
L_08B5C7A4:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] | 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5C60C;
      }
      goto L_08B5C7B4;
    }
L_08B5C7B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] | 16u);
      if (branch_taken) {
          goto L_08B5C60C;
      }
      goto L_08B5C7BC;
    }
L_08B5C7BC:
    ctx.gpr[21] = (ctx.gpr[21] | 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5C60C;
      }
      goto L_08B5C7C8;
    }
L_08B5C7C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[21] & 132u);
    ctx.gpr[8] = (ctx.gpr[21] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[22] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08B5D00C;
      }
      goto L_08B5C810;
    }
L_08B5C810:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] | 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16748)));
    ctx.gpr[5] = (ctx.gpr[21] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16744)));
      if (branch_taken) {
          goto L_08B5C838;
      }
      goto L_08B5C828;
    }
L_08B5C828:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16748)));
    ctx.gpr[5] = (ctx.gpr[21] & 32u);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16744)));
    goto L_08B5C838;
L_08B5C838:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] & 16u);
      if (branch_taken) {
          goto L_08B5C860;
      }
      goto L_08B5C840;
    }
L_08B5C840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5C8C0;
      }
      goto L_08B5C860;
    }
L_08B5C860:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] & 64u);
      if (branch_taken) {
          goto L_08B5C880;
      }
      goto L_08B5C868;
    }
L_08B5C868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
      if (branch_taken) {
          goto L_08B5C8B8;
      }
      goto L_08B5C880;
    }
L_08B5C880:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
        goto L_08B5C8A4;
    }
    goto L_08B5C888;
L_08B5C888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
      if (branch_taken) {
          goto L_08B5C8B0;
      }
      goto L_08B5C8A4;
    }
L_08B5C8A4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    goto L_08B5C8B0;
L_08B5C8B0:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08B5C8B8;
L_08B5C8B8:
    ctx.gpr[11] = (ctx.gpr[7] | 0u);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    goto L_08B5C8C0;
L_08B5C8C0:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16712)));
    ctx.gpr[19] = (ctx.gpr[11] | 0u);
    ctx.gpr[18] = (ctx.gpr[10] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] ^ ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[10] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5C908;
      }
      goto L_08B5C8F4;
    }
L_08B5C8F4:
    ctx.gpr[5] = (0u - ctx.gpr[11]);
    ctx.gpr[6] = (0u | 45u);
    ctx.gpr[18] = (0u - ctx.gpr[10]);
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08B5C908;
L_08B5C908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08B5CCF4;
      }
      goto L_08B5C910;
    }
L_08B5C910:
    ctx.gpr[4] = (ctx.gpr[21] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
      if (branch_taken) {
          goto L_08B5C940;
      }
      goto L_08B5C91C;
    }
L_08B5C91C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B5C4B8;
      }
      goto L_08B5C940;
    }
L_08B5C940:
    ctx.gpr[4] = (ctx.gpr[21] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] & 64u);
      if (branch_taken) {
          goto L_08B5C964;
      }
      goto L_08B5C94C;
    }
L_08B5C94C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B5C4B8;
      }
      goto L_08B5C964;
    }
L_08B5C964:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
        goto L_08B5C984;
    }
    goto L_08B5C96C;
L_08B5C96C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B5C4B8;
      }
      goto L_08B5C984;
    }
L_08B5C984:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B5C4B8;
      }
      goto L_08B5C998;
    }
L_08B5C998:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] | 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16748)));
    ctx.gpr[5] = (ctx.gpr[21] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16744)));
      if (branch_taken) {
          goto L_08B5C9C0;
      }
      goto L_08B5C9B0;
    }
L_08B5C9B0:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16748)));
    ctx.gpr[5] = (ctx.gpr[21] & 32u);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16744)));
    goto L_08B5C9C0;
L_08B5C9C0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] & 16u);
      if (branch_taken) {
          goto L_08B5C9E8;
      }
      goto L_08B5C9C8;
    }
L_08B5C9C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5CA44;
      }
      goto L_08B5C9E8;
    }
L_08B5C9E8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] & 64u);
      if (branch_taken) {
          goto L_08B5CA08;
      }
      goto L_08B5C9F0;
    }
L_08B5C9F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5CA3C;
      }
      goto L_08B5CA08;
    }
L_08B5CA08:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
        goto L_08B5CA28;
    }
    goto L_08B5CA10;
L_08B5CA10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08B5CA34;
      }
      goto L_08B5CA28;
    }
L_08B5CA28:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    goto L_08B5CA34;
L_08B5CA34:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5CA3C;
L_08B5CA3C:
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    goto L_08B5CA44;
L_08B5CA44:
    ctx.gpr[19] = (ctx.gpr[9] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08B5CCF0;
      }
      goto L_08B5CA54;
    }
L_08B5CA54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16748)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[21] = (ctx.gpr[21] | 2u);
    ctx.gpr[16] = (0u | 120u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16744)));
      if (branch_taken) {
          goto L_08B5CCF0;
      }
      goto L_08B5CA8C;
    }
L_08B5CA8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[21] & 132u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    if (ctx.gpr[23] == 0u) {
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
        goto L_08B5CAB4;
    }
    goto L_08B5CAB4;
L_08B5CAB4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08B5CB04;
      }
      goto L_08B5CABC;
    }
L_08B5CABC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08B5CAC8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 18u, 0x08B580BCu>(ctx, &aot_mem) && ctx.pc == 0x08B5CAC8u) goto L_08B5CAC8;
    return;
L_08B5CAC8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
      if (branch_taken) {
          goto L_08B5CAF8;
      }
      goto L_08B5CADC;
    }
L_08B5CADC:
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[23]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B5CB20;
      }
      goto L_08B5CAEC;
    }
L_08B5CAEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08B5CB20;
      }
      goto L_08B5CAF8;
    }
L_08B5CAF8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08B5CB20;
      }
      goto L_08B5CB04;
    }
L_08B5CB04:
    ctx.gpr[31] = (0x08B5CB0Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08B5CB0Cu) goto L_08B5CB0C;
    return;
L_08B5CB0C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    goto L_08B5CB20;
L_08B5CB20:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[12]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (static_cast<std::int32_t>(ctx.gpr[7]) < 0 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5D00C;
      }
      goto L_08B5CB34;
    }
L_08B5CB34:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] | 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16748)));
    ctx.gpr[5] = (ctx.gpr[21] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16744)));
      if (branch_taken) {
          goto L_08B5CB64;
      }
      goto L_08B5CB50;
    }
L_08B5CB50:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16748)));
    ctx.gpr[5] = (ctx.gpr[21] & 32u);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16744)));
    goto L_08B5CB64;
L_08B5CB64:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] & 16u);
      if (branch_taken) {
          goto L_08B5CB8C;
      }
      goto L_08B5CB6C;
    }
L_08B5CB6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5CBE8;
      }
      goto L_08B5CB8C;
    }
L_08B5CB8C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] & 64u);
      if (branch_taken) {
          goto L_08B5CBAC;
      }
      goto L_08B5CB94;
    }
L_08B5CB94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5CBE0;
      }
      goto L_08B5CBAC;
    }
L_08B5CBAC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
        goto L_08B5CBCC;
    }
    goto L_08B5CBB4;
L_08B5CBB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08B5CBD8;
      }
      goto L_08B5CBCC;
    }
L_08B5CBCC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    goto L_08B5CBD8;
L_08B5CBD8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5CBE0;
L_08B5CBE0:
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    goto L_08B5CBE8;
L_08B5CBE8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[12]);
    ctx.gpr[19] = (ctx.gpr[9] | 0u);
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08B5CCF0;
      }
      goto L_08B5CBFC;
    }
L_08B5CBFC:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16748)));
    ctx.gpr[5] = (ctx.gpr[21] & 32u);
    ctx.gpr[9] = (ctx.gpr[21] & 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16744)));
      if (branch_taken) {
          goto L_08B5CC30;
      }
      goto L_08B5CC18;
    }
L_08B5CC18:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16748)));
    ctx.gpr[5] = (ctx.gpr[21] & 32u);
    ctx.gpr[9] = (ctx.gpr[21] & 1u);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16744)));
    goto L_08B5CC30;
L_08B5CC30:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] & 16u);
      if (branch_taken) {
          goto L_08B5CC58;
      }
      goto L_08B5CC38;
    }
L_08B5CC38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5CCB4;
      }
      goto L_08B5CC58;
    }
L_08B5CC58:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] & 64u);
      if (branch_taken) {
          goto L_08B5CC78;
      }
      goto L_08B5CC60;
    }
L_08B5CC60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5CCAC;
      }
      goto L_08B5CC78;
    }
L_08B5CC78:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
        goto L_08B5CC98;
    }
    goto L_08B5CC80;
L_08B5CC80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08B5CCA4;
      }
      goto L_08B5CC98;
    }
L_08B5CC98:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    goto L_08B5CCA4;
L_08B5CCA4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5CCAC;
L_08B5CCAC:
    ctx.gpr[3] = (ctx.gpr[7] | 0u);
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
    goto L_08B5CCB4;
L_08B5CCB4:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[12]);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08B5CCF0;
      }
      goto L_08B5CCC8;
    }
L_08B5CCC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[12]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16716)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16712)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B5CCE8;
      }
      goto L_08B5CCE0;
    }
L_08B5CCE0:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B5CCF0;
      }
      goto L_08B5CCE8;
    }
L_08B5CCE8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[12]);
    ctx.gpr[21] = (ctx.gpr[21] | 2u);
    goto L_08B5CCF0;
L_08B5CCF0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    goto L_08B5CCF4;
L_08B5CCF4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16716)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16712)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
      if (branch_taken) {
          goto L_08B5CD14;
      }
      goto L_08B5CD0C;
    }
L_08B5CD0C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[21] = (ctx.gpr[21] & ctx.gpr[4]);
    goto L_08B5CD14;
L_08B5CD14:
    ctx.gpr[4] = (ctx.gpr[21] & 132u);
    ctx.gpr[8] = (ctx.gpr[21] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08B5CD3C;
      }
      goto L_08B5CD2C;
    }
L_08B5CD2C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B5CD3C;
      }
      goto L_08B5CD34;
    }
L_08B5CD34:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B5CF68;
      }
      goto L_08B5CD3C;
    }
L_08B5CD3C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5CD78;
      }
      goto L_08B5CD44;
    }
L_08B5CD44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B5CD94;
      }
      goto L_08B5CD4C;
    }
L_08B5CD4C:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[12]);
    ctx.gpr[31] = (0x08B5CD5Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08B5CD5Cu) goto L_08B5CD5C;
    return;
L_08B5CD5C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5D00C;
      }
      goto L_08B5CD78;
    }
L_08B5CD78:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B5CE20;
      }
      goto L_08B5CD80;
    }
L_08B5CD80:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B5CD4C;
      }
      goto L_08B5CD8C;
    }
L_08B5CD8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[18] & ctx.gpr[14]);
      if (branch_taken) {
          goto L_08B5CF30;
      }
      goto L_08B5CD94;
    }
L_08B5CD94:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[12]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16732)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16728)));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16724)));
    ctx.gpr[5] = (ctx.gpr[21] & 1u);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16720)));
    ctx.gpr[8] = (ctx.gpr[18] & ctx.gpr[14]);
    goto L_08B5CDB8;
L_08B5CDB8:
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[19] & ctx.gpr[15]);
    ctx.gpr[10] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[3]);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (ctx.gpr[19] << 29u);
    ctx.gpr[18] = (ctx.gpr[18] >> 3u);
    ctx.gpr[19] = (ctx.gpr[19] >> 3u);
    ctx.gpr[18] = (ctx.gpr[1] | ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[6];
    ctx.gpr[8] = (ctx.gpr[18] & ctx.gpr[14]);
      if (branch_taken) {
          goto L_08B5CDB8;
      }
      goto L_08B5CDF4;
    }
L_08B5CDF4:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[7];
    ctx.gpr[8] = (ctx.gpr[18] & ctx.gpr[14]);
      if (branch_taken) {
          goto L_08B5CDB8;
      }
      goto L_08B5CDFC;
    }
L_08B5CDFC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
      if (branch_taken) {
          goto L_08B5CF68;
      }
      goto L_08B5CE04;
    }
L_08B5CE04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 48u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_08B5CF6C;
    }
    goto L_08B5CE14;
L_08B5CE14:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08B5CF68;
      }
      goto L_08B5CE20;
    }
L_08B5CE20:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16740)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16736)));
    ctx.gpr[6] = (ctx.gpr[19] ^ ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[12]);
      if (branch_taken) {
          goto L_08B5CEFC;
      }
      goto L_08B5CE4C;
    }
L_08B5CE4C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    goto L_08B5CE50;
L_08B5CE50:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16740)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16736)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5CE8Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 269u, 0x08B6159Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5CE8Cu) goto L_08B5CE8C;
    return;
L_08B5CE8C:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16732)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16728)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[3]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5CECCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 199u, 0x08B61028u>(ctx, &aot_mem) && ctx.pc == 0x08B5CECCu) goto L_08B5CECC;
    return;
L_08B5CECC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] ^ ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
        goto L_08B5CE50;
    }
    goto L_08B5CEFC;
L_08B5CEFC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16732)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16728)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
      if (branch_taken) {
          goto L_08B5CF68;
      }
      goto L_08B5CF30;
    }
L_08B5CF30:
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[12] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[19] & ctx.gpr[15]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (ctx.gpr[19] << 28u);
    ctx.gpr[18] = (ctx.gpr[18] >> 4u);
    ctx.gpr[19] = (ctx.gpr[19] >> 4u);
    ctx.gpr[18] = (ctx.gpr[1] | ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[6];
    ctx.gpr[8] = (ctx.gpr[18] & ctx.gpr[14]);
      if (branch_taken) {
          goto L_08B5CF30;
      }
      goto L_08B5CF60;
    }
L_08B5CF60:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[7];
    ctx.gpr[8] = (ctx.gpr[18] & ctx.gpr[14]);
      if (branch_taken) {
          goto L_08B5CF30;
      }
      goto L_08B5CF68;
    }
L_08B5CF68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    goto L_08B5CF6C;
L_08B5CF6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[12]);
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08B5CFB8;
      }
      goto L_08B5CF7C;
    }
L_08B5CF7C:
    ctx.gpr[4] = (ctx.gpr[21] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[23]);
      if (branch_taken) {
          goto L_08B5CFBC;
      }
      goto L_08B5CF88;
    }
L_08B5CF88:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08B5CF9Cu);
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    goto L_08B5C0D8;
L_08B5CF9C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5D00C;
      }
      goto L_08B5CFB8;
    }
L_08B5CFB8:
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[23]);
    goto L_08B5CFBC;
L_08B5CFBC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5D00C;
      }
      goto L_08B5CFD4;
    }
L_08B5CFD4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08B5D8B0;
      }
      goto L_08B5CFDC;
    }
L_08B5CFDC:
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[21] & 132u);
    ctx.gpr[8] = (ctx.gpr[21] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[22] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[8]);
    goto L_08B5D00C;
L_08B5D00C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    if (ctx.gpr[22] == 0u) {
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
        goto L_08B5D018;
    }
    goto L_08B5D018;
L_08B5D018:
    ctx.gpr[19] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08B5D02C;
      }
      goto L_08B5D024;
    }
L_08B5D024:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5D03C;
      }
      goto L_08B5D02C;
    }
L_08B5D02C:
    ctx.gpr[4] = (ctx.gpr[21] & 2u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
        goto L_08B5D040;
    }
    goto L_08B5D038;
L_08B5D038:
    ctx.gpr[19] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    goto L_08B5D03C;
L_08B5D03C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    goto L_08B5D040;
L_08B5D040:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08B5D1DC;
      }
      goto L_08B5D048;
    }
L_08B5D048:
    ctx.gpr[18] = (ctx.gpr[30] - ctx.gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5D1D8;
      }
      goto L_08B5D054;
    }
L_08B5D054:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5D118;
      }
      goto L_08B5D05C;
    }
L_08B5D05C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5D0D8;
    }
    goto L_08B5D064;
L_08B5D064:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5D0A8;
      }
      goto L_08B5D074;
    }
L_08B5D074:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (0x08B5D084u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D084u) goto L_08B5D084;
    return;
L_08B5D084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5D108;
      }
      goto L_08B5D0A8;
    }
L_08B5D0A8:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5D0B8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D0B8u) goto L_08B5D0B8;
    return;
L_08B5D0B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5D108;
      }
      goto L_08B5D0D8;
    }
L_08B5D0D8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5D0F0;
    }
    goto L_08B5D0E0;
L_08B5D0E0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08B5D0EC;
      }
      goto L_08B5D0E8;
    }
L_08B5D0E8:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08B5D0EC;
L_08B5D0EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    goto L_08B5D0F0;
L_08B5D0F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08B5D100u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5C2A8;
L_08B5D100:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08B5D108;
L_08B5D108:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5D05C;
      }
      goto L_08B5D118;
    }
L_08B5D118:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08B5D198;
      }
      goto L_08B5D120;
    }
L_08B5D120:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5D168;
      }
      goto L_08B5D130;
    }
L_08B5D130:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08B5D140u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D140u) goto L_08B5D140;
    return;
L_08B5D140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[18]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08B5D1D8;
      }
      goto L_08B5D168;
    }
L_08B5D168:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5D174u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D174u) goto L_08B5D174;
    return;
L_08B5D174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08B5D1D8;
      }
      goto L_08B5D198;
    }
L_08B5D198:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5D1BC;
      }
      goto L_08B5D1A4;
    }
L_08B5D1A4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5D1BC;
      }
      goto L_08B5D1AC;
    }
L_08B5D1AC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B5D1BC;
L_08B5D1BC:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5D1CCu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5C2A8;
L_08B5D1CC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08B5D1D8;
L_08B5D1D8:
    ctx.gpr[18] = (0u | 1u);
    goto L_08B5D1DC;
L_08B5D1DC:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B5D298;
      }
      goto L_08B5D1E8;
    }
L_08B5D1E8:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5D260;
    }
    goto L_08B5D1F0;
L_08B5D1F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5D234;
      }
      goto L_08B5D200;
    }
L_08B5D200:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B5D210u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D210u) goto L_08B5D210;
    return;
L_08B5D210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5D358;
      }
      goto L_08B5D234;
    }
L_08B5D234:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5D240u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D240u) goto L_08B5D240;
    return;
L_08B5D240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5D358;
      }
      goto L_08B5D260;
    }
L_08B5D260:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5D27C;
      }
      goto L_08B5D268;
    }
L_08B5D268:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5D27C;
      }
      goto L_08B5D270;
    }
L_08B5D270:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B5D27C;
L_08B5D27C:
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08B5D28Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5C2A8;
L_08B5D28C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5D358;
      }
      goto L_08B5D298;
    }
L_08B5D298:
    ctx.gpr[4] = (ctx.gpr[21] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 48u);
      if (branch_taken) {
          goto L_08B5D358;
      }
      goto L_08B5D2A4;
    }
L_08B5D2A4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08B5D320;
      }
      goto L_08B5D2B0;
    }
L_08B5D2B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5D2F4;
      }
      goto L_08B5D2C0;
    }
L_08B5D2C0:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08B5D2D0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D2D0u) goto L_08B5D2D0;
    return;
L_08B5D2D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5D358;
      }
      goto L_08B5D2F4;
    }
L_08B5D2F4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5D300u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D300u) goto L_08B5D300;
    return;
L_08B5D300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5D358;
      }
      goto L_08B5D320;
    }
L_08B5D320:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5D340;
      }
      goto L_08B5D32C;
    }
L_08B5D32C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5D340;
      }
      goto L_08B5D334;
    }
L_08B5D334:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B5D340;
L_08B5D340:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B5D350u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5C2A8;
L_08B5D350:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08B5D358;
L_08B5D358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[7] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[30] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B5D4E0;
      }
      goto L_08B5D368;
    }
L_08B5D368:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5D4E0;
      }
      goto L_08B5D370;
    }
L_08B5D370:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5D434;
      }
      goto L_08B5D378;
    }
L_08B5D378:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5D3F4;
    }
    goto L_08B5D380;
L_08B5D380:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5D3C4;
      }
      goto L_08B5D390;
    }
L_08B5D390:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B5D3A0u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D3A0u) goto L_08B5D3A0;
    return;
L_08B5D3A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5D424;
      }
      goto L_08B5D3C4;
    }
L_08B5D3C4:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5D3D4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D3D4u) goto L_08B5D3D4;
    return;
L_08B5D3D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5D424;
      }
      goto L_08B5D3F4;
    }
L_08B5D3F4:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5D40C;
    }
    goto L_08B5D3FC;
L_08B5D3FC:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5D40C;
    }
    goto L_08B5D404;
L_08B5D404:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    goto L_08B5D40C;
L_08B5D40C:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08B5D41Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5C2A8;
L_08B5D41C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08B5D424;
L_08B5D424:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5D378;
      }
      goto L_08B5D434;
    }
L_08B5D434:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5D4AC;
    }
    goto L_08B5D43C;
L_08B5D43C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5D480;
      }
      goto L_08B5D44C;
    }
L_08B5D44C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B5D45Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D45Cu) goto L_08B5D45C;
    return;
L_08B5D45C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5D4E0;
      }
      goto L_08B5D480;
    }
L_08B5D480:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5D48Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D48Cu) goto L_08B5D48C;
    return;
L_08B5D48C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5D4E0;
      }
      goto L_08B5D4AC;
    }
L_08B5D4AC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5D4C8;
      }
      goto L_08B5D4B4;
    }
L_08B5D4B4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5D4C8;
      }
      goto L_08B5D4BC;
    }
L_08B5D4BC:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B5D4C8;
L_08B5D4C8:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B5D4D8u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5C2A8;
L_08B5D4D8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08B5D4E0;
L_08B5D4E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5D670;
      }
      goto L_08B5D4F4;
    }
L_08B5D4F4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5D5B8;
      }
      goto L_08B5D4FC;
    }
L_08B5D4FC:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5D578;
    }
    goto L_08B5D504;
L_08B5D504:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5D548;
      }
      goto L_08B5D514;
    }
L_08B5D514:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B5D524u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D524u) goto L_08B5D524;
    return;
L_08B5D524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5D5A8;
      }
      goto L_08B5D548;
    }
L_08B5D548:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5D558u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D558u) goto L_08B5D558;
    return;
L_08B5D558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5D5A8;
      }
      goto L_08B5D578;
    }
L_08B5D578:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5D590;
    }
    goto L_08B5D580;
L_08B5D580:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5D590;
    }
    goto L_08B5D588;
L_08B5D588:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    goto L_08B5D590;
L_08B5D590:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08B5D5A0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5C2A8;
L_08B5D5A0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08B5D5A8;
L_08B5D5A8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5D4FC;
      }
      goto L_08B5D5B8;
    }
L_08B5D5B8:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5D638;
    }
    goto L_08B5D5C0;
L_08B5D5C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5D608;
      }
      goto L_08B5D5D0;
    }
L_08B5D5D0:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B5D5E0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D5E0u) goto L_08B5D5E0;
    return;
L_08B5D5E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B5D670;
      }
      goto L_08B5D608;
    }
L_08B5D608:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5D614u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D614u) goto L_08B5D614;
    return;
L_08B5D614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B5D670;
      }
      goto L_08B5D638;
    }
L_08B5D638:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B5D654;
      }
      goto L_08B5D640;
    }
L_08B5D640:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B5D654;
      }
      goto L_08B5D648;
    }
L_08B5D648:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08B5D654;
L_08B5D654:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B5D664u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5C2A8;
L_08B5D664:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08B5D670;
L_08B5D670:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5D6E0;
    }
    goto L_08B5D678;
L_08B5D678:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5D6B8;
      }
      goto L_08B5D688;
    }
L_08B5D688:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08B5D698u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D698u) goto L_08B5D698;
    return;
L_08B5D698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5D70C;
      }
      goto L_08B5D6B8;
    }
L_08B5D6B8:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5D6C8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D6C8u) goto L_08B5D6C8;
    return;
L_08B5D6C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5D70C;
      }
      goto L_08B5D6E0;
    }
L_08B5D6E0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5D6FC;
      }
      goto L_08B5D6E8;
    }
L_08B5D6E8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5D6FC;
      }
      goto L_08B5D6F0;
    }
L_08B5D6F0:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B5D6FC;
L_08B5D6FC:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08B5D70Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5C2A8;
L_08B5D70C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08B5D894;
      }
      goto L_08B5D718;
    }
L_08B5D718:
    ctx.gpr[16] = (ctx.gpr[30] - ctx.gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08B5D894;
      }
      goto L_08B5D724;
    }
L_08B5D724:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08B5D7F8;
      }
      goto L_08B5D73C;
    }
L_08B5D73C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5D7B8;
    }
    goto L_08B5D744;
L_08B5D744:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5D788;
      }
      goto L_08B5D754;
    }
L_08B5D754:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5D764u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D764u) goto L_08B5D764;
    return;
L_08B5D764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5D7E8;
      }
      goto L_08B5D788;
    }
L_08B5D788:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5D798u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D798u) goto L_08B5D798;
    return;
L_08B5D798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08B5D7E8;
      }
      goto L_08B5D7B8;
    }
L_08B5D7B8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5D7D0;
    }
    goto L_08B5D7C0;
L_08B5D7C0:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5D7D0;
    }
    goto L_08B5D7C8;
L_08B5D7C8:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[21]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    goto L_08B5D7D0;
L_08B5D7D0:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08B5D7E0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5C2A8;
L_08B5D7E0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08B5D7E8;
L_08B5D7E8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5D73C;
      }
      goto L_08B5D7F8;
    }
L_08B5D7F8:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
        goto L_08B5D864;
    }
    goto L_08B5D800;
L_08B5D800:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B5D83C;
      }
      goto L_08B5D810;
    }
L_08B5D810:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5D820u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D820u) goto L_08B5D820;
    return;
L_08B5D820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5D890;
      }
      goto L_08B5D83C;
    }
L_08B5D83C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5D84Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5D84Cu) goto L_08B5D84C;
    return;
L_08B5D84C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5D890;
      }
      goto L_08B5D864;
    }
L_08B5D864:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5D880;
      }
      goto L_08B5D86C;
    }
L_08B5D86C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5D880;
      }
      goto L_08B5D874;
    }
L_08B5D874:
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[21]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B5D880;
L_08B5D880:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B5D890u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5C2A8;
L_08B5D890:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08B5D894;
L_08B5D894:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
        goto L_08B5D8A0;
    }
    goto L_08B5D8A0;
L_08B5D8A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5C4B8;
      }
      goto L_08B5D8B0;
    }
L_08B5D8B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(12))))));
    goto L_08B5D8B4;
L_08B5D8B4:
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5D8D4;
      }
      goto L_08B5D8C0;
    }
L_08B5D8C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B5D8D4u);
    ctx.gpr[7] = (0u | 1u);
    goto L_08B5C2A8;
L_08B5D8D4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5D908:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5DBA8;
      }
      goto L_08B5D918;
    }
L_08B5D918:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B5D924u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    goto L_08B5DF8C;
L_08B5D924:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-8));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[7] = (ctx.gpr[10] & ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17288));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (ctx.gpr[11] & ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[10] & 1u);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[2];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B5D9CC;
      }
      goto L_08B5D960;
    }
L_08B5D960:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B5D984;
      }
      goto L_08B5D968;
    }
L_08B5D968:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    goto L_08B5D984;
L_08B5D984:
    ctx.gpr[6] = (ctx.gpr[7] | 1u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(18320)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5D9B8;
      }
      goto L_08B5D9A4;
    }
L_08B5D9A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[31] = (0x08B5D9B4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18324)));
    goto L_08B5DBB4;
L_08B5D9B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08B5D9B8;
L_08B5D9B8:
    ctx.gpr[31] = (0x08B5D9C0u);
    // nop
    goto L_08B5DFC8;
L_08B5D9C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5D9CC:
    ctx.gpr[2] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08B5DA08;
      }
      goto L_08B5D9DC;
    }
L_08B5D9DC:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[3]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[12];
    ctx.gpr[7] = (ctx.gpr[3] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B5D9FC;
      }
      goto L_08B5D9F4;
    }
L_08B5D9F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 1u);
      if (branch_taken) {
          goto L_08B5DA08;
      }
      goto L_08B5D9FC;
    }
L_08B5D9FC:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08B5DA08;
L_08B5DA08:
    ctx.gpr[2] = (ctx.gpr[9] + ctx.gpr[11]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] & 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[9] = (ctx.gpr[7] | 1u);
        goto L_08B5DA5C;
    }
    goto L_08B5DA1C;
L_08B5DA1C:
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B5DA4C;
      }
      goto L_08B5DA28;
    }
L_08B5DA28:
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    if (ctx.gpr[11] != ctx.gpr[2]) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
        goto L_08B5DA50;
    }
    goto L_08B5DA34;
L_08B5DA34:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[10] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B5DA58;
      }
      goto L_08B5DA4C;
    }
L_08B5DA4C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    goto L_08B5DA50;
L_08B5DA50:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    goto L_08B5DA58;
L_08B5DA58:
    ctx.gpr[9] = (ctx.gpr[7] | 1u);
    goto L_08B5DA5C;
L_08B5DA5C:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B5DBA0;
      }
      goto L_08B5DA6C;
    }
L_08B5DA6C:
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(512) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[7] >> 9u);
      if (branch_taken) {
          goto L_08B5DAC0;
      }
      goto L_08B5DA78;
    }
L_08B5DA78:
    ctx.gpr[6] = (ctx.gpr[7] >> 3u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[10] << (ctx.gpr[7] & 31u));
    ctx.gpr[7] = (ctx.gpr[9] | ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08B5DBA0;
      }
      goto L_08B5DAC0;
    }
L_08B5DAC0:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(5) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5DAD0;
      }
      goto L_08B5DAC8;
    }
L_08B5DAC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[7] >> 3u);
      if (branch_taken) {
          goto L_08B5DB30;
      }
      goto L_08B5DAD0;
    }
L_08B5DAD0:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(21) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5DAE4;
      }
      goto L_08B5DAD8;
    }
L_08B5DAD8:
    ctx.gpr[9] = (ctx.gpr[7] >> 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08B5DB30;
      }
      goto L_08B5DAE4;
    }
L_08B5DAE4:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(85) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5DAF4;
      }
      goto L_08B5DAEC;
    }
L_08B5DAEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(91));
      if (branch_taken) {
          goto L_08B5DB30;
      }
      goto L_08B5DAF4;
    }
L_08B5DAF4:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(341) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5DB08;
      }
      goto L_08B5DAFC;
    }
L_08B5DAFC:
    ctx.gpr[9] = (ctx.gpr[7] >> 12u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(110));
      if (branch_taken) {
          goto L_08B5DB30;
      }
      goto L_08B5DB08;
    }
L_08B5DB08:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08B5DB1C;
      }
      goto L_08B5DB10;
    }
L_08B5DB10:
    ctx.gpr[9] = (ctx.gpr[7] >> 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(119));
      if (branch_taken) {
          goto L_08B5DB30;
      }
      goto L_08B5DB1C;
    }
L_08B5DB1C:
    ctx.gpr[10] = (ctx.gpr[10] < static_cast<std::uint32_t>(1365) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (0u | 126u);
      if (branch_taken) {
          goto L_08B5DB30;
      }
      goto L_08B5DB28;
    }
L_08B5DB28:
    ctx.gpr[9] = (ctx.gpr[7] >> 18u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(124));
    goto L_08B5DB30;
L_08B5DB30:
    ctx.gpr[11] = (ctx.gpr[9] << 3u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08B5DB6C;
      }
      goto L_08B5DB44;
    }
L_08B5DB44:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[9] << (ctx.gpr[6] & 31u));
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B5DB90;
      }
      goto L_08B5DB6C;
    }
L_08B5DB6C:
    if (ctx.gpr[10] == ctx.gpr[11]) {
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
        goto L_08B5DB90;
    }
    goto L_08B5DB74;
L_08B5DB74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
        goto L_08B5DB90;
    }
    goto L_08B5DB88;
L_08B5DB88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B5DB6C;
      }
      goto L_08B5DB90;
    }
L_08B5DB90:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    goto L_08B5DBA0;
L_08B5DBA0:
    ctx.gpr[31] = (0x08B5DBA8u);
    // nop
    goto L_08B5DFC8;
L_08B5DBA8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5DBB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B5DBE0u);
    ctx.gpr[20] = (0u | 4096u);
    goto L_08B5DF8C;
L_08B5DBE0:
    ctx.gpr[17] = (2234u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(17288));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[19] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4096));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[4] << 12u);
    ctx.gpr[18] = (0u + ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4096 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B5DCF4;
      }
      goto L_08B5DC24;
    }
L_08B5DC24:
    ctx.gpr[31] = (0x08B5DC2Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08B5F34C;
L_08B5DC2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[5] = (0u - ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B5DCC8;
      }
      goto L_08B5DC3C;
    }
L_08B5DC3C:
    ctx.gpr[31] = (0x08B5DC44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B5F34C;
L_08B5DC44:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_08B5DC80;
      }
      goto L_08B5DC50;
    }
L_08B5DC50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B5DC5Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08B5F34C;
L_08B5DC5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5DD20;
      }
      goto L_08B5DC74;
    }
L_08B5DC74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5DD38;
      }
      goto L_08B5DC7C;
    }
L_08B5DC7C:
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[18]);
    goto L_08B5DC80;
L_08B5DC80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18340)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[18]);
    ctx.gpr[31] = (0x08B5DCA4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(18340), ctx.gpr[6]);
    goto L_08B5DFC8;
L_08B5DCA4:
    ctx.gpr[2] = (0u | 1u);
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
L_08B5DCC8:
    ctx.gpr[31] = (0x08B5DCD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B5DFC8;
L_08B5DCD0:
    ctx.gpr[2] = (0u | 0u);
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
L_08B5DCF4:
    ctx.gpr[31] = (0x08B5DCFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B5DFC8;
L_08B5DCFC:
    ctx.gpr[2] = (0u | 0u);
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
L_08B5DD20:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(18328)));
    ctx.gpr[7] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(18340), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B5DD38;
L_08B5DD38:
    ctx.gpr[31] = (0x08B5DD40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B5DFC8;
L_08B5DD40:
    ctx.gpr[2] = (0u | 0u);
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
L_08B5DD64:
    ctx.gpr[10] = (2234u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(14520));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08B5DD78;
L_08B5DD78:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[2] = (ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_08B5DD78;
      }
      goto L_08B5DD94;
    }
L_08B5DD94:
    ctx.gpr[2] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[2];
    ctx.gpr[2] = (0u | 43u);
      if (branch_taken) {
          goto L_08B5DDB4;
      }
      goto L_08B5DDA0;
    }
L_08B5DDA0:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_08B5DDC8;
      }
      goto L_08B5DDB4;
    }
L_08B5DDB4:
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B5DDC8;
      }
      goto L_08B5DDBC;
    }
L_08B5DDBC:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[3] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
    goto L_08B5DDC8;
L_08B5DDC8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 48u);
      if (branch_taken) {
          goto L_08B5DDE0;
      }
      goto L_08B5DDD0;
    }
L_08B5DDD0:
    ctx.gpr[2] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    ctx.gpr[14] = (ctx.gpr[10] + ctx.gpr[11]);
      if (branch_taken) {
          goto L_08B5DE10;
      }
      goto L_08B5DDDC;
    }
L_08B5DDDC:
    ctx.gpr[2] = (0u | 48u);
    goto L_08B5DDE0;
L_08B5DDE0:
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[2];
    ctx.gpr[14] = (ctx.gpr[10] + ctx.gpr[11]);
      if (branch_taken) {
          goto L_08B5DE10;
      }
      goto L_08B5DDE8;
    }
L_08B5DDE8:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[12] = (0u | 120u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[12];
    ctx.gpr[12] = (0u | 88u);
      if (branch_taken) {
          goto L_08B5DE00;
      }
      goto L_08B5DDF8;
    }
L_08B5DDF8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[12];
    ctx.gpr[14] = (ctx.gpr[10] + ctx.gpr[11]);
      if (branch_taken) {
          goto L_08B5DE10;
      }
      goto L_08B5DE00;
    }
L_08B5DE00:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[8] = (ctx.gpr[3] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[14] = (ctx.gpr[10] + ctx.gpr[11]);
    goto L_08B5DE10;
L_08B5DE10:
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[15] = (ctx.gpr[14] & 4u);
      if (branch_taken) {
          goto L_08B5DE2C;
      }
      goto L_08B5DE1C;
    }
L_08B5DE1C:
    ctx.gpr[7] = (0u | 10u);
    ctx.gpr[2] = (0u | 48u);
    if (ctx.gpr[11] == ctx.gpr[2]) {
    ctx.gpr[7] = (0u | 8u);
        goto L_08B5DE2C;
    }
    goto L_08B5DE2C;
L_08B5DE2C:
    ctx.gpr[12] = (32768u << 16u);
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[12] = (32768u << 16u);
        goto L_08B5DE3C;
    }
    goto L_08B5DE3C;
L_08B5DE3C:
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[13] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[12] = (ctx.lo);
    goto L_08B5DE5C;
L_08B5DE5C:
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.gpr[15] = (ctx.gpr[14] & 3u);
      if (branch_taken) {
          goto L_08B5DE70;
      }
      goto L_08B5DE64;
    }
L_08B5DE64:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5DE90;
      }
      goto L_08B5DE70;
    }
L_08B5DE70:
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.gpr[15] = (ctx.gpr[14] | 0u);
      if (branch_taken) {
          goto L_08B5DEE8;
      }
      goto L_08B5DE78;
    }
L_08B5DE78:
    ctx.gpr[14] = (0u | 87u);
    ctx.gpr[15] = (ctx.gpr[15] & 1u);
    if (ctx.gpr[15] != 0u) {
    ctx.gpr[14] = (0u | 55u);
        goto L_08B5DE88;
    }
    goto L_08B5DE88;
L_08B5DE88:
    ctx.gpr[11] = (ctx.gpr[11] - ctx.gpr[14]);
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    goto L_08B5DE90;
L_08B5DE90:
    { const bool branch_taken = ctx.gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5DEE8;
      }
      goto L_08B5DE98;
    }
L_08B5DE98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[2] = (ctx.gpr[12] < ctx.gpr[3] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5DEB8;
      }
      goto L_08B5DEA0;
    }
L_08B5DEA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5DEB8;
      }
      goto L_08B5DEA8;
    }
L_08B5DEA8:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[12];
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5DEC0;
      }
      goto L_08B5DEB0;
    }
L_08B5DEB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5DEC0;
      }
      goto L_08B5DEB8;
    }
L_08B5DEB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B5DED0;
      }
      goto L_08B5DEC0;
    }
L_08B5DEC0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[11]);
    goto L_08B5DED0;
L_08B5DED0:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[15] = (ctx.gpr[14] & 4u);
      if (branch_taken) {
          goto L_08B5DE5C;
      }
      goto L_08B5DEE8;
    }
L_08B5DEE8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B5DF0C;
      }
      goto L_08B5DEF0;
    }
L_08B5DEF0:
    ctx.gpr[3] = (32768u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[3] = (32768u << 16u);
        goto L_08B5DF00;
    }
    goto L_08B5DF00;
L_08B5DF00:
    ctx.gpr[7] = (0u | 34u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B5DF18;
      }
      goto L_08B5DF0C;
    }
L_08B5DF0C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5DF18;
      }
      goto L_08B5DF14;
    }
L_08B5DF14:
    ctx.gpr[3] = (0u - ctx.gpr[3]);
    goto L_08B5DF18;
L_08B5DF18:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5DF2C;
      }
      goto L_08B5DF20;
    }
L_08B5DF20:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
        goto L_08B5DF28;
    }
    goto L_08B5DF28;
L_08B5DF28:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08B5DF2C;
L_08B5DF2C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[3] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5DF34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B5DF54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15532)));
    goto L_08B5DD64;
L_08B5DF54:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5DF60:
    ctx.gpr[2] = (2234u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16756));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5DF6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B5DF80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15532)));
    goto L_08B5DF60;
L_08B5DF80:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5DF8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B5DF9Cu);
    // nop
    ctx.pc = 0x08B73604u;
    return;
L_08B5DF9C:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17060)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B5DFB4;
      }
      goto L_08B5DFAC;
    }
L_08B5DFAC:
    ctx.gpr[7] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(17064), ctx.gpr[6]);
    goto L_08B5DFB4;
L_08B5DFB4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17060), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5DFC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17060)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17060), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B5DFF0;
      }
      goto L_08B5DFE4;
    }
L_08B5DFE4:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08B5DFF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17064)));
    ctx.pc = 0x08B7360Cu;
    return;
L_08B5DFF0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5DFFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 20u));
    ctx.gpr[18] = (ctx.gpr[6] & 2047u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1023));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < 20 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B5E120;
      }
      goto L_08B5E040;
    }
L_08B5E040:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.gpr[4] = (16u << 16u);
      if (branch_taken) {
          goto L_08B5E0B4;
      }
      goto L_08B5E048;
    }
L_08B5E048:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16812)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16808)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5E060u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B5E060u) goto L_08B5E060;
    return;
L_08B5E060:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16924)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16920)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5E078u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5E078u) goto L_08B5E078;
    return;
L_08B5E078:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
        goto L_08B5E22C;
    }
    goto L_08B5E080;
L_08B5E080:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.gpr[4] = (32768u << 16u);
      if (branch_taken) {
          goto L_08B5E094;
      }
      goto L_08B5E088;
    }
L_08B5E088:
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B5E228;
      }
      goto L_08B5E094;
    }
L_08B5E094:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
        goto L_08B5E22C;
    }
    goto L_08B5E0A8;
L_08B5E0A8:
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (49136u << 16u);
      if (branch_taken) {
          goto L_08B5E228;
      }
      goto L_08B5E0B4;
    }
L_08B5E0B4:
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> (ctx.gpr[18] & 31u)));
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5E1CC;
      }
      goto L_08B5E0CC;
    }
L_08B5E0CC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16812)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16808)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5E0E0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B5E0E0u) goto L_08B5E0E0;
    return;
L_08B5E0E0:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16924)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16920)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5E0F8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5E0F8u) goto L_08B5E0F8;
    return;
L_08B5E0F8:
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
        goto L_08B5E22C;
    }
    goto L_08B5E100;
L_08B5E100:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[19] = (~(ctx.gpr[19] | 0u));
      if (branch_taken) {
          goto L_08B5E114;
      }
      goto L_08B5E108;
    }
L_08B5E108:
    ctx.gpr[4] = (16u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> (ctx.gpr[18] & 31u)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08B5E114;
L_08B5E114:
    ctx.gpr[16] = (ctx.gpr[16] & ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B5E228;
      }
      goto L_08B5E120;
    }
L_08B5E120:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 52 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_08B5E17C;
      }
      goto L_08B5E12C;
    }
L_08B5E12C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (0u | 1024u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B5E158;
      }
      goto L_08B5E13C;
    }
L_08B5E13C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B5E150u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B5E150u) goto L_08B5E150;
    return;
L_08B5E150:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08B5E158;
L_08B5E158:
    ctx.gpr[3] = (ctx.gpr[5] | 0u);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5E17C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[4] >> (ctx.gpr[19] & 31u));
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5E1CC;
      }
      goto L_08B5E190;
    }
L_08B5E190:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16812)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16808)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5E1A4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B5E1A4u) goto L_08B5E1A4;
    return;
L_08B5E1A4:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16924)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16920)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5E1BCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5E1BCu) goto L_08B5E1BC;
    return;
L_08B5E1BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08B5E1E8;
      }
      goto L_08B5E1C4;
    }
L_08B5E1C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B5E22C;
      }
      goto L_08B5E1CC;
    }
L_08B5E1CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5E1E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[19] = (~(ctx.gpr[19] | 0u));
      if (branch_taken) {
          goto L_08B5E224;
      }
      goto L_08B5E1F0;
    }
L_08B5E1F0:
    ctx.gpr[4] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 52u);
      if (branch_taken) {
          goto L_08B5E204;
      }
      goto L_08B5E1FC;
    }
L_08B5E1FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5E224;
      }
      goto L_08B5E204;
    }
L_08B5E204:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[18]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[6] << (ctx.gpr[4] & 31u));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08B5E224;
    }
    goto L_08B5E224;
L_08B5E224:
    ctx.gpr[17] = (ctx.gpr[17] & ctx.gpr[19]);
    goto L_08B5E228;
L_08B5E228:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    goto L_08B5E22C;
L_08B5E22C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5E254:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[12] = (32768u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[13] & ctx.gpr[12]);
    ctx.gpr[14] = (ctx.gpr[14] & ctx.gpr[8]);
    ctx.gpr[13] = (ctx.gpr[13] ^ ctx.gpr[12]);
    ctx.gpr[3] = (ctx.gpr[5] | 0u);
    ctx.gpr[15] = (ctx.gpr[14] | ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B5E2E8;
      }
      goto L_08B5E2AC;
    }
L_08B5E2AC:
    ctx.gpr[4] = (32752u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08B5E2E8;
      }
      goto L_08B5E2BC;
    }
L_08B5E2BC:
    ctx.gpr[4] = (ctx.gpr[11] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[4] = (ctx.gpr[14] | ctx.gpr[4]);
    ctx.gpr[5] = (32752u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5E2E8;
      }
      goto L_08B5E2D8;
    }
L_08B5E2D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[14]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5E31C;
      }
      goto L_08B5E2E0;
    }
L_08B5E2E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (16u << 16u);
      if (branch_taken) {
          goto L_08B5E338;
      }
      goto L_08B5E2E8;
    }
L_08B5E2E8:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B5E2FCu);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5E2FCu) goto L_08B5E2FC;
    return;
L_08B5E2FC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B5E310u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 445u, 0x08B62348u>(ctx, &aot_mem) && ctx.pc == 0x08B5E310u) goto L_08B5E310;
    return;
L_08B5E310:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5E31C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5E6B4;
      }
      goto L_08B5E324;
    }
L_08B5E324:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5E6B4;
      }
      goto L_08B5E32C;
    }
L_08B5E32C:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[11];
    ctx.gpr[4] = (ctx.gpr[12] >> 31u);
      if (branch_taken) {
          goto L_08B5E350;
      }
      goto L_08B5E334;
    }
L_08B5E334:
    ctx.gpr[4] = (16u << 16u);
    goto L_08B5E338;
L_08B5E338:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5E374;
      }
      goto L_08B5E344;
    }
L_08B5E344:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 20u));
      if (branch_taken) {
          goto L_08B5E3C0;
      }
      goto L_08B5E34C;
    }
L_08B5E34C:
    ctx.gpr[4] = (ctx.gpr[12] >> 31u);
    goto L_08B5E350;
L_08B5E350:
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16824));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5E374:
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[5] = (ctx.gpr[13] << 11u);
      if (branch_taken) {
          goto L_08B5E3A0;
      }
      goto L_08B5E37C;
    }
L_08B5E37C:
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1043));
      if (branch_taken) {
          goto L_08B5E3C4;
      }
      goto L_08B5E388;
    }
L_08B5E388:
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B5E388;
      }
      goto L_08B5E394;
    }
L_08B5E394:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5E3C8;
      }
      goto L_08B5E39C;
    }
L_08B5E39C:
    ctx.gpr[5] = (ctx.gpr[13] << 11u);
    goto L_08B5E3A0;
L_08B5E3A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1022));
      if (branch_taken) {
          goto L_08B5E3C4;
      }
      goto L_08B5E3A8;
    }
L_08B5E3A8:
    ctx.gpr[5] = (ctx.gpr[5] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B5E3A8;
      }
      goto L_08B5E3B4;
    }
L_08B5E3B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5E3C8;
      }
      goto L_08B5E3BC;
    }
L_08B5E3BC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 20u));
    goto L_08B5E3C0;
L_08B5E3C0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1023));
    goto L_08B5E3C4;
L_08B5E3C4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_08B5E3C8;
L_08B5E3C8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 20u));
      if (branch_taken) {
          goto L_08B5E41C;
      }
      goto L_08B5E3D0;
    }
L_08B5E3D0:
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.gpr[7] = (ctx.gpr[14] << 11u);
      if (branch_taken) {
          goto L_08B5E3FC;
      }
      goto L_08B5E3D8;
    }
L_08B5E3D8:
    ctx.gpr[7] = (ctx.gpr[11] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1043));
      if (branch_taken) {
          goto L_08B5E420;
      }
      goto L_08B5E3E4;
    }
L_08B5E3E4:
    ctx.gpr[7] = (ctx.gpr[7] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B5E3E4;
      }
      goto L_08B5E3F0;
    }
L_08B5E3F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < -1022 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5E424;
      }
      goto L_08B5E3F8;
    }
L_08B5E3F8:
    ctx.gpr[7] = (ctx.gpr[14] << 11u);
    goto L_08B5E3FC;
L_08B5E3FC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1022));
      if (branch_taken) {
          goto L_08B5E420;
      }
      goto L_08B5E404;
    }
L_08B5E404:
    ctx.gpr[7] = (ctx.gpr[7] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B5E404;
      }
      goto L_08B5E410;
    }
L_08B5E410:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < -1022 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5E424;
      }
      goto L_08B5E418;
    }
L_08B5E418:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 20u));
    goto L_08B5E41C;
L_08B5E41C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1023));
    goto L_08B5E420;
L_08B5E420:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < -1022 ? 1u : 0u);
    goto L_08B5E424;
L_08B5E424:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < -1022 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5E440;
      }
      goto L_08B5E42C;
    }
L_08B5E42C:
    ctx.gpr[8] = (16u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[13] = (ctx.gpr[13] & ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[13] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B5E478;
      }
      goto L_08B5E440;
    }
L_08B5E440:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1022));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (0u | 32u);
      if (branch_taken) {
          goto L_08B5E46C;
      }
      goto L_08B5E454;
    }
L_08B5E454:
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[8]);
    ctx.gpr[13] = (ctx.gpr[13] << (ctx.gpr[8] & 31u));
    ctx.gpr[9] = (ctx.gpr[10] >> (ctx.gpr[9] & 31u));
    ctx.gpr[13] = (ctx.gpr[13] | ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[10] << (ctx.gpr[8] & 31u));
      if (branch_taken) {
          goto L_08B5E478;
      }
      goto L_08B5E46C;
    }
L_08B5E46C:
    ctx.gpr[13] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[13] = (ctx.gpr[10] << (ctx.gpr[13] & 31u));
    ctx.gpr[10] = (0u | 0u);
    goto L_08B5E478;
L_08B5E478:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1022));
      if (branch_taken) {
          goto L_08B5E4A0;
      }
      goto L_08B5E480;
    }
L_08B5E480:
    ctx.gpr[8] = (16u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[14] = (ctx.gpr[14] & ctx.gpr[8]);
    ctx.gpr[14] = (ctx.gpr[14] | ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[13] - ctx.gpr[14]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[10] - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08B5E4EC;
      }
      goto L_08B5E4A0;
    }
L_08B5E4A0:
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (0u | 32u);
      if (branch_taken) {
          goto L_08B5E4D4;
      }
      goto L_08B5E4B0;
    }
L_08B5E4B0:
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[8]);
    ctx.gpr[14] = (ctx.gpr[14] << (ctx.gpr[8] & 31u));
    ctx.gpr[9] = (ctx.gpr[11] >> (ctx.gpr[9] & 31u));
    ctx.gpr[14] = (ctx.gpr[14] | ctx.gpr[9]);
    ctx.gpr[11] = (ctx.gpr[11] << (ctx.gpr[8] & 31u));
    ctx.gpr[8] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[13] - ctx.gpr[14]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[10] - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08B5E4EC;
      }
      goto L_08B5E4D4;
    }
L_08B5E4D4:
    ctx.gpr[14] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[14] = (ctx.gpr[11] << (ctx.gpr[14] & 31u));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[10] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[13] - ctx.gpr[14]);
    ctx.gpr[2] = (ctx.gpr[10] | 0u);
    goto L_08B5E4EC;
L_08B5E4EC:
    ctx.gpr[3] = (ctx.gpr[6] - ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[6] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B5E590;
      }
      goto L_08B5E4F8;
    }
L_08B5E4F8:
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
        goto L_08B5E508;
    }
    goto L_08B5E508;
L_08B5E508:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.gpr[9] = (ctx.gpr[8] | ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B5E534;
      }
      goto L_08B5E510;
    }
L_08B5E510:
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[13]);
    ctx.gpr[8] = (ctx.gpr[10] >> 31u);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[13] - ctx.gpr[14]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[10] - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08B5E584;
      }
      goto L_08B5E534;
    }
L_08B5E534:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[13] = (ctx.gpr[8] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08B5E55C;
      }
      goto L_08B5E53C;
    }
L_08B5E53C:
    ctx.gpr[8] = (ctx.gpr[2] >> 31u);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[8] = (ctx.gpr[10] < ctx.gpr[11] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[13] - ctx.gpr[14]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[10] - ctx.gpr[11]);
      if (branch_taken) {
          goto L_08B5E584;
      }
      goto L_08B5E55C;
    }
L_08B5E55C:
    ctx.gpr[4] = (ctx.gpr[12] >> 31u);
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16824));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5E584:
    ctx.gpr[15] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[6] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_08B5E4F8;
      }
      goto L_08B5E590;
    }
L_08B5E590:
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
        goto L_08B5E59C;
    }
    goto L_08B5E59C;
L_08B5E59C:
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    ctx.gpr[6] = (ctx.gpr[13] | ctx.gpr[10]);
        goto L_08B5E5B0;
    }
    goto L_08B5E5A4;
L_08B5E5A4:
    ctx.gpr[13] = (ctx.gpr[6] | 0u);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[13] | ctx.gpr[10]);
    goto L_08B5E5B0;
L_08B5E5B0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5E5C8;
      }
      goto L_08B5E5B8;
    }
L_08B5E5B8:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[13]);
        goto L_08B5E5F4;
    }
    goto L_08B5E5C0;
L_08B5E5C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5E610;
      }
      goto L_08B5E5C8;
    }
L_08B5E5C8:
    ctx.gpr[4] = (ctx.gpr[12] >> 31u);
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16824));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5E5F0:
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[13]);
    goto L_08B5E5F4;
L_08B5E5F4:
    ctx.gpr[6] = (ctx.gpr[10] >> 31u);
    ctx.gpr[13] = (ctx.gpr[13] + ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B5E5F0;
      }
      goto L_08B5E60C;
    }
L_08B5E60C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < -1022 ? 1u : 0u);
    goto L_08B5E610;
L_08B5E610:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1022));
        goto L_08B5E648;
    }
    goto L_08B5E618;
L_08B5E618:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1023));
    ctx.gpr[4] = (ctx.gpr[13] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 20u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5E648:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5E678;
      }
      goto L_08B5E658;
    }
L_08B5E658:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[13] << (ctx.gpr[4] & 31u));
    ctx.gpr[10] = (ctx.gpr[10] >> (ctx.gpr[5] & 31u));
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> (ctx.gpr[5] & 31u)));
    ctx.gpr[10] = (ctx.gpr[10] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[13] | ctx.gpr[12]);
      if (branch_taken) {
          goto L_08B5E6A4;
      }
      goto L_08B5E678;
    }
L_08B5E678:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08B5E698;
      }
      goto L_08B5E680;
    }
L_08B5E680:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[13] << (ctx.gpr[4] & 31u));
    ctx.gpr[10] = (ctx.gpr[10] >> (ctx.gpr[5] & 31u));
    ctx.gpr[10] = (ctx.gpr[4] | ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[12] | ctx.gpr[12]);
      if (branch_taken) {
          goto L_08B5E6A4;
      }
      goto L_08B5E698;
    }
L_08B5E698:
    ctx.gpr[10] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> (ctx.gpr[10] & 31u)));
    ctx.gpr[13] = (ctx.gpr[12] | ctx.gpr[12]);
    goto L_08B5E6A4;
L_08B5E6A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08B5E6B4;
L_08B5E6B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5E6C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[18] = (16u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B5E804;
      }
      goto L_08B5E714;
    }
L_08B5E714:
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[8] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5E774;
      }
      goto L_08B5E72C;
    }
L_08B5E72C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16964)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16960)));
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16924)));
    ctx.gpr[31] = (0x08B5E744u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16920)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 445u, 0x08B62348u>(ctx, &aot_mem) && ctx.pc == 0x08B5E744u) goto L_08B5E744;
    return;
L_08B5E744:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5E774:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5E7B8;
      }
      goto L_08B5E77C;
    }
L_08B5E77C:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-54));
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B5E7A0u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5E7A0u) goto L_08B5E7A0;
    return;
L_08B5E7A0:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B5E804;
      }
      goto L_08B5E7B8;
    }
L_08B5E7B8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16924)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16920)));
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08B5E7D4u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 445u, 0x08B62348u>(ctx, &aot_mem) && ctx.pc == 0x08B5E7D4u) goto L_08B5E7D4;
    return;
L_08B5E7D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5E804:
    ctx.gpr[4] = (32752u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (16u << 16u);
      if (branch_taken) {
          goto L_08B5E8A0;
      }
      goto L_08B5E814;
    }
L_08B5E814:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 20u));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (9u << 16u);
    ctx.gpr[16] = (ctx.gpr[8] & ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24420));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1023));
    ctx.gpr[4] = (16368u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 20u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16820)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16816)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08B5E880u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5E880u) goto L_08B5E880;
    return;
L_08B5E880:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B5E8DC;
      }
      goto L_08B5E898;
    }
L_08B5E898:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5EB2C;
      }
      goto L_08B5E8A0;
    }
L_08B5E8A0:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08B5E8ACu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B5E8ACu) goto L_08B5E8AC;
    return;
L_08B5E8AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5E8DC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16924)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16920)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B5E8FCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5E8FCu) goto L_08B5E8FC;
    return;
L_08B5E8FC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
        goto L_08B5E9CC;
    }
    goto L_08B5E904;
L_08B5E904:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[3] = (ctx.gpr[17] | 0u);
        goto L_08B5E998;
    }
    goto L_08B5E90C;
L_08B5E90C:
    ctx.gpr[31] = (0x08B5E914u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 482u, 0x08B625C8u>(ctx, &aot_mem) && ctx.pc == 0x08B5E914u) goto L_08B5E914;
    return;
L_08B5E914:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16844)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16840)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5E934u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5E934u) goto L_08B5E934;
    return;
L_08B5E934:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16848)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5E954u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5E954u) goto L_08B5E954;
    return;
L_08B5E954:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5E968u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B5E968u) goto L_08B5E968;
    return;
L_08B5E968:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5E998:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5E9CC:
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B5E9DCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5E9DCu) goto L_08B5E9DC;
    return;
L_08B5E9DC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16972)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16968)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B5E9FCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5E9FCu) goto L_08B5E9FC;
    return;
L_08B5E9FC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16980)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16976)));
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5EA14u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5EA14u) goto L_08B5EA14;
    return;
L_08B5EA14:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5EA28u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5EA28u) goto L_08B5EA28;
    return;
L_08B5EA28:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B5EA78;
      }
      goto L_08B5EA34;
    }
L_08B5EA34:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B5EA48u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5EA48u) goto L_08B5EA48;
    return;
L_08B5EA48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5EA78:
    ctx.gpr[31] = (0x08B5EA80u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 482u, 0x08B625C8u>(ctx, &aot_mem) && ctx.pc == 0x08B5EA80u) goto L_08B5EA80;
    return;
L_08B5EA80:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16844)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16840)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5EAA0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5EAA0u) goto L_08B5EAA0;
    return;
L_08B5EAA0:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16848)));
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5EAC0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5EAC0u) goto L_08B5EAC0;
    return;
L_08B5EAC0:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B5EAD4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5EAD4u) goto L_08B5EAD4;
    return;
L_08B5EAD4:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B5EAE8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5EAE8u) goto L_08B5EAE8;
    return;
L_08B5EAE8:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5EAFCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5EAFCu) goto L_08B5EAFC;
    return;
L_08B5EAFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5EB2C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16988)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16984)));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B5EB44u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B5EB44u) goto L_08B5EB44;
    return;
L_08B5EB44:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5EB60u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 445u, 0x08B62348u>(ctx, &aot_mem) && ctx.pc == 0x08B5EB60u) goto L_08B5EB60;
    return;
L_08B5EB60:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B5EB70u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 482u, 0x08B625C8u>(ctx, &aot_mem) && ctx.pc == 0x08B5EB70u) goto L_08B5EB70;
    return;
L_08B5EB70:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B5EB94u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5EB94u) goto L_08B5EB94;
    return;
L_08B5EB94:
    ctx.gpr[4] = (6u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5242));
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[30] = (ctx.gpr[19] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08B5EBBCu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5EBBCu) goto L_08B5EBBC;
    return;
L_08B5EBBC:
    ctx.gpr[4] = (7u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18351));
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[19]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16908)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16904)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5EBE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5EBE8u) goto L_08B5EBE8;
    return;
L_08B5EBE8:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16892)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16888)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5EC00u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B5EC00u) goto L_08B5EC00;
    return;
L_08B5EC00:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5EC14u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5EC14u) goto L_08B5EC14;
    return;
L_08B5EC14:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16876)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16872)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5EC2Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B5EC2Cu) goto L_08B5EC2C;
    return;
L_08B5EC2C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5EC40u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5EC40u) goto L_08B5EC40;
    return;
L_08B5EC40:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16916)));
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B5EC60u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16912)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5EC60u) goto L_08B5EC60;
    return;
L_08B5EC60:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16900)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B5EC78u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16896)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B5EC78u) goto L_08B5EC78;
    return;
L_08B5EC78:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5EC8Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5EC8Cu) goto L_08B5EC8C;
    return;
L_08B5EC8C:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16884)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B5ECA4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16880)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B5ECA4u) goto L_08B5ECA4;
    return;
L_08B5ECA4:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5ECB8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5ECB8u) goto L_08B5ECB8;
    return;
L_08B5ECB8:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16868)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B5ECD0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16864)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B5ECD0u) goto L_08B5ECD0;
    return;
L_08B5ECD0:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5ECE4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5ECE4u) goto L_08B5ECE4;
    return;
L_08B5ECE4:
    ctx.gpr[19] = (ctx.gpr[30] | ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5ECFCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B5ECFCu) goto L_08B5ECFC;
    return;
L_08B5ECFC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08B5EE84;
      }
      goto L_08B5ED20;
    }
L_08B5ED20:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16980)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16976)));
    ctx.gpr[30] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B5ED3Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5ED3Cu) goto L_08B5ED3C;
    return;
L_08B5ED3C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B5ED50u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5ED50u) goto L_08B5ED50;
    return;
L_08B5ED50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B5ED6Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B5ED6Cu) goto L_08B5ED6C;
    return;
L_08B5ED6C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B5ED80u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5ED80u) goto L_08B5ED80;
    return;
L_08B5ED80:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B5EDBC;
      }
      goto L_08B5ED8C;
    }
L_08B5ED8C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5EDA0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5EDA0u) goto L_08B5EDA0;
    return;
L_08B5EDA0:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B5EDB4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5EDB4u) goto L_08B5EDB4;
    return;
L_08B5EDB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5EE54;
      }
      goto L_08B5EDBC;
    }
L_08B5EDBC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16844)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16840)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5EDE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5EDE4u) goto L_08B5EDE4;
    return;
L_08B5EDE4:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16848)));
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5EE04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5EE04u) goto L_08B5EE04;
    return;
L_08B5EE04:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B5EE18u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B5EE18u) goto L_08B5EE18;
    return;
L_08B5EE18:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5EE2Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5EE2Cu) goto L_08B5EE2C;
    return;
L_08B5EE2C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08B5EE40u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5EE40u) goto L_08B5EE40;
    return;
L_08B5EE40:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5EE54u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5EE54u) goto L_08B5EE54;
    return;
L_08B5EE54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5EE84:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B5EE9Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5EE9Cu) goto L_08B5EE9C;
    return;
L_08B5EE9C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B5EEB0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5EEB0u) goto L_08B5EEB0;
    return;
L_08B5EEB0:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B5EED8;
      }
      goto L_08B5EEBC;
    }
L_08B5EEBC:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B5EED0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5EED0u) goto L_08B5EED0;
    return;
L_08B5EED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5EF54;
      }
      goto L_08B5EED8;
    }
L_08B5EED8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16844)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16840)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5EEF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5EEF8u) goto L_08B5EEF8;
    return;
L_08B5EEF8:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16848)));
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5EF18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5EF18u) goto L_08B5EF18;
    return;
L_08B5EF18:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5EF2Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5EF2Cu) goto L_08B5EF2C;
    return;
L_08B5EF2C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B5EF40u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5EF40u) goto L_08B5EF40;
    return;
L_08B5EF40:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5EF54u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5EF54u) goto L_08B5EF54;
    return;
L_08B5EF54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5EF84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (16u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B5F09C;
      }
      goto L_08B5EFCC;
    }
L_08B5EFCC:
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5F020;
      }
      goto L_08B5EFE4;
    }
L_08B5EFE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16964)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16960)));
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16924)));
    ctx.gpr[31] = (0x08B5EFFCu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16920)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 445u, 0x08B62348u>(ctx, &aot_mem) && ctx.pc == 0x08B5EFFCu) goto L_08B5EFFC;
    return;
L_08B5EFFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F020:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    ctx.gpr[4] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B5F05C;
      }
      goto L_08B5F028;
    }
L_08B5F028:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16856)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-54));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5F044u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5F044u) goto L_08B5F044;
    return;
L_08B5F044:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08B5F09C;
      }
      goto L_08B5F05C;
    }
L_08B5F05C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16924)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16920)));
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08B5F078u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 445u, 0x08B62348u>(ctx, &aot_mem) && ctx.pc == 0x08B5F078u) goto L_08B5F078;
    return;
L_08B5F078:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F09C:
    ctx.gpr[4] = (32752u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 20u));
      if (branch_taken) {
          goto L_08B5F0E4;
      }
      goto L_08B5F0AC;
    }
L_08B5F0AC:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B5F0C0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B5F0C0u) goto L_08B5F0C0;
    return;
L_08B5F0C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F0E4:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1023));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[6] = (16u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[8] = (0u | 1023u);
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] << 20u);
    ctx.gpr[18] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[31] = (0x08B5F11Cu);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 482u, 0x08B625C8u>(ctx, &aot_mem) && ctx.pc == 0x08B5F11Cu) goto L_08B5F11C;
    return;
L_08B5F11C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16948)));
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16944)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B5F150u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5F150u) goto L_08B5F150;
    return;
L_08B5F150:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5F164u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B5E6C0;
L_08B5F164:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16932)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16928)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5F17Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5F17Cu) goto L_08B5F17C;
    return;
L_08B5F17C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5F190u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B5F190u) goto L_08B5F190;
    return;
L_08B5F190:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16936)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B5F1B0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5F1B0u) goto L_08B5F1B0;
    return;
L_08B5F1B0:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5F1C4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08B5F1C4u) goto L_08B5F1C4;
    return;
L_08B5F1C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F1E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18128), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B5F20Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 320u, 0x08B55208u>(ctx, &aot_mem) && ctx.pc == 0x08B5F20Cu) goto L_08B5F20C;
    return;
L_08B5F20C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B5F228;
      }
      goto L_08B5F218;
    }
L_08B5F218:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18128)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5F228;
      }
      goto L_08B5F224;
    }
L_08B5F224:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08B5F228;
L_08B5F228:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F23C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18128), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B5F264u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 335u, 0x08B5528Cu>(ctx, &aot_mem) && ctx.pc == 0x08B5F264u) goto L_08B5F264;
    return;
L_08B5F264:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B5F280;
      }
      goto L_08B5F270;
    }
L_08B5F270:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18128)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5F280;
      }
      goto L_08B5F27C;
    }
L_08B5F27C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08B5F280;
L_08B5F280:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F294:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18128), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B5F2C0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 229u, 0x08B54DD8u>(ctx, &aot_mem) && ctx.pc == 0x08B5F2C0u) goto L_08B5F2C0;
    return;
L_08B5F2C0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B5F2DC;
      }
      goto L_08B5F2CC;
    }
L_08B5F2CC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18128)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5F2DC;
      }
      goto L_08B5F2D8;
    }
L_08B5F2D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08B5F2DC;
L_08B5F2DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F2F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18128), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B5F31Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 290u, 0x08B550C0u>(ctx, &aot_mem) && ctx.pc == 0x08B5F31Cu) goto L_08B5F31C;
    return;
L_08B5F31C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B5F338;
      }
      goto L_08B5F328;
    }
L_08B5F328:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18128)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5F338;
      }
      goto L_08B5F334;
    }
L_08B5F334:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08B5F338;
L_08B5F338:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F34C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18128), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B5F370u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 275u, 0x08B54FD0u>(ctx, &aot_mem) && ctx.pc == 0x08B5F370u) goto L_08B5F370;
    return;
L_08B5F370:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B5F38C;
      }
      goto L_08B5F37C;
    }
L_08B5F37C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18128)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5F38C;
      }
      goto L_08B5F388;
    }
L_08B5F388:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08B5F38C;
L_08B5F38C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F3A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(18128), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B5F3CCu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 305u, 0x08B55164u>(ctx, &aot_mem) && ctx.pc == 0x08B5F3CCu) goto L_08B5F3CC;
    return;
L_08B5F3CC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B5F3E8;
      }
      goto L_08B5F3D8;
    }
L_08B5F3D8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18128)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5F3E8;
      }
      goto L_08B5F3E4;
    }
L_08B5F3E4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08B5F3E8;
L_08B5F3E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F3FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[6] = (0u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B5F430u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08B5C404;
L_08B5F430:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F43C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_08B5F47C;
      }
      goto L_08B5F450;
    }
L_08B5F450:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08B5F464u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 480u, 0x08ABE378u>(ctx, &aot_mem) && ctx.pc == 0x08B5F464u) goto L_08B5F464;
    return;
L_08B5F464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08B5F4F0;
      }
      goto L_08B5F478;
    }
L_08B5F478:
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    goto L_08B5F47C;
L_08B5F47C:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[6] = (0u | 1u);
        goto L_08B5F4A8;
    }
    goto L_08B5F48C;
L_08B5F48C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F4A8:
    ctx.gpr[6] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08B5F4C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 480u, 0x08ABE378u>(ctx, &aot_mem) && ctx.pc == 0x08B5F4C8u) goto L_08B5F4C8;
    return;
L_08B5F4C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08B5F4F0;
      }
      goto L_08B5F4D4;
    }
L_08B5F4D4:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F4F0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F500:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5F52C;
      }
      goto L_08B5F508;
    }
L_08B5F508:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08B5F52C;
L_08B5F52C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F534:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_08B5F54C;
L_08B5F54C:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[11] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[11] = (ctx.gpr[11] >> 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[11] = (ctx.gpr[7] >> 16u);
    ctx.gpr[2] = (ctx.gpr[7] & 65535u);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[7] << 16u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[7] = (ctx.gpr[7] >> 16u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B5F54C;
      }
      goto L_08B5F5A0;
    }
L_08B5F5A0:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5F620;
      }
      goto L_08B5F5A8;
    }
L_08B5F5A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[10] << 2u);
        goto L_08B5F610;
    }
    goto L_08B5F5B8;
L_08B5F5B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B5F5D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08B5F43C;
L_08B5F5D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08B5F5F4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B5F5F4u) goto L_08B5F5F4;
    return;
L_08B5F5F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08B5F600u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08B5F500;
L_08B5F600:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[10] << 2u);
    goto L_08B5F610;
L_08B5F610:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    goto L_08B5F620;
L_08B5F620:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F634:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (0u | 9u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08B5F690;
      }
      goto L_08B5F680;
    }
L_08B5F680:
    ctx.gpr[6] = (ctx.gpr[6] << 1u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5F680;
      }
      goto L_08B5F690;
    }
L_08B5F690:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B5F6A0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08B5F43C;
L_08B5F6A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[20] = (0u | 9u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B5F6FC;
      }
      goto L_08B5F6BC;
    }
L_08B5F6BC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08B5F6C4;
L_08B5F6C4:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B5F6E0u);
    ctx.gpr[6] = (0u | 10u);
    goto L_08B5F534;
L_08B5F6E0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5F6C4;
      }
      goto L_08B5F6F0;
    }
L_08B5F6F0:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5F704;
      }
      goto L_08B5F6FC;
    }
L_08B5F6FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    goto L_08B5F704;
L_08B5F704:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5F738;
      }
      goto L_08B5F70C;
    }
L_08B5F70C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    goto L_08B5F710;
L_08B5F710:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08B5F728u);
    ctx.gpr[6] = (0u | 10u);
    goto L_08B5F534;
L_08B5F728:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
        goto L_08B5F710;
    }
    goto L_08B5F738;
L_08B5F738:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F758:
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B5F770;
      }
      goto L_08B5F768;
    }
L_08B5F768:
    ctx.gpr[2] = (0u | 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    goto L_08B5F770;
L_08B5F770:
    ctx.gpr[5] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (61440u << 16u);
      if (branch_taken) {
          goto L_08B5F788;
      }
      goto L_08B5F780;
    }
L_08B5F780:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    goto L_08B5F788;
L_08B5F788:
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (49152u << 16u);
      if (branch_taken) {
          goto L_08B5F79C;
      }
      goto L_08B5F794;
    }
L_08B5F794:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    goto L_08B5F79C;
L_08B5F79C:
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (32768u << 16u);
      if (branch_taken) {
          goto L_08B5F7B0;
      }
      goto L_08B5F7A8;
    }
L_08B5F7A8:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    goto L_08B5F7B0;
L_08B5F7B0:
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (16384u << 16u);
      if (branch_taken) {
          goto L_08B5F7D0;
      }
      goto L_08B5F7BC;
    }
L_08B5F7BC:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5F7D0;
      }
      goto L_08B5F7C8;
    }
L_08B5F7C8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 32u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F7D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F7D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] & 7u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08B5F820;
      }
      goto L_08B5F7E8;
    }
L_08B5F7E8:
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 2u);
      if (branch_taken) {
          goto L_08B5F80C;
      }
      goto L_08B5F7F4;
    }
L_08B5F7F4:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] >> 2u);
        goto L_08B5F814;
    }
    goto L_08B5F7FC;
L_08B5F7FC:
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F80C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F814:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 2u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F820:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B5F830;
      }
      goto L_08B5F828;
    }
L_08B5F828:
    ctx.gpr[2] = (0u | 16u);
    ctx.gpr[5] = (ctx.gpr[5] >> 16u);
    goto L_08B5F830;
L_08B5F830:
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 15u);
      if (branch_taken) {
          goto L_08B5F848;
      }
      goto L_08B5F83C;
    }
L_08B5F83C:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[5] & 15u);
    goto L_08B5F848;
L_08B5F848:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 3u);
      if (branch_taken) {
          goto L_08B5F85C;
      }
      goto L_08B5F850;
    }
L_08B5F850:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    ctx.gpr[6] = (ctx.gpr[5] & 3u);
    goto L_08B5F85C;
L_08B5F85C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08B5F870;
      }
      goto L_08B5F864;
    }
L_08B5F864:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[5] >> 2u);
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
    goto L_08B5F870;
L_08B5F870:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5F88C;
      }
      goto L_08B5F878;
    }
L_08B5F878:
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5F88C;
      }
      goto L_08B5F884;
    }
L_08B5F884:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 32u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F88C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F894:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B5F8B4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08B5F43C;
L_08B5F8B4:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5F8D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5F8F4;
      }
      goto L_08B5F8EC;
    }
L_08B5F8EC:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08B5F8F4;
L_08B5F8F4:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[8] << 2u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_08B5F918;
    }
    goto L_08B5F918;
L_08B5F918:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[31] = (0x08B5F938u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08B5F43C;
L_08B5F938:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[3] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[12] = (ctx.gpr[9] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08B5F978;
      }
      goto L_08B5F964;
    }
L_08B5F964:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), 0u);
    goto L_08B5F968;
L_08B5F968:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[12] = (ctx.gpr[9] < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[12] != 0u) {
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), 0u);
        goto L_08B5F968;
    }
    goto L_08B5F978;
L_08B5F978:
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (ctx.gpr[9] << 2u);
    ctx.gpr[3] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[6]);
    ctx.gpr[11] = (ctx.gpr[3] + ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[10] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B5FAAC;
      }
      goto L_08B5F9A0;
    }
L_08B5F9A0:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[13] & 65535u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.gpr[9] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_08B5FA20;
      }
      goto L_08B5F9B0;
    }
L_08B5F9B0:
    ctx.gpr[13] = (ctx.gpr[5] | 0u);
    ctx.gpr[12] = (0u | 0u);
    goto L_08B5F9B8;
L_08B5F9B8:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (ctx.gpr[15] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[25])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[15] = (ctx.gpr[15] >> 16u);
    ctx.gpr[25] = (ctx.gpr[24] & 65535u);
    ctx.gpr[24] = (ctx.gpr[24] >> 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[15] = (ctx.gpr[31] + ctx.gpr[25]);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[12]);
    ctx.gpr[12] = (ctx.gpr[15] >> 16u);
    ctx.gpr[25] = (ctx.lo);
    ctx.gpr[24] = (ctx.gpr[25] + ctx.gpr[24]);
    ctx.gpr[12] = (ctx.gpr[24] + ctx.gpr[12]);
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[12]));
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.gpr[12] = (ctx.gpr[12] >> 16u);
    ctx.gpr[15] = (ctx.gpr[9] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B5F9B8;
      }
      goto L_08B5FA18;
    }
L_08B5FA18:
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    goto L_08B5FA20;
L_08B5FA20:
    ctx.gpr[14] = (ctx.gpr[13] >> 16u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.gpr[13] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B5FA9C;
      }
      goto L_08B5FA2C;
    }
L_08B5FA2C:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[3] | 0u);
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[15] = (ctx.gpr[24] | 0u);
    goto L_08B5FA3C;
L_08B5FA3C:
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.gpr[25] = (ctx.gpr[25] & 65535u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[25])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[24] = (ctx.gpr[24] >> 16u);
    ctx.gpr[15] = (ctx.lo);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[24]);
    ctx.gpr[12] = (ctx.gpr[15] + ctx.gpr[12]);
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(4));
    ctx.gpr[15] = (ctx.gpr[15] >> 16u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.gpr[15] = (ctx.gpr[12] >> 16u);
    ctx.gpr[12] = (ctx.gpr[24] & 65535u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[25] = (ctx.lo);
    ctx.gpr[12] = (ctx.gpr[25] + ctx.gpr[12]);
    ctx.gpr[15] = (ctx.gpr[12] + ctx.gpr[15]);
    ctx.gpr[25] = (ctx.gpr[9] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.gpr[12] = (ctx.gpr[15] >> 16u);
      if (branch_taken) {
          goto L_08B5FA3C;
      }
      goto L_08B5FA98;
    }
L_08B5FA94:
    ctx.gpr[12] = (ctx.gpr[15] >> 16u);
    goto L_08B5FA98;
L_08B5FA98:
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[15]);
    goto L_08B5FA9C;
L_08B5FA9C:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (ctx.gpr[10] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B5F9A0;
      }
      goto L_08B5FAAC;
    }
L_08B5FAAC:
    ctx.gpr[13] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_08B5FAB0;
L_08B5FAB0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08B5FACC;
      }
      goto L_08B5FAB8;
    }
L_08B5FAB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5FACC;
      }
      goto L_08B5FAC4;
    }
L_08B5FAC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B5FAB0;
      }
      goto L_08B5FACC;
    }
L_08B5FACC:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5FADC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] & 3u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B5FB34;
      }
      goto L_08B5FB0C;
    }
L_08B5FB0C:
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17272));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5FB30u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08B5F534;
L_08B5FB30:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08B5FB34;
L_08B5FB34:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 2u));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B5FBCC;
      }
      goto L_08B5FB40;
    }
L_08B5FB40:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (ctx.gpr[19] & 1u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 1u));
      if (branch_taken) {
          goto L_08B5FB68;
      }
      goto L_08B5FB50;
    }
L_08B5FB50:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5FB5Cu);
    ctx.gpr[5] = (0u | 625u);
    goto L_08B5F894;
L_08B5FB5C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    goto L_08B5FB68;
L_08B5FB68:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B5FB8C;
      }
      goto L_08B5FB70;
    }
L_08B5FB70:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B5FB7Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08B5F8D0;
L_08B5FB7C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B5FB88u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08B5F500;
L_08B5FB88:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08B5FB8C;
L_08B5FB8C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08B5FBCC;
      }
      goto L_08B5FB94;
    }
L_08B5FB94:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[19] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
      if (branch_taken) {
          goto L_08B5FBC4;
      }
      goto L_08B5FBA8;
    }
L_08B5FBA8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B5FBB8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    goto L_08B5F8D0;
L_08B5FBB8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08B5FBC4;
L_08B5FBC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B5FB68;
      }
      goto L_08B5FBCC;
    }
L_08B5FBCC:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08B5FBF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[11] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 5u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[11] | 0u);
      if (branch_taken) {
          goto L_08B5FC34;
      }
      goto L_08B5FC24;
    }
L_08B5FC24:
    ctx.gpr[9] = (ctx.gpr[9] << 1u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5FC24;
      }
      goto L_08B5FC34;
    }
L_08B5FC34:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[31] = (0x08B5FC54u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    goto L_08B5F43C;
L_08B5FC54:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B5FC8C;
      }
      goto L_08B5FC78;
    }
L_08B5FC78:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B5FC78;
      }
      goto L_08B5FC8C;
    }
L_08B5FC8C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] & 31u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08B5FCE8;
      }
      goto L_08B5FCA4;
    }
L_08B5FCA4:
    ctx.gpr[3] = (0u | 32u);
    ctx.gpr[3] = (ctx.gpr[3] - ctx.gpr[6]);
    ctx.gpr[11] = (0u | 0u);
    goto L_08B5FCB0;
L_08B5FCB0:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[12] << (ctx.gpr[6] & 31u));
    ctx.gpr[11] = (ctx.gpr[12] | ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[12] = (ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] >> (ctx.gpr[3] & 31u));
      if (branch_taken) {
          goto L_08B5FCB0;
      }
      goto L_08B5FCD8;
    }
L_08B5FCD8:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08B5FD00;
      }
      goto L_08B5FCE0;
    }
L_08B5FCE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B5FD00;
      }
      goto L_08B5FCE8;
    }
L_08B5FCE8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[10] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B5FCE8;
      }
      goto L_08B5FD00;
    }
L_08B5FD00:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B5FD18u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08B5F500;
L_08B5FD18:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5FD24:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B5FD58;
      }
      goto L_08B5FD38;
    }
L_08B5FD38:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08B5FD60;
      }
      goto L_08B5FD58;
    }
L_08B5FD58:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5FD60:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B5FD94;
      }
      goto L_08B5FD74;
    }
L_08B5FD74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08B5FD8C;
    }
    goto L_08B5FD8C;
L_08B5FD8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5FD94:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08B5FDA4;
      }
      goto L_08B5FD9C;
    }
L_08B5FD9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08B5FD60;
      }
      goto L_08B5FDA4;
    }
L_08B5FDA4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5FDAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[11] = (ctx.gpr[5] | 0u);
    ctx.gpr[3] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[11] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B5FDCCu);
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    goto L_08B5FD24;
L_08B5FDCC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5FDFC;
      }
      goto L_08B5FDD8;
    }
L_08B5FDD8:
    ctx.gpr[4] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5FDE4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08B5F43C;
L_08B5FDE4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5FDFC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08B5FE24;
      }
      goto L_08B5FE04;
    }
L_08B5FE04:
    ctx.gpr[4] = (ctx.gpr[11] | 0u);
    ctx.gpr[11] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[11] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[10] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B5FE30;
      }
      goto L_08B5FE24;
    }
L_08B5FE24:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[11] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (ctx.gpr[10] + static_cast<std::uint32_t>(20));
    goto L_08B5FE30;
L_08B5FE30:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08B5FE50u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08B5F43C;
L_08B5FE50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[9] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.gpr[3] = (0u | 0u);
    goto L_08B5FE88;
L_08B5FE88:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[10] & 65535u);
    ctx.gpr[13] = (ctx.gpr[11] & 65535u);
    ctx.gpr[12] = (ctx.gpr[12] - ctx.gpr[13]);
    ctx.gpr[13] = (ctx.gpr[12] + ctx.gpr[3]);
    ctx.gpr[10] = (ctx.gpr[10] >> 16u);
    ctx.gpr[11] = (ctx.gpr[11] >> 16u);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 16u));
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[3]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[12] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[12] | 0u);
    ctx.gpr[3] = (ctx.gpr[11] | 0u);
    ctx.gpr[13] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08B5FE88;
      }
      goto L_08B5FEE0;
    }
L_08B5FEE0:
    ctx.gpr[5] = (ctx.gpr[12] < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(-4));
        goto L_08B5FF30;
    }
    goto L_08B5FEEC;
L_08B5FEEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[11]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[6] >> 16u);
    ctx.gpr[11] = (ctx.gpr[6] + ctx.gpr[10]);
    ctx.gpr[12] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[8] = (ctx.gpr[12] | 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08B5FEEC;
      }
      goto L_08B5FF2C;
    }
L_08B5FF2C:
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(-4));
    goto L_08B5FF30;
L_08B5FF30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5FF4C;
      }
      goto L_08B5FF3C;
    }
L_08B5FF3C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B5FF3C;
      }
      goto L_08B5FF4C;
    }
L_08B5FF4C:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5FF5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32752u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (832u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[4] = (0u - ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B5FF9C;
      }
      goto L_08B5FF84;
    }
L_08B5FF84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5FF9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 20u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_08B5FFCC;
      }
      goto L_08B5FFAC;
    }
L_08B5FFAC:
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> (ctx.gpr[4] & 31u)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B5FFCC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 31 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08B5FFEC;
      }
      goto L_08B5FFDC;
    }
L_08B5FFDC:
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] << (ctx.gpr[4] & 31u));
    goto L_08B5FFEC;
L_08B5FFEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0214(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0214_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_214(Runtime &runtime) {
    runtime.register_generated_unit(214u, 0x08B5C000u, 16384u, &recomp_unit_0214, &recomp_unit_0214_entry);
    runtime.register_function(0x08B5C000u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C00Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C01Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C034u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C03Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C044u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C050u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C060u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C064u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C070u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C080u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C084u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C090u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C0A4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C0D8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C128u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C130u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C134u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C138u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C164u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C188u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C190u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C198u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C1A4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C1ACu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C1B4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C1BCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C1C4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C1C8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C1D0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C1E0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C1E8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C1F0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C214u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C220u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C230u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C240u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C248u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C258u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C268u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C26Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C280u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C2A8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C2E0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C2F0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C300u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C31Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C350u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C354u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C380u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C390u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C39Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C3ACu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C3D8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C404u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C420u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C42Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C4B8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C4D0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C4E8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C4F4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C500u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C50Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C518u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C528u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C538u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C548u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C564u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C574u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C58Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C594u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C59Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C5ACu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C5BCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C5C8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C5D0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C5DCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C5ECu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C5F0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C60Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C61Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C624u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C63Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C648u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C654u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C660u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C66Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C684u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C690u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C698u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C6A0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C6B0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C6C4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C6E0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C6E8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C6F8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C724u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C734u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C73Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C748u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C74Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C778u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C788u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C794u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C7A4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C7B4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C7BCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C7C8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C810u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C828u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C838u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C840u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C860u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C868u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C880u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C888u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C8A4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C8B0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C8B8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C8C0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C8F4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C908u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C910u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C91Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C940u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C94Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C964u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C96Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C984u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C998u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C9B0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C9C0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C9C8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C9E8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5C9F0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CA08u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CA10u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CA28u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CA34u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CA3Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CA44u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CA54u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CA8Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CAB4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CABCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CAC8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CADCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CAECu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CAF8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CB04u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CB0Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CB20u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CB34u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CB50u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CB64u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CB6Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CB8Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CB94u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CBACu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CBB4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CBCCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CBD8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CBE0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CBE8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CBFCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CC18u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CC30u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CC38u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CC58u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CC60u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CC78u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CC80u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CC98u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CCA4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CCACu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CCB4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CCC8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CCE0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CCE8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CCF0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CCF4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CD0Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CD14u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CD2Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CD34u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CD3Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CD44u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CD4Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CD5Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CD78u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CD80u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CD8Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CD94u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CDB8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CDF4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CDFCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CE04u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CE14u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CE20u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CE4Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CE50u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CE8Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CECCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CEFCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CF30u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CF60u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CF68u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CF6Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CF7Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CF88u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CF9Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CFB8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CFBCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CFD4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5CFDCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D00Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D018u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D024u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D02Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D038u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D03Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D040u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D048u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D054u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D05Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D064u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D074u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D084u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D0A8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D0B8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D0D8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D0E0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D0E8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D0ECu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D0F0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D100u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D108u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D118u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D120u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D130u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D140u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D168u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D174u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D198u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D1A4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D1ACu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D1BCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D1CCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D1D8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D1DCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D1E8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D1F0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D200u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D210u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D234u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D240u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D260u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D268u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D270u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D27Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D28Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D298u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D2A4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D2B0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D2C0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D2D0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D2F4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D300u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D320u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D32Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D334u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D340u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D350u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D358u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D368u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D370u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D378u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D380u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D390u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D3A0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D3C4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D3D4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D3F4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D3FCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D404u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D40Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D41Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D424u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D434u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D43Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D44Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D45Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D480u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D48Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D4ACu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D4B4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D4BCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D4C8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D4D8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D4E0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D4F4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D4FCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D504u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D514u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D524u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D548u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D558u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D578u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D580u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D588u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D590u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D5A0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D5A8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D5B8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D5C0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D5D0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D5E0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D608u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D614u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D638u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D640u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D648u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D654u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D664u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D670u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D678u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D688u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D698u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D6B8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D6C8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D6E0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D6E8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D6F0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D6FCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D70Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D718u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D724u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D73Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D744u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D754u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D764u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D788u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D798u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D7B8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D7C0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D7C8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D7D0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D7E0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D7E8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D7F8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D800u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D810u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D820u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D83Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D84Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D864u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D86Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D874u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D880u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D890u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D894u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D8A0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D8B0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D8B4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D8C0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D8D4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D908u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D918u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D924u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D960u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D968u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D984u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D9A4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D9B4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D9B8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D9C0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D9CCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D9DCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D9F4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5D9FCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DA08u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DA1Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DA28u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DA34u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DA4Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DA50u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DA58u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DA5Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DA6Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DA78u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DAC0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DAC8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DAD0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DAD8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DAE4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DAECu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DAF4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DAFCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DB08u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DB10u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DB1Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DB28u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DB30u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DB44u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DB6Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DB74u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DB88u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DB90u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DBA0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DBA8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DBB4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DBE0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DC24u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DC2Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DC3Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DC44u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DC50u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DC5Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DC74u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DC7Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DC80u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DCA4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DCC8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DCD0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DCF4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DCFCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DD20u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DD38u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DD40u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DD64u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DD78u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DD94u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DDA0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DDB4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DDBCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DDC8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DDD0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DDDCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DDE0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DDE8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DDF8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DE00u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DE10u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DE1Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DE2Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DE3Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DE5Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DE64u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DE70u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DE78u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DE88u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DE90u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DE98u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DEA0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DEA8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DEB0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DEB8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DEC0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DED0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DEE8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DEF0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DF00u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DF0Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DF14u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DF18u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DF20u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DF28u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DF2Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DF34u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DF54u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DF60u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DF6Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DF80u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DF8Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DF9Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DFACu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DFB4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DFC8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DFE4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DFF0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5DFFCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E040u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E048u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E060u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E078u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E080u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E088u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E094u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E0A8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E0B4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E0CCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E0E0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E0F8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E100u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E108u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E114u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E120u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E12Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E13Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E150u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E158u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E17Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E190u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E1A4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E1BCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E1C4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E1CCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E1E8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E1F0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E1FCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E204u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E224u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E228u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E22Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E254u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E2ACu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E2BCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E2D8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E2E0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E2E8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E2FCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E310u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E31Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E324u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E32Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E334u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E338u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E344u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E34Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E350u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E374u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E37Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E388u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E394u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E39Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E3A0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E3A8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E3B4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E3BCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E3C0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E3C4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E3C8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E3D0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E3D8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E3E4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E3F0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E3F8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E3FCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E404u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E410u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E418u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E41Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E420u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E424u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E42Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E440u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E454u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E46Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E478u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E480u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E4A0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E4B0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E4D4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E4ECu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E4F8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E508u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E510u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E534u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E53Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E55Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E584u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E590u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E59Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E5A4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E5B0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E5B8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E5C0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E5C8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E5F0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E5F4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E60Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E610u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E618u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E648u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E658u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E678u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E680u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E698u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E6A4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E6B4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E6C0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E714u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E72Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E744u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E774u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E77Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E7A0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E7B8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E7D4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E804u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E814u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E880u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E898u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E8A0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E8ACu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E8DCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E8FCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E904u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E90Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E914u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E934u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E954u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E968u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E998u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E9CCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E9DCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5E9FCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EA14u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EA28u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EA34u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EA48u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EA78u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EA80u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EAA0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EAC0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EAD4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EAE8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EAFCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EB2Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EB44u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EB60u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EB70u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EB94u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EBBCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EBE8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EC00u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EC14u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EC2Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EC40u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EC60u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EC78u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EC8Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5ECA4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5ECB8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5ECD0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5ECE4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5ECFCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5ED20u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5ED3Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5ED50u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5ED6Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5ED80u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5ED8Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EDA0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EDB4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EDBCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EDE4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EE04u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EE18u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EE2Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EE40u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EE54u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EE84u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EE9Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EEB0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EEBCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EED0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EED8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EEF8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EF18u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EF2Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EF40u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EF54u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EF84u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EFCCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EFE4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5EFFCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F020u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F028u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F044u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F05Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F078u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F09Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F0ACu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F0C0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F0E4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F11Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F150u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F164u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F17Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F190u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F1B0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F1C4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F1E8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F20Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F218u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F224u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F228u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F23Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F264u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F270u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F27Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F280u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F294u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F2C0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F2CCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F2D8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F2DCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F2F0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F31Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F328u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F334u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F338u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F34Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F370u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F37Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F388u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F38Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F3A0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F3CCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F3D8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F3E4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F3E8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F3FCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F430u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F43Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F450u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F464u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F478u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F47Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F48Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F4A8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F4C8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F4D4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F4F0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F500u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F508u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F52Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F534u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F54Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F5A0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F5A8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F5B8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F5D4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F5F4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F600u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F610u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F620u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F634u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F680u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F690u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F6A0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F6BCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F6C4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F6E0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F6F0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F6FCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F704u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F70Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F710u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F728u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F738u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F758u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F768u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F770u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F780u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F788u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F794u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F79Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F7A8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F7B0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F7BCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F7C8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F7D0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F7D8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F7E8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F7F4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F7FCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F80Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F814u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F820u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F828u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F830u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F83Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F848u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F850u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F85Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F864u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F870u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F878u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F884u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F88Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F894u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F8B4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F8D0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F8ECu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F8F4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F918u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F938u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F964u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F968u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F978u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F9A0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F9B0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5F9B8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FA18u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FA20u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FA2Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FA3Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FA94u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FA98u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FA9Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FAACu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FAB0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FAB8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FAC4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FACCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FADCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FB0Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FB30u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FB34u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FB40u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FB50u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FB5Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FB68u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FB70u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FB7Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FB88u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FB8Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FB94u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FBA8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FBB8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FBC4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FBCCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FBF0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FC24u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FC34u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FC54u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FC78u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FC8Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FCA4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FCB0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FCD8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FCE0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FCE8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FD00u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FD18u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FD24u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FD38u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FD58u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FD60u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FD74u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FD8Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FD94u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FD9Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FDA4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FDACu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FDCCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FDD8u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FDE4u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FDFCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FE04u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FE24u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FE30u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FE50u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FE88u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FEE0u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FEECu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FF2Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FF30u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FF3Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FF4Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FF5Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FF84u, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FF9Cu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FFACu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FFCCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FFDCu, &recomp_unit_0214, "recomp_unit_0214");
    runtime.register_function(0x08B5FFECu, &recomp_unit_0214, "recomp_unit_0214");
}
} // namespace psprecomp
