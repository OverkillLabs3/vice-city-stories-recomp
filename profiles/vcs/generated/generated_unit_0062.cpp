#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0062[4079] = {
    1, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 8, 0,
    0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 0,
    0, 0, 14, 0, 15, 0, 0, 0, 16, 0, 17, 0, 18, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 22, 0, 23, 0, 24, 0, 0, 25, 0,
    0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33,
    0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 41,
    0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 51,
    52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0,
    57, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0, 64, 0, 65, 66, 0, 0, 0, 0, 0,
    67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 71, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 0,
    0, 75, 0, 0, 76, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0,
    83, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 87, 88, 0, 89, 0, 90, 0, 0, 91, 0, 0, 0, 92, 93, 0, 0, 0, 0, 0, 94, 0,
    0, 0, 95, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0,
    102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 0, 106, 0, 107, 0, 108, 0, 0, 0, 109, 0, 110, 0, 0, 111,
    0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 115, 0, 0, 116, 0, 117, 118, 0, 0, 119, 0, 120, 121, 0, 122,
    123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 134, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0,
    0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 156,
    0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 161, 0, 162,
    0, 163, 0, 164, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 173, 0, 0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 179, 180, 0, 0, 0, 181, 0, 182, 0, 0, 183, 0, 184, 0, 0, 0, 0, 185, 0, 186, 0,
    187, 0, 188, 0, 0, 0, 189, 190, 0, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0,
    197, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 200, 0, 201, 0, 202, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 0,
    207, 0, 208, 0, 209, 0, 210, 0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 213, 0, 214, 0, 0, 215, 0, 216, 0, 217, 0, 0, 218, 219, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 224,
    0, 0, 0, 0, 225, 0, 0, 226, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0,
    0, 0, 0, 0, 232, 233, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 241, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0,
    0, 246, 0, 0, 0, 0, 0, 247, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 250, 251, 0, 0, 0, 0, 0, 0, 0, 0,
    252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 256, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259,
    0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0,
    0, 269, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 275, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285,
    0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0,
    0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0,
    0, 296, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 301, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307,
    0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0,
    319, 0, 320, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 325, 0, 0, 0, 326, 0, 0, 327,
    0, 0, 0, 328, 0, 329, 0, 0, 330, 0, 331, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 338, 0, 0, 0, 339, 0,
    0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0,
    0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 354, 0, 0,
    0, 0, 355, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0,
    363, 0, 0, 364, 0, 0, 365, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 373,
    0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0,
    0, 382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 390,
    0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0,
    399, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 407, 0, 0,
    0, 408, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 416, 0,
    0, 0, 417, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 425,
    0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 433, 0, 0,
    0, 434, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 442, 0,
    0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 450,
    0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 457, 0, 0, 0, 458, 0, 0,
    0, 459, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0,
    467, 0, 0, 0, 468, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 475, 0,
    0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 483,
    0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0,
    0, 492, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 500, 0,
    0, 0, 501, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 506, 0, 0, 507, 0, 0, 508, 0, 0, 0, 509, 0,
    0, 0, 510, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 518,
    0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 526, 0,
    0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0,
    535, 0, 0, 0, 536, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 543, 0,
    0, 544, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0,
    552, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 560, 0, 0,
    0, 0, 561, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0,
    569, 0, 0, 0, 570, 0, 0, 571, 0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 577, 0, 0,
    0, 578, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 583, 0, 0, 0, 584, 0, 0, 585, 0, 0, 586, 0,
    0, 0, 587, 0, 0, 588, 0, 0, 589, 0, 590, 0, 0, 0, 591, 0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 0, 0, 594, 0, 0, 0, 0,
    0, 595, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 601, 0, 0, 602, 0,
    0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0, 0, 0, 607, 0, 0, 608, 0, 0, 0, 609, 0, 0, 0,
    0, 0, 610, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 617,
    0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 620, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0,
    0, 625, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 629, 0, 0, 0, 630, 0, 0, 0, 0, 631, 0, 0, 632, 0, 0, 0, 633,
    0, 0, 0, 634, 0, 0, 635, 0, 0, 0, 636, 0, 0, 0, 637, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 641, 0, 0,
    0, 642, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0,
    650, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 653, 0, 0, 654, 0, 0, 655, 0, 0, 656, 0, 657, 0, 0, 0, 658, 0, 0, 0, 659,
    0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 663, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0,
    668, 0, 0, 669, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 672, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 676, 0, 0,
    0, 677, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 684, 0, 0, 0, 685, 0,
    0, 0, 686, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 693, 0, 0, 0, 694,
    0, 0, 0, 695, 0, 0, 696, 0, 0, 697, 0, 0, 698, 0, 0, 699, 0, 700, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0,
    704, 0, 0, 705, 0, 0, 706, 0, 0, 707, 0, 0, 708, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 717, 0, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720,
    0, 0, 721, 0, 722, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 725,
    0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 728, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 731, 0, 0, 732, 0, 0,
    0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 734, 735, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 740, 0, 741, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    744, 0, 745, 0, 0, 0, 746, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 749,
    0, 0, 0, 750, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 753, 0, 0, 0,
    0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 760, 0, 0, 0, 761, 0, 0, 0, 0, 762, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 764, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 768, 0, 0, 0, 769, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 772, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    774, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 777, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0,
    0, 782, 0, 783, 0, 784, 0, 0, 0, 785, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0,
    0, 789, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0, 792, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0,
    794, 0, 0, 0, 0, 795, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 798, 0, 0, 799, 0, 0, 0, 0, 0, 0,
    0, 0, 800, 0, 0, 0, 0, 801, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 805, 0, 0,
    806, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 808, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 811, 0,
    0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 814, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 817,
    0, 0, 818, 0, 0, 0, 0, 0, 0, 0, 819, 0, 0, 820, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0,
    0, 0, 823, 0, 0, 0, 0, 0, 0, 824, 0, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 827, 0,
    0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0,
    0, 832, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 835, 0, 0, 0, 0, 0, 0, 836, 0, 0,
    0, 0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 839, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 0,
    841, 0, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 843,
};
void recomp_unit_0062_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088FC000u;
        entry_id = (entry_delta < 16316u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0062[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088FC000;
    case 2u: goto L_088FC014;
    case 3u: goto L_088FC020;
    case 4u: goto L_088FC02C;
    case 5u: goto L_088FC040;
    case 6u: goto L_088FC05C;
    case 7u: goto L_088FC06C;
    case 8u: goto L_088FC078;
    case 9u: goto L_088FC08C;
    case 10u: goto L_088FC0CC;
    case 11u: goto L_088FC0E0;
    case 12u: goto L_088FC0E8;
    case 13u: goto L_088FC0F4;
    case 14u: goto L_088FC108;
    case 15u: goto L_088FC110;
    case 16u: goto L_088FC120;
    case 17u: goto L_088FC128;
    case 18u: goto L_088FC130;
    case 19u: goto L_088FC13C;
    case 20u: goto L_088FC144;
    case 21u: goto L_088FC154;
    case 22u: goto L_088FC15C;
    case 23u: goto L_088FC164;
    case 24u: goto L_088FC16C;
    case 25u: goto L_088FC178;
    case 26u: goto L_088FC184;
    case 27u: goto L_088FC194;
    case 28u: goto L_088FC1A0;
    case 29u: goto L_088FC1B0;
    case 30u: goto L_088FC1B8;
    case 31u: goto L_088FC1CC;
    case 32u: goto L_088FC1D4;
    case 33u: goto L_088FC1FC;
    case 34u: goto L_088FC20C;
    case 35u: goto L_088FC224;
    case 36u: goto L_088FC234;
    case 37u: goto L_088FC244;
    case 38u: goto L_088FC254;
    case 39u: goto L_088FC264;
    case 40u: goto L_088FC26C;
    case 41u: goto L_088FC27C;
    case 42u: goto L_088FC284;
    case 43u: goto L_088FC294;
    case 44u: goto L_088FC29C;
    case 45u: goto L_088FC2AC;
    case 46u: goto L_088FC2BC;
    case 47u: goto L_088FC2C4;
    case 48u: goto L_088FC2D4;
    case 49u: goto L_088FC2E0;
    case 50u: goto L_088FC2EC;
    case 51u: goto L_088FC2FC;
    case 52u: goto L_088FC300;
    case 53u: goto L_088FC330;
    case 54u: goto L_088FC354;
    case 55u: goto L_088FC368;
    case 56u: goto L_088FC370;
    case 57u: goto L_088FC380;
    case 58u: goto L_088FC394;
    case 59u: goto L_088FC3A0;
    case 60u: goto L_088FC3AC;
    case 61u: goto L_088FC3B8;
    case 62u: goto L_088FC3C0;
    case 63u: goto L_088FC3D4;
    case 64u: goto L_088FC3DC;
    case 65u: goto L_088FC3E4;
    case 66u: goto L_088FC3E8;
    case 67u: goto L_088FC400;
    case 68u: goto L_088FC420;
    case 69u: goto L_088FC434;
    case 70u: goto L_088FC43C;
    case 71u: goto L_088FC450;
    case 72u: goto L_088FC458;
    case 73u: goto L_088FC464;
    case 74u: goto L_088FC470;
    case 75u: goto L_088FC484;
    case 76u: goto L_088FC490;
    case 77u: goto L_088FC494;
    case 78u: goto L_088FC4A8;
    case 79u: goto L_088FC4CC;
    case 80u: goto L_088FC4E4;
    case 81u: goto L_088FC4F0;
    case 82u: goto L_088FC4F8;
    case 83u: goto L_088FC500;
    case 84u: goto L_088FC510;
    case 85u: goto L_088FC518;
    case 86u: goto L_088FC520;
    case 87u: goto L_088FC52C;
    case 88u: goto L_088FC530;
    case 89u: goto L_088FC538;
    case 90u: goto L_088FC540;
    case 91u: goto L_088FC54C;
    case 92u: goto L_088FC55C;
    case 93u: goto L_088FC560;
    case 94u: goto L_088FC578;
    case 95u: goto L_088FC588;
    case 96u: goto L_088FC594;
    case 97u: goto L_088FC5AC;
    case 98u: goto L_088FC5B8;
    case 99u: goto L_088FC5C8;
    case 100u: goto L_088FC5E8;
    case 101u: goto L_088FC5F4;
    case 102u: goto L_088FC600;
    case 103u: goto L_088FC60C;
    case 104u: goto L_088FC62C;
    case 105u: goto L_088FC638;
    case 106u: goto L_088FC648;
    case 107u: goto L_088FC650;
    case 108u: goto L_088FC658;
    case 109u: goto L_088FC668;
    case 110u: goto L_088FC670;
    case 111u: goto L_088FC67C;
    case 112u: goto L_088FC690;
    case 113u: goto L_088FC6B8;
    case 114u: goto L_088FC6C0;
    case 115u: goto L_088FC6C4;
    case 116u: goto L_088FC6D0;
    case 117u: goto L_088FC6D8;
    case 118u: goto L_088FC6DC;
    case 119u: goto L_088FC6E8;
    case 120u: goto L_088FC6F0;
    case 121u: goto L_088FC6F4;
    case 122u: goto L_088FC6FC;
    case 123u: goto L_088FC700;
    case 124u: goto L_088FC71C;
    case 125u: goto L_088FC728;
    case 126u: goto L_088FC734;
    case 127u: goto L_088FC740;
    case 128u: goto L_088FC750;
    case 129u: goto L_088FC75C;
    case 130u: goto L_088FC76C;
    case 131u: goto L_088FC77C;
    case 132u: goto L_088FC79C;
    case 133u: goto L_088FC7A4;
    case 134u: goto L_088FC7B0;
    case 135u: goto L_088FC7C4;
    case 136u: goto L_088FC7CC;
    case 137u: goto L_088FC7DC;
    case 138u: goto L_088FC7F0;
    case 139u: goto L_088FC808;
    case 140u: goto L_088FC81C;
    case 141u: goto L_088FC830;
    case 142u: goto L_088FC83C;
    case 143u: goto L_088FC848;
    case 144u: goto L_088FC854;
    case 145u: goto L_088FC870;
    case 146u: goto L_088FC888;
    case 147u: goto L_088FC894;
    case 148u: goto L_088FC8A0;
    case 149u: goto L_088FC8AC;
    case 150u: goto L_088FC8BC;
    case 151u: goto L_088FC8C4;
    case 152u: goto L_088FC8D0;
    case 153u: goto L_088FC8DC;
    case 154u: goto L_088FC8E8;
    case 155u: goto L_088FC8F4;
    case 156u: goto L_088FC8FC;
    case 157u: goto L_088FC90C;
    case 158u: goto L_088FC924;
    case 159u: goto L_088FC954;
    case 160u: goto L_088FC960;
    case 161u: goto L_088FC974;
    case 162u: goto L_088FC97C;
    case 163u: goto L_088FC984;
    case 164u: goto L_088FC98C;
    case 165u: goto L_088FC994;
    case 166u: goto L_088FC9A0;
    case 167u: goto L_088FC9AC;
    case 168u: goto L_088FC9B8;
    case 169u: goto L_088FC9D4;
    case 170u: goto L_088FCA10;
    case 171u: goto L_088FCA18;
    case 172u: goto L_088FCA28;
    case 173u: goto L_088FCA8C;
    case 174u: goto L_088FCA98;
    case 175u: goto L_088FCAA0;
    case 176u: goto L_088FCAB0;
    case 177u: goto L_088FCB14;
    case 178u: goto L_088FCB1C;
    case 179u: goto L_088FCB2C;
    case 180u: goto L_088FCB30;
    case 181u: goto L_088FCB40;
    case 182u: goto L_088FCB48;
    case 183u: goto L_088FCB54;
    case 184u: goto L_088FCB5C;
    case 185u: goto L_088FCB70;
    case 186u: goto L_088FCB78;
    case 187u: goto L_088FCB80;
    case 188u: goto L_088FCB88;
    case 189u: goto L_088FCB98;
    case 190u: goto L_088FCB9C;
    case 191u: goto L_088FCBAC;
    case 192u: goto L_088FCBB4;
    case 193u: goto L_088FCBC4;
    case 194u: goto L_088FCBD4;
    case 195u: goto L_088FCBE4;
    case 196u: goto L_088FCBF4;
    case 197u: goto L_088FCC00;
    case 198u: goto L_088FCC10;
    case 199u: goto L_088FCC24;
    case 200u: goto L_088FCC30;
    case 201u: goto L_088FCC38;
    case 202u: goto L_088FCC40;
    case 203u: goto L_088FCC48;
    case 204u: goto L_088FCC58;
    case 205u: goto L_088FCC60;
    case 206u: goto L_088FCC74;
    case 207u: goto L_088FCC80;
    case 208u: goto L_088FCC88;
    case 209u: goto L_088FCC90;
    case 210u: goto L_088FCC98;
    case 211u: goto L_088FCCA8;
    case 212u: goto L_088FCCB0;
    case 213u: goto L_088FCCC4;
    case 214u: goto L_088FCCCC;
    case 215u: goto L_088FCCD8;
    case 216u: goto L_088FCCE0;
    case 217u: goto L_088FCCE8;
    case 218u: goto L_088FCCF4;
    case 219u: goto L_088FCCF8;
    case 220u: goto L_088FCD28;
    case 221u: goto L_088FCD4C;
    case 222u: goto L_088FCD5C;
    case 223u: goto L_088FCD70;
    case 224u: goto L_088FCD7C;
    case 225u: goto L_088FCD90;
    case 226u: goto L_088FCD9C;
    case 227u: goto L_088FCDA0;
    case 228u: goto L_088FCDC4;
    case 229u: goto L_088FCDCC;
    case 230u: goto L_088FCDEC;
    case 231u: goto L_088FCDF8;
    case 232u: goto L_088FCE10;
    case 233u: goto L_088FCE14;
    case 234u: goto L_088FCE1C;
    case 235u: goto L_088FCE38;
    case 236u: goto L_088FCE50;
    case 237u: goto L_088FCE64;
    case 238u: goto L_088FCE70;
    case 239u: goto L_088FCE90;
    case 240u: goto L_088FCE98;
    case 241u: goto L_088FCEA8;
    case 242u: goto L_088FCEAC;
    case 243u: goto L_088FCED0;
    case 244u: goto L_088FCED8;
    case 245u: goto L_088FCEF8;
    case 246u: goto L_088FCF04;
    case 247u: goto L_088FCF1C;
    case 248u: goto L_088FCF20;
    case 249u: goto L_088FCF38;
    case 250u: goto L_088FCF58;
    case 251u: goto L_088FCF5C;
    case 252u: goto L_088FCF80;
    case 253u: goto L_088FCF88;
    case 254u: goto L_088FCFA8;
    case 255u: goto L_088FCFB4;
    case 256u: goto L_088FCFCC;
    case 257u: goto L_088FCFD0;
    case 258u: goto L_088FCFD8;
    case 259u: goto L_088FCFFC;
    case 260u: goto L_088FD014;
    case 261u: goto L_088FD028;
    case 262u: goto L_088FD068;
    case 263u: goto L_088FD090;
    case 264u: goto L_088FD09C;
    case 265u: goto L_088FD0BC;
    case 266u: goto L_088FD0C8;
    case 267u: goto L_088FD0D8;
    case 268u: goto L_088FD0E4;
    case 269u: goto L_088FD104;
    case 270u: goto L_088FD114;
    case 271u: goto L_088FD11C;
    case 272u: goto L_088FD138;
    case 273u: goto L_088FD158;
    case 274u: goto L_088FD164;
    case 275u: goto L_088FD174;
    case 276u: goto L_088FD180;
    case 277u: goto L_088FD1A0;
    case 278u: goto L_088FD1B0;
    case 279u: goto L_088FD1B8;
    case 280u: goto L_088FD1D4;
    case 281u: goto L_088FD1F0;
    case 282u: goto L_088FD1FC;
    case 283u: goto L_088FD210;
    case 284u: goto L_088FD2AC;
    case 285u: goto L_088FD2FC;
    case 286u: goto L_088FD320;
    case 287u: goto L_088FD344;
    case 288u: goto L_088FD360;
    case 289u: goto L_088FD378;
    case 290u: goto L_088FD384;
    case 291u: goto L_088FD390;
    case 292u: goto L_088FD544;
    case 293u: goto L_088FD550;
    case 294u: goto L_088FD564;
    case 295u: goto L_088FD56C;
    case 296u: goto L_088FD584;
    case 297u: goto L_088FD588;
    case 298u: goto L_088FD5A4;
    case 299u: goto L_088FD5C4;
    case 300u: goto L_088FD5CC;
    case 301u: goto L_088FD5D4;
    case 302u: goto L_088FD5DC;
    case 303u: goto L_088FD5E8;
    case 304u: goto L_088FD610;
    case 305u: goto L_088FD628;
    case 306u: goto L_088FD640;
    case 307u: goto L_088FD67C;
    case 308u: goto L_088FD688;
    case 309u: goto L_088FD69C;
    case 310u: goto L_088FD6B4;
    case 311u: goto L_088FD6D8;
    case 312u: goto L_088FD708;
    case 313u: goto L_088FD714;
    case 314u: goto L_088FD740;
    case 315u: goto L_088FD748;
    case 316u: goto L_088FD754;
    case 317u: goto L_088FD764;
    case 318u: goto L_088FD770;
    case 319u: goto L_088FD780;
    case 320u: goto L_088FD788;
    case 321u: goto L_088FD798;
    case 322u: goto L_088FD7A4;
    case 323u: goto L_088FD7CC;
    case 324u: goto L_088FD7D4;
    case 325u: goto L_088FD7E0;
    case 326u: goto L_088FD7F0;
    case 327u: goto L_088FD7FC;
    case 328u: goto L_088FD80C;
    case 329u: goto L_088FD814;
    case 330u: goto L_088FD820;
    case 331u: goto L_088FD828;
    case 332u: goto L_088FD82C;
    case 333u: goto L_088FD83C;
    case 334u: goto L_088FD858;
    case 335u: goto L_088FD89C;
    case 336u: goto L_088FD8D0;
    case 337u: goto L_088FD8D8;
    case 338u: goto L_088FD8E8;
    case 339u: goto L_088FD8F8;
    case 340u: goto L_088FD918;
    case 341u: goto L_088FD924;
    case 342u: goto L_088FD934;
    case 343u: goto L_088FD948;
    case 344u: goto L_088FD954;
    case 345u: goto L_088FD964;
    case 346u: goto L_088FD978;
    case 347u: goto L_088FD984;
    case 348u: goto L_088FD994;
    case 349u: goto L_088FD9A8;
    case 350u: goto L_088FD9B4;
    case 351u: goto L_088FD9C4;
    case 352u: goto L_088FD9D8;
    case 353u: goto L_088FD9E4;
    case 354u: goto L_088FD9F4;
    case 355u: goto L_088FDA08;
    case 356u: goto L_088FDA14;
    case 357u: goto L_088FDA24;
    case 358u: goto L_088FDA38;
    case 359u: goto L_088FDA44;
    case 360u: goto L_088FDA54;
    case 361u: goto L_088FDA68;
    case 362u: goto L_088FDA74;
    case 363u: goto L_088FDA80;
    case 364u: goto L_088FDA8C;
    case 365u: goto L_088FDA98;
    case 366u: goto L_088FDAA0;
    case 367u: goto L_088FDAB4;
    case 368u: goto L_088FDAC4;
    case 369u: goto L_088FDAD0;
    case 370u: goto L_088FDADC;
    case 371u: goto L_088FDAE8;
    case 372u: goto L_088FDAF4;
    case 373u: goto L_088FDAFC;
    case 374u: goto L_088FDB0C;
    case 375u: goto L_088FDB20;
    case 376u: goto L_088FDB2C;
    case 377u: goto L_088FDB3C;
    case 378u: goto L_088FDB4C;
    case 379u: goto L_088FDB58;
    case 380u: goto L_088FDB68;
    case 381u: goto L_088FDB78;
    case 382u: goto L_088FDB84;
    case 383u: goto L_088FDB94;
    case 384u: goto L_088FDBA4;
    case 385u: goto L_088FDBB0;
    case 386u: goto L_088FDBC0;
    case 387u: goto L_088FDBD0;
    case 388u: goto L_088FDBDC;
    case 389u: goto L_088FDBEC;
    case 390u: goto L_088FDBFC;
    case 391u: goto L_088FDC08;
    case 392u: goto L_088FDC18;
    case 393u: goto L_088FDC28;
    case 394u: goto L_088FDC34;
    case 395u: goto L_088FDC44;
    case 396u: goto L_088FDC54;
    case 397u: goto L_088FDC60;
    case 398u: goto L_088FDC70;
    case 399u: goto L_088FDC80;
    case 400u: goto L_088FDC8C;
    case 401u: goto L_088FDC9C;
    case 402u: goto L_088FDCAC;
    case 403u: goto L_088FDCB8;
    case 404u: goto L_088FDCC8;
    case 405u: goto L_088FDCD8;
    case 406u: goto L_088FDCE4;
    case 407u: goto L_088FDCF4;
    case 408u: goto L_088FDD04;
    case 409u: goto L_088FDD10;
    case 410u: goto L_088FDD20;
    case 411u: goto L_088FDD30;
    case 412u: goto L_088FDD3C;
    case 413u: goto L_088FDD4C;
    case 414u: goto L_088FDD5C;
    case 415u: goto L_088FDD68;
    case 416u: goto L_088FDD78;
    case 417u: goto L_088FDD88;
    case 418u: goto L_088FDD94;
    case 419u: goto L_088FDDA4;
    case 420u: goto L_088FDDB4;
    case 421u: goto L_088FDDC0;
    case 422u: goto L_088FDDD0;
    case 423u: goto L_088FDDE0;
    case 424u: goto L_088FDDEC;
    case 425u: goto L_088FDDFC;
    case 426u: goto L_088FDE10;
    case 427u: goto L_088FDE1C;
    case 428u: goto L_088FDE2C;
    case 429u: goto L_088FDE3C;
    case 430u: goto L_088FDE48;
    case 431u: goto L_088FDE58;
    case 432u: goto L_088FDE68;
    case 433u: goto L_088FDE74;
    case 434u: goto L_088FDE84;
    case 435u: goto L_088FDE94;
    case 436u: goto L_088FDEA0;
    case 437u: goto L_088FDEB0;
    case 438u: goto L_088FDEC0;
    case 439u: goto L_088FDECC;
    case 440u: goto L_088FDEDC;
    case 441u: goto L_088FDEEC;
    case 442u: goto L_088FDEF8;
    case 443u: goto L_088FDF08;
    case 444u: goto L_088FDF1C;
    case 445u: goto L_088FDF28;
    case 446u: goto L_088FDF38;
    case 447u: goto L_088FDF4C;
    case 448u: goto L_088FDF58;
    case 449u: goto L_088FDF68;
    case 450u: goto L_088FDF7C;
    case 451u: goto L_088FDF88;
    case 452u: goto L_088FDF98;
    case 453u: goto L_088FDFA8;
    case 454u: goto L_088FDFB4;
    case 455u: goto L_088FDFC4;
    case 456u: goto L_088FDFD8;
    case 457u: goto L_088FDFE4;
    case 458u: goto L_088FDFF4;
    case 459u: goto L_088FE004;
    case 460u: goto L_088FE010;
    case 461u: goto L_088FE020;
    case 462u: goto L_088FE034;
    case 463u: goto L_088FE040;
    case 464u: goto L_088FE050;
    case 465u: goto L_088FE064;
    case 466u: goto L_088FE070;
    case 467u: goto L_088FE080;
    case 468u: goto L_088FE090;
    case 469u: goto L_088FE09C;
    case 470u: goto L_088FE0AC;
    case 471u: goto L_088FE0C0;
    case 472u: goto L_088FE0CC;
    case 473u: goto L_088FE0DC;
    case 474u: goto L_088FE0EC;
    case 475u: goto L_088FE0F8;
    case 476u: goto L_088FE108;
    case 477u: goto L_088FE11C;
    case 478u: goto L_088FE128;
    case 479u: goto L_088FE138;
    case 480u: goto L_088FE14C;
    case 481u: goto L_088FE158;
    case 482u: goto L_088FE168;
    case 483u: goto L_088FE17C;
    case 484u: goto L_088FE188;
    case 485u: goto L_088FE198;
    case 486u: goto L_088FE1A8;
    case 487u: goto L_088FE1B4;
    case 488u: goto L_088FE1C4;
    case 489u: goto L_088FE1D4;
    case 490u: goto L_088FE1E0;
    case 491u: goto L_088FE1F0;
    case 492u: goto L_088FE204;
    case 493u: goto L_088FE210;
    case 494u: goto L_088FE220;
    case 495u: goto L_088FE230;
    case 496u: goto L_088FE23C;
    case 497u: goto L_088FE24C;
    case 498u: goto L_088FE25C;
    case 499u: goto L_088FE268;
    case 500u: goto L_088FE278;
    case 501u: goto L_088FE288;
    case 502u: goto L_088FE294;
    case 503u: goto L_088FE2A4;
    case 504u: goto L_088FE2B4;
    case 505u: goto L_088FE2C0;
    case 506u: goto L_088FE2D0;
    case 507u: goto L_088FE2DC;
    case 508u: goto L_088FE2E8;
    case 509u: goto L_088FE2F8;
    case 510u: goto L_088FE308;
    case 511u: goto L_088FE314;
    case 512u: goto L_088FE324;
    case 513u: goto L_088FE334;
    case 514u: goto L_088FE340;
    case 515u: goto L_088FE350;
    case 516u: goto L_088FE360;
    case 517u: goto L_088FE36C;
    case 518u: goto L_088FE37C;
    case 519u: goto L_088FE390;
    case 520u: goto L_088FE39C;
    case 521u: goto L_088FE3AC;
    case 522u: goto L_088FE3C0;
    case 523u: goto L_088FE3CC;
    case 524u: goto L_088FE3DC;
    case 525u: goto L_088FE3EC;
    case 526u: goto L_088FE3F8;
    case 527u: goto L_088FE40C;
    case 528u: goto L_088FE41C;
    case 529u: goto L_088FE428;
    case 530u: goto L_088FE438;
    case 531u: goto L_088FE448;
    case 532u: goto L_088FE454;
    case 533u: goto L_088FE464;
    case 534u: goto L_088FE474;
    case 535u: goto L_088FE480;
    case 536u: goto L_088FE490;
    case 537u: goto L_088FE4A0;
    case 538u: goto L_088FE4AC;
    case 539u: goto L_088FE4BC;
    case 540u: goto L_088FE4CC;
    case 541u: goto L_088FE4D8;
    case 542u: goto L_088FE4E8;
    case 543u: goto L_088FE4F8;
    case 544u: goto L_088FE504;
    case 545u: goto L_088FE514;
    case 546u: goto L_088FE524;
    case 547u: goto L_088FE530;
    case 548u: goto L_088FE540;
    case 549u: goto L_088FE554;
    case 550u: goto L_088FE560;
    case 551u: goto L_088FE570;
    case 552u: goto L_088FE580;
    case 553u: goto L_088FE58C;
    case 554u: goto L_088FE59C;
    case 555u: goto L_088FE5AC;
    case 556u: goto L_088FE5B8;
    case 557u: goto L_088FE5C8;
    case 558u: goto L_088FE5D8;
    case 559u: goto L_088FE5E4;
    case 560u: goto L_088FE5F4;
    case 561u: goto L_088FE608;
    case 562u: goto L_088FE614;
    case 563u: goto L_088FE624;
    case 564u: goto L_088FE638;
    case 565u: goto L_088FE644;
    case 566u: goto L_088FE654;
    case 567u: goto L_088FE664;
    case 568u: goto L_088FE670;
    case 569u: goto L_088FE680;
    case 570u: goto L_088FE690;
    case 571u: goto L_088FE69C;
    case 572u: goto L_088FE6AC;
    case 573u: goto L_088FE6BC;
    case 574u: goto L_088FE6C8;
    case 575u: goto L_088FE6D8;
    case 576u: goto L_088FE6E8;
    case 577u: goto L_088FE6F4;
    case 578u: goto L_088FE704;
    case 579u: goto L_088FE718;
    case 580u: goto L_088FE724;
    case 581u: goto L_088FE734;
    case 582u: goto L_088FE744;
    case 583u: goto L_088FE750;
    case 584u: goto L_088FE760;
    case 585u: goto L_088FE76C;
    case 586u: goto L_088FE778;
    case 587u: goto L_088FE788;
    case 588u: goto L_088FE794;
    case 589u: goto L_088FE7A0;
    case 590u: goto L_088FE7A8;
    case 591u: goto L_088FE7B8;
    case 592u: goto L_088FE7D0;
    case 593u: goto L_088FE7DC;
    case 594u: goto L_088FE7EC;
    case 595u: goto L_088FE804;
    case 596u: goto L_088FE810;
    case 597u: goto L_088FE820;
    case 598u: goto L_088FE838;
    case 599u: goto L_088FE844;
    case 600u: goto L_088FE854;
    case 601u: goto L_088FE86C;
    case 602u: goto L_088FE878;
    case 603u: goto L_088FE888;
    case 604u: goto L_088FE8A0;
    case 605u: goto L_088FE8AC;
    case 606u: goto L_088FE8BC;
    case 607u: goto L_088FE8D4;
    case 608u: goto L_088FE8E0;
    case 609u: goto L_088FE8F0;
    case 610u: goto L_088FE908;
    case 611u: goto L_088FE914;
    case 612u: goto L_088FE924;
    case 613u: goto L_088FE93C;
    case 614u: goto L_088FE948;
    case 615u: goto L_088FE958;
    case 616u: goto L_088FE970;
    case 617u: goto L_088FE97C;
    case 618u: goto L_088FE990;
    case 619u: goto L_088FE9A8;
    case 620u: goto L_088FE9B4;
    case 621u: goto L_088FE9C4;
    case 622u: goto L_088FE9D4;
    case 623u: goto L_088FE9E0;
    case 624u: goto L_088FE9F0;
    case 625u: goto L_088FEA04;
    case 626u: goto L_088FEA10;
    case 627u: goto L_088FEA20;
    case 628u: goto L_088FEA30;
    case 629u: goto L_088FEA3C;
    case 630u: goto L_088FEA4C;
    case 631u: goto L_088FEA60;
    case 632u: goto L_088FEA6C;
    case 633u: goto L_088FEA7C;
    case 634u: goto L_088FEA8C;
    case 635u: goto L_088FEA98;
    case 636u: goto L_088FEAA8;
    case 637u: goto L_088FEAB8;
    case 638u: goto L_088FEAC4;
    case 639u: goto L_088FEAD4;
    case 640u: goto L_088FEAE8;
    case 641u: goto L_088FEAF4;
    case 642u: goto L_088FEB04;
    case 643u: goto L_088FEB18;
    case 644u: goto L_088FEB24;
    case 645u: goto L_088FEB34;
    case 646u: goto L_088FEB44;
    case 647u: goto L_088FEB50;
    case 648u: goto L_088FEB60;
    case 649u: goto L_088FEB74;
    case 650u: goto L_088FEB80;
    case 651u: goto L_088FEB90;
    case 652u: goto L_088FEBA4;
    case 653u: goto L_088FEBB0;
    case 654u: goto L_088FEBBC;
    case 655u: goto L_088FEBC8;
    case 656u: goto L_088FEBD4;
    case 657u: goto L_088FEBDC;
    case 658u: goto L_088FEBEC;
    case 659u: goto L_088FEBFC;
    case 660u: goto L_088FEC08;
    case 661u: goto L_088FEC18;
    case 662u: goto L_088FEC28;
    case 663u: goto L_088FEC34;
    case 664u: goto L_088FEC44;
    case 665u: goto L_088FEC54;
    case 666u: goto L_088FEC60;
    case 667u: goto L_088FEC70;
    case 668u: goto L_088FEC80;
    case 669u: goto L_088FEC8C;
    case 670u: goto L_088FEC9C;
    case 671u: goto L_088FECAC;
    case 672u: goto L_088FECB8;
    case 673u: goto L_088FECC8;
    case 674u: goto L_088FECD8;
    case 675u: goto L_088FECE4;
    case 676u: goto L_088FECF4;
    case 677u: goto L_088FED04;
    case 678u: goto L_088FED10;
    case 679u: goto L_088FED20;
    case 680u: goto L_088FED30;
    case 681u: goto L_088FED3C;
    case 682u: goto L_088FED4C;
    case 683u: goto L_088FED5C;
    case 684u: goto L_088FED68;
    case 685u: goto L_088FED78;
    case 686u: goto L_088FED88;
    case 687u: goto L_088FED94;
    case 688u: goto L_088FEDA4;
    case 689u: goto L_088FEDB4;
    case 690u: goto L_088FEDC0;
    case 691u: goto L_088FEDD0;
    case 692u: goto L_088FEDE0;
    case 693u: goto L_088FEDEC;
    case 694u: goto L_088FEDFC;
    case 695u: goto L_088FEE0C;
    case 696u: goto L_088FEE18;
    case 697u: goto L_088FEE24;
    case 698u: goto L_088FEE30;
    case 699u: goto L_088FEE3C;
    case 700u: goto L_088FEE44;
    case 701u: goto L_088FEE54;
    case 702u: goto L_088FEE64;
    case 703u: goto L_088FEE70;
    case 704u: goto L_088FEE80;
    case 705u: goto L_088FEE8C;
    case 706u: goto L_088FEE98;
    case 707u: goto L_088FEEA4;
    case 708u: goto L_088FEEB0;
    case 709u: goto L_088FEEBC;
    case 710u: goto L_088FEEE8;
    case 711u: goto L_088FEF80;
    case 712u: goto L_088FEFB8;
    case 713u: goto L_088FEFC0;
    case 714u: goto L_088FF01C;
    case 715u: goto L_088FF02C;
    case 716u: goto L_088FF060;
    case 717u: goto L_088FF094;
    case 718u: goto L_088FF0A0;
    case 719u: goto L_088FF0BC;
    case 720u: goto L_088FF0FC;
    case 721u: goto L_088FF108;
    case 722u: goto L_088FF110;
    case 723u: goto L_088FF114;
    case 724u: goto L_088FF16C;
    case 725u: goto L_088FF17C;
    case 726u: goto L_088FF184;
    case 727u: goto L_088FF198;
    case 728u: goto L_088FF1A8;
    case 729u: goto L_088FF1B0;
    case 730u: goto L_088FF1DC;
    case 731u: goto L_088FF1E8;
    case 732u: goto L_088FF1F4;
    case 733u: goto L_088FF204;
    case 734u: goto L_088FF288;
    case 735u: goto L_088FF28C;
    case 736u: goto L_088FF2A8;
    case 737u: goto L_088FF2C0;
    case 738u: goto L_088FF2EC;
    case 739u: goto L_088FF344;
    case 740u: goto L_088FF388;
    case 741u: goto L_088FF390;
    case 742u: goto L_088FF3A0;
    case 743u: goto L_088FF3B4;
    case 744u: goto L_088FF400;
    case 745u: goto L_088FF408;
    case 746u: goto L_088FF418;
    case 747u: goto L_088FF428;
    case 748u: goto L_088FF474;
    case 749u: goto L_088FF47C;
    case 750u: goto L_088FF48C;
    case 751u: goto L_088FF4A0;
    case 752u: goto L_088FF4E4;
    case 753u: goto L_088FF4F0;
    case 754u: goto L_088FF508;
    case 755u: goto L_088FF544;
    case 756u: goto L_088FF5CC;
    case 757u: goto L_088FF5D0;
    case 758u: goto L_088FF5FC;
    case 759u: goto L_088FF640;
    case 760u: goto L_088FF648;
    case 761u: goto L_088FF658;
    case 762u: goto L_088FF66C;
    case 763u: goto L_088FF6B8;
    case 764u: goto L_088FF6C0;
    case 765u: goto L_088FF6D0;
    case 766u: goto L_088FF6E0;
    case 767u: goto L_088FF72C;
    case 768u: goto L_088FF734;
    case 769u: goto L_088FF744;
    case 770u: goto L_088FF758;
    case 771u: goto L_088FF79C;
    case 772u: goto L_088FF7A8;
    case 773u: goto L_088FF7C0;
    case 774u: goto L_088FF800;
    case 775u: goto L_088FF808;
    case 776u: goto L_088FF92C;
    case 777u: goto L_088FF934;
    case 778u: goto L_088FF950;
    case 779u: goto L_088FF968;
    case 780u: goto L_088FF990;
    case 781u: goto L_088FF9F8;
    case 782u: goto L_088FFA04;
    case 783u: goto L_088FFA0C;
    case 784u: goto L_088FFA14;
    case 785u: goto L_088FFA24;
    case 786u: goto L_088FFA30;
    case 787u: goto L_088FFA54;
    case 788u: goto L_088FFA64;
    case 789u: goto L_088FFA84;
    case 790u: goto L_088FFA90;
    case 791u: goto L_088FFAB4;
    case 792u: goto L_088FFAD0;
    case 793u: goto L_088FFADC;
    case 794u: goto L_088FFB00;
    case 795u: goto L_088FFB14;
    case 796u: goto L_088FFB20;
    case 797u: goto L_088FFB40;
    case 798u: goto L_088FFB58;
    case 799u: goto L_088FFB64;
    case 800u: goto L_088FFB88;
    case 801u: goto L_088FFB9C;
    case 802u: goto L_088FFBA8;
    case 803u: goto L_088FFBC8;
    case 804u: goto L_088FFBD8;
    case 805u: goto L_088FFBF4;
    case 806u: goto L_088FFC00;
    case 807u: goto L_088FFC20;
    case 808u: goto L_088FFC34;
    case 809u: goto L_088FFC40;
    case 810u: goto L_088FFC60;
    case 811u: goto L_088FFC78;
    case 812u: goto L_088FFC84;
    case 813u: goto L_088FFCA8;
    case 814u: goto L_088FFCBC;
    case 815u: goto L_088FFCC8;
    case 816u: goto L_088FFCE8;
    case 817u: goto L_088FFCFC;
    case 818u: goto L_088FFD08;
    case 819u: goto L_088FFD28;
    case 820u: goto L_088FFD34;
    case 821u: goto L_088FFD50;
    case 822u: goto L_088FFD6C;
    case 823u: goto L_088FFD88;
    case 824u: goto L_088FFDA4;
    case 825u: goto L_088FFDC0;
    case 826u: goto L_088FFDDC;
    case 827u: goto L_088FFDF8;
    case 828u: goto L_088FFE14;
    case 829u: goto L_088FFE30;
    case 830u: goto L_088FFE4C;
    case 831u: goto L_088FFE68;
    case 832u: goto L_088FFE84;
    case 833u: goto L_088FFEA0;
    case 834u: goto L_088FFEBC;
    case 835u: goto L_088FFED8;
    case 836u: goto L_088FFEF4;
    case 837u: goto L_088FFF10;
    case 838u: goto L_088FFF2C;
    case 839u: goto L_088FFF48;
    case 840u: goto L_088FFF64;
    case 841u: goto L_088FFF80;
    case 842u: goto L_088FFF9C;
    case 843u: goto L_088FFFB8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088FC000:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FC014u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x088FC014u) goto L_088FC014;
    return;
L_088FC014:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC020u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x088FC020u) goto L_088FC020;
    return;
L_088FC020:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC02Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem) && ctx.pc == 0x088FC02Cu) goto L_088FC02C;
    return;
L_088FC02C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC040:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FC05Cu);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x088FC05Cu) goto L_088FC05C;
    return;
L_088FC05C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC06Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FC06Cu) goto L_088FC06C;
    return;
L_088FC06C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC078u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem) && ctx.pc == 0x088FC078u) goto L_088FC078;
    return;
L_088FC078:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC08C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22608));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FC0CCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 284u, 0x0889D588u>(ctx, &aot_mem) && ctx.pc == 0x088FC0CCu) goto L_088FC0CC;
    return;
L_088FC0CC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC0E0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x088FC0E0u) goto L_088FC0E0;
    return;
L_088FC0E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC16C;
      }
      goto L_088FC0E8;
    }
L_088FC0E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC0F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x088FC0F4u) goto L_088FC0F4;
    return;
L_088FC0F4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x088FC108u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 547u, 0x089E69E8u>(ctx, &aot_mem) && ctx.pc == 0x088FC108u) goto L_088FC108;
    return;
L_088FC108:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC15C;
      }
      goto L_088FC110;
    }
L_088FC110:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FC120u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 622u, 0x089E6F54u>(ctx, &aot_mem) && ctx.pc == 0x088FC120u) goto L_088FC120;
    return;
L_088FC120:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC144;
      }
      goto L_088FC128;
    }
L_088FC128:
    ctx.gpr[31] = (0x088FC130u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem) && ctx.pc == 0x088FC130u) goto L_088FC130;
    return;
L_088FC130:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22580));
      if (branch_taken) {
          goto L_088FC1D4;
      }
      goto L_088FC13C;
    }
L_088FC13C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC2FC;
      }
      goto L_088FC144;
    }
L_088FC144:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22596));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC154u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem) && ctx.pc == 0x088FC154u) goto L_088FC154;
    return;
L_088FC154:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC300;
      }
      goto L_088FC15C;
    }
L_088FC15C:
    ctx.gpr[31] = (0x088FC164u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem) && ctx.pc == 0x088FC164u) goto L_088FC164;
    return;
L_088FC164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088FC300;
      }
      goto L_088FC16C;
    }
L_088FC16C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC178u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x088FC178u) goto L_088FC178;
    return;
L_088FC178:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088FC1B8;
      }
      goto L_088FC184;
    }
L_088FC184:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22600));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC194u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 440u, 0x08806F24u>(ctx, &aot_mem) && ctx.pc == 0x088FC194u) goto L_088FC194;
    return;
L_088FC194:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC1A0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem) && ctx.pc == 0x088FC1A0u) goto L_088FC1A0;
    return;
L_088FC1A0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC1B0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x088FC1B0u) goto L_088FC1B0;
    return;
L_088FC1B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC110;
      }
      goto L_088FC1B8;
    }
L_088FC1B8:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088FC1CCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14304));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem) && ctx.pc == 0x088FC1CCu) goto L_088FC1CC;
    return;
L_088FC1CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC300;
      }
      goto L_088FC1D4;
    }
L_088FC1D4:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22572));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22560));
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22548));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22540));
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22528));
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22520));
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22512));
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22500));
    goto L_088FC1FC;
L_088FC1FC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-83));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(35) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC2EC;
      }
      goto L_088FC20C;
    }
L_088FC20C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14168)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC224:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088FC234u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 989u, 0x088FBFF8u>(ctx, &aot_mem) && ctx.pc == 0x088FC234u) goto L_088FC234;
    return;
L_088FC234:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088FC244u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 989u, 0x088FBFF8u>(ctx, &aot_mem) && ctx.pc == 0x088FC244u) goto L_088FC244;
    return;
L_088FC244:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC254u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_088FC040;
L_088FC254:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC264u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 989u, 0x088FBFF8u>(ctx, &aot_mem) && ctx.pc == 0x088FC264u) goto L_088FC264;
    return;
L_088FC264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC2EC;
      }
      goto L_088FC26C;
    }
L_088FC26C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC27Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_088FC040;
L_088FC27C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC2EC;
      }
      goto L_088FC284;
    }
L_088FC284:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC294u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_088FC040;
L_088FC294:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC2EC;
      }
      goto L_088FC29C;
    }
L_088FC29C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC2ACu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 989u, 0x088FBFF8u>(ctx, &aot_mem) && ctx.pc == 0x088FC2ACu) goto L_088FC2AC;
    return;
L_088FC2AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC2BCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 989u, 0x088FBFF8u>(ctx, &aot_mem) && ctx.pc == 0x088FC2BCu) goto L_088FC2BC;
    return;
L_088FC2BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC2EC;
      }
      goto L_088FC2C4;
    }
L_088FC2C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088FC2D4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FC2D4u) goto L_088FC2D4;
    return;
L_088FC2D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC2E0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x088FC2E0u) goto L_088FC2E0;
    return;
L_088FC2E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC2ECu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem) && ctx.pc == 0x088FC2ECu) goto L_088FC2EC;
    return;
L_088FC2EC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FC1FC;
      }
      goto L_088FC2FC;
    }
L_088FC2FC:
    ctx.gpr[2] = (0u | 1u);
    goto L_088FC300;
L_088FC300:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC330:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FC354u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x088FC354u) goto L_088FC354;
    return;
L_088FC354:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x088FC368u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 547u, 0x089E69E8u>(ctx, &aot_mem) && ctx.pc == 0x088FC368u) goto L_088FC368;
    return;
L_088FC368:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC3C0;
      }
      goto L_088FC370;
    }
L_088FC370:
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC380u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x088FC380u) goto L_088FC380;
    return;
L_088FC380:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x088FC394u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 563u, 0x089E6A94u>(ctx, &aot_mem) && ctx.pc == 0x088FC394u) goto L_088FC394;
    return;
L_088FC394:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC3DC;
      }
      goto L_088FC3A0;
    }
L_088FC3A0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088FC3ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x088FC3ACu) goto L_088FC3AC;
    return;
L_088FC3AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC3B8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x088FC3B8u) goto L_088FC3B8;
    return;
L_088FC3B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088FC3E8;
      }
      goto L_088FC3C0;
    }
L_088FC3C0:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088FC3D4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14276));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem) && ctx.pc == 0x088FC3D4u) goto L_088FC3D4;
    return;
L_088FC3D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC3E8;
      }
      goto L_088FC3DC;
    }
L_088FC3DC:
    ctx.gpr[31] = (0x088FC3E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem) && ctx.pc == 0x088FC3E4u) goto L_088FC3E4;
    return;
L_088FC3E4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_088FC3E8;
L_088FC3E8:
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
L_088FC400:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FC420u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x088FC420u) goto L_088FC420;
    return;
L_088FC420:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x088FC434u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 547u, 0x089E69E8u>(ctx, &aot_mem) && ctx.pc == 0x088FC434u) goto L_088FC434;
    return;
L_088FC434:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FC458;
      }
      goto L_088FC43C;
    }
L_088FC43C:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088FC450u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14276));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem) && ctx.pc == 0x088FC450u) goto L_088FC450;
    return;
L_088FC450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC494;
      }
      goto L_088FC458;
    }
L_088FC458:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC464u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 273u, 0x0889D4C0u>(ctx, &aot_mem) && ctx.pc == 0x088FC464u) goto L_088FC464;
    return;
L_088FC464:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC470u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x088FC470u) goto L_088FC470;
    return;
L_088FC470:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x088FC484u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 570u, 0x089E6B48u>(ctx, &aot_mem) && ctx.pc == 0x088FC484u) goto L_088FC484;
    return;
L_088FC484:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC490u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x088FC490u) goto L_088FC490;
    return;
L_088FC490:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_088FC494;
L_088FC494:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC4A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FC4CCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x088FC4CCu) goto L_088FC4CC;
    return;
L_088FC4CC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x088FC4E4u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x088FC4E4u) goto L_088FC4E4;
    return;
L_088FC4E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FC4F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 331u, 0x088068E0u>(ctx, &aot_mem) && ctx.pc == 0x088FC4F0u) goto L_088FC4F0;
    return;
L_088FC4F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FC518;
      }
      goto L_088FC4F8;
    }
L_088FC4F8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088FC520;
      }
      goto L_088FC500;
    }
L_088FC500:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088FC510u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 571u, 0x08807B18u>(ctx, &aot_mem) && ctx.pc == 0x088FC510u) goto L_088FC510;
    return;
L_088FC510:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088FC530;
      }
      goto L_088FC518;
    }
L_088FC518:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FC560;
      }
      goto L_088FC520;
    }
L_088FC520:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088FC52Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 575u, 0x08807B78u>(ctx, &aot_mem) && ctx.pc == 0x088FC52Cu) goto L_088FC52C;
    return;
L_088FC52C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_088FC530;
L_088FC530:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FC540;
      }
      goto L_088FC538;
    }
L_088FC538:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FC560;
      }
      goto L_088FC540;
    }
L_088FC540:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FC54Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x088FC54Cu) goto L_088FC54C;
    return;
L_088FC54C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (0u - ctx.gpr[16]);
    ctx.gpr[31] = (0x088FC55Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem) && ctx.pc == 0x088FC55Cu) goto L_088FC55C;
    return;
L_088FC55C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_088FC560;
L_088FC560:
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
L_088FC578:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FC588u);
    ctx.gpr[5] = (0u | 1u);
    goto L_088FC4A8;
L_088FC588:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC594:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FC5ACu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 273u, 0x0889D4C0u>(ctx, &aot_mem) && ctx.pc == 0x088FC5ACu) goto L_088FC5AC;
    return;
L_088FC5AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC5B8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088FC4A8;
L_088FC5B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC5C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FC5E8u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22704));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 452u, 0x088070BCu>(ctx, &aot_mem) && ctx.pc == 0x088FC5E8u) goto L_088FC5E8;
    return;
L_088FC5E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FC5F4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10000));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 456u, 0x08807148u>(ctx, &aot_mem) && ctx.pc == 0x088FC5F4u) goto L_088FC5F4;
    return;
L_088FC5F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FC600u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x088FC600u) goto L_088FC600;
    return;
L_088FC600:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088FC670;
      }
      goto L_088FC60C;
    }
L_088FC60C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14256));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088FC62Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x088FC62Cu) goto L_088FC62C;
    return;
L_088FC62C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_088FC650;
      }
      goto L_088FC638;
    }
L_088FC638:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FC648u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FC648u) goto L_088FC648;
    return;
L_088FC648:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC658;
      }
      goto L_088FC650;
    }
L_088FC650:
    ctx.gpr[31] = (0x088FC658u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem) && ctx.pc == 0x088FC658u) goto L_088FC658;
    return;
L_088FC658:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x088FC668u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 508u, 0x08807644u>(ctx, &aot_mem) && ctx.pc == 0x088FC668u) goto L_088FC668;
    return;
L_088FC668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC67C;
      }
      goto L_088FC670;
    }
L_088FC670:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FC67Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x088FC67Cu) goto L_088FC67C;
    return;
L_088FC67C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC690:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FC6B8u);
    ctx.gpr[5] = (0u | 99u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem) && ctx.pc == 0x088FC6B8u) goto L_088FC6B8;
    return;
L_088FC6B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC6C4;
      }
      goto L_088FC6C0;
    }
L_088FC6C0:
    ctx.gpr[18] = (0u | 1u);
    goto L_088FC6C4;
L_088FC6C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FC6D0u);
    ctx.gpr[5] = (0u | 114u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem) && ctx.pc == 0x088FC6D0u) goto L_088FC6D0;
    return;
L_088FC6D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC6DC;
      }
      goto L_088FC6D8;
    }
L_088FC6D8:
    ctx.gpr[18] = (ctx.gpr[18] | 2u);
    goto L_088FC6DC;
L_088FC6DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FC6E8u);
    ctx.gpr[5] = (0u | 108u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem) && ctx.pc == 0x088FC6E8u) goto L_088FC6E8;
    return;
L_088FC6E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC6F4;
      }
      goto L_088FC6F0;
    }
L_088FC6F0:
    ctx.gpr[18] = (ctx.gpr[18] | 4u);
    goto L_088FC6F4;
L_088FC6F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088FC700;
      }
      goto L_088FC6FC;
    }
L_088FC6FC:
    ctx.gpr[18] = (ctx.gpr[18] | 8u);
    goto L_088FC700;
L_088FC700:
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
L_088FC71C:
    ctx.gpr[7] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088FC734;
      }
      goto L_088FC728;
    }
L_088FC728:
    ctx.gpr[7] = (0u | 99u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_088FC734;
L_088FC734:
    ctx.gpr[7] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC750;
      }
      goto L_088FC740;
    }
L_088FC740:
    ctx.gpr[7] = (0u | 114u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_088FC750;
L_088FC750:
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC76C;
      }
      goto L_088FC75C;
    }
L_088FC75C:
    ctx.gpr[4] = (0u | 108u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088FC76C;
L_088FC76C:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC77C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FC79Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x088FC79Cu) goto L_088FC79C;
    return;
L_088FC79C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_088FC7CC;
      }
      goto L_088FC7A4;
    }
L_088FC7A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC7B0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x088FC7B0u) goto L_088FC7B0;
    return;
L_088FC7B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088FC7C4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 540u, 0x089E699Cu>(ctx, &aot_mem) && ctx.pc == 0x088FC7C4u) goto L_088FC7C4;
    return;
L_088FC7C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC830;
      }
      goto L_088FC7CC;
    }
L_088FC7CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x088FC7DCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 277u, 0x0889D50Cu>(ctx, &aot_mem) && ctx.pc == 0x088FC7DCu) goto L_088FC7DC;
    return;
L_088FC7DC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC7F0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 300u, 0x0889D684u>(ctx, &aot_mem) && ctx.pc == 0x088FC7F0u) goto L_088FC7F0;
    return;
L_088FC7F0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x088FC808u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x088FC808u) goto L_088FC808;
    return;
L_088FC808:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (2192u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088FC81Cu);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14904));
    goto L_088FC690;
L_088FC81C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088FC830u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 540u, 0x089E699Cu>(ctx, &aot_mem) && ctx.pc == 0x088FC830u) goto L_088FC830;
    return;
L_088FC830:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22704));
    ctx.gpr[31] = (0x088FC83Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 452u, 0x088070BCu>(ctx, &aot_mem) && ctx.pc == 0x088FC83Cu) goto L_088FC83C;
    return;
L_088FC83C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC848u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x088FC848u) goto L_088FC848;
    return;
L_088FC848:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC854u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10000));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem) && ctx.pc == 0x088FC854u) goto L_088FC854;
    return;
L_088FC854:
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
L_088FC870:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FC888u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 545u, 0x089E69D8u>(ctx, &aot_mem) && ctx.pc == 0x088FC888u) goto L_088FC888;
    return;
L_088FC888:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088FC894u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 544u, 0x089E69D0u>(ctx, &aot_mem) && ctx.pc == 0x088FC894u) goto L_088FC894;
    return;
L_088FC894:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2192u << 16u);
      if (branch_taken) {
          goto L_088FC8C4;
      }
      goto L_088FC8A0;
    }
L_088FC8A0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14904));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088FC8C4;
      }
      goto L_088FC8AC;
    }
L_088FC8AC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22448));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC8BCu);
    ctx.gpr[6] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FC8BCu) goto L_088FC8BC;
    return;
L_088FC8BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC8DC;
      }
      goto L_088FC8C4;
    }
L_088FC8C4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22704));
    ctx.gpr[31] = (0x088FC8D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 452u, 0x088070BCu>(ctx, &aot_mem) && ctx.pc == 0x088FC8D0u) goto L_088FC8D0;
    return;
L_088FC8D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC8DCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10000));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 456u, 0x08807148u>(ctx, &aot_mem) && ctx.pc == 0x088FC8DCu) goto L_088FC8DC;
    return;
L_088FC8DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FC8E8u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_088FC71C;
L_088FC8E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC8F4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x088FC8F4u) goto L_088FC8F4;
    return;
L_088FC8F4:
    ctx.gpr[31] = (0x088FC8FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 546u, 0x089E69E0u>(ctx, &aot_mem) && ctx.pc == 0x088FC8FCu) goto L_088FC8FC;
    return;
L_088FC8FC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC90Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FC90Cu) goto L_088FC90C;
    return;
L_088FC90C:
    ctx.gpr[2] = (0u | 3u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC924:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2234u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15532)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22432));
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22420));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[31]);
    goto L_088FC954;
L_088FC954:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088FC960u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 427u, 0x08B55960u>(ctx, &aot_mem) && ctx.pc == 0x088FC960u) goto L_088FC960;
    return;
L_088FC960:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15532)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088FC974u);
    ctx.gpr[5] = (0u | 250u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 401u, 0x08B556B8u>(ctx, &aot_mem) && ctx.pc == 0x088FC974u) goto L_088FC974;
    return;
L_088FC974:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_088FC98C;
      }
      goto L_088FC97C;
    }
L_088FC97C:
    ctx.gpr[31] = (0x088FC984u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x088FC984u) goto L_088FC984;
    return;
L_088FC984:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FC994;
      }
      goto L_088FC98C;
    }
L_088FC98C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088FC9B8;
      }
      goto L_088FC994;
    }
L_088FC994:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC9A0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 538u, 0x0889E534u>(ctx, &aot_mem) && ctx.pc == 0x088FC9A0u) goto L_088FC9A0;
    return;
L_088FC9A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FC9ACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x088FC9ACu) goto L_088FC9AC;
    return;
L_088FC9AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(15532)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088FC954;
      }
      goto L_088FC9B8;
    }
L_088FC9B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC9D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FCA10u);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x088FCA10u) goto L_088FCA10;
    return;
L_088FCA10:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088FCA8C;
      }
      goto L_088FCA18;
    }
L_088FCA18:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22412));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088FCA28u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FCA28u) goto L_088FCA28;
    return;
L_088FCA28:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22404));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22396));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22392));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22388));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[7]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14216));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22380));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[6]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[21] = (2232u << 16u);
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (0u | 67u);
    ctx.gpr[23] = (0u | 116u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22364));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14236));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-14196));
      if (branch_taken) {
          goto L_088FCB1C;
      }
      goto L_088FCA8C;
    }
L_088FCA8C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088FCA98u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 344u, 0x08806984u>(ctx, &aot_mem) && ctx.pc == 0x088FCA98u) goto L_088FCA98;
    return;
L_088FCA98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCB14;
      }
      goto L_088FCAA0;
    }
L_088FCAA0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22408));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088FCAB0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FCAB0u) goto L_088FCAB0;
    return;
L_088FCAB0:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22404));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22396));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22392));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22388));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[7]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14216));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22380));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[6]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[21] = (2232u << 16u);
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (0u | 67u);
    ctx.gpr[23] = (0u | 116u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22364));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14236));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-14196));
      if (branch_taken) {
          goto L_088FCB1C;
      }
      goto L_088FCB14;
    }
L_088FCB14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088FCCF8;
      }
      goto L_088FCB1C;
    }
L_088FCB1C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088FCB2Cu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FCB2Cu) goto L_088FCB2C;
    return;
L_088FCB2C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088FCB30;
L_088FCB30:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088FCB40u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 547u, 0x089E69E8u>(ctx, &aot_mem) && ctx.pc == 0x088FCB40u) goto L_088FCB40;
    return;
L_088FCB40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCCE0;
      }
      goto L_088FCB48;
    }
L_088FCB48:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FCBC4;
      }
      goto L_088FCB54;
    }
L_088FCB54:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCBC4;
      }
      goto L_088FCB5C;
    }
L_088FCB5C:
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FCB70u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 547u, 0x089E69E8u>(ctx, &aot_mem) && ctx.pc == 0x088FCB70u) goto L_088FCB70;
    return;
L_088FCB70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FCB88;
      }
      goto L_088FCB78;
    }
L_088FCB78:
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088FCB80;
L_088FCB80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088FCCD8;
      }
      goto L_088FCB88;
    }
L_088FCB88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088FCB98u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FCB98u) goto L_088FCB98;
    return;
L_088FCB98:
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_088FCB9C;
L_088FCB9C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FCBACu);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 547u, 0x089E69E8u>(ctx, &aot_mem) && ctx.pc == 0x088FCBACu) goto L_088FCBAC;
    return;
L_088FCBAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCB80;
      }
      goto L_088FCBB4;
    }
L_088FCBB4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_088FCB9C;
      }
      goto L_088FCBC4;
    }
L_088FCBC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088FCBD4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FCBD4u) goto L_088FCBD4;
    return;
L_088FCBD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088FCBE4u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 622u, 0x089E6F54u>(ctx, &aot_mem) && ctx.pc == 0x088FCBE4u) goto L_088FCBE4;
    return;
L_088FCBE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088FCBF4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 440u, 0x08806F24u>(ctx, &aot_mem) && ctx.pc == 0x088FCBF4u) goto L_088FCBF4;
    return;
L_088FCBF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088FCC10;
      }
      goto L_088FCC00;
    }
L_088FCC00:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x088FCC10u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 440u, 0x08806F24u>(ctx, &aot_mem) && ctx.pc == 0x088FCC10u) goto L_088FCC10;
    return;
L_088FCC10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 104 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 108 ? 1u : 0u);
      if (branch_taken) {
          goto L_088FCC38;
      }
      goto L_088FCC24;
    }
L_088FCC24:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 102 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FCC60;
      }
      goto L_088FCC30;
    }
L_088FCC30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCC48;
      }
      goto L_088FCC38;
    }
L_088FCC38:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 110 ? 1u : 0u);
      if (branch_taken) {
          goto L_088FCC60;
      }
      goto L_088FCC40;
    }
L_088FCC40:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCC60;
      }
      goto L_088FCC48;
    }
L_088FCC48:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088FCC58u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 440u, 0x08806F24u>(ctx, &aot_mem) && ctx.pc == 0x088FCC58u) goto L_088FCC58;
    return;
L_088FCC58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCCC4;
      }
      goto L_088FCC60;
    }
L_088FCC60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 109u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088FCC88;
      }
      goto L_088FCC74;
    }
L_088FCC74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x088FCC80u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 440u, 0x08806F24u>(ctx, &aot_mem) && ctx.pc == 0x088FCC80u) goto L_088FCC80;
    return;
L_088FCC80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCCC4;
      }
      goto L_088FCC88;
    }
L_088FCC88:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088FCC98;
      }
      goto L_088FCC90;
    }
L_088FCC90:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088FCCB0;
      }
      goto L_088FCC98;
    }
L_088FCC98:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088FCCA8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FCCA8u) goto L_088FCCA8;
    return;
L_088FCCA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCCC4;
      }
      goto L_088FCCB0;
    }
L_088FCCB0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088FCCC4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 440u, 0x08806F24u>(ctx, &aot_mem) && ctx.pc == 0x088FCCC4u) goto L_088FCCC4;
    return;
L_088FCCC4:
    ctx.gpr[31] = (0x088FCCCCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x088FCCCCu) goto L_088FCCCC;
    return;
L_088FCCCC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088FCCD8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 546u, 0x08807904u>(ctx, &aot_mem) && ctx.pc == 0x088FCCD8u) goto L_088FCCD8;
    return;
L_088FCCD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088FCB30;
      }
      goto L_088FCCE0;
    }
L_088FCCE0:
    ctx.gpr[31] = (0x088FCCE8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x088FCCE8u) goto L_088FCCE8;
    return;
L_088FCCE8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088FCCF4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 546u, 0x08807904u>(ctx, &aot_mem) && ctx.pc == 0x088FCCF4u) goto L_088FCCF4;
    return;
L_088FCCF4:
    ctx.gpr[2] = (0u | 1u);
    goto L_088FCCF8;
L_088FCCF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCD28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22628));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FCD4Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-14384));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 328u, 0x0889D80Cu>(ctx, &aot_mem) && ctx.pc == 0x088FCD4Cu) goto L_088FCD4C;
    return;
L_088FCD4C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22360));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FCD5Cu);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FCD5Cu) goto L_088FCD5C;
    return;
L_088FCD5C:
    ctx.gpr[5] = (2192u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088FCD70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13868));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem) && ctx.pc == 0x088FCD70u) goto L_088FCD70;
    return;
L_088FCD70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FCD7Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FCD7Cu) goto L_088FCD7C;
    return;
L_088FCD7C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCD90:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088FCDA0;
      }
      goto L_088FCD9C;
    }
L_088FCD9C:
    ctx.gpr[5] = (0u | 1u);
    goto L_088FCDA0;
L_088FCDA0:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_088FCDCC;
      }
      goto L_088FCDC4;
    }
L_088FCDC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088FCE14;
      }
      goto L_088FCDCC;
    }
L_088FCDCC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(518));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(521)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_088FCDF8;
      }
      goto L_088FCDEC;
    }
L_088FCDEC:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088FCE14;
      }
      goto L_088FCDF8;
    }
L_088FCDF8:
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCE14;
      }
      goto L_088FCE10;
    }
L_088FCE10:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_088FCE14;
L_088FCE14:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCE1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FCE38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x088FCE38u) goto L_088FCE38;
    return;
L_088FCE38:
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FCE50u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x088FCE50u) goto L_088FCE50;
    return;
L_088FCE50:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCE64:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-29156), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCE70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088FCE98;
      }
      goto L_088FCE90;
    }
L_088FCE90:
    ctx.gpr[31] = (0x088FCE98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x088FCE98u) goto L_088FCE98;
    return;
L_088FCE98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCEAC;
      }
      goto L_088FCEA8;
    }
L_088FCEA8:
    ctx.gpr[17] = (0u | 1u);
    goto L_088FCEAC;
L_088FCEAC:
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
          goto L_088FCED8;
      }
      goto L_088FCED0;
    }
L_088FCED0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088FCF20;
      }
      goto L_088FCED8;
    }
L_088FCED8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088FCF04;
      }
      goto L_088FCEF8;
    }
L_088FCEF8:
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088FCF20;
      }
      goto L_088FCF04;
    }
L_088FCF04:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCF20;
      }
      goto L_088FCF1C;
    }
L_088FCF1C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_088FCF20;
L_088FCF20:
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
L_088FCF38:
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[6] & 2u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088FCF5C;
      }
      goto L_088FCF58;
    }
L_088FCF58:
    ctx.gpr[5] = (0u | 1u);
    goto L_088FCF5C;
L_088FCF5C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_088FCF88;
      }
      goto L_088FCF80;
    }
L_088FCF80:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088FCFD0;
      }
      goto L_088FCF88;
    }
L_088FCF88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(518));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(521)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_088FCFB4;
      }
      goto L_088FCFA8;
    }
L_088FCFA8:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088FCFD0;
      }
      goto L_088FCFB4;
    }
L_088FCFB4:
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCFD0;
      }
      goto L_088FCFCC;
    }
L_088FCFCC:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_088FCFD0;
L_088FCFD0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCFD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FCFFCu);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem) && ctx.pc == 0x088FCFFCu) goto L_088FCFFC;
    return;
L_088FCFFC:
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FD014u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x088FD014u) goto L_088FD014;
    return;
L_088FD014:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD028:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]);
    rt.memory().aot_store_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[6]);
    rt.memory().aot_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD068:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x088FD090u);
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FD090u) goto L_088FD090;
    return;
L_088FD090:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD09C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088FD0BCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x088FD0BCu) goto L_088FD0BC;
    return;
L_088FD0BC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088FD0C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x088FD0C8u) goto L_088FD0C8;
    return;
L_088FD0C8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    ctx.gpr[17] = (2236u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32304));
      if (branch_taken) {
          goto L_088FD104;
      }
      goto L_088FD0D8;
    }
L_088FD0D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FD0E4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 355u, 0x08931D08u>(ctx, &aot_mem) && ctx.pc == 0x088FD0E4u) goto L_088FD0E4;
    return;
L_088FD0E4:
    ctx.gpr[5] = (ctx.gpr[2] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[2] >> 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[2] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[31] = (0x088FD104u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088FD104u) goto L_088FD104;
    return;
L_088FD104:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088FD114u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem) && ctx.pc == 0x088FD114u) goto L_088FD114;
    return;
L_088FD114:
    ctx.gpr[31] = (0x088FD11Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 91u, 0x08A1C8D0u>(ctx, &aot_mem) && ctx.pc == 0x088FD11Cu) goto L_088FD11C;
    return;
L_088FD11C:
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
L_088FD138:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088FD158u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x088FD158u) goto L_088FD158;
    return;
L_088FD158:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088FD164u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x088FD164u) goto L_088FD164;
    return;
L_088FD164:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    ctx.gpr[17] = (2236u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(32304));
      if (branch_taken) {
          goto L_088FD1A0;
      }
      goto L_088FD174;
    }
L_088FD174:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FD180u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 355u, 0x08931D08u>(ctx, &aot_mem) && ctx.pc == 0x088FD180u) goto L_088FD180;
    return;
L_088FD180:
    ctx.gpr[5] = (ctx.gpr[2] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[2] >> 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[2] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[31] = (0x088FD1A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088FD1A0u) goto L_088FD1A0;
    return;
L_088FD1A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088FD1B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem) && ctx.pc == 0x088FD1B0u) goto L_088FD1B0;
    return;
L_088FD1B0:
    ctx.gpr[31] = (0x088FD1B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 91u, 0x08A1C8D0u>(ctx, &aot_mem) && ctx.pc == 0x088FD1B8u) goto L_088FD1B8;
    return;
L_088FD1B8:
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
L_088FD1D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x088FD1F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 53u, 0x08A1C640u>(ctx, &aot_mem) && ctx.pc == 0x088FD1F0u) goto L_088FD1F0;
    return;
L_088FD1F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FD1FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x088FD1FCu) goto L_088FD1FC;
    return;
L_088FD1FC:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD210:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(7));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(11));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x088FD2ACu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 155u, 0x08A1CF5Cu>(ctx, &aot_mem) && ctx.pc == 0x088FD2ACu) goto L_088FD2AC;
    return;
L_088FD2AC:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(15));
    ctx.gpr[18] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[18]));
    ctx.gpr[18] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(19));
    ctx.gpr[17] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[17]));
    ctx.gpr[17] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(23));
    ctx.gpr[16] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[16]));
    ctx.gpr[16] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088FD2FCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 261u, 0x08A1D580u>(ctx, &aot_mem) && ctx.pc == 0x088FD2FCu) goto L_088FD2FC;
    return;
L_088FD2FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD320:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088FD344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x088FD344u) goto L_088FD344;
    return;
L_088FD344:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088FD360u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem) && ctx.pc == 0x088FD360u) goto L_088FD360;
    return;
L_088FD360:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088FD378u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem) && ctx.pc == 0x088FD378u) goto L_088FD378;
    return;
L_088FD378:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088FD384u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_088FD028;
L_088FD384:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x088FD390u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088FD028;
L_088FD390:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(107), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(110), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(115), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(118), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(119), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(121), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(122), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(123), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(125), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(126), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(127), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(38))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(39))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (0u | 27u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8748)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(83));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(107))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(108))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(110))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(111))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(112))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(114))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(115))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(116))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(118))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(95));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(119))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(120))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(122))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(123))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(124))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(126))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(127))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(128))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(130))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD56C;
      }
      goto L_088FD544;
    }
L_088FD544:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FD550u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 276u, 0x08B15624u>(ctx, &aot_mem) && ctx.pc == 0x088FD550u) goto L_088FD550;
    return;
L_088FD550:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x088FD564u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x088FD564u) goto L_088FD564;
    return;
L_088FD564:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088FD588;
      }
      goto L_088FD56C;
    }
L_088FD56C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FD584u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088FD210;
L_088FD584:
    ctx.gpr[2] = (0u | 1u);
    goto L_088FD588;
L_088FD588:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD5A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (2236u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
      if (branch_taken) {
          goto L_088FD5D4;
      }
      goto L_088FD5C4;
    }
L_088FD5C4:
    ctx.gpr[31] = (0x088FD5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 125u, 0x08A1CC44u>(ctx, &aot_mem) && ctx.pc == 0x088FD5CCu) goto L_088FD5CC;
    return;
L_088FD5CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FD5DC;
      }
      goto L_088FD5D4;
    }
L_088FD5D4:
    ctx.gpr[31] = (0x088FD5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 110u, 0x08A1CA0Cu>(ctx, &aot_mem) && ctx.pc == 0x088FD5DCu) goto L_088FD5DC;
    return;
L_088FD5DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD5E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088FD610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x088FD610u) goto L_088FD610;
    return;
L_088FD610:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FD628u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x088FD628u) goto L_088FD628;
    return;
L_088FD628:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) && ctx.fpr[0] == ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
        goto L_088FD640;
    }
    goto L_088FD640;
L_088FD640:
    ctx.gpr[4] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8749)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD69C;
      }
      goto L_088FD67C;
    }
L_088FD67C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FD688u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 276u, 0x08B15624u>(ctx, &aot_mem) && ctx.pc == 0x088FD688u) goto L_088FD688;
    return;
L_088FD688:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FD69Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x088FD69Cu) goto L_088FD69C;
    return;
L_088FD69C:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FD6B4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_088FD5A4;
L_088FD6B4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD6D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (2237u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8748))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x088FD708u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x088FD708u) goto L_088FD708;
    return;
L_088FD708:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088FD740;
      }
      goto L_088FD714;
    }
L_088FD714:
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2192u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11760));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088FD740;
L_088FD740:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088FD754;
      }
      goto L_088FD748;
    }
L_088FD748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088FD754;
L_088FD754:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FD764u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x088FD764u) goto L_088FD764;
    return;
L_088FD764:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FD788;
      }
      goto L_088FD770;
    }
L_088FD770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088FD788;
      }
      goto L_088FD780;
    }
L_088FD780:
    ctx.gpr[31] = (0x088FD788u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x088FD788u) goto L_088FD788;
    return;
L_088FD788:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8749))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x088FD798u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x088FD798u) goto L_088FD798;
    return;
L_088FD798:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_088FD7CC;
      }
      goto L_088FD7A4;
    }
L_088FD7A4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2192u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10844));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088FD7CC;
L_088FD7CC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088FD7E0;
      }
      goto L_088FD7D4;
    }
L_088FD7D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088FD7E0;
L_088FD7E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FD7F0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x088FD7F0u) goto L_088FD7F0;
    return;
L_088FD7F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FD814;
      }
      goto L_088FD7FC;
    }
L_088FD7FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088FD814;
      }
      goto L_088FD80C;
    }
L_088FD80C:
    ctx.gpr[31] = (0x088FD814u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x088FD814u) goto L_088FD814;
    return;
L_088FD814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
        goto L_088FD82C;
    }
    goto L_088FD820;
L_088FD820:
    ctx.gpr[31] = (0x088FD828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x088FD828u) goto L_088FD828;
    return;
L_088FD828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    goto L_088FD82C;
L_088FD82C:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14024));
    ctx.gpr[31] = (0x088FD83Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 266u, 0x08885220u>(ctx, &aot_mem) && ctx.pc == 0x088FD83Cu) goto L_088FD83C;
    return;
L_088FD83C:
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
L_088FD858:
    ctx.gpr[4] = (0u | 21u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8748), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8748)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30144));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 22u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8749), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22224));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8749)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD89C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD8D8;
      }
      goto L_088FD8D0;
    }
L_088FD8D0:
    ctx.gpr[31] = (0x088FD8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x088FD8D8u) goto L_088FD8D8;
    return;
L_088FD8D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088FD8E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem) && ctx.pc == 0x088FD8E8u) goto L_088FD8E8;
    return;
L_088FD8E8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22192));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FD8F8u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FD8F8u) goto L_088FD8F8;
    return;
L_088FD8F8:
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088FD918u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 305u, 0x08931A34u>(ctx, &aot_mem) && ctx.pc == 0x088FD918u) goto L_088FD918;
    return;
L_088FD918:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FD924u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FD924u) goto L_088FD924;
    return;
L_088FD924:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22188));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FD934u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FD934u) goto L_088FD934;
    return;
L_088FD934:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088FD948u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 305u, 0x08931A34u>(ctx, &aot_mem) && ctx.pc == 0x088FD948u) goto L_088FD948;
    return;
L_088FD948:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FD954u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FD954u) goto L_088FD954;
    return;
L_088FD954:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22180));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FD964u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FD964u) goto L_088FD964;
    return;
L_088FD964:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088FD978u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 305u, 0x08931A34u>(ctx, &aot_mem) && ctx.pc == 0x088FD978u) goto L_088FD978;
    return;
L_088FD978:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FD984u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FD984u) goto L_088FD984;
    return;
L_088FD984:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22172));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FD994u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FD994u) goto L_088FD994;
    return;
L_088FD994:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088FD9A8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 305u, 0x08931A34u>(ctx, &aot_mem) && ctx.pc == 0x088FD9A8u) goto L_088FD9A8;
    return;
L_088FD9A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FD9B4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FD9B4u) goto L_088FD9B4;
    return;
L_088FD9B4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22164));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FD9C4u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FD9C4u) goto L_088FD9C4;
    return;
L_088FD9C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088FD9D8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 305u, 0x08931A34u>(ctx, &aot_mem) && ctx.pc == 0x088FD9D8u) goto L_088FD9D8;
    return;
L_088FD9D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FD9E4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FD9E4u) goto L_088FD9E4;
    return;
L_088FD9E4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22156));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FD9F4u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FD9F4u) goto L_088FD9F4;
    return;
L_088FD9F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088FDA08u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 305u, 0x08931A34u>(ctx, &aot_mem) && ctx.pc == 0x088FDA08u) goto L_088FDA08;
    return;
L_088FDA08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDA14u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDA14u) goto L_088FDA14;
    return;
L_088FDA14:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22148));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDA24u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDA24u) goto L_088FDA24;
    return;
L_088FDA24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088FDA38u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 305u, 0x08931A34u>(ctx, &aot_mem) && ctx.pc == 0x088FDA38u) goto L_088FDA38;
    return;
L_088FDA38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDA44u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDA44u) goto L_088FDA44;
    return;
L_088FDA44:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22140));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDA54u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDA54u) goto L_088FDA54;
    return;
L_088FDA54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088FDA68u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 305u, 0x08931A34u>(ctx, &aot_mem) && ctx.pc == 0x088FDA68u) goto L_088FDA68;
    return;
L_088FDA68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDA74u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDA74u) goto L_088FDA74;
    return;
L_088FDA74:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22132));
    ctx.gpr[31] = (0x088FDA80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x088FDA80u) goto L_088FDA80;
    return;
L_088FDA80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDA8Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem) && ctx.pc == 0x088FDA8Cu) goto L_088FDA8C;
    return;
L_088FDA8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDA98u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDA98u) goto L_088FDA98;
    return;
L_088FDA98:
    ctx.gpr[31] = (0x088FDAA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem) && ctx.pc == 0x088FDAA0u) goto L_088FDAA0;
    return;
L_088FDAA0:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22124));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FDAB4u);
    ctx.gpr[6] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDAB4u) goto L_088FDAB4;
    return;
L_088FDAB4:
    ctx.gpr[5] = (16896u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDAC4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDAC4u) goto L_088FDAC4;
    return;
L_088FDAC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDAD0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDAD0u) goto L_088FDAD0;
    return;
L_088FDAD0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22108));
    ctx.gpr[31] = (0x088FDADCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x088FDADCu) goto L_088FDADC;
    return;
L_088FDADC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDAE8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem) && ctx.pc == 0x088FDAE8u) goto L_088FDAE8;
    return;
L_088FDAE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDAF4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDAF4u) goto L_088FDAF4;
    return;
L_088FDAF4:
    ctx.gpr[31] = (0x088FDAFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem) && ctx.pc == 0x088FDAFCu) goto L_088FDAFC;
    return;
L_088FDAFC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22100));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDB0Cu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDB0Cu) goto L_088FDB0C;
    return;
L_088FDB0C:
    ctx.gpr[5] = (50283u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDB20u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDB20u) goto L_088FDB20;
    return;
L_088FDB20:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDB2Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDB2Cu) goto L_088FDB2C;
    return;
L_088FDB2C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22092));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDB3Cu);
    ctx.gpr[6] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDB3Cu) goto L_088FDB3C;
    return;
L_088FDB3C:
    ctx.gpr[5] = (17224u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDB4Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDB4Cu) goto L_088FDB4C;
    return;
L_088FDB4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDB58u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDB58u) goto L_088FDB58;
    return;
L_088FDB58:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22080));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDB68u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDB68u) goto L_088FDB68;
    return;
L_088FDB68:
    ctx.gpr[5] = (17223u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDB78u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDB78u) goto L_088FDB78;
    return;
L_088FDB78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDB84u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDB84u) goto L_088FDB84;
    return;
L_088FDB84:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22072));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDB94u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDB94u) goto L_088FDB94;
    return;
L_088FDB94:
    ctx.gpr[5] = (17278u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDBA4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDBA4u) goto L_088FDBA4;
    return;
L_088FDBA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDBB0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDBB0u) goto L_088FDBB0;
    return;
L_088FDBB0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22064));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDBC0u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDBC0u) goto L_088FDBC0;
    return;
L_088FDBC0:
    ctx.gpr[5] = (17200u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDBD0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDBD0u) goto L_088FDBD0;
    return;
L_088FDBD0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDBDCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDBDCu) goto L_088FDBDC;
    return;
L_088FDBDC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22052));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDBECu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDBECu) goto L_088FDBEC;
    return;
L_088FDBEC:
    ctx.gpr[5] = (17235u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDBFCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDBFCu) goto L_088FDBFC;
    return;
L_088FDBFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDC08u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDC08u) goto L_088FDC08;
    return;
L_088FDC08:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22040));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDC18u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDC18u) goto L_088FDC18;
    return;
L_088FDC18:
    ctx.gpr[5] = (17233u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDC28u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDC28u) goto L_088FDC28;
    return;
L_088FDC28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDC34u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDC34u) goto L_088FDC34;
    return;
L_088FDC34:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22032));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDC44u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDC44u) goto L_088FDC44;
    return;
L_088FDC44:
    ctx.gpr[5] = (17225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDC54u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDC54u) goto L_088FDC54;
    return;
L_088FDC54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDC60u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDC60u) goto L_088FDC60;
    return;
L_088FDC60:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22024));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDC70u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDC70u) goto L_088FDC70;
    return;
L_088FDC70:
    ctx.gpr[5] = (17287u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDC80u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDC80u) goto L_088FDC80;
    return;
L_088FDC80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDC8Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDC8Cu) goto L_088FDC8C;
    return;
L_088FDC8C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22012));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDC9Cu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDC9Cu) goto L_088FDC9C;
    return;
L_088FDC9C:
    ctx.gpr[5] = (17201u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDCACu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDCACu) goto L_088FDCAC;
    return;
L_088FDCAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDCB8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDCB8u) goto L_088FDCB8;
    return;
L_088FDCB8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-22004));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDCC8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDCC8u) goto L_088FDCC8;
    return;
L_088FDCC8:
    ctx.gpr[5] = (17234u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDCD8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDCD8u) goto L_088FDCD8;
    return;
L_088FDCD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDCE4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDCE4u) goto L_088FDCE4;
    return;
L_088FDCE4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21996));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDCF4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDCF4u) goto L_088FDCF4;
    return;
L_088FDCF4:
    ctx.gpr[5] = (17262u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDD04u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDD04u) goto L_088FDD04;
    return;
L_088FDD04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDD10u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDD10u) goto L_088FDD10;
    return;
L_088FDD10:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21988));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDD20u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDD20u) goto L_088FDD20;
    return;
L_088FDD20:
    ctx.gpr[5] = (50288u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDD30u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDD30u) goto L_088FDD30;
    return;
L_088FDD30:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDD3Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDD3Cu) goto L_088FDD3C;
    return;
L_088FDD3C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21980));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDD4Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDD4Cu) goto L_088FDD4C;
    return;
L_088FDD4C:
    ctx.gpr[5] = (17247u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDD5Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDD5Cu) goto L_088FDD5C;
    return;
L_088FDD5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDD68u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDD68u) goto L_088FDD68;
    return;
L_088FDD68:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21968));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDD78u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDD78u) goto L_088FDD78;
    return;
L_088FDD78:
    ctx.gpr[5] = (17216u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDD88u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDD88u) goto L_088FDD88;
    return;
L_088FDD88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDD94u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDD94u) goto L_088FDD94;
    return;
L_088FDD94:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21956));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDDA4u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDDA4u) goto L_088FDDA4;
    return;
L_088FDDA4:
    ctx.gpr[5] = (17241u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDDB4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDDB4u) goto L_088FDDB4;
    return;
L_088FDDB4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDDC0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDDC0u) goto L_088FDDC0;
    return;
L_088FDDC0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21948));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDDD0u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDDD0u) goto L_088FDDD0;
    return;
L_088FDDD0:
    ctx.gpr[5] = (17204u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDDE0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDDE0u) goto L_088FDDE0;
    return;
L_088FDDE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDDECu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDDECu) goto L_088FDDEC;
    return;
L_088FDDEC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21940));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDDFCu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDDFCu) goto L_088FDDFC;
    return;
L_088FDDFC:
    ctx.gpr[5] = (50289u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDE10u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDE10u) goto L_088FDE10;
    return;
L_088FDE10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDE1Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDE1Cu) goto L_088FDE1C;
    return;
L_088FDE1C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21932));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDE2Cu);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDE2Cu) goto L_088FDE2C;
    return;
L_088FDE2C:
    ctx.gpr[5] = (17264u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDE3Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDE3Cu) goto L_088FDE3C;
    return;
L_088FDE3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDE48u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDE48u) goto L_088FDE48;
    return;
L_088FDE48:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21920));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDE58u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDE58u) goto L_088FDE58;
    return;
L_088FDE58:
    ctx.gpr[5] = (17199u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDE68u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDE68u) goto L_088FDE68;
    return;
L_088FDE68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDE74u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDE74u) goto L_088FDE74;
    return;
L_088FDE74:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21912));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDE84u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDE84u) goto L_088FDE84;
    return;
L_088FDE84:
    ctx.gpr[5] = (17207u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDE94u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDE94u) goto L_088FDE94;
    return;
L_088FDE94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDEA0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDEA0u) goto L_088FDEA0;
    return;
L_088FDEA0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21904));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDEB0u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDEB0u) goto L_088FDEB0;
    return;
L_088FDEB0:
    ctx.gpr[5] = (17230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDEC0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDEC0u) goto L_088FDEC0;
    return;
L_088FDEC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDECCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDECCu) goto L_088FDECC;
    return;
L_088FDECC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21892));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDEDCu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDEDCu) goto L_088FDEDC;
    return;
L_088FDEDC:
    ctx.gpr[5] = (17248u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDEECu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDEECu) goto L_088FDEEC;
    return;
L_088FDEEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDEF8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDEF8u) goto L_088FDEF8;
    return;
L_088FDEF8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21884));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDF08u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDF08u) goto L_088FDF08;
    return;
L_088FDF08:
    ctx.gpr[5] = (50286u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDF1Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDF1Cu) goto L_088FDF1C;
    return;
L_088FDF1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDF28u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDF28u) goto L_088FDF28;
    return;
L_088FDF28:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21876));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDF38u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDF38u) goto L_088FDF38;
    return;
L_088FDF38:
    ctx.gpr[5] = (50285u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 49152u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDF4Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDF4Cu) goto L_088FDF4C;
    return;
L_088FDF4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDF58u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDF58u) goto L_088FDF58;
    return;
L_088FDF58:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21868));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDF68u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDF68u) goto L_088FDF68;
    return;
L_088FDF68:
    ctx.gpr[5] = (50288u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDF7Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDF7Cu) goto L_088FDF7C;
    return;
L_088FDF7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDF88u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDF88u) goto L_088FDF88;
    return;
L_088FDF88:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21860));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDF98u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDF98u) goto L_088FDF98;
    return;
L_088FDF98:
    ctx.gpr[5] = (50283u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDFA8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDFA8u) goto L_088FDFA8;
    return;
L_088FDFA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDFB4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDFB4u) goto L_088FDFB4;
    return;
L_088FDFB4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21852));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDFC4u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDFC4u) goto L_088FDFC4;
    return;
L_088FDFC4:
    ctx.gpr[5] = (50282u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDFD8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FDFD8u) goto L_088FDFD8;
    return;
L_088FDFD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDFE4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FDFE4u) goto L_088FDFE4;
    return;
L_088FDFE4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21844));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FDFF4u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FDFF4u) goto L_088FDFF4;
    return;
L_088FDFF4:
    ctx.gpr[5] = (50282u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE004u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE004u) goto L_088FE004;
    return;
L_088FE004:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE010u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE010u) goto L_088FE010;
    return;
L_088FE010:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21832));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE020u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE020u) goto L_088FE020;
    return;
L_088FE020:
    ctx.gpr[5] = (50284u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 49152u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE034u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE034u) goto L_088FE034;
    return;
L_088FE034:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE040u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE040u) goto L_088FE040;
    return;
L_088FE040:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21824));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE050u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE050u) goto L_088FE050;
    return;
L_088FE050:
    ctx.gpr[5] = (50284u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE064u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE064u) goto L_088FE064;
    return;
L_088FE064:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE070u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE070u) goto L_088FE070;
    return;
L_088FE070:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21816));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE080u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE080u) goto L_088FE080;
    return;
L_088FE080:
    ctx.gpr[5] = (17267u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE090u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE090u) goto L_088FE090;
    return;
L_088FE090:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE09Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE09Cu) goto L_088FE09C;
    return;
L_088FE09C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21808));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE0ACu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE0ACu) goto L_088FE0AC;
    return;
L_088FE0AC:
    ctx.gpr[5] = (50283u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE0C0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE0C0u) goto L_088FE0C0;
    return;
L_088FE0C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE0CCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE0CCu) goto L_088FE0CC;
    return;
L_088FE0CC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21800));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE0DCu);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE0DCu) goto L_088FE0DC;
    return;
L_088FE0DC:
    ctx.gpr[5] = (50284u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE0ECu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE0ECu) goto L_088FE0EC;
    return;
L_088FE0EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE0F8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE0F8u) goto L_088FE0F8;
    return;
L_088FE0F8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21792));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE108u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE108u) goto L_088FE108;
    return;
L_088FE108:
    ctx.gpr[5] = (50285u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE11Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE11Cu) goto L_088FE11C;
    return;
L_088FE11C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE128u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE128u) goto L_088FE128;
    return;
L_088FE128:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21784));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE138u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE138u) goto L_088FE138;
    return;
L_088FE138:
    ctx.gpr[5] = (50284u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE14Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE14Cu) goto L_088FE14C;
    return;
L_088FE14C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE158u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE158u) goto L_088FE158;
    return;
L_088FE158:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21776));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE168u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE168u) goto L_088FE168;
    return;
L_088FE168:
    ctx.gpr[5] = (50286u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE17Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE17Cu) goto L_088FE17C;
    return;
L_088FE17C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE188u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE188u) goto L_088FE188;
    return;
L_088FE188:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21768));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE198u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE198u) goto L_088FE198;
    return;
L_088FE198:
    ctx.gpr[5] = (50286u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE1A8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE1A8u) goto L_088FE1A8;
    return;
L_088FE1A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE1B4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE1B4u) goto L_088FE1B4;
    return;
L_088FE1B4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21756));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE1C4u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE1C4u) goto L_088FE1C4;
    return;
L_088FE1C4:
    ctx.gpr[5] = (50285u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE1D4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE1D4u) goto L_088FE1D4;
    return;
L_088FE1D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE1E0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE1E0u) goto L_088FE1E0;
    return;
L_088FE1E0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21748));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE1F0u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE1F0u) goto L_088FE1F0;
    return;
L_088FE1F0:
    ctx.gpr[5] = (17255u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE204u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE204u) goto L_088FE204;
    return;
L_088FE204:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE210u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE210u) goto L_088FE210;
    return;
L_088FE210:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21740));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE220u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE220u) goto L_088FE220;
    return;
L_088FE220:
    ctx.gpr[5] = (17236u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE230u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE230u) goto L_088FE230;
    return;
L_088FE230:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE23Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE23Cu) goto L_088FE23C;
    return;
L_088FE23C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21732));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE24Cu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE24Cu) goto L_088FE24C;
    return;
L_088FE24C:
    ctx.gpr[5] = (17253u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE25Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE25Cu) goto L_088FE25C;
    return;
L_088FE25C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE268u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE268u) goto L_088FE268;
    return;
L_088FE268:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21724));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE278u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE278u) goto L_088FE278;
    return;
L_088FE278:
    ctx.gpr[5] = (17256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE288u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE288u) goto L_088FE288;
    return;
L_088FE288:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE294u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE294u) goto L_088FE294;
    return;
L_088FE294:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21716));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE2A4u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE2A4u) goto L_088FE2A4;
    return;
L_088FE2A4:
    ctx.gpr[5] = (17229u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE2B4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE2B4u) goto L_088FE2B4;
    return;
L_088FE2B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE2C0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE2C0u) goto L_088FE2C0;
    return;
L_088FE2C0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21704));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE2D0u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE2D0u) goto L_088FE2D0;
    return;
L_088FE2D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE2DCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE2DCu) goto L_088FE2DC;
    return;
L_088FE2DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE2E8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE2E8u) goto L_088FE2E8;
    return;
L_088FE2E8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21696));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE2F8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE2F8u) goto L_088FE2F8;
    return;
L_088FE2F8:
    ctx.gpr[5] = (17252u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE308u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE308u) goto L_088FE308;
    return;
L_088FE308:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE314u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE314u) goto L_088FE314;
    return;
L_088FE314:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21688));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE324u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE324u) goto L_088FE324;
    return;
L_088FE324:
    ctx.gpr[5] = (17257u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE334u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE334u) goto L_088FE334;
    return;
L_088FE334:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE340u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE340u) goto L_088FE340;
    return;
L_088FE340:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21680));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE350u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE350u) goto L_088FE350;
    return;
L_088FE350:
    ctx.gpr[5] = (17281u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE360u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE360u) goto L_088FE360;
    return;
L_088FE360:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE36Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE36Cu) goto L_088FE36C;
    return;
L_088FE36C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21668));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE37Cu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE37Cu) goto L_088FE37C;
    return;
L_088FE37C:
    ctx.gpr[5] = (17289u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE390u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE390u) goto L_088FE390;
    return;
L_088FE390:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE39Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE39Cu) goto L_088FE39C;
    return;
L_088FE39C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21660));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE3ACu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE3ACu) goto L_088FE3AC;
    return;
L_088FE3AC:
    ctx.gpr[5] = (17282u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE3C0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE3C0u) goto L_088FE3C0;
    return;
L_088FE3C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE3CCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE3CCu) goto L_088FE3CC;
    return;
L_088FE3CC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21648));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE3DCu);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE3DCu) goto L_088FE3DC;
    return;
L_088FE3DC:
    ctx.gpr[5] = (17217u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE3ECu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE3ECu) goto L_088FE3EC;
    return;
L_088FE3EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE3F8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE3F8u) goto L_088FE3F8;
    return;
L_088FE3F8:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21636));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088FE40Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE40Cu) goto L_088FE40C;
    return;
L_088FE40C:
    ctx.gpr[5] = (17270u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE41Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE41Cu) goto L_088FE41C;
    return;
L_088FE41C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE428u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE428u) goto L_088FE428;
    return;
L_088FE428:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21628));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE438u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE438u) goto L_088FE438;
    return;
L_088FE438:
    ctx.gpr[5] = (17221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE448u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE448u) goto L_088FE448;
    return;
L_088FE448:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE454u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE454u) goto L_088FE454;
    return;
L_088FE454:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21620));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE464u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE464u) goto L_088FE464;
    return;
L_088FE464:
    ctx.gpr[5] = (17210u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE474u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE474u) goto L_088FE474;
    return;
L_088FE474:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE480u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE480u) goto L_088FE480;
    return;
L_088FE480:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21612));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE490u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE490u) goto L_088FE490;
    return;
L_088FE490:
    ctx.gpr[5] = (17251u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE4A0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE4A0u) goto L_088FE4A0;
    return;
L_088FE4A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE4ACu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE4ACu) goto L_088FE4AC;
    return;
L_088FE4AC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21600));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE4BCu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE4BCu) goto L_088FE4BC;
    return;
L_088FE4BC:
    ctx.gpr[5] = (17231u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE4CCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE4CCu) goto L_088FE4CC;
    return;
L_088FE4CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE4D8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE4D8u) goto L_088FE4D8;
    return;
L_088FE4D8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21592));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE4E8u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE4E8u) goto L_088FE4E8;
    return;
L_088FE4E8:
    ctx.gpr[5] = (17258u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE4F8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE4F8u) goto L_088FE4F8;
    return;
L_088FE4F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE504u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE504u) goto L_088FE504;
    return;
L_088FE504:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21580));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE514u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE514u) goto L_088FE514;
    return;
L_088FE514:
    ctx.gpr[5] = (17218u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE524u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE524u) goto L_088FE524;
    return;
L_088FE524:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE530u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE530u) goto L_088FE530;
    return;
L_088FE530:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21568));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE540u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE540u) goto L_088FE540;
    return;
L_088FE540:
    ctx.gpr[5] = (17280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE554u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE554u) goto L_088FE554;
    return;
L_088FE554:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE560u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE560u) goto L_088FE560;
    return;
L_088FE560:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21560));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE570u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE570u) goto L_088FE570;
    return;
L_088FE570:
    ctx.gpr[5] = (17291u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE580u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE580u) goto L_088FE580;
    return;
L_088FE580:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE58Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE58Cu) goto L_088FE58C;
    return;
L_088FE58C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21548));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE59Cu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE59Cu) goto L_088FE59C;
    return;
L_088FE59C:
    ctx.gpr[5] = (17266u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE5ACu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE5ACu) goto L_088FE5AC;
    return;
L_088FE5AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE5B8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE5B8u) goto L_088FE5B8;
    return;
L_088FE5B8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21540));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE5C8u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE5C8u) goto L_088FE5C8;
    return;
L_088FE5C8:
    ctx.gpr[5] = (17208u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE5D8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE5D8u) goto L_088FE5D8;
    return;
L_088FE5D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE5E4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE5E4u) goto L_088FE5E4;
    return;
L_088FE5E4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21532));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE5F4u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE5F4u) goto L_088FE5F4;
    return;
L_088FE5F4:
    ctx.gpr[5] = (17284u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE608u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE608u) goto L_088FE608;
    return;
L_088FE608:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE614u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE614u) goto L_088FE614;
    return;
L_088FE614:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21524));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE624u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE624u) goto L_088FE624;
    return;
L_088FE624:
    ctx.gpr[5] = (17281u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE638u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE638u) goto L_088FE638;
    return;
L_088FE638:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE644u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE644u) goto L_088FE644;
    return;
L_088FE644:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21516));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE654u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE654u) goto L_088FE654;
    return;
L_088FE654:
    ctx.gpr[5] = (17271u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE664u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE664u) goto L_088FE664;
    return;
L_088FE664:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE670u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE670u) goto L_088FE670;
    return;
L_088FE670:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21508));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE680u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE680u) goto L_088FE680;
    return;
L_088FE680:
    ctx.gpr[5] = (17215u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE690u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE690u) goto L_088FE690;
    return;
L_088FE690:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE69Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE69Cu) goto L_088FE69C;
    return;
L_088FE69C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21500));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE6ACu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE6ACu) goto L_088FE6AC;
    return;
L_088FE6AC:
    ctx.gpr[5] = (17254u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE6BCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE6BCu) goto L_088FE6BC;
    return;
L_088FE6BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE6C8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE6C8u) goto L_088FE6C8;
    return;
L_088FE6C8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21492));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE6D8u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE6D8u) goto L_088FE6D8;
    return;
L_088FE6D8:
    ctx.gpr[5] = (17222u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE6E8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE6E8u) goto L_088FE6E8;
    return;
L_088FE6E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE6F4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE6F4u) goto L_088FE6F4;
    return;
L_088FE6F4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21480));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE704u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE704u) goto L_088FE704;
    return;
L_088FE704:
    ctx.gpr[5] = (17283u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE718u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE718u) goto L_088FE718;
    return;
L_088FE718:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE724u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE724u) goto L_088FE724;
    return;
L_088FE724:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21468));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE734u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE734u) goto L_088FE734;
    return;
L_088FE734:
    ctx.gpr[5] = (17239u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE744u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE744u) goto L_088FE744;
    return;
L_088FE744:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE750u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE750u) goto L_088FE750;
    return;
L_088FE750:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21460));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE760u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE760u) goto L_088FE760;
    return;
L_088FE760:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE76Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE76Cu) goto L_088FE76C;
    return;
L_088FE76C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE778u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE778u) goto L_088FE778;
    return;
L_088FE778:
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21448));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE788u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x088FE788u) goto L_088FE788;
    return;
L_088FE788:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE794u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE794u) goto L_088FE794;
    return;
L_088FE794:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE7A0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE7A0u) goto L_088FE7A0;
    return;
L_088FE7A0:
    ctx.gpr[31] = (0x088FE7A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem) && ctx.pc == 0x088FE7A8u) goto L_088FE7A8;
    return;
L_088FE7A8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21444));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE7B8u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE7B8u) goto L_088FE7B8;
    return;
L_088FE7B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(162)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x088FE7D0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE7D0u) goto L_088FE7D0;
    return;
L_088FE7D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE7DCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE7DCu) goto L_088FE7DC;
    return;
L_088FE7DC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21436));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE7ECu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE7ECu) goto L_088FE7EC;
    return;
L_088FE7EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(158)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x088FE804u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE804u) goto L_088FE804;
    return;
L_088FE804:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE810u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE810u) goto L_088FE810;
    return;
L_088FE810:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21428));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE820u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE820u) goto L_088FE820;
    return;
L_088FE820:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(168)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x088FE838u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE838u) goto L_088FE838;
    return;
L_088FE838:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE844u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE844u) goto L_088FE844;
    return;
L_088FE844:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21416));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE854u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE854u) goto L_088FE854;
    return;
L_088FE854:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(146)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x088FE86Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE86Cu) goto L_088FE86C;
    return;
L_088FE86C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE878u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE878u) goto L_088FE878;
    return;
L_088FE878:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21404));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE888u);
    ctx.gpr[6] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE888u) goto L_088FE888;
    return;
L_088FE888:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x088FE8A0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE8A0u) goto L_088FE8A0;
    return;
L_088FE8A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE8ACu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE8ACu) goto L_088FE8AC;
    return;
L_088FE8AC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21392));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE8BCu);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE8BCu) goto L_088FE8BC;
    return;
L_088FE8BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(150)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x088FE8D4u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE8D4u) goto L_088FE8D4;
    return;
L_088FE8D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE8E0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE8E0u) goto L_088FE8E0;
    return;
L_088FE8E0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21380));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE8F0u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE8F0u) goto L_088FE8F0;
    return;
L_088FE8F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x088FE908u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE908u) goto L_088FE908;
    return;
L_088FE908:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE914u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE914u) goto L_088FE914;
    return;
L_088FE914:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21368));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE924u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE924u) goto L_088FE924;
    return;
L_088FE924:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(154)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x088FE93Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE93Cu) goto L_088FE93C;
    return;
L_088FE93C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE948u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE948u) goto L_088FE948;
    return;
L_088FE948:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21360));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE958u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE958u) goto L_088FE958;
    return;
L_088FE958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE970u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE970u) goto L_088FE970;
    return;
L_088FE970:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE97Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE97Cu) goto L_088FE97C;
    return;
L_088FE97C:
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21348));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088FE990u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE990u) goto L_088FE990;
    return;
L_088FE990:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x088FE9A8u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE9A8u) goto L_088FE9A8;
    return;
L_088FE9A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE9B4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE9B4u) goto L_088FE9B4;
    return;
L_088FE9B4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21336));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE9C4u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE9C4u) goto L_088FE9C4;
    return;
L_088FE9C4:
    ctx.gpr[5] = (17320u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE9D4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FE9D4u) goto L_088FE9D4;
    return;
L_088FE9D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE9E0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FE9E0u) goto L_088FE9E0;
    return;
L_088FE9E0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21332));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FE9F0u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FE9F0u) goto L_088FE9F0;
    return;
L_088FE9F0:
    ctx.gpr[5] = (17322u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEA04u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FEA04u) goto L_088FEA04;
    return;
L_088FEA04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEA10u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEA10u) goto L_088FEA10;
    return;
L_088FEA10:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21320));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEA20u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FEA20u) goto L_088FEA20;
    return;
L_088FEA20:
    ctx.gpr[5] = (17323u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEA30u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FEA30u) goto L_088FEA30;
    return;
L_088FEA30:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEA3Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEA3Cu) goto L_088FEA3C;
    return;
L_088FEA3C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21312));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEA4Cu);
    ctx.gpr[6] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FEA4Cu) goto L_088FEA4C;
    return;
L_088FEA4C:
    ctx.gpr[5] = (17333u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEA60u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FEA60u) goto L_088FEA60;
    return;
L_088FEA60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEA6Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEA6Cu) goto L_088FEA6C;
    return;
L_088FEA6C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21300));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEA7Cu);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FEA7Cu) goto L_088FEA7C;
    return;
L_088FEA7C:
    ctx.gpr[5] = (17324u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEA8Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FEA8Cu) goto L_088FEA8C;
    return;
L_088FEA8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEA98u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEA98u) goto L_088FEA98;
    return;
L_088FEA98:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21292));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEAA8u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FEAA8u) goto L_088FEAA8;
    return;
L_088FEAA8:
    ctx.gpr[5] = (17325u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEAB8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FEAB8u) goto L_088FEAB8;
    return;
L_088FEAB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEAC4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEAC4u) goto L_088FEAC4;
    return;
L_088FEAC4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21284));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEAD4u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FEAD4u) goto L_088FEAD4;
    return;
L_088FEAD4:
    ctx.gpr[5] = (17326u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEAE8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FEAE8u) goto L_088FEAE8;
    return;
L_088FEAE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEAF4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEAF4u) goto L_088FEAF4;
    return;
L_088FEAF4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21276));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEB04u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FEB04u) goto L_088FEB04;
    return;
L_088FEB04:
    ctx.gpr[5] = (17328u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEB18u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FEB18u) goto L_088FEB18;
    return;
L_088FEB18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEB24u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEB24u) goto L_088FEB24;
    return;
L_088FEB24:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21268));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEB34u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FEB34u) goto L_088FEB34;
    return;
L_088FEB34:
    ctx.gpr[5] = (17326u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEB44u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FEB44u) goto L_088FEB44;
    return;
L_088FEB44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEB50u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEB50u) goto L_088FEB50;
    return;
L_088FEB50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FEB60u);
    ctx.gpr[6] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FEB60u) goto L_088FEB60;
    return;
L_088FEB60:
    ctx.gpr[5] = (17331u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEB74u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FEB74u) goto L_088FEB74;
    return;
L_088FEB74:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEB80u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEB80u) goto L_088FEB80;
    return;
L_088FEB80:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21260));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEB90u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FEB90u) goto L_088FEB90;
    return;
L_088FEB90:
    ctx.gpr[5] = (17330u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEBA4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FEBA4u) goto L_088FEBA4;
    return;
L_088FEBA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEBB0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEBB0u) goto L_088FEBB0;
    return;
L_088FEBB0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21252));
    ctx.gpr[31] = (0x088FEBBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x088FEBBCu) goto L_088FEBBC;
    return;
L_088FEBBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEBC8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem) && ctx.pc == 0x088FEBC8u) goto L_088FEBC8;
    return;
L_088FEBC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEBD4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEBD4u) goto L_088FEBD4;
    return;
L_088FEBD4:
    ctx.gpr[31] = (0x088FEBDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem) && ctx.pc == 0x088FEBDCu) goto L_088FEBDC;
    return;
L_088FEBDC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21244));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEBECu);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FEBECu) goto L_088FEBEC;
    return;
L_088FEBEC:
    ctx.gpr[5] = (16704u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEBFCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FEBFCu) goto L_088FEBFC;
    return;
L_088FEBFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEC08u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEC08u) goto L_088FEC08;
    return;
L_088FEC08:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21236));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEC18u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FEC18u) goto L_088FEC18;
    return;
L_088FEC18:
    ctx.gpr[5] = (16720u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEC28u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FEC28u) goto L_088FEC28;
    return;
L_088FEC28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEC34u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEC34u) goto L_088FEC34;
    return;
L_088FEC34:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21228));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEC44u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FEC44u) goto L_088FEC44;
    return;
L_088FEC44:
    ctx.gpr[5] = (16736u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEC54u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FEC54u) goto L_088FEC54;
    return;
L_088FEC54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEC60u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEC60u) goto L_088FEC60;
    return;
L_088FEC60:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21216));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEC70u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FEC70u) goto L_088FEC70;
    return;
L_088FEC70:
    ctx.gpr[5] = (16752u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEC80u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FEC80u) goto L_088FEC80;
    return;
L_088FEC80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEC8Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEC8Cu) goto L_088FEC8C;
    return;
L_088FEC8C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21208));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEC9Cu);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FEC9Cu) goto L_088FEC9C;
    return;
L_088FEC9C:
    ctx.gpr[5] = (16768u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FECACu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FECACu) goto L_088FECAC;
    return;
L_088FECAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FECB8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FECB8u) goto L_088FECB8;
    return;
L_088FECB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088FECC8u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FECC8u) goto L_088FECC8;
    return;
L_088FECC8:
    ctx.gpr[5] = (16776u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FECD8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FECD8u) goto L_088FECD8;
    return;
L_088FECD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FECE4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FECE4u) goto L_088FECE4;
    return;
L_088FECE4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088FECF4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FECF4u) goto L_088FECF4;
    return;
L_088FECF4:
    ctx.gpr[5] = (16784u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FED04u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FED04u) goto L_088FED04;
    return;
L_088FED04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FED10u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FED10u) goto L_088FED10;
    return;
L_088FED10:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21196));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FED20u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FED20u) goto L_088FED20;
    return;
L_088FED20:
    ctx.gpr[5] = (16792u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FED30u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FED30u) goto L_088FED30;
    return;
L_088FED30:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FED3Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FED3Cu) goto L_088FED3C;
    return;
L_088FED3C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21184));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FED4Cu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FED4Cu) goto L_088FED4C;
    return;
L_088FED4C:
    ctx.gpr[5] = (16800u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FED5Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FED5Cu) goto L_088FED5C;
    return;
L_088FED5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FED68u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FED68u) goto L_088FED68;
    return;
L_088FED68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088FED78u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FED78u) goto L_088FED78;
    return;
L_088FED78:
    ctx.gpr[5] = (16972u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FED88u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FED88u) goto L_088FED88;
    return;
L_088FED88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FED94u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FED94u) goto L_088FED94;
    return;
L_088FED94:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21168));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEDA4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FEDA4u) goto L_088FEDA4;
    return;
L_088FEDA4:
    ctx.gpr[5] = (16976u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEDB4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FEDB4u) goto L_088FEDB4;
    return;
L_088FEDB4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEDC0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEDC0u) goto L_088FEDC0;
    return;
L_088FEDC0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21160));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEDD0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FEDD0u) goto L_088FEDD0;
    return;
L_088FEDD0:
    ctx.gpr[5] = (16980u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEDE0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FEDE0u) goto L_088FEDE0;
    return;
L_088FEDE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEDECu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEDECu) goto L_088FEDEC;
    return;
L_088FEDEC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21152));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEDFCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FEDFCu) goto L_088FEDFC;
    return;
L_088FEDFC:
    ctx.gpr[5] = (16984u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEE0Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FEE0Cu) goto L_088FEE0C;
    return;
L_088FEE0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEE18u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEE18u) goto L_088FEE18;
    return;
L_088FEE18:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21144));
    ctx.gpr[31] = (0x088FEE24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x088FEE24u) goto L_088FEE24;
    return;
L_088FEE24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEE30u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem) && ctx.pc == 0x088FEE30u) goto L_088FEE30;
    return;
L_088FEE30:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEE3Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEE3Cu) goto L_088FEE3C;
    return;
L_088FEE3C:
    ctx.gpr[31] = (0x088FEE44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem) && ctx.pc == 0x088FEE44u) goto L_088FEE44;
    return;
L_088FEE44:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21132));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEE54u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FEE54u) goto L_088FEE54;
    return;
L_088FEE54:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEE64u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FEE64u) goto L_088FEE64;
    return;
L_088FEE64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEE70u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEE70u) goto L_088FEE70;
    return;
L_088FEE70:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21128));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEE80u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088FEE80u) goto L_088FEE80;
    return;
L_088FEE80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEE8Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x088FEE8Cu) goto L_088FEE8C;
    return;
L_088FEE8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEE98u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEE98u) goto L_088FEE98;
    return;
L_088FEE98:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21120));
    ctx.gpr[31] = (0x088FEEA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x088FEEA4u) goto L_088FEEA4;
    return;
L_088FEEA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEEB0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem) && ctx.pc == 0x088FEEB0u) goto L_088FEEB0;
    return;
L_088FEEB0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088FEEBCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088FEEBCu) goto L_088FEEBC;
    return;
L_088FEEBC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEEE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[31]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[8]);
    ctx.gpr[30] = (ctx.gpr[11] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[10]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088FEF80;
    }
    goto L_088FEF80;
L_088FEF80:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_088FF02C;
      }
      goto L_088FEFB8;
    }
L_088FEFB8:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_088FEFC0;
L_088FEFC0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[10] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088FF01Cu);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    goto L_088FF060;
L_088FF01C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FEFC0;
      }
      goto L_088FF02C;
    }
L_088FF02C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FF060:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = (ctx.gpr[11] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FF094u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x088FF094u) goto L_088FF094;
    return;
L_088FF094:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FF0A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4496));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FF0BCu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8816));
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 704u, 0x08AC2F70u>(ctx, &aot_mem) && ctx.pc == 0x088FF0BCu) goto L_088FF0BC;
    return;
L_088FF0BC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8812), ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[8] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (15948u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088FF0FC;
L_088FF0FC:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 749 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FF110;
      }
      goto L_088FF108;
    }
L_088FF108:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), 0u);
      if (branch_taken) {
          goto L_088FF114;
      }
      goto L_088FF110;
    }
L_088FF110:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    goto L_088FF114;
L_088FF114:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(0u));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 750 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088FF0FC;
      }
      goto L_088FF16C;
    }
L_088FF16C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FF17C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_088FF198;
      }
      goto L_088FF184;
    }
L_088FF184:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8812)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8812), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088FF1A8;
      }
      goto L_088FF198;
    }
L_088FF198:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(128), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8812)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8812), ctx.gpr[4]);
    goto L_088FF1A8;
L_088FF1A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FF1B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8816)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FF1F4;
      }
      goto L_088FF1DC;
    }
L_088FF1DC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FF1E8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_088FF17C;
L_088FF1E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FF1DC;
      }
      goto L_088FF1F4;
    }
L_088FF1F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FF204:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 240u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[6] = (0u | 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088FF28C;
      }
      goto L_088FF288;
    }
L_088FF288:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088FF28C;
L_088FF28C:
    ctx.gpr[4] = (48844u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x088FF2A8u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088FF2A8u) goto L_088FF2A8;
    return;
L_088FF2A8:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088FF2C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088FF2C0u) goto L_088FF2C0;
    return;
L_088FF2C0:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[31] = (0x088FF2ECu);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088FF2ECu) goto L_088FF2EC;
    return;
L_088FF2EC:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (48291u << 16u);
      if (branch_taken) {
          goto L_088FF508;
      }
      goto L_088FF344;
    }
L_088FF344:
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48419u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088FF388;
L_088FF388:
    ctx.gpr[31] = (0x088FF390u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088FF390u) goto L_088FF390;
    return;
L_088FF390:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088FF3A0u);
    ctx.fpr[28] = ctx.fpr[22] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088FF3A0u) goto L_088FF3A0;
    return;
L_088FF3A0:
    ctx.fpr[13] = ctx.fpr[30] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x088FF3B4u);
    ctx.fpr[30] = ctx.fpr[22] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088FF3B4u) goto L_088FF3B4;
    return;
L_088FF3B4:
    ctx.fpr[14] = ctx.fpr[24] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (0u | 42u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[14];
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x088FF400u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x088FF400u) goto L_088FF400;
    return;
L_088FF400:
    ctx.gpr[31] = (0x088FF408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088FF408u) goto L_088FF408;
    return;
L_088FF408:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088FF418u);
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088FF418u) goto L_088FF418;
    return;
L_088FF418:
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x088FF428u);
    ctx.fpr[30] = ctx.fpr[20] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088FF428u) goto L_088FF428;
    return;
L_088FF428:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = ctx.fpr[28] - ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (0u | 42u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x088FF474u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x088FF474u) goto L_088FF474;
    return;
L_088FF474:
    ctx.gpr[31] = (0x088FF47Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088FF47Cu) goto L_088FF47C;
    return;
L_088FF47C:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088FF48Cu);
    ctx.fpr[30] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088FF48Cu) goto L_088FF48C;
    return;
L_088FF48C:
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x088FF4A0u);
    ctx.fpr[26] = ctx.fpr[20] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088FF4A0u) goto L_088FF4A0;
    return;
L_088FF4A0:
    ctx.fpr[14] = ctx.fpr[28] - ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (0u | 42u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x088FF4E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x088FF4E4u) goto L_088FF4E4;
    return;
L_088FF4E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FF4F0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x088FF4F0u) goto L_088FF4F0;
    return;
L_088FF4F0:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088FF388;
      }
      goto L_088FF508;
    }
L_088FF508:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FF544:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 240u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[7] = (0u | 255u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_088FF5D0;
      }
      goto L_088FF5CC;
    }
L_088FF5CC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088FF5D0;
L_088FF5D0:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (48291u << 16u);
      if (branch_taken) {
          goto L_088FF7C0;
      }
      goto L_088FF5FC;
    }
L_088FF5FC:
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48419u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088FF640;
L_088FF640:
    ctx.gpr[31] = (0x088FF648u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088FF648u) goto L_088FF648;
    return;
L_088FF648:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088FF658u);
    ctx.fpr[28] = ctx.fpr[22] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088FF658u) goto L_088FF658;
    return;
L_088FF658:
    ctx.fpr[13] = ctx.fpr[30] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x088FF66Cu);
    ctx.fpr[30] = ctx.fpr[22] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088FF66Cu) goto L_088FF66C;
    return;
L_088FF66C:
    ctx.fpr[14] = ctx.fpr[24] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[14];
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x088FF6B8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x088FF6B8u) goto L_088FF6B8;
    return;
L_088FF6B8:
    ctx.gpr[31] = (0x088FF6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088FF6C0u) goto L_088FF6C0;
    return;
L_088FF6C0:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088FF6D0u);
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088FF6D0u) goto L_088FF6D0;
    return;
L_088FF6D0:
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x088FF6E0u);
    ctx.fpr[30] = ctx.fpr[20] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088FF6E0u) goto L_088FF6E0;
    return;
L_088FF6E0:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = ctx.fpr[28] - ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x088FF72Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x088FF72Cu) goto L_088FF72C;
    return;
L_088FF72C:
    ctx.gpr[31] = (0x088FF734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088FF734u) goto L_088FF734;
    return;
L_088FF734:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088FF744u);
    ctx.fpr[30] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088FF744u) goto L_088FF744;
    return;
L_088FF744:
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x088FF758u);
    ctx.fpr[26] = ctx.fpr[20] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088FF758u) goto L_088FF758;
    return;
L_088FF758:
    ctx.fpr[14] = ctx.fpr[28] - ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x088FF79Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x088FF79Cu) goto L_088FF79C;
    return;
L_088FF79C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088FF7A8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x088FF7A8u) goto L_088FF7A8;
    return;
L_088FF7A8:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_088FF640;
      }
      goto L_088FF7C0;
    }
L_088FF7C0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FF800:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FF808:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9997));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9957));
    ctx.gpr[5] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20484));
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9773));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9893));
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20464));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9821));
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9917));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9737));
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9697));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20416));
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9617));
    ctx.gpr[5] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[30]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9561));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[16] = (2247u << 16u);
    ctx.gpr[18] = (2247u << 16u);
    ctx.gpr[17] = (2247u << 16u);
    ctx.gpr[22] = (2234u << 16u);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[30] = (2236u << 16u);
    ctx.gpr[23] = (2236u << 16u);
    ctx.gpr[21] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-12400));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-12320));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-8224));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-10032));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-20584));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-20564));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-20544));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-20524));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-20440));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    ctx.gpr[31] = (0x088FF92Cu);
    // nop
    goto L_088FF0A0;
L_088FF92C:
    ctx.gpr[31] = (0x088FF934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 271u, 0x08941C80u>(ctx, &aot_mem) && ctx.pc == 0x088FF934u) goto L_088FF934;
    return;
L_088FF934:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[4] = (49024u << 16u);
    ctx.gpr[3] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088FF950;
L_088FF950:
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[12]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FF950;
      }
      goto L_088FF968;
    }
L_088FF968:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[4] = (16052u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[3] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (17204u << 16u);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088FF990;
L_088FF990:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
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
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[11]) < 1024 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FF990;
      }
      goto L_088FF9F8;
    }
L_088FF9F8:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088FFA04u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21084));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem) && ctx.pc == 0x088FFA04u) goto L_088FFA04;
    return;
L_088FFA04:
    ctx.gpr[31] = (0x088FFA0Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 640u, 0x08AAEFC8u>(ctx, &aot_mem) && ctx.pc == 0x088FFA0Cu) goto L_088FFA0C;
    return;
L_088FFA0C:
    ctx.gpr[31] = (0x088FFA14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 632u, 0x08AAEF5Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFA14u) goto L_088FFA14;
    return;
L_088FFA14:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    goto L_088FFA24;
L_088FFA24:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088FFA30u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFA30u) goto L_088FFA30;
    return;
L_088FFA30:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(7));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFA24;
      }
      goto L_088FFA54;
    }
L_088FFA54:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21072));
    ctx.gpr[31] = (0x088FFA64u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFA64u) goto L_088FFA64;
    return;
L_088FFA64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6124), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8756), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    goto L_088FFA84;
L_088FFA84:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088FFA90u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFA90u) goto L_088FFA90;
    return;
L_088FFA90:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFA84;
      }
      goto L_088FFAB4;
    }
L_088FFAB4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[22] = (2236u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[22] + static_cast<std::uint32_t>(-20504));
    goto L_088FFAD0;
L_088FFAD0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088FFADCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFADCu) goto L_088FFADC;
    return;
L_088FFADC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFAD0;
      }
      goto L_088FFB00;
    }
L_088FFB00:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[28] | 0u);
    goto L_088FFB14;
L_088FFB14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FFB20u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFB20u) goto L_088FFB20;
    return;
L_088FFB20:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(6172), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(6184), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFB14;
      }
      goto L_088FFB40;
    }
L_088FFB40:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    goto L_088FFB58;
L_088FFB58:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088FFB64u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFB64u) goto L_088FFB64;
    return;
L_088FFB64:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFB58;
      }
      goto L_088FFB88;
    }
L_088FFB88:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[28] | 0u);
    goto L_088FFB9C;
L_088FFB9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FFBA8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFBA8u) goto L_088FFBA8;
    return;
L_088FFBA8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(6128), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(6144), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFB9C;
      }
      goto L_088FFBC8;
    }
L_088FFBC8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21060));
    ctx.gpr[31] = (0x088FFBD8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFBD8u) goto L_088FFBD8;
    return;
L_088FFBD8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8764), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6220), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[28] | 0u);
    goto L_088FFBF4;
L_088FFBF4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FFC00u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFC00u) goto L_088FFC00;
    return;
L_088FFC00:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(6232), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(6240), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFBF4;
      }
      goto L_088FFC20;
    }
L_088FFC20:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[18] = (ctx.gpr[28] | 0u);
    goto L_088FFC34;
L_088FFC34:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FFC40u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFC40u) goto L_088FFC40;
    return;
L_088FFC40:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(6344), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(6360), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFC34;
      }
      goto L_088FFC60;
    }
L_088FFC60:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_088FFC78;
L_088FFC78:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088FFC84u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFC84u) goto L_088FFC84;
    return;
L_088FFC84:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFC78;
      }
      goto L_088FFCA8;
    }
L_088FFCA8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[18] = (ctx.gpr[28] | 0u);
    goto L_088FFCBC;
L_088FFCBC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FFCC8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFCC8u) goto L_088FFCC8;
    return;
L_088FFCC8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(6312), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(6328), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFCBC;
      }
      goto L_088FFCE8;
    }
L_088FFCE8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[18] = (ctx.gpr[28] | 0u);
    goto L_088FFCFC;
L_088FFCFC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088FFD08u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFD08u) goto L_088FFD08;
    return;
L_088FFD08:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(6196), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(7840), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088FFCFC;
      }
      goto L_088FFD28;
    }
L_088FFD28:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21048));
    ctx.gpr[31] = (0x088FFD34u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFD34u) goto L_088FFD34;
    return;
L_088FFD34:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6212), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6212)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21036));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFD50u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6216), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFD50u) goto L_088FFD50;
    return;
L_088FFD50:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6112), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6112)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21028));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFD6Cu);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6116), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFD6Cu) goto L_088FFD6C;
    return;
L_088FFD6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6112)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6120), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21020));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8752), ctx.gpr[5]);
    ctx.gpr[31] = (0x088FFD88u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFD88u) goto L_088FFD88;
    return;
L_088FFD88:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6224), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6224)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21008));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFDA4u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6228), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFDA4u) goto L_088FFDA4;
    return;
L_088FFDA4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6160), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6160)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-21000));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFDC0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6164), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFDC0u) goto L_088FFDC0;
    return;
L_088FFDC0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6248), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6248)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20984));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFDDCu);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6256), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFDDCu) goto L_088FFDDC;
    return;
L_088FFDDC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6252), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6252)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20976));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFDF8u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6260), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFDF8u) goto L_088FFDF8;
    return;
L_088FFDF8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6272), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6272)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20968));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFE14u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6276), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFE14u) goto L_088FFE14;
    return;
L_088FFE14:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6280), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6280)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20956));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFE30u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6284), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFE30u) goto L_088FFE30;
    return;
L_088FFE30:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6288), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6288)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20944));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFE4Cu);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6292), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFE4Cu) goto L_088FFE4C;
    return;
L_088FFE4C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6264), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6264)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20936));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFE68u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6268), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFE68u) goto L_088FFE68;
    return;
L_088FFE68:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6304), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6304)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20920));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFE84u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6308), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFE84u) goto L_088FFE84;
    return;
L_088FFE84:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6296), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6296)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20904));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFEA0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6300), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFEA0u) goto L_088FFEA0;
    return;
L_088FFEA0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6376), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6376)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20892));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFEBCu);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6380), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFEBCu) goto L_088FFEBC;
    return;
L_088FFEBC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6168), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6168)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20880));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFED8u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8760), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFED8u) goto L_088FFED8;
    return;
L_088FFED8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6384), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6384)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20872));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFEF4u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6388), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFEF4u) goto L_088FFEF4;
    return;
L_088FFEF4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6392), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6392)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20860));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFF10u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6396), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFF10u) goto L_088FFF10;
    return;
L_088FFF10:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6404), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6404)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20852));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFF2Cu);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8596), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFF2Cu) goto L_088FFF2C;
    return;
L_088FFF2C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6408), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6408)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20844));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFF48u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6412), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFF48u) goto L_088FFF48;
    return;
L_088FFF48:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6424), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6424)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20832));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFF64u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8600), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFF64u) goto L_088FFF64;
    return;
L_088FFF64:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6428), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6428)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20820));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFF80u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8604), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFF80u) goto L_088FFF80;
    return;
L_088FFF80:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6432), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6432)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20804));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFF9Cu);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8608), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFF9Cu) goto L_088FFF9C;
    return;
L_088FFF9C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6416), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6416)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20796));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088FFFB8u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6420), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFFB8u) goto L_088FFFB8;
    return;
L_088FFFB8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6440), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6440)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-20504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8768), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-20484)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6444), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6232)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8776), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6240)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6452), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6236)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8780), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6244)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6448), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6384)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8784), ctx.gpr[4]);
    ctx.pc = 0x08900000u; return;
}

void recomp_unit_0062(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0062_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_62(Runtime &runtime) {
    runtime.register_generated_unit(62u, 0x088FC000u, 16384u, &recomp_unit_0062, &recomp_unit_0062_entry);
    runtime.register_function(0x088FC000u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC014u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC020u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC02Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC040u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC05Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC06Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC078u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC08Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC0CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC0E0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC0E8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC0F4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC108u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC110u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC120u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC128u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC130u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC13Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC144u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC154u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC15Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC164u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC16Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC178u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC184u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC194u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC1A0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC1B0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC1B8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC1CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC1D4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC1FCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC20Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC224u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC234u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC244u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC254u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC264u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC26Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC27Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC284u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC294u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC29Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC2ACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC2BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC2C4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC2D4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC2E0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC2ECu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC2FCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC300u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC330u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC354u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC368u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC370u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC380u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC394u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC3A0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC3ACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC3B8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC3C0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC3D4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC3DCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC3E4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC3E8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC400u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC420u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC434u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC43Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC450u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC458u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC464u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC470u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC484u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC490u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC494u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC4A8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC4CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC4E4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC4F0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC4F8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC500u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC510u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC518u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC520u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC52Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC530u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC538u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC540u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC54Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC55Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC560u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC578u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC588u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC594u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC5ACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC5B8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC5C8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC5E8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC5F4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC600u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC60Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC62Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC638u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC648u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC650u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC658u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC668u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC670u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC67Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC690u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC6B8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC6C0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC6C4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC6D0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC6D8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC6DCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC6E8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC6F0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC6F4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC6FCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC700u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC71Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC728u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC734u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC740u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC750u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC75Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC76Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC77Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC79Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC7A4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC7B0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC7C4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC7CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC7DCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC7F0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC808u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC81Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC830u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC83Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC848u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC854u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC870u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC888u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC894u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC8A0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC8ACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC8BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC8C4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC8D0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC8DCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC8E8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC8F4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC8FCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC90Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC924u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC954u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC960u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC974u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC97Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC984u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC98Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC994u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC9A0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC9ACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC9B8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC9D4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCA10u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCA18u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCA28u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCA8Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCA98u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCAA0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCAB0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCB14u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCB1Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCB2Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCB30u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCB40u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCB48u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCB54u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCB5Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCB70u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCB78u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCB80u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCB88u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCB98u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCB9Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCBACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCBB4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCBC4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCBD4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCBE4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCBF4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCC00u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCC10u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCC24u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCC30u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCC38u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCC40u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCC48u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCC58u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCC60u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCC74u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCC80u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCC88u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCC90u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCC98u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCCA8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCCB0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCCC4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCCCCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCCD8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCCE0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCCE8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCCF4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCCF8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCD28u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCD4Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCD5Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCD70u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCD7Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCD90u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCD9Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCDA0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCDC4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCDCCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCDECu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCDF8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCE10u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCE14u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCE1Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCE38u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCE50u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCE64u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCE70u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCE90u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCE98u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCEA8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCEACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCED0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCED8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCEF8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCF04u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCF1Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCF20u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCF38u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCF58u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCF5Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCF80u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCF88u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCFA8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCFB4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCFCCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCFD0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCFD8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCFFCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD014u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD028u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD068u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD090u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD09Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD0BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD0C8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD0D8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD0E4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD104u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD114u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD11Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD138u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD158u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD164u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD174u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD180u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD1A0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD1B0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD1B8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD1D4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD1F0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD1FCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD210u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD2ACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD2FCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD320u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD344u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD360u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD378u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD384u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD390u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD544u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD550u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD564u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD56Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD584u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD588u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD5A4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD5C4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD5CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD5D4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD5DCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD5E8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD610u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD628u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD640u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD67Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD688u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD69Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD6B4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD6D8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD708u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD714u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD740u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD748u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD754u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD764u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD770u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD780u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD788u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD798u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD7A4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD7CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD7D4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD7E0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD7F0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD7FCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD80Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD814u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD820u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD828u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD82Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD83Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD858u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD89Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD8D0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD8D8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD8E8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD8F8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD918u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD924u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD934u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD948u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD954u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD964u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD978u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD984u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD994u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD9A8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD9B4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD9C4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD9D8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD9E4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD9F4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDA08u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDA14u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDA24u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDA38u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDA44u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDA54u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDA68u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDA74u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDA80u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDA8Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDA98u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDAA0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDAB4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDAC4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDAD0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDADCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDAE8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDAF4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDAFCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDB0Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDB20u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDB2Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDB3Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDB4Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDB58u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDB68u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDB78u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDB84u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDB94u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDBA4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDBB0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDBC0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDBD0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDBDCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDBECu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDBFCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDC08u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDC18u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDC28u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDC34u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDC44u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDC54u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDC60u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDC70u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDC80u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDC8Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDC9Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDCACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDCB8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDCC8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDCD8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDCE4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDCF4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD04u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD10u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD20u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD30u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD3Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD4Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD5Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD68u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD78u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD88u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD94u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDDA4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDDB4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDDC0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDDD0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDDE0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDDECu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDDFCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDE10u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDE1Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDE2Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDE3Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDE48u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDE58u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDE68u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDE74u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDE84u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDE94u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDEA0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDEB0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDEC0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDECCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDEDCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDEECu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDEF8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDF08u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDF1Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDF28u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDF38u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDF4Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDF58u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDF68u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDF7Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDF88u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDF98u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDFA8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDFB4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDFC4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDFD8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDFE4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDFF4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE004u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE010u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE020u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE034u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE040u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE050u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE064u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE070u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE080u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE090u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE09Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE0ACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE0C0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE0CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE0DCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE0ECu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE0F8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE108u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE11Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE128u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE138u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE14Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE158u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE168u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE17Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE188u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE198u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE1A8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE1B4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE1C4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE1D4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE1E0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE1F0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE204u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE210u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE220u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE230u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE23Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE24Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE25Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE268u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE278u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE288u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE294u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE2A4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE2B4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE2C0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE2D0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE2DCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE2E8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE2F8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE308u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE314u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE324u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE334u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE340u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE350u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE360u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE36Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE37Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE390u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE39Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE3ACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE3C0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE3CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE3DCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE3ECu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE3F8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE40Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE41Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE428u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE438u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE448u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE454u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE464u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE474u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE480u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE490u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE4A0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE4ACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE4BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE4CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE4D8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE4E8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE4F8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE504u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE514u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE524u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE530u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE540u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE554u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE560u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE570u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE580u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE58Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE59Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE5ACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE5B8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE5C8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE5D8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE5E4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE5F4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE608u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE614u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE624u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE638u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE644u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE654u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE664u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE670u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE680u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE690u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE69Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE6ACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE6BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE6C8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE6D8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE6E8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE6F4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE704u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE718u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE724u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE734u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE744u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE750u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE760u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE76Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE778u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE788u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE794u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE7A0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE7A8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE7B8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE7D0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE7DCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE7ECu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE804u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE810u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE820u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE838u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE844u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE854u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE86Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE878u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE888u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE8A0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE8ACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE8BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE8D4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE8E0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE8F0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE908u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE914u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE924u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE93Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE948u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE958u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE970u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE97Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE990u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE9A8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE9B4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE9C4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE9D4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE9E0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE9F0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA04u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA10u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA20u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA30u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA3Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA4Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA60u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA6Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA7Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA8Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA98u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEAA8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEAB8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEAC4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEAD4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEAE8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEAF4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEB04u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEB18u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEB24u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEB34u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEB44u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEB50u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEB60u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEB74u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEB80u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEB90u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEBA4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEBB0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEBBCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEBC8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEBD4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEBDCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEBECu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEBFCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEC08u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEC18u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEC28u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEC34u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEC44u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEC54u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEC60u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEC70u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEC80u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEC8Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEC9Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FECACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FECB8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FECC8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FECD8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FECE4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FECF4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FED04u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FED10u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FED20u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FED30u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FED3Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FED4Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FED5Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FED68u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FED78u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FED88u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FED94u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEDA4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEDB4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEDC0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEDD0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEDE0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEDECu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEDFCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE0Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE18u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE24u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE30u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE3Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE44u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE54u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE64u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE70u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE80u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE8Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE98u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEEA4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEEB0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEEBCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEEE8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEF80u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEFB8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEFC0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF01Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF02Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF060u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF094u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF0A0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF0BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF0FCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF108u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF110u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF114u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF16Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF17Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF184u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF198u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF1A8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF1B0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF1DCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF1E8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF1F4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF204u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF288u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF28Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF2A8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF2C0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF2ECu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF344u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF388u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF390u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF3A0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF3B4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF400u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF408u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF418u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF428u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF474u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF47Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF48Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF4A0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF4E4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF4F0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF508u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF544u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF5CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF5D0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF5FCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF640u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF648u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF658u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF66Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF6B8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF6C0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF6D0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF6E0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF72Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF734u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF744u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF758u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF79Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF7A8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF7C0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF800u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF808u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF92Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF934u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF950u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF968u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF990u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF9F8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFA04u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFA0Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFA14u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFA24u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFA30u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFA54u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFA64u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFA84u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFA90u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFAB4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFAD0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFADCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFB00u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFB14u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFB20u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFB40u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFB58u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFB64u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFB88u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFB9Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFBA8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFBC8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFBD8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFBF4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFC00u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFC20u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFC34u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFC40u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFC60u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFC78u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFC84u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFCA8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFCBCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFCC8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFCE8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFCFCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFD08u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFD28u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFD34u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFD50u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFD6Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFD88u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFDA4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFDC0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFDDCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFDF8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFE14u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFE30u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFE4Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFE68u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFE84u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFEA0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFEBCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFED8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFEF4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFF10u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFF2Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFF48u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFF64u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFF80u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFF9Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFFB8u, &recomp_unit_0062, "recomp_unit_0062");
}
} // namespace psprecomp
