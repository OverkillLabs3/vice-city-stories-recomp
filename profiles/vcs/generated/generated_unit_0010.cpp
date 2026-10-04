#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0010[4092] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 0, 0, 9, 0, 0, 10, 0,
    11, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    19, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25,
    0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 33,
    0, 34, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 41,
    0, 42, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0,
    50, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 63, 64, 0, 65, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 68, 0, 69, 70, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0,
    0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 84, 85, 0, 0, 86, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 95, 0, 96, 0, 0, 0,
    97, 0, 98, 0, 0, 0, 0, 99, 0, 100, 101, 0, 0, 102, 0, 0, 103, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 111, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0,
    126, 0, 0, 0, 0, 0, 0, 127, 0, 128, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 133, 0, 0, 0, 134, 0, 135, 0, 136, 0, 137, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0,
    0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 154,
    0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 163,
    0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 174, 0, 175, 0, 0, 0, 176, 0, 177, 0,
    0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184,
    0, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 192, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 205,
    0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0,
    0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 217,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0,
    227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 247,
    0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0,
    254, 0, 0, 0, 255, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 262, 0, 0, 263, 0, 0,
    0, 0, 264, 0, 0, 0, 265, 0, 266, 267, 0, 268, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 273, 274, 0,
    0, 0, 275, 0, 276, 0, 277, 0, 0, 278, 0, 0, 0, 279, 0, 280, 281, 0, 282, 283, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 0, 289, 290,
    0, 291, 0, 0, 292, 0, 0, 0, 293, 0, 294, 0, 295, 0, 0, 296, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300,
    0, 301, 0, 0, 0, 0, 0, 0, 302, 303, 0, 304, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0,
    0, 0, 0, 308, 0, 309, 0, 0, 310, 0, 311, 0, 312, 0, 313, 0, 0, 314, 0, 315, 0, 316, 0, 317, 0, 318, 0, 0, 319, 0, 320, 0,
    321, 0, 322, 0, 323, 0, 0, 324, 325, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 330, 0, 331, 0, 332,
    0, 333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 0, 339, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343,
    0, 344, 0, 345, 0, 346, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0,
    0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 361,
    0, 362, 0, 0, 0, 363, 0, 0, 364, 0, 0, 365, 0, 366, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 375, 0, 376, 0, 377, 0, 0,
    0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 382, 0, 383, 0, 384, 0, 0, 385, 0, 0, 386, 0, 387,
    388, 0, 0, 389, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 0, 398,
    0, 0, 0, 399, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 410, 0, 0, 0, 411, 0, 412, 0, 413, 0, 414, 415, 0, 0, 416, 0, 417, 0, 418, 0,
    0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 421, 0, 422, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 0,
    0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0, 432, 0, 0, 0, 0, 433, 434, 0, 435, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0,
    438, 0, 0, 0, 439, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 448,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 453, 0, 454,
    0, 0, 0, 455, 0, 0, 456, 457, 458, 0, 459, 0, 460, 0, 461, 0, 462, 0, 0, 463, 0, 464, 0, 465, 466, 0, 467, 0, 468, 0, 469, 0,
    0, 470, 0, 0, 471, 0, 0, 472, 0, 0, 473, 0, 474, 0, 475, 0, 476, 0, 477, 0, 478, 0, 0, 479, 0, 0, 480, 0, 481, 0, 482, 0,
    0, 483, 0, 0, 484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 489, 0, 490, 0, 0, 491, 0, 0, 492, 0, 493, 0, 0, 494, 495, 0, 496, 0,
    497, 0, 498, 0, 499, 0, 500, 0, 501, 502, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 510, 0, 511, 0, 512, 0, 0, 513, 0, 514, 0, 0, 0, 515, 0, 0, 0,
    0, 516, 0, 517, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 522,
    0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 525, 0, 526, 0, 0, 527, 0, 528, 0, 529, 0, 530, 0, 531, 0, 532, 0, 533, 0, 534, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 536, 0, 537, 0, 0, 0, 538, 0, 0, 0, 539, 540, 0, 0, 0, 0, 0, 0, 0, 0, 541,
    0, 0, 542, 0, 543, 0, 0, 0, 544, 0, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 549, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0,
    0, 553, 0, 0, 0, 0, 0, 554, 0, 555, 0, 556, 0, 557, 0, 558, 0, 559, 0, 0, 560, 0, 561, 0, 562, 0, 563, 0, 564, 0, 565, 0,
    566, 0, 567, 0, 0, 0, 568, 0, 569, 0, 570, 0, 571, 0, 572, 0, 573, 0, 574, 0, 0, 575, 0, 576, 0, 577, 0, 578, 0, 579, 0, 580,
    0, 581, 0, 0, 0, 582, 0, 583, 0, 584, 0, 585, 0, 0, 0, 586, 0, 587, 0, 588, 0, 589, 0, 0, 0, 590, 0, 0, 591, 0, 0, 0,
    592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 596, 0, 597,
    0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 600, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 602, 0, 603, 0, 0, 0, 0, 604, 0,
    605, 0, 0, 606, 0, 607, 0, 608, 0, 609, 0, 610, 0, 611, 0, 612, 0, 613, 0, 614, 0, 0, 615, 0, 616, 0, 0, 0, 0, 0, 617, 0,
    0, 618, 0, 0, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0,
    625, 0, 626, 0, 627, 0, 628, 0, 629, 0, 630, 0, 631, 0, 632, 0, 0, 633, 0, 634, 0, 635, 0, 0, 636, 0, 637, 0, 0, 0, 0, 638,
    0, 0, 639, 0, 640, 0, 0, 0, 641, 0, 0, 642, 0, 0, 643, 0, 644, 645, 0, 646, 0, 647, 0, 0, 648, 0, 0, 0, 0, 0, 649, 0,
    650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 652, 0, 0, 653, 0, 654, 0,
    0, 655, 0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 658, 0, 659, 0, 660, 0, 661, 0, 662, 0, 0, 0, 0, 663, 0, 0, 0, 664, 0, 665,
    0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 670, 0, 0, 671, 0, 672, 0, 0, 673, 0, 674, 0, 0, 0, 0, 675, 0, 0, 0, 676, 0, 677,
    0, 678, 0, 679, 0, 680, 0, 0, 0, 0, 681, 0, 0, 0, 682, 0, 683, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 686, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 689, 0, 0, 690, 691, 0, 0, 0, 692, 0, 693, 0,
    0, 694, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 698, 0, 699, 0, 0, 0, 0, 700, 0, 0, 0,
    701, 0, 0, 702, 0, 703, 0, 0, 704, 0, 705, 0, 0, 0, 0, 706, 0, 707, 0, 0, 0, 0, 708, 0, 0, 0, 709, 710, 0, 0, 711, 0,
    712, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 716,
    0, 0, 717, 718, 0, 0, 0, 719, 0, 720, 0, 0, 721, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0,
    725, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 729, 0, 730, 0, 0, 731, 0, 732, 0, 0, 0, 0, 733, 0, 734, 0, 0, 0,
    0, 735, 0, 0, 0, 736, 737, 0, 0, 738, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0,
    742, 0, 743, 0, 744, 0, 0, 745, 0, 0, 746, 0, 0, 747, 0, 748, 0, 0, 0, 749, 0, 750, 0, 0, 751, 0, 752, 0, 753, 0, 0, 754,
    755, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 758, 0, 759, 0, 0, 760, 0, 761,
    0, 0, 762, 763, 0, 764, 0, 0, 765, 766, 0, 767, 0, 0, 0, 0, 768, 0, 769, 0, 770, 0, 0, 0, 771, 0, 772, 0, 773, 0, 0, 0,
    774, 0, 775, 776, 0, 777, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 780, 0, 781, 0, 0, 0, 0, 0, 0, 782, 0, 783, 0, 784,
    0, 0, 0, 0, 0, 785, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 788,
    0, 789, 0, 790, 0, 791, 0, 0, 0, 0, 0, 0, 792, 0, 793, 0, 794, 0, 0, 795, 0, 796, 797, 0, 798, 0, 0, 799, 0, 0, 800, 0,
    801, 802, 0, 803, 0, 0, 804, 0, 0, 805, 0, 806, 807, 0, 808, 0, 0, 0, 0, 809, 0, 0, 810, 0, 811, 0, 0, 0, 0, 812, 0, 0,
    813, 0, 814, 0, 0, 0, 0, 0, 815, 0, 0, 816, 0, 817, 0, 0, 818, 0, 819, 0, 0, 820, 0, 821, 0, 0, 822, 0, 0, 0, 0, 823,
    0, 0, 824, 0, 0, 825, 0, 826, 0, 827, 0, 828, 0, 0, 829, 0, 830, 831, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 833, 0, 0, 0, 834, 0, 835, 0, 836, 0, 0, 837, 0, 0, 838, 0, 0, 839, 0, 0, 0, 0, 0, 0, 0, 0, 0, 840,
    0, 0, 841, 0, 0, 842, 0, 843, 0, 844, 0, 845, 0, 0, 0, 0, 846, 0, 0, 0, 847, 0, 848, 0, 849, 0, 850, 0, 851, 0, 0, 0,
    0, 852, 0, 0, 0, 853, 0, 854, 0, 855, 0, 0, 856, 0, 0, 0, 0, 857, 0, 0, 0, 0, 858, 0, 0, 0, 0, 859, 0, 0, 860, 0,
    861, 862, 0, 863, 0, 864, 0, 865, 0, 0, 0, 866, 0, 867, 0, 0, 868, 0, 0, 869, 0, 0, 0, 0, 0, 0, 0, 0, 0, 870, 0, 0,
    871, 0, 0, 872, 0, 873, 0, 874, 0, 875, 0, 0, 0, 0, 876, 0, 0, 0, 877, 0, 878, 0, 879, 0, 880, 0, 881, 0, 0, 0, 0, 882,
    0, 0, 0, 883, 0, 884, 0, 885, 0, 0, 886, 0, 0, 0, 0, 887, 0, 0, 0, 0, 888, 0, 0, 0, 0, 889, 0, 0, 890, 0, 891, 892,
    0, 893, 0, 894, 0, 895, 0, 0, 0, 896, 0, 897, 0, 0, 898, 0, 0, 899, 0, 0, 0, 0, 0, 0, 0, 0, 0, 900, 0, 0, 901, 0,
    0, 902, 0, 903, 0, 904, 0, 905, 0, 0, 0, 0, 906, 0, 0, 0, 907, 0, 908, 0, 909, 0, 910, 0, 911, 0, 0, 0, 0, 912, 0, 0,
    0, 913, 0, 914, 0, 915, 0, 0, 916, 0, 0, 0, 0, 917, 0, 0, 0, 0, 918, 0, 0, 0, 0, 919, 0, 0, 920, 0, 921, 922, 0, 923,
    0, 924, 0, 0, 0, 925, 0, 0, 0, 0, 926, 0, 0, 0, 0, 927, 0, 0, 928, 0, 929, 930, 0, 931, 0, 932, 0, 933, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 934, 0, 0, 0, 0, 0, 0, 935, 0, 936, 0, 0, 937, 0, 938, 0, 939, 0, 0, 0, 0, 0, 0, 0, 0, 0, 940,
    0, 941, 0, 0, 0, 0, 0, 0, 942, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 943, 0, 0, 944, 0, 0, 0, 0,
    0, 945, 0, 0, 946, 0, 0, 947, 0, 948, 0, 0, 949, 0, 0, 0, 0, 0, 0, 0, 0, 0, 950, 0, 0, 951, 0, 0, 952, 0, 953, 0,
    0, 954, 0, 955, 0, 0, 0, 0, 956, 0, 0, 0, 957, 0, 958, 0, 959, 0, 960, 0, 0, 0, 0, 0, 0, 961, 0, 0, 0, 0, 0, 0,
    962, 0, 0, 0, 963, 0, 0, 964, 0, 965, 966, 0, 967, 0, 968, 0, 0, 0, 0, 0, 969, 0, 0, 0, 970, 0, 971, 0, 972, 0, 0, 973,
    0, 0, 0, 974, 0, 0, 0, 0, 975, 0, 0, 0, 0, 976, 0, 0, 977, 0, 978, 979, 0, 980, 0, 981, 0, 0, 0, 982, 0, 0, 0, 0,
    983, 0, 0, 0, 0, 984, 0, 0, 985, 0, 986, 987, 0, 988, 0, 989, 0, 0, 990, 0, 991, 992, 0, 0, 993, 0, 0, 994, 0, 0, 0, 0,
    0, 995, 0, 0, 0, 0, 0, 0, 996, 0, 0, 0, 0, 997, 0, 0, 998, 0, 999, 1000, 0, 1001, 0, 1002, 0, 0, 0, 1003,
};
void recomp_unit_0010_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0882C000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0010[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0882C000;
    case 2u: goto L_0882C014;
    case 3u: goto L_0882C034;
    case 4u: goto L_0882C03C;
    case 5u: goto L_0882C044;
    case 6u: goto L_0882C04C;
    case 7u: goto L_0882C054;
    case 8u: goto L_0882C05C;
    case 9u: goto L_0882C06C;
    case 10u: goto L_0882C078;
    case 11u: goto L_0882C080;
    case 12u: goto L_0882C088;
    case 13u: goto L_0882C090;
    case 14u: goto L_0882C098;
    case 15u: goto L_0882C0C8;
    case 16u: goto L_0882C0D0;
    case 17u: goto L_0882C0D8;
    case 18u: goto L_0882C0F8;
    case 19u: goto L_0882C100;
    case 20u: goto L_0882C108;
    case 21u: goto L_0882C11C;
    case 22u: goto L_0882C13C;
    case 23u: goto L_0882C144;
    case 24u: goto L_0882C14C;
    case 25u: goto L_0882C17C;
    case 26u: goto L_0882C184;
    case 27u: goto L_0882C198;
    case 28u: goto L_0882C1AC;
    case 29u: goto L_0882C1B4;
    case 30u: goto L_0882C1C4;
    case 31u: goto L_0882C1DC;
    case 32u: goto L_0882C1E4;
    case 33u: goto L_0882C1FC;
    case 34u: goto L_0882C204;
    case 35u: goto L_0882C21C;
    case 36u: goto L_0882C224;
    case 37u: goto L_0882C23C;
    case 38u: goto L_0882C244;
    case 39u: goto L_0882C25C;
    case 40u: goto L_0882C264;
    case 41u: goto L_0882C27C;
    case 42u: goto L_0882C284;
    case 43u: goto L_0882C29C;
    case 44u: goto L_0882C2A4;
    case 45u: goto L_0882C2BC;
    case 46u: goto L_0882C2C4;
    case 47u: goto L_0882C2CC;
    case 48u: goto L_0882C2E4;
    case 49u: goto L_0882C2EC;
    case 50u: goto L_0882C300;
    case 51u: goto L_0882C308;
    case 52u: goto L_0882C310;
    case 53u: goto L_0882C31C;
    case 54u: goto L_0882C33C;
    case 55u: goto L_0882C35C;
    case 56u: goto L_0882C364;
    case 57u: goto L_0882C36C;
    case 58u: goto L_0882C380;
    case 59u: goto L_0882C3A4;
    case 60u: goto L_0882C3B4;
    case 61u: goto L_0882C3BC;
    case 62u: goto L_0882C3C8;
    case 63u: goto L_0882C404;
    case 64u: goto L_0882C408;
    case 65u: goto L_0882C410;
    case 66u: goto L_0882C420;
    case 67u: goto L_0882C428;
    case 68u: goto L_0882C43C;
    case 69u: goto L_0882C444;
    case 70u: goto L_0882C448;
    case 71u: goto L_0882C454;
    case 72u: goto L_0882C460;
    case 73u: goto L_0882C46C;
    case 74u: goto L_0882C474;
    case 75u: goto L_0882C490;
    case 76u: goto L_0882C4A0;
    case 77u: goto L_0882C4C8;
    case 78u: goto L_0882C510;
    case 79u: goto L_0882C518;
    case 80u: goto L_0882C520;
    case 81u: goto L_0882C530;
    case 82u: goto L_0882C538;
    case 83u: goto L_0882C54C;
    case 84u: goto L_0882C554;
    case 85u: goto L_0882C558;
    case 86u: goto L_0882C564;
    case 87u: goto L_0882C570;
    case 88u: goto L_0882C5B8;
    case 89u: goto L_0882C5C4;
    case 90u: goto L_0882C5CC;
    case 91u: goto L_0882C5E8;
    case 92u: goto L_0882C5F8;
    case 93u: goto L_0882C628;
    case 94u: goto L_0882C664;
    case 95u: goto L_0882C668;
    case 96u: goto L_0882C670;
    case 97u: goto L_0882C680;
    case 98u: goto L_0882C688;
    case 99u: goto L_0882C69C;
    case 100u: goto L_0882C6A4;
    case 101u: goto L_0882C6A8;
    case 102u: goto L_0882C6B4;
    case 103u: goto L_0882C6C0;
    case 104u: goto L_0882C6CC;
    case 105u: goto L_0882C6D4;
    case 106u: goto L_0882C6F0;
    case 107u: goto L_0882C700;
    case 108u: goto L_0882C728;
    case 109u: goto L_0882C74C;
    case 110u: goto L_0882C76C;
    case 111u: goto L_0882C770;
    case 112u: goto L_0882C7A0;
    case 113u: goto L_0882C7B4;
    case 114u: goto L_0882C7C4;
    case 115u: goto L_0882C7D0;
    case 116u: goto L_0882C7E0;
    case 117u: goto L_0882C810;
    case 118u: goto L_0882C818;
    case 119u: goto L_0882C830;
    case 120u: goto L_0882C838;
    case 121u: goto L_0882C844;
    case 122u: goto L_0882C84C;
    case 123u: goto L_0882C854;
    case 124u: goto L_0882C870;
    case 125u: goto L_0882C878;
    case 126u: goto L_0882C880;
    case 127u: goto L_0882C89C;
    case 128u: goto L_0882C8A4;
    case 129u: goto L_0882C8A8;
    case 130u: goto L_0882C8BC;
    case 131u: goto L_0882C8DC;
    case 132u: goto L_0882C8E4;
    case 133u: goto L_0882C90C;
    case 134u: goto L_0882C91C;
    case 135u: goto L_0882C924;
    case 136u: goto L_0882C92C;
    case 137u: goto L_0882C934;
    case 138u: goto L_0882C938;
    case 139u: goto L_0882C96C;
    case 140u: goto L_0882C98C;
    case 141u: goto L_0882C9D0;
    case 142u: goto L_0882CAE8;
    case 143u: goto L_0882CAF0;
    case 144u: goto L_0882CB08;
    case 145u: goto L_0882CB18;
    case 146u: goto L_0882CB20;
    case 147u: goto L_0882CB2C;
    case 148u: goto L_0882CB38;
    case 149u: goto L_0882CB44;
    case 150u: goto L_0882CB50;
    case 151u: goto L_0882CB5C;
    case 152u: goto L_0882CB64;
    case 153u: goto L_0882CB6C;
    case 154u: goto L_0882CB7C;
    case 155u: goto L_0882CB8C;
    case 156u: goto L_0882CB9C;
    case 157u: goto L_0882CBAC;
    case 158u: goto L_0882CBB8;
    case 159u: goto L_0882CBCC;
    case 160u: goto L_0882CBD8;
    case 161u: goto L_0882CBE4;
    case 162u: goto L_0882CBF0;
    case 163u: goto L_0882CBFC;
    case 164u: goto L_0882CC08;
    case 165u: goto L_0882CC14;
    case 166u: goto L_0882CC20;
    case 167u: goto L_0882CC2C;
    case 168u: goto L_0882CC38;
    case 169u: goto L_0882CC44;
    case 170u: goto L_0882CC48;
    case 171u: goto L_0882CC80;
    case 172u: goto L_0882CCC4;
    case 173u: goto L_0882CCD0;
    case 174u: goto L_0882CCD8;
    case 175u: goto L_0882CCE0;
    case 176u: goto L_0882CCF0;
    case 177u: goto L_0882CCF8;
    case 178u: goto L_0882CD14;
    case 179u: goto L_0882CD1C;
    case 180u: goto L_0882CD58;
    case 181u: goto L_0882CD78;
    case 182u: goto L_0882CDD0;
    case 183u: goto L_0882CDE8;
    case 184u: goto L_0882CDFC;
    case 185u: goto L_0882CE0C;
    case 186u: goto L_0882CE1C;
    case 187u: goto L_0882CE24;
    case 188u: goto L_0882CE2C;
    case 189u: goto L_0882CE44;
    case 190u: goto L_0882CE58;
    case 191u: goto L_0882CE60;
    case 192u: goto L_0882CE74;
    case 193u: goto L_0882CEB4;
    case 194u: goto L_0882CEC4;
    case 195u: goto L_0882CED8;
    case 196u: goto L_0882CF3C;
    case 197u: goto L_0882CF70;
    case 198u: goto L_0882CF90;
    case 199u: goto L_0882CFA4;
    case 200u: goto L_0882CFBC;
    case 201u: goto L_0882CFC4;
    case 202u: goto L_0882D060;
    case 203u: goto L_0882D068;
    case 204u: goto L_0882D070;
    case 205u: goto L_0882D07C;
    case 206u: goto L_0882D094;
    case 207u: goto L_0882D0A8;
    case 208u: goto L_0882D0D0;
    case 209u: goto L_0882D0E8;
    case 210u: goto L_0882D104;
    case 211u: goto L_0882D10C;
    case 212u: goto L_0882D134;
    case 213u: goto L_0882D164;
    case 214u: goto L_0882D1C8;
    case 215u: goto L_0882D1D8;
    case 216u: goto L_0882D1E0;
    case 217u: goto L_0882D1FC;
    case 218u: goto L_0882D22C;
    case 219u: goto L_0882D238;
    case 220u: goto L_0882D248;
    case 221u: goto L_0882D254;
    case 222u: goto L_0882D26C;
    case 223u: goto L_0882D2A0;
    case 224u: goto L_0882D2AC;
    case 225u: goto L_0882D2CC;
    case 226u: goto L_0882D2E8;
    case 227u: goto L_0882D300;
    case 228u: goto L_0882D314;
    case 229u: goto L_0882D354;
    case 230u: goto L_0882D360;
    case 231u: goto L_0882D394;
    case 232u: goto L_0882D3C0;
    case 233u: goto L_0882D3D0;
    case 234u: goto L_0882D3D8;
    case 235u: goto L_0882D400;
    case 236u: goto L_0882D430;
    case 237u: goto L_0882D448;
    case 238u: goto L_0882D468;
    case 239u: goto L_0882D49C;
    case 240u: goto L_0882D4A8;
    case 241u: goto L_0882D4BC;
    case 242u: goto L_0882D4D4;
    case 243u: goto L_0882D508;
    case 244u: goto L_0882D55C;
    case 245u: goto L_0882D568;
    case 246u: goto L_0882D574;
    case 247u: goto L_0882D57C;
    case 248u: goto L_0882D594;
    case 249u: goto L_0882D5AC;
    case 250u: goto L_0882D5C0;
    case 251u: goto L_0882D5D0;
    case 252u: goto L_0882D5E0;
    case 253u: goto L_0882D5EC;
    case 254u: goto L_0882D600;
    case 255u: goto L_0882D610;
    case 256u: goto L_0882D618;
    case 257u: goto L_0882D628;
    case 258u: goto L_0882D634;
    case 259u: goto L_0882D648;
    case 260u: goto L_0882D654;
    case 261u: goto L_0882D660;
    case 262u: goto L_0882D668;
    case 263u: goto L_0882D674;
    case 264u: goto L_0882D688;
    case 265u: goto L_0882D698;
    case 266u: goto L_0882D6A0;
    case 267u: goto L_0882D6A4;
    case 268u: goto L_0882D6AC;
    case 269u: goto L_0882D6BC;
    case 270u: goto L_0882D6C8;
    case 271u: goto L_0882D6DC;
    case 272u: goto L_0882D6EC;
    case 273u: goto L_0882D6F4;
    case 274u: goto L_0882D6F8;
    case 275u: goto L_0882D708;
    case 276u: goto L_0882D710;
    case 277u: goto L_0882D718;
    case 278u: goto L_0882D724;
    case 279u: goto L_0882D734;
    case 280u: goto L_0882D73C;
    case 281u: goto L_0882D740;
    case 282u: goto L_0882D748;
    case 283u: goto L_0882D74C;
    case 284u: goto L_0882D754;
    case 285u: goto L_0882D75C;
    case 286u: goto L_0882D794;
    case 287u: goto L_0882D854;
    case 288u: goto L_0882D868;
    case 289u: goto L_0882D878;
    case 290u: goto L_0882D87C;
    case 291u: goto L_0882D884;
    case 292u: goto L_0882D890;
    case 293u: goto L_0882D8A0;
    case 294u: goto L_0882D8A8;
    case 295u: goto L_0882D8B0;
    case 296u: goto L_0882D8BC;
    case 297u: goto L_0882D8C4;
    case 298u: goto L_0882D8D4;
    case 299u: goto L_0882D8F4;
    case 300u: goto L_0882D8FC;
    case 301u: goto L_0882D904;
    case 302u: goto L_0882D920;
    case 303u: goto L_0882D924;
    case 304u: goto L_0882D92C;
    case 305u: goto L_0882D93C;
    case 306u: goto L_0882D944;
    case 307u: goto L_0882D968;
    case 308u: goto L_0882D98C;
    case 309u: goto L_0882D994;
    case 310u: goto L_0882D9A0;
    case 311u: goto L_0882D9A8;
    case 312u: goto L_0882D9B0;
    case 313u: goto L_0882D9B8;
    case 314u: goto L_0882D9C4;
    case 315u: goto L_0882D9CC;
    case 316u: goto L_0882D9D4;
    case 317u: goto L_0882D9DC;
    case 318u: goto L_0882D9E4;
    case 319u: goto L_0882D9F0;
    case 320u: goto L_0882D9F8;
    case 321u: goto L_0882DA00;
    case 322u: goto L_0882DA08;
    case 323u: goto L_0882DA10;
    case 324u: goto L_0882DA1C;
    case 325u: goto L_0882DA20;
    case 326u: goto L_0882DA28;
    case 327u: goto L_0882DA30;
    case 328u: goto L_0882DA4C;
    case 329u: goto L_0882DA64;
    case 330u: goto L_0882DA6C;
    case 331u: goto L_0882DA74;
    case 332u: goto L_0882DA7C;
    case 333u: goto L_0882DA84;
    case 334u: goto L_0882DA8C;
    case 335u: goto L_0882DA94;
    case 336u: goto L_0882DA9C;
    case 337u: goto L_0882DAA4;
    case 338u: goto L_0882DAAC;
    case 339u: goto L_0882DAB8;
    case 340u: goto L_0882DAC0;
    case 341u: goto L_0882DAD0;
    case 342u: goto L_0882DAF0;
    case 343u: goto L_0882DAFC;
    case 344u: goto L_0882DB04;
    case 345u: goto L_0882DB0C;
    case 346u: goto L_0882DB14;
    case 347u: goto L_0882DB18;
    case 348u: goto L_0882DB40;
    case 349u: goto L_0882DB44;
    case 350u: goto L_0882DB54;
    case 351u: goto L_0882DB80;
    case 352u: goto L_0882DBBC;
    case 353u: goto L_0882DBCC;
    case 354u: goto L_0882DBF8;
    case 355u: goto L_0882DC08;
    case 356u: goto L_0882DC20;
    case 357u: goto L_0882DC44;
    case 358u: goto L_0882DC4C;
    case 359u: goto L_0882DC6C;
    case 360u: goto L_0882DC74;
    case 361u: goto L_0882DC7C;
    case 362u: goto L_0882DC84;
    case 363u: goto L_0882DC94;
    case 364u: goto L_0882DCA0;
    case 365u: goto L_0882DCAC;
    case 366u: goto L_0882DCB4;
    case 367u: goto L_0882DCB8;
    case 368u: goto L_0882DCC8;
    case 369u: goto L_0882DCD8;
    case 370u: goto L_0882DCE8;
    case 371u: goto L_0882DD14;
    case 372u: goto L_0882DD20;
    case 373u: goto L_0882DD4C;
    case 374u: goto L_0882DD5C;
    case 375u: goto L_0882DD64;
    case 376u: goto L_0882DD6C;
    case 377u: goto L_0882DD74;
    case 378u: goto L_0882DD8C;
    case 379u: goto L_0882DDAC;
    case 380u: goto L_0882DDB8;
    case 381u: goto L_0882DDC4;
    case 382u: goto L_0882DDCC;
    case 383u: goto L_0882DDD4;
    case 384u: goto L_0882DDDC;
    case 385u: goto L_0882DDE8;
    case 386u: goto L_0882DDF4;
    case 387u: goto L_0882DDFC;
    case 388u: goto L_0882DE00;
    case 389u: goto L_0882DE0C;
    case 390u: goto L_0882DE14;
    case 391u: goto L_0882DE24;
    case 392u: goto L_0882DE30;
    case 393u: goto L_0882DE3C;
    case 394u: goto L_0882DE48;
    case 395u: goto L_0882DE54;
    case 396u: goto L_0882DE60;
    case 397u: goto L_0882DE6C;
    case 398u: goto L_0882DE7C;
    case 399u: goto L_0882DE8C;
    case 400u: goto L_0882DE98;
    case 401u: goto L_0882DEA4;
    case 402u: goto L_0882DEB0;
    case 403u: goto L_0882DEBC;
    case 404u: goto L_0882DEC8;
    case 405u: goto L_0882DED4;
    case 406u: goto L_0882DEDC;
    case 407u: goto L_0882DEF4;
    case 408u: goto L_0882DF1C;
    case 409u: goto L_0882DF24;
    case 410u: goto L_0882DF30;
    case 411u: goto L_0882DF40;
    case 412u: goto L_0882DF48;
    case 413u: goto L_0882DF50;
    case 414u: goto L_0882DF58;
    case 415u: goto L_0882DF5C;
    case 416u: goto L_0882DF68;
    case 417u: goto L_0882DF70;
    case 418u: goto L_0882DF78;
    case 419u: goto L_0882DF90;
    case 420u: goto L_0882DF9C;
    case 421u: goto L_0882DFA8;
    case 422u: goto L_0882DFB0;
    case 423u: goto L_0882DFB4;
    case 424u: goto L_0882DFD0;
    case 425u: goto L_0882DFEC;
    case 426u: goto L_0882DFF4;
    case 427u: goto L_0882E004;
    case 428u: goto L_0882E00C;
    case 429u: goto L_0882E014;
    case 430u: goto L_0882E01C;
    case 431u: goto L_0882E024;
    case 432u: goto L_0882E02C;
    case 433u: goto L_0882E040;
    case 434u: goto L_0882E044;
    case 435u: goto L_0882E04C;
    case 436u: goto L_0882E060;
    case 437u: goto L_0882E06C;
    case 438u: goto L_0882E080;
    case 439u: goto L_0882E090;
    case 440u: goto L_0882E09C;
    case 441u: goto L_0882E0AC;
    case 442u: goto L_0882E0C0;
    case 443u: goto L_0882E0E0;
    case 444u: goto L_0882E10C;
    case 445u: goto L_0882E118;
    case 446u: goto L_0882E144;
    case 447u: goto L_0882E170;
    case 448u: goto L_0882E17C;
    case 449u: goto L_0882E1A8;
    case 450u: goto L_0882E1C0;
    case 451u: goto L_0882E1D4;
    case 452u: goto L_0882E1E8;
    case 453u: goto L_0882E1F4;
    case 454u: goto L_0882E1FC;
    case 455u: goto L_0882E20C;
    case 456u: goto L_0882E218;
    case 457u: goto L_0882E21C;
    case 458u: goto L_0882E220;
    case 459u: goto L_0882E228;
    case 460u: goto L_0882E230;
    case 461u: goto L_0882E238;
    case 462u: goto L_0882E240;
    case 463u: goto L_0882E24C;
    case 464u: goto L_0882E254;
    case 465u: goto L_0882E25C;
    case 466u: goto L_0882E260;
    case 467u: goto L_0882E268;
    case 468u: goto L_0882E270;
    case 469u: goto L_0882E278;
    case 470u: goto L_0882E284;
    case 471u: goto L_0882E290;
    case 472u: goto L_0882E29C;
    case 473u: goto L_0882E2A8;
    case 474u: goto L_0882E2B0;
    case 475u: goto L_0882E2B8;
    case 476u: goto L_0882E2C0;
    case 477u: goto L_0882E2C8;
    case 478u: goto L_0882E2D0;
    case 479u: goto L_0882E2DC;
    case 480u: goto L_0882E2E8;
    case 481u: goto L_0882E2F0;
    case 482u: goto L_0882E2F8;
    case 483u: goto L_0882E304;
    case 484u: goto L_0882E310;
    case 485u: goto L_0882E318;
    case 486u: goto L_0882E320;
    case 487u: goto L_0882E328;
    case 488u: goto L_0882E330;
    case 489u: goto L_0882E338;
    case 490u: goto L_0882E340;
    case 491u: goto L_0882E34C;
    case 492u: goto L_0882E358;
    case 493u: goto L_0882E360;
    case 494u: goto L_0882E36C;
    case 495u: goto L_0882E370;
    case 496u: goto L_0882E378;
    case 497u: goto L_0882E380;
    case 498u: goto L_0882E388;
    case 499u: goto L_0882E390;
    case 500u: goto L_0882E398;
    case 501u: goto L_0882E3A0;
    case 502u: goto L_0882E3A4;
    case 503u: goto L_0882E3AC;
    case 504u: goto L_0882E3B4;
    case 505u: goto L_0882E3DC;
    case 506u: goto L_0882E3E8;
    case 507u: goto L_0882E410;
    case 508u: goto L_0882E420;
    case 509u: goto L_0882E434;
    case 510u: goto L_0882E43C;
    case 511u: goto L_0882E444;
    case 512u: goto L_0882E44C;
    case 513u: goto L_0882E458;
    case 514u: goto L_0882E460;
    case 515u: goto L_0882E470;
    case 516u: goto L_0882E484;
    case 517u: goto L_0882E48C;
    case 518u: goto L_0882E494;
    case 519u: goto L_0882E4B8;
    case 520u: goto L_0882E4C4;
    case 521u: goto L_0882E4EC;
    case 522u: goto L_0882E4FC;
    case 523u: goto L_0882E50C;
    case 524u: goto L_0882E518;
    case 525u: goto L_0882E52C;
    case 526u: goto L_0882E534;
    case 527u: goto L_0882E540;
    case 528u: goto L_0882E548;
    case 529u: goto L_0882E550;
    case 530u: goto L_0882E558;
    case 531u: goto L_0882E560;
    case 532u: goto L_0882E568;
    case 533u: goto L_0882E570;
    case 534u: goto L_0882E578;
    case 535u: goto L_0882E5A0;
    case 536u: goto L_0882E5AC;
    case 537u: goto L_0882E5B4;
    case 538u: goto L_0882E5C4;
    case 539u: goto L_0882E5D4;
    case 540u: goto L_0882E5D8;
    case 541u: goto L_0882E5FC;
    case 542u: goto L_0882E608;
    case 543u: goto L_0882E610;
    case 544u: goto L_0882E620;
    case 545u: goto L_0882E630;
    case 546u: goto L_0882E638;
    case 547u: goto L_0882E658;
    case 548u: goto L_0882E660;
    case 549u: goto L_0882E670;
    case 550u: goto L_0882E6B4;
    case 551u: goto L_0882E6C0;
    case 552u: goto L_0882E6EC;
    case 553u: goto L_0882E704;
    case 554u: goto L_0882E71C;
    case 555u: goto L_0882E724;
    case 556u: goto L_0882E72C;
    case 557u: goto L_0882E734;
    case 558u: goto L_0882E73C;
    case 559u: goto L_0882E744;
    case 560u: goto L_0882E750;
    case 561u: goto L_0882E758;
    case 562u: goto L_0882E760;
    case 563u: goto L_0882E768;
    case 564u: goto L_0882E770;
    case 565u: goto L_0882E778;
    case 566u: goto L_0882E780;
    case 567u: goto L_0882E788;
    case 568u: goto L_0882E798;
    case 569u: goto L_0882E7A0;
    case 570u: goto L_0882E7A8;
    case 571u: goto L_0882E7B0;
    case 572u: goto L_0882E7B8;
    case 573u: goto L_0882E7C0;
    case 574u: goto L_0882E7C8;
    case 575u: goto L_0882E7D4;
    case 576u: goto L_0882E7DC;
    case 577u: goto L_0882E7E4;
    case 578u: goto L_0882E7EC;
    case 579u: goto L_0882E7F4;
    case 580u: goto L_0882E7FC;
    case 581u: goto L_0882E804;
    case 582u: goto L_0882E814;
    case 583u: goto L_0882E81C;
    case 584u: goto L_0882E824;
    case 585u: goto L_0882E82C;
    case 586u: goto L_0882E83C;
    case 587u: goto L_0882E844;
    case 588u: goto L_0882E84C;
    case 589u: goto L_0882E854;
    case 590u: goto L_0882E864;
    case 591u: goto L_0882E870;
    case 592u: goto L_0882E880;
    case 593u: goto L_0882E8AC;
    case 594u: goto L_0882E8B4;
    case 595u: goto L_0882E8E0;
    case 596u: goto L_0882E8F4;
    case 597u: goto L_0882E8FC;
    case 598u: goto L_0882E904;
    case 599u: goto L_0882E92C;
    case 600u: goto L_0882E930;
    case 601u: goto L_0882E950;
    case 602u: goto L_0882E95C;
    case 603u: goto L_0882E964;
    case 604u: goto L_0882E978;
    case 605u: goto L_0882E980;
    case 606u: goto L_0882E98C;
    case 607u: goto L_0882E994;
    case 608u: goto L_0882E99C;
    case 609u: goto L_0882E9A4;
    case 610u: goto L_0882E9AC;
    case 611u: goto L_0882E9B4;
    case 612u: goto L_0882E9BC;
    case 613u: goto L_0882E9C4;
    case 614u: goto L_0882E9CC;
    case 615u: goto L_0882E9D8;
    case 616u: goto L_0882E9E0;
    case 617u: goto L_0882E9F8;
    case 618u: goto L_0882EA04;
    case 619u: goto L_0882EA18;
    case 620u: goto L_0882EA20;
    case 621u: goto L_0882EA38;
    case 622u: goto L_0882EA44;
    case 623u: goto L_0882EA54;
    case 624u: goto L_0882EA74;
    case 625u: goto L_0882EA80;
    case 626u: goto L_0882EA88;
    case 627u: goto L_0882EA90;
    case 628u: goto L_0882EA98;
    case 629u: goto L_0882EAA0;
    case 630u: goto L_0882EAA8;
    case 631u: goto L_0882EAB0;
    case 632u: goto L_0882EAB8;
    case 633u: goto L_0882EAC4;
    case 634u: goto L_0882EACC;
    case 635u: goto L_0882EAD4;
    case 636u: goto L_0882EAE0;
    case 637u: goto L_0882EAE8;
    case 638u: goto L_0882EAFC;
    case 639u: goto L_0882EB08;
    case 640u: goto L_0882EB10;
    case 641u: goto L_0882EB20;
    case 642u: goto L_0882EB2C;
    case 643u: goto L_0882EB38;
    case 644u: goto L_0882EB40;
    case 645u: goto L_0882EB44;
    case 646u: goto L_0882EB4C;
    case 647u: goto L_0882EB54;
    case 648u: goto L_0882EB60;
    case 649u: goto L_0882EB78;
    case 650u: goto L_0882EB80;
    case 651u: goto L_0882EBD8;
    case 652u: goto L_0882EBE4;
    case 653u: goto L_0882EBF0;
    case 654u: goto L_0882EBF8;
    case 655u: goto L_0882EC04;
    case 656u: goto L_0882EC0C;
    case 657u: goto L_0882EC20;
    case 658u: goto L_0882EC30;
    case 659u: goto L_0882EC38;
    case 660u: goto L_0882EC40;
    case 661u: goto L_0882EC48;
    case 662u: goto L_0882EC50;
    case 663u: goto L_0882EC64;
    case 664u: goto L_0882EC74;
    case 665u: goto L_0882EC7C;
    case 666u: goto L_0882EC84;
    case 667u: goto L_0882EC9C;
    case 668u: goto L_0882ECC4;
    case 669u: goto L_0882ED1C;
    case 670u: goto L_0882ED28;
    case 671u: goto L_0882ED34;
    case 672u: goto L_0882ED3C;
    case 673u: goto L_0882ED48;
    case 674u: goto L_0882ED50;
    case 675u: goto L_0882ED64;
    case 676u: goto L_0882ED74;
    case 677u: goto L_0882ED7C;
    case 678u: goto L_0882ED84;
    case 679u: goto L_0882ED8C;
    case 680u: goto L_0882ED94;
    case 681u: goto L_0882EDA8;
    case 682u: goto L_0882EDB8;
    case 683u: goto L_0882EDC0;
    case 684u: goto L_0882EDC8;
    case 685u: goto L_0882EDE0;
    case 686u: goto L_0882EE08;
    case 687u: goto L_0882EE10;
    case 688u: goto L_0882EE44;
    case 689u: goto L_0882EE50;
    case 690u: goto L_0882EE5C;
    case 691u: goto L_0882EE60;
    case 692u: goto L_0882EE70;
    case 693u: goto L_0882EE78;
    case 694u: goto L_0882EE84;
    case 695u: goto L_0882EE8C;
    case 696u: goto L_0882EEB8;
    case 697u: goto L_0882EEC8;
    case 698u: goto L_0882EED4;
    case 699u: goto L_0882EEDC;
    case 700u: goto L_0882EEF0;
    case 701u: goto L_0882EF00;
    case 702u: goto L_0882EF0C;
    case 703u: goto L_0882EF14;
    case 704u: goto L_0882EF20;
    case 705u: goto L_0882EF28;
    case 706u: goto L_0882EF3C;
    case 707u: goto L_0882EF44;
    case 708u: goto L_0882EF58;
    case 709u: goto L_0882EF68;
    case 710u: goto L_0882EF6C;
    case 711u: goto L_0882EF78;
    case 712u: goto L_0882EF80;
    case 713u: goto L_0882EF94;
    case 714u: goto L_0882EFBC;
    case 715u: goto L_0882EFF0;
    case 716u: goto L_0882EFFC;
    case 717u: goto L_0882F008;
    case 718u: goto L_0882F00C;
    case 719u: goto L_0882F01C;
    case 720u: goto L_0882F024;
    case 721u: goto L_0882F030;
    case 722u: goto L_0882F038;
    case 723u: goto L_0882F064;
    case 724u: goto L_0882F074;
    case 725u: goto L_0882F080;
    case 726u: goto L_0882F088;
    case 727u: goto L_0882F09C;
    case 728u: goto L_0882F0AC;
    case 729u: goto L_0882F0B8;
    case 730u: goto L_0882F0C0;
    case 731u: goto L_0882F0CC;
    case 732u: goto L_0882F0D4;
    case 733u: goto L_0882F0E8;
    case 734u: goto L_0882F0F0;
    case 735u: goto L_0882F104;
    case 736u: goto L_0882F114;
    case 737u: goto L_0882F118;
    case 738u: goto L_0882F124;
    case 739u: goto L_0882F12C;
    case 740u: goto L_0882F140;
    case 741u: goto L_0882F168;
    case 742u: goto L_0882F180;
    case 743u: goto L_0882F188;
    case 744u: goto L_0882F190;
    case 745u: goto L_0882F19C;
    case 746u: goto L_0882F1A8;
    case 747u: goto L_0882F1B4;
    case 748u: goto L_0882F1BC;
    case 749u: goto L_0882F1CC;
    case 750u: goto L_0882F1D4;
    case 751u: goto L_0882F1E0;
    case 752u: goto L_0882F1E8;
    case 753u: goto L_0882F1F0;
    case 754u: goto L_0882F1FC;
    case 755u: goto L_0882F200;
    case 756u: goto L_0882F210;
    case 757u: goto L_0882F24C;
    case 758u: goto L_0882F260;
    case 759u: goto L_0882F268;
    case 760u: goto L_0882F274;
    case 761u: goto L_0882F27C;
    case 762u: goto L_0882F288;
    case 763u: goto L_0882F28C;
    case 764u: goto L_0882F294;
    case 765u: goto L_0882F2A0;
    case 766u: goto L_0882F2A4;
    case 767u: goto L_0882F2AC;
    case 768u: goto L_0882F2C0;
    case 769u: goto L_0882F2C8;
    case 770u: goto L_0882F2D0;
    case 771u: goto L_0882F2E0;
    case 772u: goto L_0882F2E8;
    case 773u: goto L_0882F2F0;
    case 774u: goto L_0882F300;
    case 775u: goto L_0882F308;
    case 776u: goto L_0882F30C;
    case 777u: goto L_0882F314;
    case 778u: goto L_0882F31C;
    case 779u: goto L_0882F340;
    case 780u: goto L_0882F348;
    case 781u: goto L_0882F350;
    case 782u: goto L_0882F36C;
    case 783u: goto L_0882F374;
    case 784u: goto L_0882F37C;
    case 785u: goto L_0882F394;
    case 786u: goto L_0882F39C;
    case 787u: goto L_0882F4F4;
    case 788u: goto L_0882F4FC;
    case 789u: goto L_0882F504;
    case 790u: goto L_0882F50C;
    case 791u: goto L_0882F514;
    case 792u: goto L_0882F530;
    case 793u: goto L_0882F538;
    case 794u: goto L_0882F540;
    case 795u: goto L_0882F54C;
    case 796u: goto L_0882F554;
    case 797u: goto L_0882F558;
    case 798u: goto L_0882F560;
    case 799u: goto L_0882F56C;
    case 800u: goto L_0882F578;
    case 801u: goto L_0882F580;
    case 802u: goto L_0882F584;
    case 803u: goto L_0882F58C;
    case 804u: goto L_0882F598;
    case 805u: goto L_0882F5A4;
    case 806u: goto L_0882F5AC;
    case 807u: goto L_0882F5B0;
    case 808u: goto L_0882F5B8;
    case 809u: goto L_0882F5CC;
    case 810u: goto L_0882F5D8;
    case 811u: goto L_0882F5E0;
    case 812u: goto L_0882F5F4;
    case 813u: goto L_0882F600;
    case 814u: goto L_0882F608;
    case 815u: goto L_0882F620;
    case 816u: goto L_0882F62C;
    case 817u: goto L_0882F634;
    case 818u: goto L_0882F640;
    case 819u: goto L_0882F648;
    case 820u: goto L_0882F654;
    case 821u: goto L_0882F65C;
    case 822u: goto L_0882F668;
    case 823u: goto L_0882F67C;
    case 824u: goto L_0882F688;
    case 825u: goto L_0882F694;
    case 826u: goto L_0882F69C;
    case 827u: goto L_0882F6A4;
    case 828u: goto L_0882F6AC;
    case 829u: goto L_0882F6B8;
    case 830u: goto L_0882F6C0;
    case 831u: goto L_0882F6C4;
    case 832u: goto L_0882F6E8;
    case 833u: goto L_0882F710;
    case 834u: goto L_0882F720;
    case 835u: goto L_0882F728;
    case 836u: goto L_0882F730;
    case 837u: goto L_0882F73C;
    case 838u: goto L_0882F748;
    case 839u: goto L_0882F754;
    case 840u: goto L_0882F77C;
    case 841u: goto L_0882F788;
    case 842u: goto L_0882F794;
    case 843u: goto L_0882F79C;
    case 844u: goto L_0882F7A4;
    case 845u: goto L_0882F7AC;
    case 846u: goto L_0882F7C0;
    case 847u: goto L_0882F7D0;
    case 848u: goto L_0882F7D8;
    case 849u: goto L_0882F7E0;
    case 850u: goto L_0882F7E8;
    case 851u: goto L_0882F7F0;
    case 852u: goto L_0882F804;
    case 853u: goto L_0882F814;
    case 854u: goto L_0882F81C;
    case 855u: goto L_0882F824;
    case 856u: goto L_0882F830;
    case 857u: goto L_0882F844;
    case 858u: goto L_0882F858;
    case 859u: goto L_0882F86C;
    case 860u: goto L_0882F878;
    case 861u: goto L_0882F880;
    case 862u: goto L_0882F884;
    case 863u: goto L_0882F88C;
    case 864u: goto L_0882F894;
    case 865u: goto L_0882F89C;
    case 866u: goto L_0882F8AC;
    case 867u: goto L_0882F8B4;
    case 868u: goto L_0882F8C0;
    case 869u: goto L_0882F8CC;
    case 870u: goto L_0882F8F4;
    case 871u: goto L_0882F900;
    case 872u: goto L_0882F90C;
    case 873u: goto L_0882F914;
    case 874u: goto L_0882F91C;
    case 875u: goto L_0882F924;
    case 876u: goto L_0882F938;
    case 877u: goto L_0882F948;
    case 878u: goto L_0882F950;
    case 879u: goto L_0882F958;
    case 880u: goto L_0882F960;
    case 881u: goto L_0882F968;
    case 882u: goto L_0882F97C;
    case 883u: goto L_0882F98C;
    case 884u: goto L_0882F994;
    case 885u: goto L_0882F99C;
    case 886u: goto L_0882F9A8;
    case 887u: goto L_0882F9BC;
    case 888u: goto L_0882F9D0;
    case 889u: goto L_0882F9E4;
    case 890u: goto L_0882F9F0;
    case 891u: goto L_0882F9F8;
    case 892u: goto L_0882F9FC;
    case 893u: goto L_0882FA04;
    case 894u: goto L_0882FA0C;
    case 895u: goto L_0882FA14;
    case 896u: goto L_0882FA24;
    case 897u: goto L_0882FA2C;
    case 898u: goto L_0882FA38;
    case 899u: goto L_0882FA44;
    case 900u: goto L_0882FA6C;
    case 901u: goto L_0882FA78;
    case 902u: goto L_0882FA84;
    case 903u: goto L_0882FA8C;
    case 904u: goto L_0882FA94;
    case 905u: goto L_0882FA9C;
    case 906u: goto L_0882FAB0;
    case 907u: goto L_0882FAC0;
    case 908u: goto L_0882FAC8;
    case 909u: goto L_0882FAD0;
    case 910u: goto L_0882FAD8;
    case 911u: goto L_0882FAE0;
    case 912u: goto L_0882FAF4;
    case 913u: goto L_0882FB04;
    case 914u: goto L_0882FB0C;
    case 915u: goto L_0882FB14;
    case 916u: goto L_0882FB20;
    case 917u: goto L_0882FB34;
    case 918u: goto L_0882FB48;
    case 919u: goto L_0882FB5C;
    case 920u: goto L_0882FB68;
    case 921u: goto L_0882FB70;
    case 922u: goto L_0882FB74;
    case 923u: goto L_0882FB7C;
    case 924u: goto L_0882FB84;
    case 925u: goto L_0882FB94;
    case 926u: goto L_0882FBA8;
    case 927u: goto L_0882FBBC;
    case 928u: goto L_0882FBC8;
    case 929u: goto L_0882FBD0;
    case 930u: goto L_0882FBD4;
    case 931u: goto L_0882FBDC;
    case 932u: goto L_0882FBE4;
    case 933u: goto L_0882FBEC;
    case 934u: goto L_0882FC14;
    case 935u: goto L_0882FC30;
    case 936u: goto L_0882FC38;
    case 937u: goto L_0882FC44;
    case 938u: goto L_0882FC4C;
    case 939u: goto L_0882FC54;
    case 940u: goto L_0882FC7C;
    case 941u: goto L_0882FC84;
    case 942u: goto L_0882FCA0;
    case 943u: goto L_0882FCE0;
    case 944u: goto L_0882FCEC;
    case 945u: goto L_0882FD04;
    case 946u: goto L_0882FD10;
    case 947u: goto L_0882FD1C;
    case 948u: goto L_0882FD24;
    case 949u: goto L_0882FD30;
    case 950u: goto L_0882FD58;
    case 951u: goto L_0882FD64;
    case 952u: goto L_0882FD70;
    case 953u: goto L_0882FD78;
    case 954u: goto L_0882FD84;
    case 955u: goto L_0882FD8C;
    case 956u: goto L_0882FDA0;
    case 957u: goto L_0882FDB0;
    case 958u: goto L_0882FDB8;
    case 959u: goto L_0882FDC0;
    case 960u: goto L_0882FDC8;
    case 961u: goto L_0882FDE4;
    case 962u: goto L_0882FE00;
    case 963u: goto L_0882FE10;
    case 964u: goto L_0882FE1C;
    case 965u: goto L_0882FE24;
    case 966u: goto L_0882FE28;
    case 967u: goto L_0882FE30;
    case 968u: goto L_0882FE38;
    case 969u: goto L_0882FE50;
    case 970u: goto L_0882FE60;
    case 971u: goto L_0882FE68;
    case 972u: goto L_0882FE70;
    case 973u: goto L_0882FE7C;
    case 974u: goto L_0882FE8C;
    case 975u: goto L_0882FEA0;
    case 976u: goto L_0882FEB4;
    case 977u: goto L_0882FEC0;
    case 978u: goto L_0882FEC8;
    case 979u: goto L_0882FECC;
    case 980u: goto L_0882FED4;
    case 981u: goto L_0882FEDC;
    case 982u: goto L_0882FEEC;
    case 983u: goto L_0882FF00;
    case 984u: goto L_0882FF14;
    case 985u: goto L_0882FF20;
    case 986u: goto L_0882FF28;
    case 987u: goto L_0882FF2C;
    case 988u: goto L_0882FF34;
    case 989u: goto L_0882FF3C;
    case 990u: goto L_0882FF48;
    case 991u: goto L_0882FF50;
    case 992u: goto L_0882FF54;
    case 993u: goto L_0882FF60;
    case 994u: goto L_0882FF6C;
    case 995u: goto L_0882FF84;
    case 996u: goto L_0882FFA0;
    case 997u: goto L_0882FFB4;
    case 998u: goto L_0882FFC0;
    case 999u: goto L_0882FFC8;
    case 1000u: goto L_0882FFCC;
    case 1001u: goto L_0882FFD4;
    case 1002u: goto L_0882FFDC;
    case 1003u: goto L_0882FFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0882C000:
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C03C;
      }
      goto L_0882C014;
    }
L_0882C014:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (17174u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882C05C;
      }
      goto L_0882C034;
    }
L_0882C034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C054;
      }
      goto L_0882C03C;
    }
L_0882C03C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C044;
    }
L_0882C044:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C04C;
    }
L_0882C04C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C054;
    }
L_0882C054:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C05C;
    }
L_0882C05C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(473)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C06C;
    }
L_0882C06C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0882C098;
      }
      goto L_0882C078;
    }
L_0882C078:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0882C0D0;
      }
      goto L_0882C080;
    }
L_0882C080:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882C0D8;
      }
      goto L_0882C088;
    }
L_0882C088:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0882C108;
      }
      goto L_0882C090;
    }
L_0882C090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C098;
    }
L_0882C098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0882C0C8u);
    ctx.gpr[6] = (0u | 0u);
    goto L_0882C198;
L_0882C0C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C0D0;
    }
L_0882C0D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C0D8;
    }
L_0882C0D8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0882C0F8u);
    ctx.gpr[6] = (0u | 1u);
    goto L_0882C198;
L_0882C0F8:
    ctx.gpr[31] = (0x0882C100u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882C8BC;
L_0882C100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C108;
    }
L_0882C108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C14C;
      }
      goto L_0882C11C;
    }
L_0882C11C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0882C13Cu);
    ctx.gpr[6] = (0u | 1u);
    goto L_0882C198;
L_0882C13C:
    ctx.gpr[31] = (0x0882C144u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882C8BC;
L_0882C144:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C14C;
    }
L_0882C14C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0882C17Cu);
    ctx.gpr[6] = (0u | 0u);
    goto L_0882C198;
L_0882C17C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C184;
      }
      goto L_0882C184;
    }
L_0882C184:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C198:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(480)));
        goto L_0882C1B4;
    }
    goto L_0882C1AC;
L_0882C1AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(481)));
      if (branch_taken) {
          goto L_0882C1B4;
      }
      goto L_0882C1B4;
    }
L_0882C1B4:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C308;
      }
      goto L_0882C1C4;
    }
L_0882C1C4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(18072)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C1DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C310;
      }
      goto L_0882C1E4;
    }
L_0882C1E4:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0882C1FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 975u, 0x08997988u>(ctx, &aot_mem) && ctx.pc == 0x0882C1FCu) goto L_0882C1FC;
    return;
L_0882C1FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C204;
    }
L_0882C204:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0882C21Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 961u, 0x0899773Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C21Cu) goto L_0882C21C;
    return;
L_0882C21C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C224;
    }
L_0882C224:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0882C23Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 989u, 0x08997BD4u>(ctx, &aot_mem) && ctx.pc == 0x0882C23Cu) goto L_0882C23C;
    return;
L_0882C23C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C244;
    }
L_0882C244:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0882C25Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 992u, 0x08997C24u>(ctx, &aot_mem) && ctx.pc == 0x0882C25Cu) goto L_0882C25C;
    return;
L_0882C25C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C264;
    }
L_0882C264:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0882C27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 1009u, 0x08997EE4u>(ctx, &aot_mem) && ctx.pc == 0x0882C27Cu) goto L_0882C27C;
    return;
L_0882C27C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C284;
    }
L_0882C284:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0882C29Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 11u, 0x08998118u>(ctx, &aot_mem) && ctx.pc == 0x0882C29Cu) goto L_0882C29C;
    return;
L_0882C29C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C2A4;
    }
L_0882C2A4:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0882C2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 23u, 0x089983B4u>(ctx, &aot_mem) && ctx.pc == 0x0882C2BCu) goto L_0882C2BC;
    return;
L_0882C2BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C2C4;
    }
L_0882C2C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C2CC;
    }
L_0882C2CC:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0882C2E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 35u, 0x08998650u>(ctx, &aot_mem) && ctx.pc == 0x0882C2E4u) goto L_0882C2E4;
    return;
L_0882C2E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C2EC;
    }
L_0882C2EC:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x0882C300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 47u, 0x089988BCu>(ctx, &aot_mem) && ctx.pc == 0x0882C300u) goto L_0882C300;
    return;
L_0882C300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C308;
    }
L_0882C308:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C1DC;
      }
      goto L_0882C310;
    }
L_0882C310:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C31C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882C33Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C33Cu) goto L_0882C33C;
    return;
L_0882C33C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x0882C35Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x0882C35Cu) goto L_0882C35C;
    return;
L_0882C35C:
    ctx.gpr[31] = (0x0882C364u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C364u) goto L_0882C364;
    return;
L_0882C364:
    ctx.gpr[31] = (0x0882C36Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C36Cu) goto L_0882C36C;
    return;
L_0882C36C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C380:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(470), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882C3B4;
      }
      goto L_0882C3A4;
    }
L_0882C3A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0882C3B4;
L_0882C3B4:
    ctx.gpr[31] = (0x0882C3BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 458u, 0x088DF74Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C3BCu) goto L_0882C3BC;
    return;
L_0882C3BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C3C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 3u);
      if (branch_taken) {
          goto L_0882C4A0;
      }
      goto L_0882C404;
    }
L_0882C404:
    ctx.gpr[17] = (0u | 0u);
    goto L_0882C408;
L_0882C408:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_0882C420;
      }
      goto L_0882C410;
    }
L_0882C410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
        goto L_0882C428;
    }
    goto L_0882C420;
L_0882C420:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0882C448;
      }
      goto L_0882C428;
    }
L_0882C428:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
        goto L_0882C444;
    }
    goto L_0882C43C;
L_0882C43C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0882C448;
      }
      goto L_0882C444;
    }
L_0882C444:
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[17]);
    goto L_0882C448;
L_0882C448:
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C490;
      }
      goto L_0882C454;
    }
L_0882C454:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(476)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0882C490;
      }
      goto L_0882C460;
    }
L_0882C460:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0882C46Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C46Cu) goto L_0882C46C;
    return;
L_0882C46C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C490;
      }
      goto L_0882C474;
    }
L_0882C474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0882C490u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882C490u) goto L_0882C490;
    return;
L_0882C490:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(544));
      if (branch_taken) {
          goto L_0882C408;
      }
      goto L_0882C4A0;
    }
L_0882C4A0:
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
L_0882C4C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 3u);
      if (branch_taken) {
          goto L_0882C5F8;
      }
      goto L_0882C510;
    }
L_0882C510:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[18] = (0u | 0u);
    goto L_0882C518;
L_0882C518:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_0882C530;
      }
      goto L_0882C520;
    }
L_0882C520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
        goto L_0882C538;
    }
    goto L_0882C530;
L_0882C530:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0882C558;
      }
      goto L_0882C538;
    }
L_0882C538:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_0882C554;
    }
    goto L_0882C54C;
L_0882C54C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0882C558;
      }
      goto L_0882C554;
    }
L_0882C554:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[18]);
    goto L_0882C558;
L_0882C558:
    ctx.gpr[23] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C5E8;
      }
      goto L_0882C564;
    }
L_0882C564:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(476)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0882C5E8;
      }
      goto L_0882C570;
    }
L_0882C570:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882C5E8;
      }
      goto L_0882C5B8;
    }
L_0882C5B8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0882C5C4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C5C4u) goto L_0882C5C4;
    return;
L_0882C5C4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C5E8;
      }
      goto L_0882C5CC;
    }
L_0882C5CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0882C5E8u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882C5E8u) goto L_0882C5E8;
    return;
L_0882C5E8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(544));
      if (branch_taken) {
          goto L_0882C518;
      }
      goto L_0882C5F8;
    }
L_0882C5F8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C628:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_0882C700;
      }
      goto L_0882C664;
    }
L_0882C664:
    ctx.gpr[17] = (0u | 0u);
    goto L_0882C668;
L_0882C668:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_0882C680;
      }
      goto L_0882C670;
    }
L_0882C670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
        goto L_0882C688;
    }
    goto L_0882C680;
L_0882C680:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0882C6A8;
      }
      goto L_0882C688;
    }
L_0882C688:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
        goto L_0882C6A4;
    }
    goto L_0882C69C;
L_0882C69C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0882C6A8;
      }
      goto L_0882C6A4;
    }
L_0882C6A4:
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[17]);
    goto L_0882C6A8;
L_0882C6A8:
    ctx.gpr[22] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C6F0;
      }
      goto L_0882C6B4;
    }
L_0882C6B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(476)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0882C6F0;
      }
      goto L_0882C6C0;
    }
L_0882C6C0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0882C6CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C6CCu) goto L_0882C6CC;
    return;
L_0882C6CC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C6F0;
      }
      goto L_0882C6D4;
    }
L_0882C6D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0882C6F0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882C6F0u) goto L_0882C6F0;
    return;
L_0882C6F0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(544));
      if (branch_taken) {
          goto L_0882C668;
      }
      goto L_0882C700;
    }
L_0882C700:
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
L_0882C728:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(478))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0882C8A4;
      }
      goto L_0882C74C;
    }
L_0882C74C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (17150u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0882C770;
      }
      goto L_0882C76C;
    }
L_0882C76C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0882C770;
L_0882C770:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(478))))));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(478), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(478))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_0882C878;
      }
      goto L_0882C7A0;
    }
L_0882C7A0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(473)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (512u << 16u);
      if (branch_taken) {
          goto L_0882C7C4;
      }
      goto L_0882C7B4;
    }
L_0882C7B4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(473)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0882C7D0;
      }
      goto L_0882C7C4;
    }
L_0882C7C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    goto L_0882C7D0;
L_0882C7D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C818;
      }
      goto L_0882C7E0;
    }
L_0882C7E0:
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(478), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0882C810u);
    ctx.gpr[6] = (0u | 0u);
    goto L_0882C198;
L_0882C810:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C89C;
      }
      goto L_0882C818;
    }
L_0882C818:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882C830u);
    ctx.gpr[6] = (0u | 1u);
    goto L_0882C198;
L_0882C830:
    ctx.gpr[31] = (0x0882C838u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882C8BC;
L_0882C838:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882C844u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C844u) goto L_0882C844;
    return;
L_0882C844:
    ctx.gpr[31] = (0x0882C84Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 537u, 0x0889358Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C84Cu) goto L_0882C84C;
    return;
L_0882C84C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C870;
      }
      goto L_0882C854;
    }
L_0882C854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0882C870u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882C870u) goto L_0882C870;
    return;
L_0882C870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C89C;
      }
      goto L_0882C878;
    }
L_0882C878:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882C89C;
      }
      goto L_0882C880;
    }
L_0882C880:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882C89Cu);
    ctx.gpr[6] = (0u | 0u);
    goto L_0882C198;
L_0882C89C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0882C8A8;
      }
      goto L_0882C8A4;
    }
L_0882C8A4:
    ctx.gpr[2] = (0u | 0u);
    goto L_0882C8A8;
L_0882C8A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C8BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882C8E4;
      }
      goto L_0882C8DC;
    }
L_0882C8DC:
    ctx.gpr[31] = (0x0882C8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem) && ctx.pc == 0x0882C8E4u) goto L_0882C8E4;
    return;
L_0882C8E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882C91C;
      }
      goto L_0882C90C;
    }
L_0882C90C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0882C924;
      }
      goto L_0882C91C;
    }
L_0882C91C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0882C924;
L_0882C924:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
        goto L_0882C938;
    }
    goto L_0882C92C;
L_0882C92C:
    ctx.gpr[31] = (0x0882C934u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 475u, 0x08A660DCu>(ctx, &aot_mem) && ctx.pc == 0x0882C934u) goto L_0882C934;
    return;
L_0882C934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_0882C938;
L_0882C938:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (65532u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x0882C96Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C96Cu) goto L_0882C96C;
    return;
L_0882C96C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882C98C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-15));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(480), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(481), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882C9D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 435u, 0x089E224Cu>(ctx, &aot_mem) && ctx.pc == 0x0882C9D0u) goto L_0882C9D0;
    return;
L_0882C9D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2049));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[6] = (ctx.gpr[6] | 2048u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(470), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(435), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(434), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(433), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(432), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(439), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(438), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(437), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(436), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(483))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(472), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(483), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(468), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(444), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(448), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0882CAE8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem) && ctx.pc == 0x0882CAE8u) goto L_0882CAE8;
    return;
L_0882CAE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
      if (branch_taken) {
          goto L_0882CB08;
      }
      goto L_0882CAF0;
    }
L_0882CAF0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(483))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(440), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(194)));
      if (branch_taken) {
          goto L_0882CB18;
      }
      goto L_0882CB08;
    }
L_0882CB08:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(440), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(483))))));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(194)));
    goto L_0882CB18;
L_0882CB18:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0882CB5C;
      }
      goto L_0882CB20;
    }
L_0882CB20:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0882CB5C;
      }
      goto L_0882CB2C;
    }
L_0882CB2C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(198)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0882CB5C;
      }
      goto L_0882CB38;
    }
L_0882CB38:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0882CB5C;
      }
      goto L_0882CB44;
    }
L_0882CB44:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(202)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0882CB5C;
      }
      goto L_0882CB50;
    }
L_0882CB50:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0882CB64;
      }
      goto L_0882CB5C;
    }
L_0882CB5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0882CB64;
      }
      goto L_0882CB64;
    }
L_0882CB64:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CB7C;
      }
      goto L_0882CB6C;
    }
L_0882CB6C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[7] = (1024u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), ctx.gpr[6]);
    goto L_0882CB7C;
L_0882CB7C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0882CB9C;
      }
      goto L_0882CB8C;
    }
L_0882CB8C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_0882CB9C;
L_0882CB9C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0882CBB8;
      }
      goto L_0882CBAC;
    }
L_0882CBAC:
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(483), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(483))))));
    goto L_0882CBB8;
L_0882CBB8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
      if (branch_taken) {
          goto L_0882CC38;
      }
      goto L_0882CBCC;
    }
L_0882CBCC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(226)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0882CC38;
      }
      goto L_0882CBD8;
    }
L_0882CBD8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0882CC38;
      }
      goto L_0882CBE4;
    }
L_0882CBE4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0882CC38;
      }
      goto L_0882CBF0;
    }
L_0882CBF0:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0882CC38;
      }
      goto L_0882CBFC;
    }
L_0882CBFC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0882CC38;
      }
      goto L_0882CC08;
    }
L_0882CC08:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0882CC38;
      }
      goto L_0882CC14;
    }
L_0882CC14:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0882CC38;
      }
      goto L_0882CC20;
    }
L_0882CC20:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(186)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0882CC38;
      }
      goto L_0882CC2C;
    }
L_0882CC2C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0882CC44;
      }
      goto L_0882CC38;
    }
L_0882CC38:
    ctx.gpr[4] = (ctx.gpr[5] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(483), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0882CC48;
      }
      goto L_0882CC44;
    }
L_0882CC44:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(483), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0882CC48;
L_0882CC48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(90))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-249));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 104u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(478), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(452), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882CC80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(477), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882CCD8;
      }
      goto L_0882CCC4;
    }
L_0882CCC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(473)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882CCE0;
      }
      goto L_0882CCD0;
    }
L_0882CCD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CCF0;
      }
      goto L_0882CCD8;
    }
L_0882CCD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D4D4;
      }
      goto L_0882CCE0;
    }
L_0882CCE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882CCF0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 482u, 0x0882BFC8u>(ctx, &aot_mem) && ctx.pc == 0x0882CCF0u) goto L_0882CCF0;
    return;
L_0882CCF0:
    ctx.gpr[31] = (0x0882CCF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 540u, 0x08A666DCu>(ctx, &aot_mem) && ctx.pc == 0x0882CCF8u) goto L_0882CCF8;
    return;
L_0882CCF8:
    ctx.gpr[4] = (2238u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(344)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0882CD14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14064));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 644u, 0x08A8F64Cu>(ctx, &aot_mem) && ctx.pc == 0x0882CD14u) goto L_0882CD14;
    return;
L_0882CD14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CDE8;
      }
      goto L_0882CD1C;
    }
L_0882CD1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0882CD58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x0882CD58u) goto L_0882CD58;
    return;
L_0882CD58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0882CD78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x0882CD78u) goto L_0882CD78;
    return;
L_0882CD78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (16248u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0882CDD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x0882CDD0u) goto L_0882CDD0;
    return;
L_0882CDD0:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
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
    goto L_0882CDE8;
L_0882CDE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(138)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882CE1C;
      }
      goto L_0882CDFC;
    }
L_0882CDFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(190)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882CE1C;
      }
      goto L_0882CE0C;
    }
L_0882CE0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882CE24;
      }
      goto L_0882CE1C;
    }
L_0882CE1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0882CE24;
      }
      goto L_0882CE24;
    }
L_0882CE24:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CEC4;
      }
      goto L_0882CE2C;
    }
L_0882CE2C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(482))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CEC4;
      }
      goto L_0882CE44;
    }
L_0882CE44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882CEC4;
      }
      goto L_0882CE58;
    }
L_0882CE58:
    ctx.gpr[31] = (0x0882CE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0882CE60u) goto L_0882CE60;
    return;
L_0882CE60:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882CEC4;
      }
      goto L_0882CE74;
    }
L_0882CE74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (4u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (65528u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x0882CEB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x0882CEB4u) goto L_0882CEB4;
    return;
L_0882CEB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    goto L_0882CEC4;
L_0882CEC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(242)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882CF90;
      }
      goto L_0882CED8;
    }
L_0882CED8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (48460u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x0882CF3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x0882CF3Cu) goto L_0882CF3C;
    return;
L_0882CF3C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x0882CF70u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 348u, 0x0882B4BCu>(ctx, &aot_mem) && ctx.pc == 0x0882CF70u) goto L_0882CF70;
    return;
L_0882CF70:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882CF90u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x0882CF90u) goto L_0882CF90;
    return;
L_0882CF90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882D4A8;
      }
      goto L_0882CFA4;
    }
L_0882CFA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882CFBCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882CFBCu) goto L_0882CFBC;
    return;
L_0882CFBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D4A8;
      }
      goto L_0882CFC4;
    }
L_0882CFC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(320)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(324)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[22] = std::sqrt(ctx.fpr[22]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0882D060u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x0882D060u) goto L_0882D060;
    return;
L_0882D060:
    ctx.gpr[31] = (0x0882D068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0882D068u) goto L_0882D068;
    return;
L_0882D068:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D4A8;
      }
      goto L_0882D070;
    }
L_0882D070:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x0882D07Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x0882D07Cu) goto L_0882D07C;
    return;
L_0882D07C:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0882D094u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x0882D094u) goto L_0882D094;
    return;
L_0882D094:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0882D0A8u);
    ctx.fpr[24] = ctx.fpr[14] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x0882D0A8u) goto L_0882D0A8;
    return;
L_0882D0A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[24] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[16];
      if (branch_taken) {
          goto L_0882D2AC;
      }
      goto L_0882D0D0;
    }
L_0882D0D0:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882D2AC;
      }
      goto L_0882D0E8;
    }
L_0882D0E8:
    ctx.fpr[12] = std::sqrt(ctx.fpr[26]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882D2AC;
      }
      goto L_0882D104;
    }
L_0882D104:
    ctx.gpr[31] = (0x0882D10Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem) && ctx.pc == 0x0882D10Cu) goto L_0882D10C;
    return;
L_0882D10C:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882D2AC;
      }
      goto L_0882D134;
    }
L_0882D134:
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882D2AC;
      }
      goto L_0882D164;
    }
L_0882D164:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.gpr[5] = (16025u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16076u << 16u);
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
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882D1C8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x0882D1C8u) goto L_0882D1C8;
    return;
L_0882D1C8:
    ctx.gpr[4] = (0u | 85u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0882D1D8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D1D8u) goto L_0882D1D8;
    return;
L_0882D1D8:
    ctx.gpr[31] = (0x0882D1E0u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0882D1E0u) goto L_0882D1E0;
    return;
L_0882D1E0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x0882D1FCu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0882D1FCu) goto L_0882D1FC;
    return;
L_0882D1FC:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0882D22Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0882D22Cu) goto L_0882D22C;
    return;
L_0882D22C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(475)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D248;
      }
      goto L_0882D238;
    }
L_0882D238:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(475)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(475), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0882D248;
L_0882D248:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(475)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0882D2AC;
      }
      goto L_0882D254;
    }
L_0882D254:
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(14304));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30376));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(475)));
    ctx.gpr[31] = (0x0882D26Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x0882D26Cu) goto L_0882D26C;
    return;
L_0882D26C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 50u);
    ctx.gpr[31] = (0x0882D2A0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 57u, 0x088AC684u>(ctx, &aot_mem) && ctx.pc == 0x0882D2A0u) goto L_0882D2A0;
    return;
L_0882D2A0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(475)));
    ctx.gpr[31] = (0x0882D2ACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 159u, 0x08990B80u>(ctx, &aot_mem) && ctx.pc == 0x0882D2ACu) goto L_0882D2AC;
    return;
L_0882D2AC:
    ctx.fpr[12] = std::sqrt(ctx.fpr[26]);
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882D4A8;
      }
      goto L_0882D2CC;
    }
L_0882D2CC:
    ctx.gpr[4] = (48921u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (49030u << 16u);
      if (branch_taken) {
          goto L_0882D4A8;
      }
      goto L_0882D2E8;
    }
L_0882D2E8:
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882D4A8;
      }
      goto L_0882D300;
    }
L_0882D300:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0882D4A8;
      }
      goto L_0882D314;
    }
L_0882D314:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0882D354;
    }
    goto L_0882D354;
L_0882D354:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x0882D360u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0882D360u) goto L_0882D360;
    return;
L_0882D360:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x0882D394u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0882D394u) goto L_0882D394;
    return;
L_0882D394:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.gpr[31] = (0x0882D3C0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x0882D3C0u) goto L_0882D3C0;
    return;
L_0882D3C0:
    ctx.gpr[4] = (0u | 85u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0882D3D0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem) && ctx.pc == 0x0882D3D0u) goto L_0882D3D0;
    return;
L_0882D3D0:
    ctx.gpr[31] = (0x0882D3D8u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0882D3D8u) goto L_0882D3D8;
    return;
L_0882D3D8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0882D400u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0882D400u) goto L_0882D400;
    return;
L_0882D400:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x0882D430u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0882D430u) goto L_0882D430;
    return;
L_0882D430:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(475)));
    ctx.gpr[4] = (0u | 250u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 250 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0882D448;
    }
    goto L_0882D448;
L_0882D448:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(475), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(14304));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30376));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(475)));
    ctx.gpr[31] = (0x0882D468u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x0882D468u) goto L_0882D468;
    return;
L_0882D468:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 50u);
    ctx.gpr[31] = (0x0882D49Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 57u, 0x088AC684u>(ctx, &aot_mem) && ctx.pc == 0x0882D49Cu) goto L_0882D49C;
    return;
L_0882D49C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(475)));
    ctx.gpr[31] = (0x0882D4A8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 159u, 0x08990B80u>(ctx, &aot_mem) && ctx.pc == 0x0882D4A8u) goto L_0882D4A8;
    return;
L_0882D4A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D4D4;
      }
      goto L_0882D4BC;
    }
L_0882D4BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_0882D4D4;
L_0882D4D4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882D508:
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
          goto L_0882D568;
      }
      goto L_0882D55C;
    }
L_0882D55C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_0882D574;
      }
      goto L_0882D568;
    }
L_0882D568:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    goto L_0882D574;
L_0882D574:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0882D5D0;
      }
      goto L_0882D57C;
    }
L_0882D57C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x0882D594u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x0882D594u) goto L_0882D594;
    return;
L_0882D594:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0882D5D0;
      }
      goto L_0882D5AC;
    }
L_0882D5AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x0882D5C0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x0882D5C0u) goto L_0882D5C0;
    return;
L_0882D5C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_0882D5D0;
L_0882D5D0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0882D618;
      }
      goto L_0882D5E0;
    }
L_0882D5E0:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
        goto L_0882D610;
    }
    goto L_0882D5EC;
L_0882D5EC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
        goto L_0882D610;
    }
    goto L_0882D600;
L_0882D600:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    goto L_0882D610;
L_0882D610:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882D5E0;
      }
      goto L_0882D618;
    }
L_0882D618:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0882D660;
      }
      goto L_0882D628;
    }
L_0882D628:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D654;
      }
      goto L_0882D634;
    }
L_0882D634:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D654;
      }
      goto L_0882D648;
    }
L_0882D648:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_0882D654;
L_0882D654:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0882D6A4;
      }
      goto L_0882D660;
    }
L_0882D660:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0882D6A0;
      }
      goto L_0882D668;
    }
L_0882D668:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_0882D698;
    }
    goto L_0882D674;
L_0882D674:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_0882D698;
    }
    goto L_0882D688;
L_0882D688:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_0882D698;
L_0882D698:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882D668;
      }
      goto L_0882D6A0;
    }
L_0882D6A0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0882D6A4;
L_0882D6A4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882D6F8;
      }
      goto L_0882D6AC;
    }
L_0882D6AC:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0882D6F8;
      }
      goto L_0882D6BC;
    }
L_0882D6BC:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_0882D6EC;
    }
    goto L_0882D6C8;
L_0882D6C8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_0882D6EC;
    }
    goto L_0882D6DC;
L_0882D6DC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_0882D6EC;
L_0882D6EC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882D6BC;
      }
      goto L_0882D6F4;
    }
L_0882D6F4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0882D6F8;
L_0882D6F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0882D74C;
      }
      goto L_0882D708;
    }
L_0882D708:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_0882D740;
    }
    goto L_0882D710;
L_0882D710:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_0882D740;
    }
    goto L_0882D718;
L_0882D718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_0882D740;
    }
    goto L_0882D724;
L_0882D724:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0882D73C;
      }
      goto L_0882D734;
    }
L_0882D734:
    ctx.gpr[31] = (0x0882D73Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x0882D73Cu) goto L_0882D73C;
    return;
L_0882D73C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_0882D740;
L_0882D740:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0882D708;
      }
      goto L_0882D748;
    }
L_0882D748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0882D74C;
L_0882D74C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D75C;
      }
      goto L_0882D754;
    }
L_0882D754:
    ctx.gpr[31] = (0x0882D75Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882D75Cu) goto L_0882D75C;
    return;
L_0882D75C:
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
L_0882D794:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30368)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30364)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882D854u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0882D854u) goto L_0882D854;
    return;
L_0882D854:
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(29232));
      if (branch_taken) {
          goto L_0882D87C;
      }
      goto L_0882D868;
    }
L_0882D868:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0882D878u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 663u, 0x08B66BE0u>(ctx, &aot_mem) && ctx.pc == 0x0882D878u) goto L_0882D878;
    return;
L_0882D878:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0882D87C;
L_0882D87C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0882D890;
      }
      goto L_0882D884;
    }
L_0882D884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0882D890;
L_0882D890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(308)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882D8D4;
      }
      goto L_0882D8A0;
    }
L_0882D8A0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0882D8C4;
      }
      goto L_0882D8A8;
    }
L_0882D8A8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
      if (branch_taken) {
          goto L_0882D8BC;
      }
      goto L_0882D8B0;
    }
L_0882D8B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0882D8BC;
L_0882D8BC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(308)));
    goto L_0882D8C4;
L_0882D8C4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(301)));
      if (branch_taken) {
          goto L_0882D8FC;
      }
      goto L_0882D8D4;
    }
L_0882D8D4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(304));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x0882D8F4u);
    ctx.gpr[9] = (0u | 1u);
    goto L_0882D508;
L_0882D8F4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(301)));
    goto L_0882D8FC;
L_0882D8FC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D924;
      }
      goto L_0882D904;
    }
L_0882D904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0882D920u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882D920u) goto L_0882D920;
    return;
L_0882D920:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0882D924;
L_0882D924:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D944;
      }
      goto L_0882D92C;
    }
L_0882D92C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882D944;
      }
      goto L_0882D93C;
    }
L_0882D93C:
    ctx.gpr[31] = (0x0882D944u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x0882D944u) goto L_0882D944;
    return;
L_0882D944:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882D968:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0882DA30;
      }
      goto L_0882D98C;
    }
L_0882D98C:
    ctx.gpr[31] = (0x0882D994u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0882E9B4;
L_0882D994:
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882D9A8;
      }
      goto L_0882D9A0;
    }
L_0882D9A0:
    ctx.gpr[31] = (0x0882D9A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0882DA4C;
L_0882D9A8:
    ctx.gpr[31] = (0x0882D9B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0882DAD0;
L_0882D9B0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D9DC;
      }
      goto L_0882D9B8;
    }
L_0882D9B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0882D9DC;
      }
      goto L_0882D9C4;
    }
L_0882D9C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D9DC;
      }
      goto L_0882D9CC;
    }
L_0882D9CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882D9DC;
      }
      goto L_0882D9D4;
    }
L_0882D9D4:
    ctx.gpr[31] = (0x0882D9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882D9DCu) goto L_0882D9DC;
    return;
L_0882D9DC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882DA08;
      }
      goto L_0882D9E4;
    }
L_0882D9E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0882DA08;
      }
      goto L_0882D9F0;
    }
L_0882D9F0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882DA08;
      }
      goto L_0882D9F8;
    }
L_0882D9F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882DA08;
      }
      goto L_0882DA00;
    }
L_0882DA00:
    ctx.gpr[31] = (0x0882DA08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882DA08u) goto L_0882DA08;
    return;
L_0882DA08:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_0882DA20;
      }
      goto L_0882DA10;
    }
L_0882DA10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0882DA1Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 528u, 0x08AE1CE0u>(ctx, &aot_mem) && ctx.pc == 0x0882DA1Cu) goto L_0882DA1C;
    return;
L_0882DA1C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_0882DA20;
L_0882DA20:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882DA30;
      }
      goto L_0882DA28;
    }
L_0882DA28:
    ctx.gpr[31] = (0x0882DA30u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x0882DA30u) goto L_0882DA30;
    return;
L_0882DA30:
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
L_0882DA4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(41)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882DA84;
      }
      goto L_0882DA64;
    }
L_0882DA64:
    ctx.gpr[31] = (0x0882DA6Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0882DA6Cu) goto L_0882DA6C;
    return;
L_0882DA6C:
    ctx.gpr[31] = (0x0882DA74u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 15u, 0x0898C078u>(ctx, &aot_mem) && ctx.pc == 0x0882DA74u) goto L_0882DA74;
    return;
L_0882DA74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882DA8C;
      }
      goto L_0882DA7C;
    }
L_0882DA7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882DAAC;
      }
      goto L_0882DA84;
    }
L_0882DA84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882DAC0;
      }
      goto L_0882DA8C;
    }
L_0882DA8C:
    ctx.gpr[31] = (0x0882DA94u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0882DA94u) goto L_0882DA94;
    return;
L_0882DA94:
    ctx.gpr[31] = (0x0882DA9Cu);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 816u, 0x0898B2C4u>(ctx, &aot_mem) && ctx.pc == 0x0882DA9Cu) goto L_0882DA9C;
    return;
L_0882DA9C:
    ctx.gpr[31] = (0x0882DAA4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0882DAA4u) goto L_0882DAA4;
    return;
L_0882DAA4:
    ctx.gpr[31] = (0x0882DAACu);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 816u, 0x0898B2C4u>(ctx, &aot_mem) && ctx.pc == 0x0882DAACu) goto L_0882DAAC;
    return;
L_0882DAAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882DAB8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0882DFD0;
L_0882DAB8:
    ctx.gpr[31] = (0x0882DAC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882DC20;
L_0882DAC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882DAD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882DB04;
      }
      goto L_0882DAF0;
    }
L_0882DAF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882DB0C;
      }
      goto L_0882DAFC;
    }
L_0882DAFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0882DB18;
      }
      goto L_0882DB04;
    }
L_0882DB04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882DC08;
      }
      goto L_0882DB0C;
    }
L_0882DB0C:
    ctx.gpr[31] = (0x0882DB14u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 528u, 0x08AE1CE0u>(ctx, &aot_mem) && ctx.pc == 0x0882DB14u) goto L_0882DB14;
    return;
L_0882DB14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0882DB18;
L_0882DB18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_0882DB80;
      }
      goto L_0882DB40;
    }
L_0882DB40:
    ctx.gpr[18] = (0u | 0u);
    goto L_0882DB44;
L_0882DB44:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0882DB54u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 528u, 0x08AE1CE0u>(ctx, &aot_mem) && ctx.pc == 0x0882DB54u) goto L_0882DB54;
    return;
L_0882DB54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882DB44;
      }
      goto L_0882DB80;
    }
L_0882DB80:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0882DBF8;
      }
      goto L_0882DBBC;
    }
L_0882DBBC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0882DBCCu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 528u, 0x08AE1CE0u>(ctx, &aot_mem) && ctx.pc == 0x0882DBCCu) goto L_0882DBCC;
    return;
L_0882DBCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882DBBC;
      }
      goto L_0882DBF8;
    }
L_0882DBF8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    goto L_0882DC08;
L_0882DC08:
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
L_0882DC20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882DC4C;
      }
      goto L_0882DC44;
    }
L_0882DC44:
    ctx.gpr[31] = (0x0882DC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0882DC4Cu) goto L_0882DC4C;
    return;
L_0882DC4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6851), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2264), 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0882DC6Cu);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8706), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 841u, 0x08A0787Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DC6Cu) goto L_0882DC6C;
    return;
L_0882DC6C:
    ctx.gpr[31] = (0x0882DC74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 538u, 0x08AD31E8u>(ctx, &aot_mem) && ctx.pc == 0x0882DC74u) goto L_0882DC74;
    return;
L_0882DC74:
    ctx.gpr[31] = (0x0882DC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 172u, 0x08A1155Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DC7Cu) goto L_0882DC7C;
    return;
L_0882DC7C:
    ctx.gpr[31] = (0x0882DC84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 561u, 0x08A0638Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DC84u) goto L_0882DC84;
    return;
L_0882DC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882DCC8;
      }
      goto L_0882DC94;
    }
L_0882DC94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882DCC8;
      }
      goto L_0882DCA0;
    }
L_0882DCA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
        goto L_0882DCB8;
    }
    goto L_0882DCAC;
L_0882DCAC:
    ctx.gpr[31] = (0x0882DCB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0882DCB4u) goto L_0882DCB4;
    return;
L_0882DCB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_0882DCB8;
L_0882DCB8:
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    ctx.gpr[31] = (0x0882DCC8u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 680u, 0x089C6F68u>(ctx, &aot_mem) && ctx.pc == 0x0882DCC8u) goto L_0882DCC8;
    return;
L_0882DCC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882DCD8u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem) && ctx.pc == 0x0882DCD8u) goto L_0882DCD8;
    return;
L_0882DCD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[31] = (0x0882DCE8u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 556u, 0x0880A6ECu>(ctx, &aot_mem) && ctx.pc == 0x0882DCE8u) goto L_0882DCE8;
    return;
L_0882DCE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0882DD4C;
      }
      goto L_0882DD14;
    }
L_0882DD14:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x0882DD20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 572u, 0x08AE2020u>(ctx, &aot_mem) && ctx.pc == 0x0882DD20u) goto L_0882DD20;
    return;
L_0882DD20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882DD14;
      }
      goto L_0882DD4C;
    }
L_0882DD4C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0882DD6C;
      }
      goto L_0882DD5C;
    }
L_0882DD5C:
    ctx.gpr[31] = (0x0882DD64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0882DD64u) goto L_0882DD64;
    return;
L_0882DD64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882DD6C;
L_0882DD6C:
    ctx.gpr[31] = (0x0882DD74u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 686u, 0x089BB280u>(ctx, &aot_mem) && ctx.pc == 0x0882DD74u) goto L_0882DD74;
    return;
L_0882DD74:
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
L_0882DD8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882DDCC;
      }
      goto L_0882DDAC;
    }
L_0882DDAC:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30252));
    ctx.gpr[31] = (0x0882DDB8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem) && ctx.pc == 0x0882DDB8u) goto L_0882DDB8;
    return;
L_0882DDB8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882DDD4;
      }
      goto L_0882DDC4;
    }
L_0882DDC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882DDDC;
      }
      goto L_0882DDCC;
    }
L_0882DDCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882DEDC;
      }
      goto L_0882DDD4;
    }
L_0882DDD4:
    ctx.gpr[31] = (0x0882DDDCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 571u, 0x08AAEBC8u>(ctx, &aot_mem) && ctx.pc == 0x0882DDDCu) goto L_0882DDDC;
    return;
L_0882DDDC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0882DDE8u);
    ctx.gpr[4] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0882DDE8u) goto L_0882DDE8;
    return;
L_0882DDE8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30240));
      if (branch_taken) {
          goto L_0882DE00;
      }
      goto L_0882DDF4;
    }
L_0882DDF4:
    ctx.gpr[31] = (0x0882DDFCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 506u, 0x08AE1B78u>(ctx, &aot_mem) && ctx.pc == 0x0882DDFCu) goto L_0882DDFC;
    return;
L_0882DDFC:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0882DE00;
L_0882DE00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882DE14;
      }
      goto L_0882DE0C;
    }
L_0882DE0C:
    ctx.gpr[31] = (0x0882DE14u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 528u, 0x08AE1CE0u>(ctx, &aot_mem) && ctx.pc == 0x0882DE14u) goto L_0882DE14;
    return;
L_0882DE14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30232));
    ctx.gpr[31] = (0x0882DE24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882EE10;
L_0882DE24:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30224));
    ctx.gpr[31] = (0x0882DE30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882EE10;
L_0882DE30:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30212));
    ctx.gpr[31] = (0x0882DE3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882EE10;
L_0882DE3C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30200));
    ctx.gpr[31] = (0x0882DE48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882EE10;
L_0882DE48:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30188));
    ctx.gpr[31] = (0x0882DE54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882EE10;
L_0882DE54:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30172));
    ctx.gpr[31] = (0x0882DE60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882EE10;
L_0882DE60:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30160));
    ctx.gpr[31] = (0x0882DE6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882EE10;
L_0882DE6C:
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882DE7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18120));
    goto L_0882EE10;
L_0882DE7C:
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882DE8Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18140));
    goto L_0882EE10;
L_0882DE8C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30148));
    ctx.gpr[31] = (0x0882DE98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882EE10;
L_0882DE98:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30132));
    ctx.gpr[31] = (0x0882DEA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882EE10;
L_0882DEA4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30120));
    ctx.gpr[31] = (0x0882DEB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882EFBC;
L_0882DEB0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30108));
    ctx.gpr[31] = (0x0882DEBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882EFBC;
L_0882DEBC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30096));
    ctx.gpr[31] = (0x0882DEC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882EFBC;
L_0882DEC8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30084));
    ctx.gpr[31] = (0x0882DED4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882EFBC;
L_0882DED4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0882DEDC;
L_0882DEDC:
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
L_0882DEF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(33)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882DF48;
      }
      goto L_0882DF1C;
    }
L_0882DF1C:
    ctx.gpr[31] = (0x0882DF24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 640u, 0x08AAEFC8u>(ctx, &aot_mem) && ctx.pc == 0x0882DF24u) goto L_0882DF24;
    return;
L_0882DF24:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30252));
    ctx.gpr[31] = (0x0882DF30u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem) && ctx.pc == 0x0882DF30u) goto L_0882DF30;
    return;
L_0882DF30:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882DF50;
      }
      goto L_0882DF40;
    }
L_0882DF40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882DF5C;
      }
      goto L_0882DF48;
    }
L_0882DF48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0882DFB4;
      }
      goto L_0882DF50;
    }
L_0882DF50:
    ctx.gpr[31] = (0x0882DF58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 571u, 0x08AAEBC8u>(ctx, &aot_mem) && ctx.pc == 0x0882DF58u) goto L_0882DF58;
    return;
L_0882DF58:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0882DF5C;
L_0882DF5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882DF70;
      }
      goto L_0882DF68;
    }
L_0882DF68:
    ctx.gpr[31] = (0x0882DF70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DF70u) goto L_0882DF70;
    return;
L_0882DF70:
    ctx.gpr[31] = (0x0882DF78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 201u, 0x08954DE8u>(ctx, &aot_mem) && ctx.pc == 0x0882DF78u) goto L_0882DF78;
    return;
L_0882DF78:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0882DF90u);
    ctx.gpr[6] = (16u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 694u, 0x0893681Cu>(ctx, &aot_mem) && ctx.pc == 0x0882DF90u) goto L_0882DF90;
    return;
L_0882DF90:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882DF9Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 721u, 0x08AAF460u>(ctx, &aot_mem) && ctx.pc == 0x0882DF9Cu) goto L_0882DF9C;
    return;
L_0882DF9C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[31] = (0x0882DFA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 644u, 0x08AAF008u>(ctx, &aot_mem) && ctx.pc == 0x0882DFA8u) goto L_0882DFA8;
    return;
L_0882DFA8:
    ctx.gpr[31] = (0x0882DFB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 642u, 0x08AAEFE8u>(ctx, &aot_mem) && ctx.pc == 0x0882DFB0u) goto L_0882DFB0;
    return;
L_0882DFB0:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_0882DFB4;
L_0882DFB4:
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
L_0882DFD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(33)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882E00C;
      }
      goto L_0882DFEC;
    }
L_0882DFEC:
    ctx.gpr[31] = (0x0882DFF4u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30252));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem) && ctx.pc == 0x0882DFF4u) goto L_0882DFF4;
    return;
L_0882DFF4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882E014;
      }
      goto L_0882E004;
    }
L_0882E004:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E0AC;
      }
      goto L_0882E00C;
    }
L_0882E00C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E0AC;
      }
      goto L_0882E014;
    }
L_0882E014:
    ctx.gpr[31] = (0x0882E01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 733u, 0x08B3AAE8u>(ctx, &aot_mem) && ctx.pc == 0x0882E01Cu) goto L_0882E01C;
    return;
L_0882E01C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E090;
      }
      goto L_0882E024;
    }
L_0882E024:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882E044;
      }
      goto L_0882E02C;
    }
L_0882E02C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-2816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_0882E04C;
    }
    goto L_0882E040;
L_0882E040:
    ctx.gpr[4] = (0u | 0u);
    goto L_0882E044;
L_0882E044:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0882E080;
      }
      goto L_0882E04C;
    }
L_0882E04C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0882E06C;
    }
    goto L_0882E060;
L_0882E060:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0882E080;
      }
      goto L_0882E06C;
    }
L_0882E06C:
    ctx.gpr[5] = (ctx.gpr[17] << 5u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0882E080;
L_0882E080:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882E090u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4936));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 352u, 0x08A65998u>(ctx, &aot_mem) && ctx.pc == 0x0882E090u) goto L_0882E090;
    return;
L_0882E090:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0882E09Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 680u, 0x08AAF24Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E09Cu) goto L_0882E09C;
    return;
L_0882E09C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0882E0ACu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 610u, 0x08AAEE00u>(ctx, &aot_mem) && ctx.pc == 0x0882E0ACu) goto L_0882E0AC;
    return;
L_0882E0AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E0C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882E0E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 634u, 0x08AE2540u>(ctx, &aot_mem) && ctx.pc == 0x0882E0E0u) goto L_0882E0E0;
    return;
L_0882E0E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0882E144;
      }
      goto L_0882E10C;
    }
L_0882E10C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0882E118u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 634u, 0x08AE2540u>(ctx, &aot_mem) && ctx.pc == 0x0882E118u) goto L_0882E118;
    return;
L_0882E118:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882E10C;
      }
      goto L_0882E144;
    }
L_0882E144:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0882E1A8;
      }
      goto L_0882E170;
    }
L_0882E170:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0882E17Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 634u, 0x08AE2540u>(ctx, &aot_mem) && ctx.pc == 0x0882E17Cu) goto L_0882E17C;
    return;
L_0882E17C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882E170;
      }
      goto L_0882E1A8;
    }
L_0882E1A8:
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
L_0882E1C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882E1D4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0882F168;
L_0882E1D4:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E2D0;
      }
      goto L_0882E1E8;
    }
L_0882E1E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E2D0;
      }
      goto L_0882E1F4;
    }
L_0882E1F4:
    ctx.gpr[31] = (0x0882E1FCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0882E1FCu) goto L_0882E1FC;
    return;
L_0882E1FC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(34))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882E21C;
      }
      goto L_0882E20C;
    }
L_0882E20C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(84))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0882E220;
      }
      goto L_0882E218;
    }
L_0882E218:
    ctx.gpr[4] = (0u | 1u);
    goto L_0882E21C;
L_0882E21C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0882E220;
L_0882E220:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E268;
      }
      goto L_0882E228;
    }
L_0882E228:
    ctx.gpr[31] = (0x0882E230u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0882E230u) goto L_0882E230;
    return;
L_0882E230:
    ctx.gpr[31] = (0x0882E238u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 15u, 0x0898C078u>(ctx, &aot_mem) && ctx.pc == 0x0882E238u) goto L_0882E238;
    return;
L_0882E238:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4214)));
        goto L_0882E260;
    }
    goto L_0882E240;
L_0882E240:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4214)));
        goto L_0882E260;
    }
    goto L_0882E24C;
L_0882E24C:
    ctx.gpr[31] = (0x0882E254u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882E9B4;
L_0882E254:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E268;
      }
      goto L_0882E25C;
    }
L_0882E25C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4214)));
    goto L_0882E260;
L_0882E260:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E2D0;
      }
      goto L_0882E268;
    }
L_0882E268:
    ctx.gpr[31] = (0x0882E270u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882E9B4;
L_0882E270:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E2C0;
      }
      goto L_0882E278;
    }
L_0882E278:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882E284u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0882F210;
L_0882E284:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4214)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E2E8;
      }
      goto L_0882E290;
    }
L_0882E290:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4214), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0882E29Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882EA20;
L_0882E29C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882E2A8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0882DFD0;
L_0882E2A8:
    ctx.gpr[31] = (0x0882E2B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 297u, 0x08AB5428u>(ctx, &aot_mem) && ctx.pc == 0x0882E2B0u) goto L_0882E2B0;
    return;
L_0882E2B0:
    ctx.gpr[31] = (0x0882E2B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 807u, 0x08AB6E88u>(ctx, &aot_mem) && ctx.pc == 0x0882E2B8u) goto L_0882E2B8;
    return;
L_0882E2B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E2E8;
      }
      goto L_0882E2C0;
    }
L_0882E2C0:
    ctx.gpr[31] = (0x0882E2C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882DA4C;
L_0882E2C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E2E8;
      }
      goto L_0882E2D0;
    }
L_0882E2D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E2E8;
      }
      goto L_0882E2DC;
    }
L_0882E2DC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0882E2E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882DA4C;
L_0882E2E8:
    ctx.gpr[31] = (0x0882E2F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882E9B4;
L_0882E2F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E318;
      }
      goto L_0882E2F8;
    }
L_0882E2F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E318;
      }
      goto L_0882E304;
    }
L_0882E304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E320;
      }
      goto L_0882E310;
    }
L_0882E310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E328;
      }
      goto L_0882E318;
    }
L_0882E318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E460;
      }
      goto L_0882E320;
    }
L_0882E320:
    ctx.gpr[31] = (0x0882E328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E328u) goto L_0882E328;
    return;
L_0882E328:
    ctx.gpr[31] = (0x0882E330u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 237u, 0x08A54ED4u>(ctx, &aot_mem) && ctx.pc == 0x0882E330u) goto L_0882E330;
    return;
L_0882E330:
    ctx.gpr[31] = (0x0882E338u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882E9C4;
L_0882E338:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E3AC;
      }
      goto L_0882E340;
    }
L_0882E340:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(41)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E360;
      }
      goto L_0882E34C;
    }
L_0882E34C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882E358u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0882EE08;
L_0882E358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
      if (branch_taken) {
          goto L_0882E370;
      }
      goto L_0882E360;
    }
L_0882E360:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882E36Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_0882EE08;
L_0882E36C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    goto L_0882E370;
L_0882E370:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
        goto L_0882E388;
    }
    goto L_0882E378;
L_0882E378:
    ctx.gpr[31] = (0x0882E380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 656u, 0x08B66B84u>(ctx, &aot_mem) && ctx.pc == 0x0882E380u) goto L_0882E380;
    return;
L_0882E380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    goto L_0882E388;
L_0882E388:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E3AC;
      }
      goto L_0882E390;
    }
L_0882E390:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E3A4;
      }
      goto L_0882E398;
    }
L_0882E398:
    ctx.gpr[31] = (0x0882E3A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 656u, 0x08B66B84u>(ctx, &aot_mem) && ctx.pc == 0x0882E3A0u) goto L_0882E3A0;
    return;
L_0882E3A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    goto L_0882E3A4;
L_0882E3A4:
    ctx.gpr[31] = (0x0882E3ACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 839u, 0x088739ECu>(ctx, &aot_mem) && ctx.pc == 0x0882E3ACu) goto L_0882E3AC;
    return;
L_0882E3AC:
    ctx.gpr[31] = (0x0882E3B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 552u, 0x08AE1E48u>(ctx, &aot_mem) && ctx.pc == 0x0882E3B4u) goto L_0882E3B4;
    return;
L_0882E3B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0882E43C;
      }
      goto L_0882E3DC;
    }
L_0882E3DC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0882E43C;
      }
      goto L_0882E3E8;
    }
L_0882E3E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_0882E43C;
      }
      goto L_0882E410;
    }
L_0882E410:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E43C;
      }
      goto L_0882E420;
    }
L_0882E420:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E43C;
      }
      goto L_0882E434;
    }
L_0882E434:
    ctx.gpr[31] = (0x0882E43Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 552u, 0x08AE1E48u>(ctx, &aot_mem) && ctx.pc == 0x0882E43Cu) goto L_0882E43C;
    return;
L_0882E43C:
    ctx.gpr[31] = (0x0882E444u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882E9B4;
L_0882E444:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E460;
      }
      goto L_0882E44C;
    }
L_0882E44C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E460;
      }
      goto L_0882E458;
    }
L_0882E458:
    ctx.gpr[31] = (0x0882E460u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882E470;
L_0882E460:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E470:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_0882E494;
    }
    goto L_0882E484;
L_0882E484:
    ctx.gpr[31] = (0x0882E48Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 592u, 0x08AE2228u>(ctx, &aot_mem) && ctx.pc == 0x0882E48Cu) goto L_0882E48C;
    return;
L_0882E48C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E50C;
      }
      goto L_0882E494;
    }
L_0882E494:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0882E50C;
      }
      goto L_0882E4B8;
    }
L_0882E4B8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0882E50C;
      }
      goto L_0882E4C4;
    }
L_0882E4C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_0882E50C;
      }
      goto L_0882E4EC;
    }
L_0882E4EC:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E50C;
      }
      goto L_0882E4FC;
    }
L_0882E4FC:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0882E50Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 592u, 0x08AE2228u>(ctx, &aot_mem) && ctx.pc == 0x0882E50Cu) goto L_0882E50C;
    return;
L_0882E50C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E518:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882E52Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0882E9B4;
L_0882E52C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E550;
      }
      goto L_0882E534;
    }
L_0882E534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882E558;
      }
      goto L_0882E540;
    }
L_0882E540:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0882E660;
      }
      goto L_0882E548;
    }
L_0882E548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E570;
      }
      goto L_0882E550;
    }
L_0882E550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E660;
      }
      goto L_0882E558;
    }
L_0882E558:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882E638;
      }
      goto L_0882E560;
    }
L_0882E560:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E660;
      }
      goto L_0882E568;
    }
L_0882E568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E660;
      }
      goto L_0882E570;
    }
L_0882E570:
    ctx.gpr[31] = (0x0882E578u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 576u, 0x08AE20C8u>(ctx, &aot_mem) && ctx.pc == 0x0882E578u) goto L_0882E578;
    return;
L_0882E578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_0882E5D8;
    }
    goto L_0882E5A0;
L_0882E5A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(29))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0882E5D4;
      }
      goto L_0882E5AC;
    }
L_0882E5AC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_0882E5D4;
      }
      goto L_0882E5B4;
    }
L_0882E5B4:
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_0882E5D8;
    }
    goto L_0882E5C4;
L_0882E5C4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0882E5D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 576u, 0x08AE20C8u>(ctx, &aot_mem) && ctx.pc == 0x0882E5D4u) goto L_0882E5D4;
    return;
L_0882E5D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0882E5D8;
L_0882E5D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0882E630;
      }
      goto L_0882E5FC;
    }
L_0882E5FC:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_0882E630;
      }
      goto L_0882E608;
    }
L_0882E608:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
      if (branch_taken) {
          goto L_0882E630;
      }
      goto L_0882E610;
    }
L_0882E610:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E630;
      }
      goto L_0882E620;
    }
L_0882E620:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0882E630u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 576u, 0x08AE20C8u>(ctx, &aot_mem) && ctx.pc == 0x0882E630u) goto L_0882E630;
    return;
L_0882E630:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E660;
      }
      goto L_0882E638;
    }
L_0882E638:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29552));
    ctx.gpr[31] = (0x0882E658u);
    ctx.gpr[8] = (65280u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 525u, 0x088DFE80u>(ctx, &aot_mem) && ctx.pc == 0x0882E658u) goto L_0882E658;
    return;
L_0882E658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E660;
      }
      goto L_0882E660;
    }
L_0882E660:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E670:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0882E6EC;
      }
      goto L_0882E6B4;
    }
L_0882E6B4:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0882E6C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 568u, 0x08AE1F78u>(ctx, &aot_mem) && ctx.pc == 0x0882E6C0u) goto L_0882E6C0;
    return;
L_0882E6C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882E6B4;
      }
      goto L_0882E6EC;
    }
L_0882E6EC:
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
L_0882E704:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882E71Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0882E71Cu) goto L_0882E71C;
    return;
L_0882E71C:
    ctx.gpr[31] = (0x0882E724u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 584u, 0x0898D9A8u>(ctx, &aot_mem) && ctx.pc == 0x0882E724u) goto L_0882E724;
    return;
L_0882E724:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E744;
      }
      goto L_0882E72C;
    }
L_0882E72C:
    ctx.gpr[31] = (0x0882E734u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0882E734u) goto L_0882E734;
    return;
L_0882E734:
    ctx.gpr[31] = (0x0882E73Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 998u, 0x0898BD24u>(ctx, &aot_mem) && ctx.pc == 0x0882E73Cu) goto L_0882E73C;
    return;
L_0882E73C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E758;
      }
      goto L_0882E744;
    }
L_0882E744:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    goto L_0882E750;
L_0882E750:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E870;
      }
      goto L_0882E758;
    }
L_0882E758:
    ctx.gpr[31] = (0x0882E760u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0882E760u) goto L_0882E760;
    return;
L_0882E760:
    ctx.gpr[31] = (0x0882E768u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 577u, 0x0898D950u>(ctx, &aot_mem) && ctx.pc == 0x0882E768u) goto L_0882E768;
    return;
L_0882E768:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E788;
      }
      goto L_0882E770;
    }
L_0882E770:
    ctx.gpr[31] = (0x0882E778u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0882E778u) goto L_0882E778;
    return;
L_0882E778:
    ctx.gpr[31] = (0x0882E780u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 988u, 0x0898BCCCu>(ctx, &aot_mem) && ctx.pc == 0x0882E780u) goto L_0882E780;
    return;
L_0882E780:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E798;
      }
      goto L_0882E788;
    }
L_0882E788:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0882E750;
      }
      goto L_0882E798;
    }
L_0882E798:
    ctx.gpr[31] = (0x0882E7A0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0882E7A0u) goto L_0882E7A0;
    return;
L_0882E7A0:
    ctx.gpr[31] = (0x0882E7A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 591u, 0x0898DA00u>(ctx, &aot_mem) && ctx.pc == 0x0882E7A8u) goto L_0882E7A8;
    return;
L_0882E7A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E7C8;
      }
      goto L_0882E7B0;
    }
L_0882E7B0:
    ctx.gpr[31] = (0x0882E7B8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0882E7B8u) goto L_0882E7B8;
    return;
L_0882E7B8:
    ctx.gpr[31] = (0x0882E7C0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 1008u, 0x0898BD7Cu>(ctx, &aot_mem) && ctx.pc == 0x0882E7C0u) goto L_0882E7C0;
    return;
L_0882E7C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E7D4;
      }
      goto L_0882E7C8;
    }
L_0882E7C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0882E750;
      }
      goto L_0882E7D4;
    }
L_0882E7D4:
    ctx.gpr[31] = (0x0882E7DCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0882E7DCu) goto L_0882E7DC;
    return;
L_0882E7DC:
    ctx.gpr[31] = (0x0882E7E4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 598u, 0x0898DA58u>(ctx, &aot_mem) && ctx.pc == 0x0882E7E4u) goto L_0882E7E4;
    return;
L_0882E7E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882E804;
      }
      goto L_0882E7EC;
    }
L_0882E7EC:
    ctx.gpr[31] = (0x0882E7F4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0882E7F4u) goto L_0882E7F4;
    return;
L_0882E7F4:
    ctx.gpr[31] = (0x0882E7FCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 1018u, 0x0898BDD4u>(ctx, &aot_mem) && ctx.pc == 0x0882E7FCu) goto L_0882E7FC;
    return;
L_0882E7FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E814;
      }
      goto L_0882E804;
    }
L_0882E804:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0882E750;
      }
      goto L_0882E814;
    }
L_0882E814:
    ctx.gpr[31] = (0x0882E81Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0882E81Cu) goto L_0882E81C;
    return;
L_0882E81C:
    ctx.gpr[31] = (0x0882E824u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 15u, 0x0898C078u>(ctx, &aot_mem) && ctx.pc == 0x0882E824u) goto L_0882E824;
    return;
L_0882E824:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E83C;
      }
      goto L_0882E82C;
    }
L_0882E82C:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0882E750;
      }
      goto L_0882E83C;
    }
L_0882E83C:
    ctx.gpr[31] = (0x0882E844u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0882E844u) goto L_0882E844;
    return;
L_0882E844:
    ctx.gpr[31] = (0x0882E84Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 11u, 0x0898C054u>(ctx, &aot_mem) && ctx.pc == 0x0882E84Cu) goto L_0882E84C;
    return;
L_0882E84C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E864;
      }
      goto L_0882E854;
    }
L_0882E854:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0882E750;
      }
      goto L_0882E864;
    }
L_0882E864:
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    goto L_0882E870;
L_0882E870:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E880:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30072));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0882E8B4;
      }
      goto L_0882E8AC;
    }
L_0882E8AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0882E930;
      }
      goto L_0882E8B4;
    }
L_0882E8B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0882E92C;
      }
      goto L_0882E8E0;
    }
L_0882E8E0:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[19]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882E8F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem) && ctx.pc == 0x0882E8F4u) goto L_0882E8F4;
    return;
L_0882E8F4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_0882E904;
    }
    goto L_0882E8FC;
L_0882E8FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0882E930;
      }
      goto L_0882E904;
    }
L_0882E904:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882E8E0;
      }
      goto L_0882E92C;
    }
L_0882E92C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0882E930;
L_0882E930:
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
L_0882E950:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882E964;
      }
      goto L_0882E95C;
    }
L_0882E95C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0882E978;
      }
      goto L_0882E964;
    }
L_0882E964:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0882E978;
L_0882E978:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E980:
    ctx.gpr[5] = (0u | 1u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E98C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E994:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E99C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E9A4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(41)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E9AC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E9B4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E9BC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E9C4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E9CC:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E9D8:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882E9E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(42)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882EA04;
      }
      goto L_0882E9F8;
    }
L_0882E9F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882EA04u);
    ctx.gpr[5] = (0u | 2u);
    goto L_0882E9D8;
L_0882EA04:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882EA18:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882EA20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882EA38u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0882EA18;
L_0882EA38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882EA44u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0882E9D8;
L_0882EA44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882EA54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882EB60;
      }
      goto L_0882EA74;
    }
L_0882EA74:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882EA90;
      }
      goto L_0882EA80;
    }
L_0882EA80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0882EB60;
      }
      goto L_0882EA88;
    }
L_0882EA88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EB60;
      }
      goto L_0882EA90;
    }
L_0882EA90:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882EB54;
      }
      goto L_0882EA98;
    }
L_0882EA98:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EB60;
      }
      goto L_0882EAA0;
    }
L_0882EAA0:
    ctx.gpr[31] = (0x0882EAA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0882DEF4;
L_0882EAA8:
    ctx.gpr[31] = (0x0882EAB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0882E0C0;
L_0882EAB0:
    ctx.gpr[31] = (0x0882EAB8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0882E950;
L_0882EAB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0882EAC4u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30064));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x0882EAC4u) goto L_0882EAC4;
    return;
L_0882EAC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30052));
      if (branch_taken) {
          goto L_0882EAE8;
      }
      goto L_0882EACC;
    }
L_0882EACC:
    ctx.gpr[31] = (0x0882EAD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0882E950;
L_0882EAD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0882EAE0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x0882EAE0u) goto L_0882EAE0;
    return;
L_0882EAE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882EB4C;
      }
      goto L_0882EAE8;
    }
L_0882EAE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_0882EB10;
      }
      goto L_0882EAFC;
    }
L_0882EAFC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[18]);
    ctx.gpr[31] = (0x0882EB08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0882D794;
L_0882EB08:
    ctx.gpr[31] = (0x0882EB10u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30272));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x0882EB10u) goto L_0882EB10;
    return;
L_0882EB10:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0882EB20u);
    ctx.gpr[6] = (0u | 0u);
    goto L_0882FCA0;
L_0882EB20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882EB44;
      }
      goto L_0882EB2C;
    }
L_0882EB2C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[18]);
    ctx.gpr[31] = (0x0882EB38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0882D794;
L_0882EB38:
    ctx.gpr[31] = (0x0882EB40u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30272));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x0882EB40u) goto L_0882EB40;
    return;
L_0882EB40:
    ctx.gpr[4] = (0u | 0u);
    goto L_0882EB44;
L_0882EB44:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    goto L_0882EB4C;
L_0882EB4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EB60;
      }
      goto L_0882EB54;
    }
L_0882EB54:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882EB60u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0882DFD0;
L_0882EB60:
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
L_0882EB78:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882EB80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[8] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882EBD8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18164));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882EBD8u) goto L_0882EBD8;
    return;
L_0882EBD8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0882EBE4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 603u, 0x08AE22DCu>(ctx, &aot_mem) && ctx.pc == 0x0882EBE4u) goto L_0882EBE4;
    return;
L_0882EBE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0882EBF8;
      }
      goto L_0882EBF0;
    }
L_0882EBF0:
    ctx.gpr[31] = (0x0882EBF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882EBF8u) goto L_0882EBF8;
    return;
L_0882EBF8:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EC9C;
      }
      goto L_0882EC04;
    }
L_0882EC04:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882EC40;
      }
      goto L_0882EC0C;
    }
L_0882EC0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x0882EC20u);
    ctx.gpr[22] = (ctx.gpr[19] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem) && ctx.pc == 0x0882EC20u) goto L_0882EC20;
    return;
L_0882EC20:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882EC30u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882EC30u) goto L_0882EC30;
    return;
L_0882EC30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882EC40;
      }
      goto L_0882EC38;
    }
L_0882EC38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0882EC40;
      }
      goto L_0882EC40;
    }
L_0882EC40:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EC9C;
      }
      goto L_0882EC48;
    }
L_0882EC48:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EC7C;
      }
      goto L_0882EC50;
    }
L_0882EC50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x0882EC64u);
    ctx.gpr[21] = (ctx.gpr[19] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem) && ctx.pc == 0x0882EC64u) goto L_0882EC64;
    return;
L_0882EC64:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882EC74u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882EC74u) goto L_0882EC74;
    return;
L_0882EC74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882EC84;
      }
      goto L_0882EC7C;
    }
L_0882EC7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0882EC84;
      }
      goto L_0882EC84;
    }
L_0882EC84:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882EC9Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 520u, 0x08AC5DF8u>(ctx, &aot_mem) && ctx.pc == 0x0882EC9Cu) goto L_0882EC9C;
    return;
L_0882EC9C:
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
L_0882ECC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[8] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882ED1Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18164));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882ED1Cu) goto L_0882ED1C;
    return;
L_0882ED1C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0882ED28u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 603u, 0x08AE22DCu>(ctx, &aot_mem) && ctx.pc == 0x0882ED28u) goto L_0882ED28;
    return;
L_0882ED28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0882ED3C;
      }
      goto L_0882ED34;
    }
L_0882ED34:
    ctx.gpr[31] = (0x0882ED3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882ED3Cu) goto L_0882ED3C;
    return;
L_0882ED3C:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EDE0;
      }
      goto L_0882ED48;
    }
L_0882ED48:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882ED84;
      }
      goto L_0882ED50;
    }
L_0882ED50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x0882ED64u);
    ctx.gpr[22] = (ctx.gpr[19] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem) && ctx.pc == 0x0882ED64u) goto L_0882ED64;
    return;
L_0882ED64:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882ED74u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882ED74u) goto L_0882ED74;
    return;
L_0882ED74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882ED84;
      }
      goto L_0882ED7C;
    }
L_0882ED7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0882ED84;
      }
      goto L_0882ED84;
    }
L_0882ED84:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EDE0;
      }
      goto L_0882ED8C;
    }
L_0882ED8C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882EDC0;
      }
      goto L_0882ED94;
    }
L_0882ED94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x0882EDA8u);
    ctx.gpr[21] = (ctx.gpr[19] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem) && ctx.pc == 0x0882EDA8u) goto L_0882EDA8;
    return;
L_0882EDA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882EDB8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882EDB8u) goto L_0882EDB8;
    return;
L_0882EDB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882EDC8;
      }
      goto L_0882EDC0;
    }
L_0882EDC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0882EDC8;
      }
      goto L_0882EDC8;
    }
L_0882EDC8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882EDE0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 520u, 0x08AC5DF8u>(ctx, &aot_mem) && ctx.pc == 0x0882EDE0u) goto L_0882EDE0;
    return;
L_0882EDE0:
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
L_0882EE08:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882EE10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882EE44u);
    ctx.gpr[4] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0882EE44u) goto L_0882EE44;
    return;
L_0882EE44:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_0882EE60;
      }
      goto L_0882EE50;
    }
L_0882EE50:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0882EE5Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 506u, 0x08AE1B78u>(ctx, &aot_mem) && ctx.pc == 0x0882EE5Cu) goto L_0882EE5C;
    return;
L_0882EE5C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0882EE60;
L_0882EE60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882EE8C;
      }
      goto L_0882EE70;
    }
L_0882EE70:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882EE84;
      }
      goto L_0882EE78;
    }
L_0882EE78:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_0882EE84;
L_0882EE84:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882EF94;
      }
      goto L_0882EE8C;
    }
L_0882EE8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0882EEC8;
      }
      goto L_0882EEB8;
    }
L_0882EEB8:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0882EED4;
      }
      goto L_0882EEC8;
    }
L_0882EEC8:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
    goto L_0882EED4;
L_0882EED4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0882EF14;
      }
      goto L_0882EEDC;
    }
L_0882EEDC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[31] = (0x0882EEF0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x0882EEF0u) goto L_0882EEF0;
    return;
L_0882EEF0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0882EF14;
      }
      goto L_0882EF00;
    }
L_0882EF00:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x0882EF0Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x0882EF0Cu) goto L_0882EF0C;
    return;
L_0882EF0C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_0882EF14;
L_0882EF14:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0882EF28;
      }
      goto L_0882EF20;
    }
L_0882EF20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0882EF44;
      }
      goto L_0882EF28;
    }
L_0882EF28:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0882EF3Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x0882EF3Cu) goto L_0882EF3C;
    return;
L_0882EF3C:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_0882EF44;
L_0882EF44:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_0882EF6C;
    }
    goto L_0882EF58;
L_0882EF58:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882EF58;
      }
      goto L_0882EF68;
    }
L_0882EF68:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_0882EF6C;
L_0882EF6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0882EF80;
      }
      goto L_0882EF78;
    }
L_0882EF78:
    ctx.gpr[31] = (0x0882EF80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882EF80u) goto L_0882EF80;
    return;
L_0882EF80:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_0882EF94;
L_0882EF94:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_0882EFBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882EFF0u);
    ctx.gpr[4] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0882EFF0u) goto L_0882EFF0;
    return;
L_0882EFF0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_0882F00C;
      }
      goto L_0882EFFC;
    }
L_0882EFFC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0882F008u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 506u, 0x08AE1B78u>(ctx, &aot_mem) && ctx.pc == 0x0882F008u) goto L_0882F008;
    return;
L_0882F008:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0882F00C;
L_0882F00C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882F038;
      }
      goto L_0882F01C;
    }
L_0882F01C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882F030;
      }
      goto L_0882F024;
    }
L_0882F024:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_0882F030;
L_0882F030:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882F140;
      }
      goto L_0882F038;
    }
L_0882F038:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0882F074;
      }
      goto L_0882F064;
    }
L_0882F064:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0882F080;
      }
      goto L_0882F074;
    }
L_0882F074:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
    goto L_0882F080;
L_0882F080:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0882F0C0;
      }
      goto L_0882F088;
    }
L_0882F088:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[31] = (0x0882F09Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x0882F09Cu) goto L_0882F09C;
    return;
L_0882F09C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0882F0C0;
      }
      goto L_0882F0AC;
    }
L_0882F0AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x0882F0B8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x0882F0B8u) goto L_0882F0B8;
    return;
L_0882F0B8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_0882F0C0;
L_0882F0C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0882F0D4;
      }
      goto L_0882F0CC;
    }
L_0882F0CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0882F0F0;
      }
      goto L_0882F0D4;
    }
L_0882F0D4:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0882F0E8u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x0882F0E8u) goto L_0882F0E8;
    return;
L_0882F0E8:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_0882F0F0;
L_0882F0F0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_0882F118;
    }
    goto L_0882F104;
L_0882F104:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882F104;
      }
      goto L_0882F114;
    }
L_0882F114:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_0882F118;
L_0882F118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0882F12C;
      }
      goto L_0882F124;
    }
L_0882F124:
    ctx.gpr[31] = (0x0882F12Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882F12Cu) goto L_0882F12C;
    return;
L_0882F12C:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_0882F140;
L_0882F140:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_0882F168:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(42)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882F1D4;
      }
      goto L_0882F180;
    }
L_0882F180:
    ctx.gpr[31] = (0x0882F188u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882E9B4;
L_0882F188:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F1D4;
      }
      goto L_0882F190;
    }
L_0882F190:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(43)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F1BC;
      }
      goto L_0882F19C;
    }
L_0882F19C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882F1A8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0882DFD0;
L_0882F1A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882F1B4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0882E9D8;
L_0882F1B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F1D4;
      }
      goto L_0882F1BC;
    }
L_0882F1BC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882F1CCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_0882DFD0;
L_0882F1CC:
    ctx.gpr[31] = (0x0882F1D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882DC20;
L_0882F1D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F200;
      }
      goto L_0882F1E0;
    }
L_0882F1E0:
    ctx.gpr[31] = (0x0882F1E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882E9B4;
L_0882F1E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F1FC;
      }
      goto L_0882F1F0;
    }
L_0882F1F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882F1FCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_0882F210;
L_0882F1FC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_0882F200;
L_0882F200:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F210:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1008));
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882F24Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 7u, 0x08888058u>(ctx, &aot_mem) && ctx.pc == 0x0882F24Cu) goto L_0882F24C;
    return;
L_0882F24C:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(141)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F268;
      }
      goto L_0882F260;
    }
L_0882F260:
    ctx.gpr[31] = (0x0882F268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 881u, 0x08ADB9DCu>(ctx, &aot_mem) && ctx.pc == 0x0882F268u) goto L_0882F268;
    return;
L_0882F268:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(41)));
      if (branch_taken) {
          goto L_0882F288;
      }
      goto L_0882F274;
    }
L_0882F274:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F288;
      }
      goto L_0882F27C;
    }
L_0882F27C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F28C;
      }
      goto L_0882F288;
    }
L_0882F288:
    ctx.gpr[19] = (0u | 0u);
    goto L_0882F28C;
L_0882F28C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F2A4;
      }
      goto L_0882F294;
    }
L_0882F294:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F2A4;
      }
      goto L_0882F2A0;
    }
L_0882F2A0:
    ctx.gpr[19] = (0u | 1u);
    goto L_0882F2A4;
L_0882F2A4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F2E8;
      }
      goto L_0882F2AC;
    }
L_0882F2AC:
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882F2C0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0882EA18;
L_0882F2C0:
    ctx.gpr[31] = (0x0882F2C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 540u, 0x08AD3204u>(ctx, &aot_mem) && ctx.pc == 0x0882F2C8u) goto L_0882F2C8;
    return;
L_0882F2C8:
    ctx.gpr[31] = (0x0882F2D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 171u, 0x08A11550u>(ctx, &aot_mem) && ctx.pc == 0x0882F2D0u) goto L_0882F2D0;
    return;
L_0882F2D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[20] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_0882F2F0;
      }
      goto L_0882F2E0;
    }
L_0882F2E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0882F30C;
      }
      goto L_0882F2E8;
    }
L_0882F2E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F6C4;
      }
      goto L_0882F2F0;
    }
L_0882F2F0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x0882F300u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0882D794;
L_0882F300:
    ctx.gpr[31] = (0x0882F308u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30272));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x0882F308u) goto L_0882F308;
    return;
L_0882F308:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0882F30C;
L_0882F30C:
    ctx.gpr[31] = (0x0882F314u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0882E9D8;
L_0882F314:
    ctx.gpr[31] = (0x0882F31Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 704u, 0x08A06D3Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F31Cu) goto L_0882F31C;
    return;
L_0882F31C:
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(29552));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x0882F340u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 525u, 0x088DFE80u>(ctx, &aot_mem) && ctx.pc == 0x0882F340u) goto L_0882F340;
    return;
L_0882F340:
    ctx.gpr[31] = (0x0882F348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 723u, 0x08A06FE0u>(ctx, &aot_mem) && ctx.pc == 0x0882F348u) goto L_0882F348;
    return;
L_0882F348:
    ctx.gpr[31] = (0x0882F350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 704u, 0x08A06D3Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F350u) goto L_0882F350;
    return;
L_0882F350:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x0882F36Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 525u, 0x088DFE80u>(ctx, &aot_mem) && ctx.pc == 0x0882F36Cu) goto L_0882F36C;
    return;
L_0882F36C:
    ctx.gpr[31] = (0x0882F374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 723u, 0x08A06FE0u>(ctx, &aot_mem) && ctx.pc == 0x0882F374u) goto L_0882F374;
    return;
L_0882F374:
    ctx.gpr[31] = (0x0882F37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 691u, 0x08A06CBCu>(ctx, &aot_mem) && ctx.pc == 0x0882F37Cu) goto L_0882F37C;
    return;
L_0882F37C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 480u);
    ctx.gpr[7] = (0u | 272u);
    ctx.gpr[31] = (0x0882F394u);
    ctx.gpr[8] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 664u, 0x08A069DCu>(ctx, &aot_mem) && ctx.pc == 0x0882F394u) goto L_0882F394;
    return;
L_0882F394:
    ctx.gpr[31] = (0x0882F39Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 704u, 0x08A06D3Cu>(ctx, &aot_mem) && ctx.pc == 0x0882F39Cu) goto L_0882F39C;
    return;
L_0882F39C:
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16896u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (49928u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (17152u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (17664u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17664u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[7] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (17920u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (19456u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28928));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (19712u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30592));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[7] = (54272u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[6] & 1023u);
    ctx.gpr[6] = (ctx.gpr[6] << 10u);
    ctx.gpr[7] = (54528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] & 1023u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[7] = (5376u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[6] << 10u);
    ctx.gpr[7] = (5632u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x0882F4F4u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 723u, 0x08A06FE0u>(ctx, &aot_mem) && ctx.pc == 0x0882F4F4u) goto L_0882F4F4;
    return;
L_0882F4F4:
    ctx.gpr[31] = (0x0882F4FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882E670;
L_0882F4FC:
    ctx.gpr[31] = (0x0882F504u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882DEF4;
L_0882F504:
    ctx.gpr[31] = (0x0882F50Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882E0C0;
L_0882F50C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F5B8;
      }
      goto L_0882F514;
    }
L_0882F514:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1399)));
    ctx.gpr[5] = (0u | 110u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1398)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0882F538;
      }
      goto L_0882F530;
    }
L_0882F530:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0882F538;
L_0882F538:
    ctx.gpr[31] = (0x0882F540u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 2u, 0x08888008u>(ctx, &aot_mem) && ctx.pc == 0x0882F540u) goto L_0882F540;
    return;
L_0882F540:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F558;
      }
      goto L_0882F54C;
    }
L_0882F54C:
    ctx.gpr[31] = (0x0882F554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0882F554u) goto L_0882F554;
    return;
L_0882F554:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0882F558;
L_0882F558:
    ctx.gpr[31] = (0x0882F560u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem) && ctx.pc == 0x0882F560u) goto L_0882F560;
    return;
L_0882F560:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0882F5B8;
      }
      goto L_0882F56C;
    }
L_0882F56C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F584;
      }
      goto L_0882F578;
    }
L_0882F578:
    ctx.gpr[31] = (0x0882F580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0882F580u) goto L_0882F580;
    return;
L_0882F580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0882F584;
L_0882F584:
    ctx.gpr[31] = (0x0882F58Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 712u, 0x089C70C8u>(ctx, &aot_mem) && ctx.pc == 0x0882F58Cu) goto L_0882F58C;
    return;
L_0882F58C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882F5B8;
      }
      goto L_0882F598;
    }
L_0882F598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F5B0;
      }
      goto L_0882F5A4;
    }
L_0882F5A4:
    ctx.gpr[31] = (0x0882F5ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x0882F5ACu) goto L_0882F5AC;
    return;
L_0882F5AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_0882F5B0;
L_0882F5B0:
    ctx.gpr[31] = (0x0882F5B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 680u, 0x089C6F68u>(ctx, &aot_mem) && ctx.pc == 0x0882F5B8u) goto L_0882F5B8;
    return;
L_0882F5B8:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 170u);
    ctx.gpr[31] = (0x0882F5CCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x0882F5CCu) goto L_0882F5CC;
    return;
L_0882F5CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882F5D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem) && ctx.pc == 0x0882F5D8u) goto L_0882F5D8;
    return;
L_0882F5D8:
    ctx.gpr[31] = (0x0882F5E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 495u, 0x08A05EFCu>(ctx, &aot_mem) && ctx.pc == 0x0882F5E0u) goto L_0882F5E0;
    return;
L_0882F5E0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7702)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[31] = (0x0882F5F4u);
    ctx.gpr[5] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 556u, 0x0880A6ECu>(ctx, &aot_mem) && ctx.pc == 0x0882F5F4u) goto L_0882F5F4;
    return;
L_0882F5F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F608;
      }
      goto L_0882F600;
    }
L_0882F600:
    ctx.gpr[31] = (0x0882F608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x0882F608u) goto L_0882F608;
    return;
L_0882F608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6851), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F6A4;
      }
      goto L_0882F620;
    }
L_0882F620:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0882F62Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882F6E8;
L_0882F62C:
    ctx.gpr[31] = (0x0882F634u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882E98C;
L_0882F634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x0882F640u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30064));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x0882F640u) goto L_0882F640;
    return;
L_0882F640:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F65C;
      }
      goto L_0882F648;
    }
L_0882F648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x0882F654u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30052));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x0882F654u) goto L_0882F654;
    return;
L_0882F654:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F69C;
      }
      goto L_0882F65C;
    }
L_0882F65C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882F668u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0882EE08;
L_0882F668:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30028));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x0882F67Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882F67Cu) goto L_0882F67C;
    return;
L_0882F67C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882F688u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 641u, 0x08AE2634u>(ctx, &aot_mem) && ctx.pc == 0x0882F688u) goto L_0882F688;
    return;
L_0882F688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F69C;
      }
      goto L_0882F694;
    }
L_0882F694:
    ctx.gpr[31] = (0x0882F69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882F69Cu) goto L_0882F69C;
    return;
L_0882F69C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
      if (branch_taken) {
          goto L_0882F6C0;
      }
      goto L_0882F6A4;
    }
L_0882F6A4:
    ctx.gpr[31] = (0x0882F6ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 638u, 0x08AE25E8u>(ctx, &aot_mem) && ctx.pc == 0x0882F6ACu) goto L_0882F6AC;
    return;
L_0882F6AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882F6B8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0882EE08;
L_0882F6B8:
    ctx.gpr[31] = (0x0882F6C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882E980;
L_0882F6C0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_0882F6C4;
L_0882F6C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882F6E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30012));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0882F730;
      }
      goto L_0882F710;
    }
L_0882F710:
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882F720u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18184));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x0882F720u) goto L_0882F720;
    return;
L_0882F720:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F73C;
      }
      goto L_0882F728;
    }
L_0882F728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F89C;
      }
      goto L_0882F730;
    }
L_0882F730:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0882FC84;
      }
      goto L_0882F73C;
    }
L_0882F73C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882F748u);
    ctx.gpr[5] = (0u | 5u);
    goto L_0882EB78;
L_0882F748:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30008));
    ctx.gpr[31] = (0x0882F754u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882F6E8;
L_0882F754:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0882F77Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18164));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882F77Cu) goto L_0882F77C;
    return;
L_0882F77C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882F788u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 603u, 0x08AE22DCu>(ctx, &aot_mem) && ctx.pc == 0x0882F788u) goto L_0882F788;
    return;
L_0882F788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0882F79C;
      }
      goto L_0882F794;
    }
L_0882F794:
    ctx.gpr[31] = (0x0882F79Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882F79Cu) goto L_0882F79C;
    return;
L_0882F79C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F894;
      }
      goto L_0882F7A4;
    }
L_0882F7A4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882F7E0;
      }
      goto L_0882F7AC;
    }
L_0882F7AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x0882F7C0u);
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem) && ctx.pc == 0x0882F7C0u) goto L_0882F7C0;
    return;
L_0882F7C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882F7D0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882F7D0u) goto L_0882F7D0;
    return;
L_0882F7D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882F7E0;
      }
      goto L_0882F7D8;
    }
L_0882F7D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0882F7E0;
      }
      goto L_0882F7E0;
    }
L_0882F7E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F894;
      }
      goto L_0882F7E8;
    }
L_0882F7E8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F81C;
      }
      goto L_0882F7F0;
    }
L_0882F7F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x0882F804u);
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem) && ctx.pc == 0x0882F804u) goto L_0882F804;
    return;
L_0882F804:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882F814u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882F814u) goto L_0882F814;
    return;
L_0882F814:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F824;
      }
      goto L_0882F81C;
    }
L_0882F81C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0882F824;
      }
      goto L_0882F824;
    }
L_0882F824:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882F830u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 554u, 0x08AC6068u>(ctx, &aot_mem) && ctx.pc == 0x0882F830u) goto L_0882F830;
    return;
L_0882F830:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30012));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x0882F844u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882F844u) goto L_0882F844;
    return;
L_0882F844:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x0882F858u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882F858u) goto L_0882F858;
    return;
L_0882F858:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0882F86Cu);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_0882EB80;
L_0882F86C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_0882F884;
    }
    goto L_0882F878;
L_0882F878:
    ctx.gpr[31] = (0x0882F880u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882F880u) goto L_0882F880;
    return;
L_0882F880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0882F884;
L_0882F884:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F894;
      }
      goto L_0882F88C;
    }
L_0882F88C:
    ctx.gpr[31] = (0x0882F894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882F894u) goto L_0882F894;
    return;
L_0882F894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FC84;
      }
      goto L_0882F89C;
    }
L_0882F89C:
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882F8ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18204));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x0882F8ACu) goto L_0882F8AC;
    return;
L_0882F8AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882FA14;
      }
      goto L_0882F8B4;
    }
L_0882F8B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882F8C0u);
    ctx.gpr[5] = (0u | 6u);
    goto L_0882EB78;
L_0882F8C0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30008));
    ctx.gpr[31] = (0x0882F8CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882F6E8;
L_0882F8CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x0882F8F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18164));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882F8F4u) goto L_0882F8F4;
    return;
L_0882F8F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882F900u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 603u, 0x08AE22DCu>(ctx, &aot_mem) && ctx.pc == 0x0882F900u) goto L_0882F900;
    return;
L_0882F900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0882F914;
      }
      goto L_0882F90C;
    }
L_0882F90C:
    ctx.gpr[31] = (0x0882F914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882F914u) goto L_0882F914;
    return;
L_0882F914:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FA0C;
      }
      goto L_0882F91C;
    }
L_0882F91C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882F958;
      }
      goto L_0882F924;
    }
L_0882F924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x0882F938u);
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem) && ctx.pc == 0x0882F938u) goto L_0882F938;
    return;
L_0882F938:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882F948u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882F948u) goto L_0882F948;
    return;
L_0882F948:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882F958;
      }
      goto L_0882F950;
    }
L_0882F950:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0882F958;
      }
      goto L_0882F958;
    }
L_0882F958:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FA0C;
      }
      goto L_0882F960;
    }
L_0882F960:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882F994;
      }
      goto L_0882F968;
    }
L_0882F968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x0882F97Cu);
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem) && ctx.pc == 0x0882F97Cu) goto L_0882F97C;
    return;
L_0882F97C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882F98Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882F98Cu) goto L_0882F98C;
    return;
L_0882F98C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882F99C;
      }
      goto L_0882F994;
    }
L_0882F994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0882F99C;
      }
      goto L_0882F99C;
    }
L_0882F99C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882F9A8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 554u, 0x08AC6068u>(ctx, &aot_mem) && ctx.pc == 0x0882F9A8u) goto L_0882F9A8;
    return;
L_0882F9A8:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30012));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[31] = (0x0882F9BCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882F9BCu) goto L_0882F9BC;
    return;
L_0882F9BC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[31] = (0x0882F9D0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882F9D0u) goto L_0882F9D0;
    return;
L_0882F9D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0882F9E4u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_0882EB80;
L_0882F9E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_0882F9FC;
    }
    goto L_0882F9F0;
L_0882F9F0:
    ctx.gpr[31] = (0x0882F9F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882F9F8u) goto L_0882F9F8;
    return;
L_0882F9F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_0882F9FC;
L_0882F9FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FA0C;
      }
      goto L_0882FA04;
    }
L_0882FA04:
    ctx.gpr[31] = (0x0882FA0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882FA0Cu) goto L_0882FA0C;
    return;
L_0882FA0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FC84;
      }
      goto L_0882FA14;
    }
L_0882FA14:
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882FA24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18224));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x0882FA24u) goto L_0882FA24;
    return;
L_0882FA24:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_0882FBEC;
    }
    goto L_0882FA2C;
L_0882FA2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882FA38u);
    ctx.gpr[5] = (0u | 7u);
    goto L_0882EB78;
L_0882FA38:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30008));
    ctx.gpr[31] = (0x0882FA44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882F6E8;
L_0882FA44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x0882FA6Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18164));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882FA6Cu) goto L_0882FA6C;
    return;
L_0882FA6C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882FA78u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 603u, 0x08AE22DCu>(ctx, &aot_mem) && ctx.pc == 0x0882FA78u) goto L_0882FA78;
    return;
L_0882FA78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0882FA8C;
      }
      goto L_0882FA84;
    }
L_0882FA84:
    ctx.gpr[31] = (0x0882FA8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882FA8Cu) goto L_0882FA8C;
    return;
L_0882FA8C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FBE4;
      }
      goto L_0882FA94;
    }
L_0882FA94:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882FAD0;
      }
      goto L_0882FA9C;
    }
L_0882FA9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x0882FAB0u);
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem) && ctx.pc == 0x0882FAB0u) goto L_0882FAB0;
    return;
L_0882FAB0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882FAC0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882FAC0u) goto L_0882FAC0;
    return;
L_0882FAC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882FAD0;
      }
      goto L_0882FAC8;
    }
L_0882FAC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0882FAD0;
      }
      goto L_0882FAD0;
    }
L_0882FAD0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FBE4;
      }
      goto L_0882FAD8;
    }
L_0882FAD8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FB0C;
      }
      goto L_0882FAE0;
    }
L_0882FAE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x0882FAF4u);
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem) && ctx.pc == 0x0882FAF4u) goto L_0882FAF4;
    return;
L_0882FAF4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882FB04u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882FB04u) goto L_0882FB04;
    return;
L_0882FB04:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882FB14;
      }
      goto L_0882FB0C;
    }
L_0882FB0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0882FB14;
      }
      goto L_0882FB14;
    }
L_0882FB14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882FB20u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 554u, 0x08AC6068u>(ctx, &aot_mem) && ctx.pc == 0x0882FB20u) goto L_0882FB20;
    return;
L_0882FB20:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30012));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.gpr[31] = (0x0882FB34u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882FB34u) goto L_0882FB34;
    return;
L_0882FB34:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.gpr[31] = (0x0882FB48u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882FB48u) goto L_0882FB48;
    return;
L_0882FB48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0882FB5Cu);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_0882EB80;
L_0882FB5C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
        goto L_0882FB74;
    }
    goto L_0882FB68;
L_0882FB68:
    ctx.gpr[31] = (0x0882FB70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882FB70u) goto L_0882FB70;
    return;
L_0882FB70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    goto L_0882FB74;
L_0882FB74:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FB84;
      }
      goto L_0882FB7C;
    }
L_0882FB7C:
    ctx.gpr[31] = (0x0882FB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882FB84u) goto L_0882FB84;
    return;
L_0882FB84:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-29992));
    ctx.gpr[31] = (0x0882FB94u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(140));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882FB94u) goto L_0882FB94;
    return;
L_0882FB94:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30012));
    ctx.gpr[31] = (0x0882FBA8u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882FBA8u) goto L_0882FBA8;
    return;
L_0882FBA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882FBBCu);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_0882EB80;
L_0882FBBC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
        goto L_0882FBD4;
    }
    goto L_0882FBC8;
L_0882FBC8:
    ctx.gpr[31] = (0x0882FBD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882FBD0u) goto L_0882FBD0;
    return;
L_0882FBD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    goto L_0882FBD4;
L_0882FBD4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FBE4;
      }
      goto L_0882FBDC;
    }
L_0882FBDC:
    ctx.gpr[31] = (0x0882FBE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882FBE4u) goto L_0882FBE4;
    return;
L_0882FBE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FC84;
      }
      goto L_0882FBEC;
    }
L_0882FBEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FC7C;
      }
      goto L_0882FC14;
    }
L_0882FC14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882FC30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem) && ctx.pc == 0x0882FC30u) goto L_0882FC30;
    return;
L_0882FC30:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_0882FC54;
    }
    goto L_0882FC38;
L_0882FC38:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[31] = (0x0882FC44u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 638u, 0x08AE25E8u>(ctx, &aot_mem) && ctx.pc == 0x0882FC44u) goto L_0882FC44;
    return;
L_0882FC44:
    ctx.gpr[31] = (0x0882FC4Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 623u, 0x08AE2438u>(ctx, &aot_mem) && ctx.pc == 0x0882FC4Cu) goto L_0882FC4C;
    return;
L_0882FC4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FC84;
      }
      goto L_0882FC54;
    }
L_0882FC54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882FC14;
      }
      goto L_0882FC7C;
    }
L_0882FC7C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0882FC84;
L_0882FC84:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882FCA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882FCE0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0882EB78;
L_0882FCE0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30072));
    ctx.gpr[31] = (0x0882FCECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0882E880;
L_0882FCEC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30028));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0882FD04u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882FD04u) goto L_0882FD04;
    return;
L_0882FD04:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882FD10u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 612u, 0x08AE23A0u>(ctx, &aot_mem) && ctx.pc == 0x0882FD10u) goto L_0882FD10;
    return;
L_0882FD10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FD24;
      }
      goto L_0882FD1C;
    }
L_0882FD1C:
    ctx.gpr[31] = (0x0882FD24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882FD24u) goto L_0882FD24;
    return;
L_0882FD24:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30052));
    ctx.gpr[31] = (0x0882FD30u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0882F6E8;
L_0882FD30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882FD58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18164));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882FD58u) goto L_0882FD58;
    return;
L_0882FD58:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882FD64u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 603u, 0x08AE22DCu>(ctx, &aot_mem) && ctx.pc == 0x0882FD64u) goto L_0882FD64;
    return;
L_0882FD64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0882FD78;
      }
      goto L_0882FD70;
    }
L_0882FD70:
    ctx.gpr[31] = (0x0882FD78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882FD78u) goto L_0882FD78;
    return;
L_0882FD78:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 24u, 0x08830114u>(ctx, &aot_mem); return;
      }
      goto L_0882FD84;
    }
L_0882FD84:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882FDC0;
      }
      goto L_0882FD8C;
    }
L_0882FD8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x0882FDA0u);
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem) && ctx.pc == 0x0882FDA0u) goto L_0882FDA0;
    return;
L_0882FDA0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882FDB0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882FDB0u) goto L_0882FDB0;
    return;
L_0882FDB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882FDC0;
      }
      goto L_0882FDB8;
    }
L_0882FDB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0882FDC0;
      }
      goto L_0882FDC0;
    }
L_0882FDC0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 24u, 0x08830114u>(ctx, &aot_mem); return;
      }
      goto L_0882FDC8;
    }
L_0882FDC8:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30064));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30012));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0882FE24;
      }
      goto L_0882FDE4;
    }
L_0882FDE4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x0882FE00u);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem) && ctx.pc == 0x0882FE00u) goto L_0882FE00;
    return;
L_0882FE00:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882FE10u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882FE10u) goto L_0882FE10;
    return;
L_0882FE10:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_0882FE24;
      }
      goto L_0882FE1C;
    }
L_0882FE1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0882FE28;
      }
      goto L_0882FE24;
    }
L_0882FE24:
    ctx.gpr[4] = (0u | 0u);
    goto L_0882FE28;
L_0882FE28:
    ctx.gpr[31] = (0x0882FE30u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 554u, 0x08AC6068u>(ctx, &aot_mem) && ctx.pc == 0x0882FE30u) goto L_0882FE30;
    return;
L_0882FE30:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FE68;
      }
      goto L_0882FE38;
    }
L_0882FE38:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x0882FE50u);
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem) && ctx.pc == 0x0882FE50u) goto L_0882FE50;
    return;
L_0882FE50:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882FE60u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882FE60u) goto L_0882FE60;
    return;
L_0882FE60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_0882FE70;
      }
      goto L_0882FE68;
    }
L_0882FE68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0882FE70;
      }
      goto L_0882FE70;
    }
L_0882FE70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882FE7Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 554u, 0x08AC6068u>(ctx, &aot_mem) && ctx.pc == 0x0882FE7Cu) goto L_0882FE7C;
    return;
L_0882FE7C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0882FE8Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882FE8Cu) goto L_0882FE8C;
    return;
L_0882FE8C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0882FEA0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882FEA0u) goto L_0882FEA0;
    return;
L_0882FEA0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882FEB4u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_0882EB80;
L_0882FEB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_0882FECC;
    }
    goto L_0882FEC0;
L_0882FEC0:
    ctx.gpr[31] = (0x0882FEC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882FEC8u) goto L_0882FEC8;
    return;
L_0882FEC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0882FECC;
L_0882FECC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FEDC;
      }
      goto L_0882FED4;
    }
L_0882FED4:
    ctx.gpr[31] = (0x0882FEDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882FEDCu) goto L_0882FEDC;
    return;
L_0882FEDC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0882FEECu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882FEECu) goto L_0882FEEC;
    return;
L_0882FEEC:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0882FF00u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882FF00u) goto L_0882FF00;
    return;
L_0882FF00:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882FF14u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_0882ECC4;
L_0882FF14:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[30] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_0882FF2C;
    }
    goto L_0882FF20;
L_0882FF20:
    ctx.gpr[31] = (0x0882FF28u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882FF28u) goto L_0882FF28;
    return;
L_0882FF28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_0882FF2C;
L_0882FF2C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FF3C;
      }
      goto L_0882FF34;
    }
L_0882FF34:
    ctx.gpr[31] = (0x0882FF3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882FF3Cu) goto L_0882FF3C;
    return;
L_0882FF3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
        goto L_0882FF54;
    }
    goto L_0882FF48;
L_0882FF48:
    ctx.gpr[31] = (0x0882FF50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 656u, 0x08B66B84u>(ctx, &aot_mem) && ctx.pc == 0x0882FF50u) goto L_0882FF50;
    return;
L_0882FF50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    goto L_0882FF54;
L_0882FF54:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30360));
    ctx.gpr[31] = (0x0882FF60u);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-30352));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 896u, 0x08873D30u>(ctx, &aot_mem) && ctx.pc == 0x0882FF60u) goto L_0882FF60;
    return;
L_0882FF60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 8u, 0x08830044u>(ctx, &aot_mem); return;
      }
      goto L_0882FF6C;
    }
L_0882FF6C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0882FF84u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882FF84u) goto L_0882FF84;
    return;
L_0882FF84:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0882FFA0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882FFA0u) goto L_0882FFA0;
    return;
L_0882FFA0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0882FFB4u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_0882EB80;
L_0882FFB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
        goto L_0882FFCC;
    }
    goto L_0882FFC0;
L_0882FFC0:
    ctx.gpr[31] = (0x0882FFC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882FFC8u) goto L_0882FFC8;
    return;
L_0882FFC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    goto L_0882FFCC;
L_0882FFCC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882FFDC;
      }
      goto L_0882FFD4;
    }
L_0882FFD4:
    ctx.gpr[31] = (0x0882FFDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0882FFDCu) goto L_0882FFDC;
    return;
L_0882FFDC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0882FFECu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem) && ctx.pc == 0x0882FFECu) goto L_0882FFEC;
    return;
L_0882FFEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08830000u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0010(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0010_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_10(Runtime &runtime) {
    runtime.register_generated_unit(10u, 0x0882C000u, 16384u, &recomp_unit_0010, &recomp_unit_0010_entry);
    runtime.register_function(0x0882C000u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C014u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C034u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C03Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C044u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C04Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C054u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C05Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C06Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C078u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C080u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C088u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C090u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C098u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C0C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C0D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C0D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C0F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C100u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C108u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C11Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C13Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C144u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C14Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C17Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C184u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C198u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C1FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C204u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C21Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C224u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C23Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C244u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C25Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C264u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C27Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C284u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C29Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C2A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C2BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C2C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C2CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C2E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C2ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C300u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C308u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C310u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C31Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C33Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C35Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C364u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C36Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C380u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C3A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C3B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C3BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C3C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C404u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C408u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C410u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C420u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C428u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C43Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C444u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C448u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C454u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C460u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C46Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C474u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C490u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C4A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C4C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C510u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C518u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C520u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C530u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C538u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C54Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C554u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C558u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C564u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C570u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C5B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C5C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C5CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C5E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C5F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C628u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C664u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C668u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C670u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C680u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C688u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C69Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C6A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C6A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C6B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C6C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C6CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C6D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C6F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C700u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C728u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C74Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C76Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C770u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C7A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C7B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C7C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C7D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C7E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C810u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C818u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C830u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C838u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C844u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C84Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C854u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C870u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C878u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C880u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C89Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C8A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C8A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C8BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C8DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C8E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C90Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C91Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C924u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C92Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C934u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C938u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C96Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C98Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882C9D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CAE8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CAF0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB08u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB18u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB2Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB38u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB50u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB64u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB8Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CB9Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CBACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CBB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CBCCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CBD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CBE4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CBF0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CBFCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC08u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC2Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC38u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC48u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CC80u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCC4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCD0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCE0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCF0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CCF8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD1Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD58u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CD78u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CDD0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CDE8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CDFCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE1Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE24u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE2Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE58u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE60u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CE74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CEB4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CEC4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CED8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF3Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF70u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CF90u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CFA4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CFBCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882CFC4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D060u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D068u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D070u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D07Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D094u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D0A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D0D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D0E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D104u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D10Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D134u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D164u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D1FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D22Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D238u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D248u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D254u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D26Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D2A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D2ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D2CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D2E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D300u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D314u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D354u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D360u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D394u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D3C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D3D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D3D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D400u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D430u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D448u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D468u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D49Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D4A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D4BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D4D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D508u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D55Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D568u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D574u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D57Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D594u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D5ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D5C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D5D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D5E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D5ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D600u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D610u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D618u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D628u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D634u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D648u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D654u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D660u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D668u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D674u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D688u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D698u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D6A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D6A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D6ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D6BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D6C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D6DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D6ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D6F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D6F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D708u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D710u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D718u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D724u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D734u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D73Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D740u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D748u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D74Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D754u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D75Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D794u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D854u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D868u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D878u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D87Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D884u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D890u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D8FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D904u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D920u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D924u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D92Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D93Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D944u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D968u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D98Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D994u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882D9F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA00u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA08u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA10u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA1Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA28u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA30u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA4Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA64u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA8Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA94u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DA9Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DAA4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DAACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DAB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DAC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DAD0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DAF0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DAFCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB04u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB18u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB40u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DB80u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DBBCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DBCCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DBF8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC08u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC4Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DC94u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCA0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCB4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DCE8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD4Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD64u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DD8Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DDACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DDB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DDC4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DDCCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DDD4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DDDCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DDE8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DDF4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DDFCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE00u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE24u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE30u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE3Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE48u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE60u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE8Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DE98u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DEA4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DEB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DEBCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DEC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DED4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DEDCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DEF4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF1Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF24u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF30u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF40u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF48u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF50u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF58u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF68u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF70u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF78u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF90u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DF9Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DFA8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DFB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DFB4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DFD0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DFECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882DFF4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E004u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E00Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E014u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E01Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E024u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E02Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E040u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E044u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E04Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E060u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E06Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E080u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E090u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E09Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E0ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E0C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E0E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E10Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E118u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E144u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E170u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E17Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E1A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E1C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E1D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E1E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E1F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E1FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E20Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E218u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E21Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E220u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E228u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E230u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E238u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E240u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E24Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E254u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E25Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E260u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E268u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E270u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E278u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E284u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E290u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E29Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E2F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E304u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E310u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E318u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E320u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E328u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E330u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E338u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E340u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E34Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E358u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E360u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E36Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E370u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E378u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E380u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E388u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E390u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E398u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E3E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E410u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E420u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E434u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E43Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E444u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E44Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E458u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E460u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E470u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E484u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E48Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E494u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E4B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E4C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E4ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E4FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E50Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E518u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E52Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E534u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E540u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E548u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E550u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E558u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E560u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E568u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E570u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E578u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E5FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E608u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E610u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E620u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E630u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E638u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E658u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E660u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E670u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E6B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E6C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E6ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E704u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E71Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E724u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E72Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E734u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E73Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E744u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E750u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E758u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E760u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E768u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E770u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E778u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E780u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E788u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E798u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7DCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7ECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E7FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E804u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E814u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E81Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E824u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E82Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E83Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E844u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E84Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E854u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E864u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E870u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E880u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E8ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E8B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E8E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E8F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E8FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E904u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E92Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E930u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E950u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E95Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E964u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E978u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E980u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E98Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E994u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E99Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882E9F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA04u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA18u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA38u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA80u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA88u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA90u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EA98u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EAA0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EAA8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EAB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EAB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EAC4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EACCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EAD4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EAE0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EAE8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EAFCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB08u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB10u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB2Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB38u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB40u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB4Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB60u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB78u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EB80u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EBD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EBE4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EBF0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EBF8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC04u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC30u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC38u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC40u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC48u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC50u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC64u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EC9Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ECC4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED1Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED28u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED34u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED3Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED48u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED50u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED64u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED8Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882ED94u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EDA8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EDB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EDC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EDC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EDE0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE08u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE10u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE50u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE60u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE70u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE78u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EE8Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EEB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EEC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EED4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EEDCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EEF0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF00u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF28u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF3Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF58u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF68u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF78u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF80u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EF94u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EFBCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EFF0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882EFFCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F008u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F00Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F01Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F024u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F030u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F038u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F064u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F074u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F080u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F088u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F09Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F0F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F104u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F114u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F118u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F124u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F12Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F140u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F168u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F180u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F188u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F190u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F19Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1D4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F1FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F200u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F210u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F24Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F260u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F268u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F274u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F27Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F288u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F28Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F294u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2A0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2C8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F2F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F300u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F308u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F30Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F314u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F31Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F340u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F348u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F350u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F36Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F374u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F37Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F394u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F39Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F4F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F4FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F504u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F50Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F514u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F530u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F538u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F540u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F54Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F554u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F558u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F560u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F56Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F578u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F580u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F584u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F58Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F598u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F5A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F5ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F5B0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F5B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F5CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F5D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F5E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F5F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F600u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F608u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F620u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F62Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F634u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F640u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F648u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F654u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F65Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F668u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F67Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F688u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F694u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F69Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F6A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F6ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F6B8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F6C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F6C4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F6E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F710u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F720u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F728u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F730u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F73Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F748u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F754u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F77Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F788u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F794u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F79Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F7A4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F7ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F7C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F7D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F7D8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F7E0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F7E8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F7F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F804u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F814u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F81Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F824u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F830u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F844u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F858u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F86Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F878u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F880u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F884u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F88Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F894u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F89Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F8ACu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F8B4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F8C0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F8CCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F8F4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F900u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F90Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F914u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F91Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F924u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F938u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F948u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F950u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F958u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F960u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F968u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F97Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F98Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F994u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F99Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9A8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9BCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9D0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9E4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9F0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9F8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882F9FCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA04u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA24u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA2Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA38u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA78u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA8Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA94u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FA9Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FAB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FAC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FAC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FAD0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FAD8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FAE0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FAF4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB04u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB0Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB34u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB48u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB5Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB68u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB70u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB74u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FB94u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FBA8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FBBCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FBC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FBD0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FBD4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FBDCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FBE4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FBECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC30u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC38u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC44u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC4Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FC84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FCA0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FCE0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FCECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD04u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD10u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD1Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD24u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD30u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD58u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD64u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD70u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD78u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FD8Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDA0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDB0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDB8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FDE4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE00u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE10u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE1Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE24u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE28u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE30u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE38u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE50u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE60u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE68u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE70u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE7Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FE8Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FEA0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FEB4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FEC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FEC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FECCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FED4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FEDCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FEECu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF00u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF14u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF20u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF28u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF2Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF34u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF3Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF48u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF50u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF54u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF60u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF6Cu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FF84u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFA0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFB4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFC0u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFC8u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFCCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFD4u, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFDCu, &recomp_unit_0010, "recomp_unit_0010");
    runtime.register_function(0x0882FFECu, &recomp_unit_0010, "recomp_unit_0010");
}
} // namespace psprecomp
