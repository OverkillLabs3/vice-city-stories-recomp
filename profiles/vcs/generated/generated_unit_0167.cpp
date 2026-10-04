#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0167[4096] = {
    1, 0, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 14, 15, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0,
    0, 22, 0, 23, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0,
    29, 0, 0, 30, 0, 31, 32, 33, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 36, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0,
    0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 48, 49, 50, 0, 0, 0, 0,
    0, 51, 0, 0, 52, 0, 53, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0,
    0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 0, 68, 0,
    0, 0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 72, 0, 0, 73, 0, 0, 0, 74, 0, 75, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0,
    0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 0,
    87, 0, 88, 0, 0, 89, 0, 90, 0, 91, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 96,
    0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 107, 0, 0, 0, 0, 108, 109, 110, 0, 0, 0, 111, 0, 0,
    0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 124,
    0, 0, 125, 0, 126, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 0, 132, 133, 0, 0, 0, 0, 0,
    0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0,
    0, 0, 138, 0, 139, 0, 0, 140, 141, 0, 0, 142, 0, 0, 143, 144, 0, 0, 0, 145, 0, 0, 146, 0, 147, 0, 0, 148, 0, 149, 0, 150,
    0, 0, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0,
    156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 0, 163, 0,
    0, 164, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 169, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0, 176, 0, 0, 177, 0, 0, 178, 0, 179,
    0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 183, 0, 0, 0, 184, 0, 185, 0, 0, 186, 0, 0, 0, 187,
    0, 0, 0, 188, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 192, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 0, 197,
    0, 0, 0, 198, 0, 199, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 207, 208, 0, 0, 0,
    209, 0, 0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219,
    0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 227, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0, 232, 0, 233,
    0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240,
    0, 0, 241, 0, 0, 242, 0, 243, 0, 244, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 248, 0, 249, 0, 0, 250, 0, 0, 0, 251, 0, 252, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0,
    256, 0, 257, 0, 258, 0, 0, 259, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 264, 0, 0, 265, 0, 0, 266, 0, 0,
    0, 267, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 271, 0, 0, 272, 273, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 276, 0,
    277, 0, 278, 0, 0, 279, 0, 280, 0, 281, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 286, 0,
    0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 295, 0, 296,
    0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 300, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 308, 0, 0, 309, 0, 0, 310, 0,
    0, 311, 0, 0, 312, 0, 0, 313, 0, 314, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 327, 0, 0, 0, 328, 0, 329, 0, 0, 330,
    0, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 337, 0, 338, 0, 0, 0, 0,
    0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 343, 0, 344, 0, 0, 345, 0, 0, 346, 0, 0,
    0, 0, 0, 347, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 353, 0, 0, 0, 354, 0, 0,
    355, 0, 0, 0, 0, 0, 356, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 363,
    0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0,
    367, 0, 368, 0, 0, 369, 0, 370, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 376,
    0, 377, 0, 378, 379, 0, 380, 0, 0, 381, 382, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 389, 0, 0, 390, 0, 391,
    0, 392, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 399, 0,
    0, 400, 0, 401, 0, 402, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 410, 0, 0, 411, 0, 412, 0, 413, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 416, 0,
    417, 0, 418, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 423, 0, 424, 0, 0, 0, 0, 425,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 427, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0,
    0, 0, 0, 0, 432, 433, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 438, 439, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 440, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 447, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 448, 449, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453,
    0, 0, 454, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 469, 0, 0, 0, 470, 0, 0, 0, 471,
    0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 481, 0, 0, 482, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0,
    0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0,
    0, 0, 0, 0, 489, 0, 0, 0, 490, 491, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 496, 497, 498, 0,
    499, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 503, 504, 505, 0, 506, 0, 507, 0, 0, 0, 0, 508, 0, 0, 0, 0,
    0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511,
    512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0,
    516, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 521, 0, 522, 0, 523, 0, 524, 0, 525,
    0, 0, 526, 0, 527, 0, 0, 528, 0, 529, 0, 530, 0, 531, 0, 0, 532, 0, 533, 0, 534, 0, 535, 0, 0, 536, 0, 537, 538, 0, 539, 0,
    0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 544, 0, 0, 545, 0, 546, 0,
    547, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 550, 551, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 558, 0, 0, 0, 0,
    559, 0, 0, 560, 0, 0, 0, 561, 562, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0, 566, 0,
    0, 0, 567, 0, 568, 0, 0, 569, 0, 0, 0, 570, 0, 571, 0, 0, 572, 0, 0, 0, 573, 0, 574, 0, 0, 575, 0, 0, 0, 576, 0, 577,
    0, 0, 578, 0, 0, 0, 579, 0, 580, 0, 0, 0, 581, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 584,
    0, 0, 585, 0, 586, 0, 587, 0, 0, 0, 588, 0, 589, 0, 590, 0, 591, 0, 0, 0, 592, 593, 0, 594, 0, 0, 595, 0, 0, 0, 596, 0,
    597, 0, 0, 0, 598, 0, 599, 0, 0, 0, 600, 0, 601, 0, 0, 0, 602, 0, 603, 0, 0, 604, 0, 605, 0, 0, 606, 0, 607, 0, 608, 0,
    0, 609, 0, 610, 0, 0, 0, 611, 0, 612, 0, 0, 613, 0, 614, 0, 0, 615, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0,
    0, 617, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 619, 0, 620, 0, 0, 0, 621, 0, 622, 0, 0, 0, 623, 0, 624, 0, 0, 0, 625, 0,
    626, 0, 0, 627, 0, 628, 0, 629, 0, 0, 0, 630, 0, 631, 0, 632, 0, 633, 0, 0, 0, 634, 635, 0, 636, 0, 0, 637, 0, 0, 0, 638,
    0, 639, 0, 0, 0, 640, 0, 641, 0, 0, 0, 642, 0, 643, 0, 0, 0, 644, 0, 645, 0, 0, 646, 0, 647, 0, 0, 648, 0, 649, 0, 650,
    0, 0, 651, 0, 652, 0, 0, 0, 653, 0, 654, 0, 0, 655, 0, 656, 0, 0, 657, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0,
    0, 0, 659, 0, 0, 0, 660, 0, 661, 0, 662, 0, 0, 0, 663, 0, 664, 0, 665, 0, 666, 0, 0, 0, 667, 668, 0, 669, 0, 0, 0, 670,
    0, 671, 0, 0, 0, 672, 0, 673, 0, 0, 0, 674, 0, 675, 0, 0, 676, 0, 677, 0, 0, 0, 678, 0, 679, 0, 0, 680, 0, 681, 0, 0,
    682, 0, 683, 0, 684, 0, 0, 685, 0, 686, 0, 0, 0, 687, 0, 688, 0, 0, 689, 0, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0,
    0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 695, 0, 0, 696, 0, 0, 0, 697, 0, 698, 0, 0, 0, 699, 0, 700, 0,
    0, 701, 0, 702, 0, 0, 703, 0, 0, 0, 704, 0, 705, 0, 0, 0, 706, 0, 707, 0, 0, 708, 0, 709, 0, 0, 0, 710, 0, 711, 0, 0,
    712, 0, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 717, 0, 718, 0, 0,
    0, 719, 0, 720, 0, 0, 721, 0, 722, 0, 723, 0, 0, 0, 724, 0, 725, 0, 726, 0, 727, 0, 0, 0, 728, 729, 0, 730, 0, 0, 731, 0,
    0, 0, 732, 0, 733, 0, 0, 0, 734, 0, 735, 0, 0, 736, 0, 737, 0, 0, 738, 0, 0, 0, 739, 0, 740, 0, 0, 0, 741, 0, 742, 0,
    0, 743, 0, 744, 0, 0, 0, 745, 0, 746, 0, 0, 747, 0, 0, 748, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0,
    751, 0, 752, 0, 0, 0, 753, 0, 754, 0, 755, 0, 0, 756, 0, 757, 0, 0, 758, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 760,
    0, 0, 0, 761, 0, 0, 0, 762, 763, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 766, 0, 767, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0, 770, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 773, 0, 0, 0, 774, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 776, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 779, 0, 780, 781, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 782, 783, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 786, 0, 787, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 788, 0, 789, 0, 790, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 793, 0, 0, 0, 794, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 795, 0, 0, 796, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 799, 0, 800, 801, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 802, 803, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0,
    0, 806, 0, 0, 807, 0, 0, 0, 808, 0, 0, 0, 0, 0, 809, 0, 0, 0, 810, 0, 0, 811, 0, 0, 0, 812, 0, 0, 0, 0, 0, 813,
    0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 816, 0, 0, 0, 817, 0, 0, 0, 0, 818, 0, 0, 0, 0, 819, 0, 0,
    0, 820, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 823, 0, 0, 0, 824, 0, 825, 0, 0, 0, 0, 0, 0, 0,
    0, 826, 0, 0, 827, 0, 0, 0, 0, 828, 0, 0, 829, 0, 0, 0, 830, 0, 0, 0, 831, 0, 0, 0, 0, 0, 832, 0, 0, 833, 0, 0,
    834, 0, 0, 835, 0, 0, 836, 0, 0, 0, 0, 0, 0, 0, 837, 0, 0, 0, 838, 0, 0, 0, 839, 0, 0, 0, 840, 0, 0, 0, 841, 0,
    0, 0, 842, 0, 0, 0, 843, 844, 0, 0, 0, 0, 845, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 846, 0, 0, 0, 0, 0, 0, 847, 0,
    848, 0, 0, 0, 0, 0, 849, 0, 0, 0, 850, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 0,
    852, 0, 0, 0, 0, 0, 0, 0, 853, 0, 0, 0, 854, 0, 0, 0, 855, 0, 856, 0, 0, 0, 0, 857, 0, 0, 858, 0, 0, 859, 0, 0,
    0, 860, 0, 0, 0, 0, 0, 861, 0, 862, 0, 0, 0, 0, 0, 863, 0, 0, 0, 0, 0, 0, 0, 864, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 866, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 868, 0, 0, 0, 0, 869, 0, 0, 0, 0, 0, 0, 870, 0, 0, 0, 0, 871, 0, 0, 0, 0, 0, 0, 0, 872, 0,
    0, 0, 0, 873, 0, 0, 874, 0, 0, 0, 0, 0, 0, 0, 0, 875, 0, 876, 0, 0, 0, 0, 0, 877, 0, 878, 0, 879, 0, 880, 0, 0,
    881, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 882, 0, 0, 0, 0, 0, 0, 0, 0, 883, 0, 0,
    0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 885, 0, 0, 0, 886, 0, 0, 0, 0,
    0, 887, 0, 0, 0, 0, 0, 0, 888, 0, 0, 0, 0, 0, 0, 0, 0, 889, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0,
    0, 0, 0, 0, 0, 0, 0, 891, 0, 0, 0, 0, 0, 0, 0, 0, 892, 0, 0, 893, 0, 894, 0, 895, 0, 896, 0, 897, 0, 898, 0, 0,
    0, 899, 0, 0, 0, 900, 0, 901, 0, 902, 0, 0, 0, 0, 903, 0, 904, 0, 0, 0, 905, 0, 906, 0, 907, 0, 0, 0, 0, 908, 0, 0,
    0, 0, 0, 0, 909, 0, 0, 0, 0, 0, 0, 910, 0, 911, 0, 912, 0, 0, 0, 0, 913, 0, 0, 0, 0, 914, 0, 0, 0, 0, 0, 0,
    0, 915, 0, 0, 0, 916, 0, 917, 0, 0, 918, 0, 0, 0, 0, 0, 0, 919, 0, 0, 920, 0, 0, 921, 0, 922, 0, 0, 0, 0, 0, 923,
    0, 0, 0, 0, 0, 0, 0, 0, 924, 925, 0, 0, 0, 0, 0, 0, 0, 0, 926, 0, 927, 0, 0, 0, 928, 0, 929, 930, 0, 931, 0, 0,
    0, 0, 932, 0, 0, 0, 0, 933, 0, 934, 0, 0, 0, 0, 0, 0, 935, 0, 0, 0, 0, 936, 0, 0, 0, 0, 937, 0, 938, 939, 0, 0,
    0, 0, 0, 0, 0, 0, 940, 0, 0, 0, 0, 0, 0, 941, 0, 0, 0, 0, 942, 0, 943, 0, 0, 944, 0, 0, 945, 0, 0, 0, 0, 946,
    0, 947, 948, 0, 949, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 950, 0, 0, 0, 951, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    952, 0, 0, 0, 953, 0, 0, 0, 954, 0, 955, 956, 0, 957, 0, 0, 0, 958, 0, 959, 960, 0, 0, 0, 0, 0, 961, 0, 0, 962, 0, 0,
    963, 0, 964, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 965, 966, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 967, 0,
    968, 0, 0, 969, 0, 0, 970, 0, 971, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 972, 0, 0, 0, 0, 0, 0, 0, 0, 973,
};
void recomp_unit_0167_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AA0000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0167[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AA0000;
    case 2u: goto L_08AA000C;
    case 3u: goto L_08AA0014;
    case 4u: goto L_08AA001C;
    case 5u: goto L_08AA0024;
    case 6u: goto L_08AA002C;
    case 7u: goto L_08AA0030;
    case 8u: goto L_08AA004C;
    case 9u: goto L_08AA0088;
    case 10u: goto L_08AA008C;
    case 11u: goto L_08AA00BC;
    case 12u: goto L_08AA00DC;
    case 13u: goto L_08AA00F0;
    case 14u: goto L_08AA0110;
    case 15u: goto L_08AA0114;
    case 16u: goto L_08AA012C;
    case 17u: goto L_08AA0134;
    case 18u: goto L_08AA0150;
    case 19u: goto L_08AA0160;
    case 20u: goto L_08AA016C;
    case 21u: goto L_08AA0178;
    case 22u: goto L_08AA0184;
    case 23u: goto L_08AA018C;
    case 24u: goto L_08AA0198;
    case 25u: goto L_08AA01AC;
    case 26u: goto L_08AA01BC;
    case 27u: goto L_08AA01C8;
    case 28u: goto L_08AA01F4;
    case 29u: goto L_08AA0200;
    case 30u: goto L_08AA020C;
    case 31u: goto L_08AA0214;
    case 32u: goto L_08AA0218;
    case 33u: goto L_08AA021C;
    case 34u: goto L_08AA0234;
    case 35u: goto L_08AA0240;
    case 36u: goto L_08AA0248;
    case 37u: goto L_08AA024C;
    case 38u: goto L_08AA0258;
    case 39u: goto L_08AA0278;
    case 40u: goto L_08AA02B4;
    case 41u: goto L_08AA02D8;
    case 42u: goto L_08AA02EC;
    case 43u: goto L_08AA0304;
    case 44u: goto L_08AA0318;
    case 45u: goto L_08AA0344;
    case 46u: goto L_08AA0350;
    case 47u: goto L_08AA035C;
    case 48u: goto L_08AA0364;
    case 49u: goto L_08AA0368;
    case 50u: goto L_08AA036C;
    case 51u: goto L_08AA0384;
    case 52u: goto L_08AA0390;
    case 53u: goto L_08AA0398;
    case 54u: goto L_08AA039C;
    case 55u: goto L_08AA03A8;
    case 56u: goto L_08AA03C8;
    case 57u: goto L_08AA0408;
    case 58u: goto L_08AA042C;
    case 59u: goto L_08AA044C;
    case 60u: goto L_08AA0454;
    case 61u: goto L_08AA0468;
    case 62u: goto L_08AA0484;
    case 63u: goto L_08AA04B0;
    case 64u: goto L_08AA04BC;
    case 65u: goto L_08AA04D0;
    case 66u: goto L_08AA04DC;
    case 67u: goto L_08AA04E8;
    case 68u: goto L_08AA04F8;
    case 69u: goto L_08AA0508;
    case 70u: goto L_08AA0518;
    case 71u: goto L_08AA0524;
    case 72u: goto L_08AA052C;
    case 73u: goto L_08AA0538;
    case 74u: goto L_08AA0548;
    case 75u: goto L_08AA0550;
    case 76u: goto L_08AA0554;
    case 77u: goto L_08AA0570;
    case 78u: goto L_08AA0594;
    case 79u: goto L_08AA05A4;
    case 80u: goto L_08AA05AC;
    case 81u: goto L_08AA05B8;
    case 82u: goto L_08AA05C0;
    case 83u: goto L_08AA05CC;
    case 84u: goto L_08AA05D8;
    case 85u: goto L_08AA05E4;
    case 86u: goto L_08AA05F4;
    case 87u: goto L_08AA0600;
    case 88u: goto L_08AA0608;
    case 89u: goto L_08AA0614;
    case 90u: goto L_08AA061C;
    case 91u: goto L_08AA0624;
    case 92u: goto L_08AA0628;
    case 93u: goto L_08AA063C;
    case 94u: goto L_08AA0660;
    case 95u: goto L_08AA066C;
    case 96u: goto L_08AA067C;
    case 97u: goto L_08AA0694;
    case 98u: goto L_08AA06B0;
    case 99u: goto L_08AA06BC;
    case 100u: goto L_08AA06D0;
    case 101u: goto L_08AA06E4;
    case 102u: goto L_08AA0708;
    case 103u: goto L_08AA071C;
    case 104u: goto L_08AA0728;
    case 105u: goto L_08AA0734;
    case 106u: goto L_08AA073C;
    case 107u: goto L_08AA0748;
    case 108u: goto L_08AA075C;
    case 109u: goto L_08AA0760;
    case 110u: goto L_08AA0764;
    case 111u: goto L_08AA0774;
    case 112u: goto L_08AA0788;
    case 113u: goto L_08AA0798;
    case 114u: goto L_08AA07A8;
    case 115u: goto L_08AA07BC;
    case 116u: goto L_08AA07C8;
    case 117u: goto L_08AA07D8;
    case 118u: goto L_08AA07FC;
    case 119u: goto L_08AA082C;
    case 120u: goto L_08AA0838;
    case 121u: goto L_08AA0850;
    case 122u: goto L_08AA085C;
    case 123u: goto L_08AA086C;
    case 124u: goto L_08AA087C;
    case 125u: goto L_08AA0888;
    case 126u: goto L_08AA0890;
    case 127u: goto L_08AA0898;
    case 128u: goto L_08AA08AC;
    case 129u: goto L_08AA08BC;
    case 130u: goto L_08AA08CC;
    case 131u: goto L_08AA08D4;
    case 132u: goto L_08AA08E4;
    case 133u: goto L_08AA08E8;
    case 134u: goto L_08AA0908;
    case 135u: goto L_08AA093C;
    case 136u: goto L_08AA0954;
    case 137u: goto L_08AA096C;
    case 138u: goto L_08AA0988;
    case 139u: goto L_08AA0990;
    case 140u: goto L_08AA099C;
    case 141u: goto L_08AA09A0;
    case 142u: goto L_08AA09AC;
    case 143u: goto L_08AA09B8;
    case 144u: goto L_08AA09BC;
    case 145u: goto L_08AA09CC;
    case 146u: goto L_08AA09D8;
    case 147u: goto L_08AA09E0;
    case 148u: goto L_08AA09EC;
    case 149u: goto L_08AA09F4;
    case 150u: goto L_08AA09FC;
    case 151u: goto L_08AA0A0C;
    case 152u: goto L_08AA0A1C;
    case 153u: goto L_08AA0A24;
    case 154u: goto L_08AA0A4C;
    case 155u: goto L_08AA0A70;
    case 156u: goto L_08AA0A80;
    case 157u: goto L_08AA0A94;
    case 158u: goto L_08AA0ABC;
    case 159u: goto L_08AA0AC4;
    case 160u: goto L_08AA0AD0;
    case 161u: goto L_08AA0ADC;
    case 162u: goto L_08AA0AE8;
    case 163u: goto L_08AA0AF8;
    case 164u: goto L_08AA0B04;
    case 165u: goto L_08AA0B14;
    case 166u: goto L_08AA0B1C;
    case 167u: goto L_08AA0B2C;
    case 168u: goto L_08AA0B44;
    case 169u: goto L_08AA0B84;
    case 170u: goto L_08AA0B8C;
    case 171u: goto L_08AA0B9C;
    case 172u: goto L_08AA0BAC;
    case 173u: goto L_08AA0BBC;
    case 174u: goto L_08AA0BC4;
    case 175u: goto L_08AA0BD4;
    case 176u: goto L_08AA0BDC;
    case 177u: goto L_08AA0BE8;
    case 178u: goto L_08AA0BF4;
    case 179u: goto L_08AA0BFC;
    case 180u: goto L_08AA0C20;
    case 181u: goto L_08AA0C30;
    case 182u: goto L_08AA0C40;
    case 183u: goto L_08AA0C48;
    case 184u: goto L_08AA0C58;
    case 185u: goto L_08AA0C60;
    case 186u: goto L_08AA0C6C;
    case 187u: goto L_08AA0C7C;
    case 188u: goto L_08AA0C8C;
    case 189u: goto L_08AA0C94;
    case 190u: goto L_08AA0CA4;
    case 191u: goto L_08AA0CAC;
    case 192u: goto L_08AA0CB8;
    case 193u: goto L_08AA0CC4;
    case 194u: goto L_08AA0CCC;
    case 195u: goto L_08AA0CDC;
    case 196u: goto L_08AA0CE8;
    case 197u: goto L_08AA0CFC;
    case 198u: goto L_08AA0D0C;
    case 199u: goto L_08AA0D14;
    case 200u: goto L_08AA0D18;
    case 201u: goto L_08AA0D28;
    case 202u: goto L_08AA0D38;
    case 203u: goto L_08AA0D40;
    case 204u: goto L_08AA0D4C;
    case 205u: goto L_08AA0D58;
    case 206u: goto L_08AA0D64;
    case 207u: goto L_08AA0D6C;
    case 208u: goto L_08AA0D70;
    case 209u: goto L_08AA0D80;
    case 210u: goto L_08AA0D90;
    case 211u: goto L_08AA0D98;
    case 212u: goto L_08AA0DA4;
    case 213u: goto L_08AA0DB0;
    case 214u: goto L_08AA0DBC;
    case 215u: goto L_08AA0DC4;
    case 216u: goto L_08AA0DD0;
    case 217u: goto L_08AA0DDC;
    case 218u: goto L_08AA0DEC;
    case 219u: goto L_08AA0DFC;
    case 220u: goto L_08AA0E0C;
    case 221u: goto L_08AA0E20;
    case 222u: goto L_08AA0E34;
    case 223u: goto L_08AA0E44;
    case 224u: goto L_08AA0E50;
    case 225u: goto L_08AA0E60;
    case 226u: goto L_08AA0E70;
    case 227u: goto L_08AA0E78;
    case 228u: goto L_08AA0EA8;
    case 229u: goto L_08AA0EC8;
    case 230u: goto L_08AA0ED4;
    case 231u: goto L_08AA0EE8;
    case 232u: goto L_08AA0EF4;
    case 233u: goto L_08AA0EFC;
    case 234u: goto L_08AA0F0C;
    case 235u: goto L_08AA0F18;
    case 236u: goto L_08AA0F28;
    case 237u: goto L_08AA0F40;
    case 238u: goto L_08AA0F5C;
    case 239u: goto L_08AA0F6C;
    case 240u: goto L_08AA0F7C;
    case 241u: goto L_08AA0F88;
    case 242u: goto L_08AA0F94;
    case 243u: goto L_08AA0F9C;
    case 244u: goto L_08AA0FA4;
    case 245u: goto L_08AA0FA8;
    case 246u: goto L_08AA0FB0;
    case 247u: goto L_08AA1010;
    case 248u: goto L_08AA1018;
    case 249u: goto L_08AA1020;
    case 250u: goto L_08AA102C;
    case 251u: goto L_08AA103C;
    case 252u: goto L_08AA1044;
    case 253u: goto L_08AA1054;
    case 254u: goto L_08AA1060;
    case 255u: goto L_08AA1070;
    case 256u: goto L_08AA1080;
    case 257u: goto L_08AA1088;
    case 258u: goto L_08AA1090;
    case 259u: goto L_08AA109C;
    case 260u: goto L_08AA10AC;
    case 261u: goto L_08AA10B8;
    case 262u: goto L_08AA10C8;
    case 263u: goto L_08AA10D8;
    case 264u: goto L_08AA10DC;
    case 265u: goto L_08AA10E8;
    case 266u: goto L_08AA10F4;
    case 267u: goto L_08AA1104;
    case 268u: goto L_08AA1108;
    case 269u: goto L_08AA1128;
    case 270u: goto L_08AA1130;
    case 271u: goto L_08AA1134;
    case 272u: goto L_08AA1140;
    case 273u: goto L_08AA1144;
    case 274u: goto L_08AA1150;
    case 275u: goto L_08AA1158;
    case 276u: goto L_08AA1178;
    case 277u: goto L_08AA1180;
    case 278u: goto L_08AA1188;
    case 279u: goto L_08AA1194;
    case 280u: goto L_08AA119C;
    case 281u: goto L_08AA11A4;
    case 282u: goto L_08AA11AC;
    case 283u: goto L_08AA11C0;
    case 284u: goto L_08AA11E4;
    case 285u: goto L_08AA11F0;
    case 286u: goto L_08AA11F8;
    case 287u: goto L_08AA1204;
    case 288u: goto L_08AA120C;
    case 289u: goto L_08AA1214;
    case 290u: goto L_08AA121C;
    case 291u: goto L_08AA1224;
    case 292u: goto L_08AA1238;
    case 293u: goto L_08AA125C;
    case 294u: goto L_08AA1264;
    case 295u: goto L_08AA1274;
    case 296u: goto L_08AA127C;
    case 297u: goto L_08AA1290;
    case 298u: goto L_08AA12C4;
    case 299u: goto L_08AA12CC;
    case 300u: goto L_08AA12D4;
    case 301u: goto L_08AA12E4;
    case 302u: goto L_08AA12EC;
    case 303u: goto L_08AA1300;
    case 304u: goto L_08AA1314;
    case 305u: goto L_08AA132C;
    case 306u: goto L_08AA134C;
    case 307u: goto L_08AA1354;
    case 308u: goto L_08AA1360;
    case 309u: goto L_08AA136C;
    case 310u: goto L_08AA1378;
    case 311u: goto L_08AA1384;
    case 312u: goto L_08AA1390;
    case 313u: goto L_08AA139C;
    case 314u: goto L_08AA13A4;
    case 315u: goto L_08AA13B8;
    case 316u: goto L_08AA13C0;
    case 317u: goto L_08AA13E4;
    case 318u: goto L_08AA140C;
    case 319u: goto L_08AA1424;
    case 320u: goto L_08AA1430;
    case 321u: goto L_08AA1444;
    case 322u: goto L_08AA144C;
    case 323u: goto L_08AA1460;
    case 324u: goto L_08AA14A4;
    case 325u: goto L_08AA14C4;
    case 326u: goto L_08AA14CC;
    case 327u: goto L_08AA14D8;
    case 328u: goto L_08AA14E8;
    case 329u: goto L_08AA14F0;
    case 330u: goto L_08AA14FC;
    case 331u: goto L_08AA150C;
    case 332u: goto L_08AA1518;
    case 333u: goto L_08AA1524;
    case 334u: goto L_08AA1538;
    case 335u: goto L_08AA154C;
    case 336u: goto L_08AA1560;
    case 337u: goto L_08AA1564;
    case 338u: goto L_08AA156C;
    case 339u: goto L_08AA1584;
    case 340u: goto L_08AA15B4;
    case 341u: goto L_08AA15C0;
    case 342u: goto L_08AA15CC;
    case 343u: goto L_08AA15D4;
    case 344u: goto L_08AA15DC;
    case 345u: goto L_08AA15E8;
    case 346u: goto L_08AA15F4;
    case 347u: goto L_08AA160C;
    case 348u: goto L_08AA1614;
    case 349u: goto L_08AA161C;
    case 350u: goto L_08AA1640;
    case 351u: goto L_08AA164C;
    case 352u: goto L_08AA1658;
    case 353u: goto L_08AA1664;
    case 354u: goto L_08AA1674;
    case 355u: goto L_08AA1680;
    case 356u: goto L_08AA1698;
    case 357u: goto L_08AA16A0;
    case 358u: goto L_08AA16A8;
    case 359u: goto L_08AA16CC;
    case 360u: goto L_08AA16D8;
    case 361u: goto L_08AA16E4;
    case 362u: goto L_08AA16F0;
    case 363u: goto L_08AA16FC;
    case 364u: goto L_08AA170C;
    case 365u: goto L_08AA172C;
    case 366u: goto L_08AA175C;
    case 367u: goto L_08AA1780;
    case 368u: goto L_08AA1788;
    case 369u: goto L_08AA1794;
    case 370u: goto L_08AA179C;
    case 371u: goto L_08AA17A4;
    case 372u: goto L_08AA17B4;
    case 373u: goto L_08AA17C8;
    case 374u: goto L_08AA17E8;
    case 375u: goto L_08AA17F4;
    case 376u: goto L_08AA17FC;
    case 377u: goto L_08AA1804;
    case 378u: goto L_08AA180C;
    case 379u: goto L_08AA1810;
    case 380u: goto L_08AA1818;
    case 381u: goto L_08AA1824;
    case 382u: goto L_08AA1828;
    case 383u: goto L_08AA183C;
    case 384u: goto L_08AA1844;
    case 385u: goto L_08AA187C;
    case 386u: goto L_08AA18A8;
    case 387u: goto L_08AA18D0;
    case 388u: goto L_08AA18E0;
    case 389u: goto L_08AA18E8;
    case 390u: goto L_08AA18F4;
    case 391u: goto L_08AA18FC;
    case 392u: goto L_08AA1904;
    case 393u: goto L_08AA1918;
    case 394u: goto L_08AA1920;
    case 395u: goto L_08AA1928;
    case 396u: goto L_08AA193C;
    case 397u: goto L_08AA195C;
    case 398u: goto L_08AA1968;
    case 399u: goto L_08AA1978;
    case 400u: goto L_08AA1984;
    case 401u: goto L_08AA198C;
    case 402u: goto L_08AA1994;
    case 403u: goto L_08AA199C;
    case 404u: goto L_08AA19B0;
    case 405u: goto L_08AA19D0;
    case 406u: goto L_08AA19D4;
    case 407u: goto L_08AA19E8;
    case 408u: goto L_08AA1A14;
    case 409u: goto L_08AA1A28;
    case 410u: goto L_08AA1A30;
    case 411u: goto L_08AA1A3C;
    case 412u: goto L_08AA1A44;
    case 413u: goto L_08AA1A4C;
    case 414u: goto L_08AA1A64;
    case 415u: goto L_08AA1A6C;
    case 416u: goto L_08AA1A78;
    case 417u: goto L_08AA1A80;
    case 418u: goto L_08AA1A88;
    case 419u: goto L_08AA1A90;
    case 420u: goto L_08AA1AA4;
    case 421u: goto L_08AA1AC4;
    case 422u: goto L_08AA1AD4;
    case 423u: goto L_08AA1AE0;
    case 424u: goto L_08AA1AE8;
    case 425u: goto L_08AA1AFC;
    case 426u: goto L_08AA1B28;
    case 427u: goto L_08AA1B2C;
    case 428u: goto L_08AA1B30;
    case 429u: goto L_08AA1B48;
    case 430u: goto L_08AA1B64;
    case 431u: goto L_08AA1B70;
    case 432u: goto L_08AA1B90;
    case 433u: goto L_08AA1B94;
    case 434u: goto L_08AA1BA4;
    case 435u: goto L_08AA1BB4;
    case 436u: goto L_08AA1BC4;
    case 437u: goto L_08AA1BD4;
    case 438u: goto L_08AA1BE0;
    case 439u: goto L_08AA1BE4;
    case 440u: goto L_08AA1C10;
    case 441u: goto L_08AA1C14;
    case 442u: goto L_08AA1C30;
    case 443u: goto L_08AA1C40;
    case 444u: goto L_08AA1C50;
    case 445u: goto L_08AA1C60;
    case 446u: goto L_08AA1C70;
    case 447u: goto L_08AA1C74;
    case 448u: goto L_08AA1CA0;
    case 449u: goto L_08AA1CA4;
    case 450u: goto L_08AA1CC0;
    case 451u: goto L_08AA1CC8;
    case 452u: goto L_08AA1CF0;
    case 453u: goto L_08AA1CFC;
    case 454u: goto L_08AA1D08;
    case 455u: goto L_08AA1D10;
    case 456u: goto L_08AA1D2C;
    case 457u: goto L_08AA1D64;
    case 458u: goto L_08AA1D8C;
    case 459u: goto L_08AA1DA8;
    case 460u: goto L_08AA1DE0;
    case 461u: goto L_08AA1E08;
    case 462u: goto L_08AA1E28;
    case 463u: goto L_08AA1E60;
    case 464u: goto L_08AA1E9C;
    case 465u: goto L_08AA1EA4;
    case 466u: goto L_08AA1EB0;
    case 467u: goto L_08AA1EC4;
    case 468u: goto L_08AA1ED4;
    case 469u: goto L_08AA1EDC;
    case 470u: goto L_08AA1EEC;
    case 471u: goto L_08AA1EFC;
    case 472u: goto L_08AA1F0C;
    case 473u: goto L_08AA1F1C;
    case 474u: goto L_08AA1F2C;
    case 475u: goto L_08AA1F3C;
    case 476u: goto L_08AA1F60;
    case 477u: goto L_08AA1F98;
    case 478u: goto L_08AA1FC4;
    case 479u: goto L_08AA1FC8;
    case 480u: goto L_08AA1FE0;
    case 481u: goto L_08AA2010;
    case 482u: goto L_08AA201C;
    case 483u: goto L_08AA2024;
    case 484u: goto L_08AA203C;
    case 485u: goto L_08AA2074;
    case 486u: goto L_08AA2098;
    case 487u: goto L_08AA20B4;
    case 488u: goto L_08AA20EC;
    case 489u: goto L_08AA2110;
    case 490u: goto L_08AA2120;
    case 491u: goto L_08AA2124;
    case 492u: goto L_08AA2130;
    case 493u: goto L_08AA2140;
    case 494u: goto L_08AA2150;
    case 495u: goto L_08AA2160;
    case 496u: goto L_08AA2170;
    case 497u: goto L_08AA2174;
    case 498u: goto L_08AA2178;
    case 499u: goto L_08AA2180;
    case 500u: goto L_08AA2190;
    case 501u: goto L_08AA21A0;
    case 502u: goto L_08AA21B0;
    case 503u: goto L_08AA21C0;
    case 504u: goto L_08AA21C4;
    case 505u: goto L_08AA21C8;
    case 506u: goto L_08AA21D0;
    case 507u: goto L_08AA21D8;
    case 508u: goto L_08AA21EC;
    case 509u: goto L_08AA2210;
    case 510u: goto L_08AA2248;
    case 511u: goto L_08AA227C;
    case 512u: goto L_08AA2280;
    case 513u: goto L_08AA22BC;
    case 514u: goto L_08AA22DC;
    case 515u: goto L_08AA22F0;
    case 516u: goto L_08AA2300;
    case 517u: goto L_08AA230C;
    case 518u: goto L_08AA2328;
    case 519u: goto L_08AA2340;
    case 520u: goto L_08AA2350;
    case 521u: goto L_08AA235C;
    case 522u: goto L_08AA2364;
    case 523u: goto L_08AA236C;
    case 524u: goto L_08AA2374;
    case 525u: goto L_08AA237C;
    case 526u: goto L_08AA2388;
    case 527u: goto L_08AA2390;
    case 528u: goto L_08AA239C;
    case 529u: goto L_08AA23A4;
    case 530u: goto L_08AA23AC;
    case 531u: goto L_08AA23B4;
    case 532u: goto L_08AA23C0;
    case 533u: goto L_08AA23C8;
    case 534u: goto L_08AA23D0;
    case 535u: goto L_08AA23D8;
    case 536u: goto L_08AA23E4;
    case 537u: goto L_08AA23EC;
    case 538u: goto L_08AA23F0;
    case 539u: goto L_08AA23F8;
    case 540u: goto L_08AA240C;
    case 541u: goto L_08AA2420;
    case 542u: goto L_08AA2434;
    case 543u: goto L_08AA2448;
    case 544u: goto L_08AA2464;
    case 545u: goto L_08AA2470;
    case 546u: goto L_08AA2478;
    case 547u: goto L_08AA2480;
    case 548u: goto L_08AA2498;
    case 549u: goto L_08AA24AC;
    case 550u: goto L_08AA24B8;
    case 551u: goto L_08AA24BC;
    case 552u: goto L_08AA24C4;
    case 553u: goto L_08AA2510;
    case 554u: goto L_08AA2524;
    case 555u: goto L_08AA2534;
    case 556u: goto L_08AA253C;
    case 557u: goto L_08AA2560;
    case 558u: goto L_08AA256C;
    case 559u: goto L_08AA2580;
    case 560u: goto L_08AA258C;
    case 561u: goto L_08AA259C;
    case 562u: goto L_08AA25A0;
    case 563u: goto L_08AA25B4;
    case 564u: goto L_08AA25D8;
    case 565u: goto L_08AA25E0;
    case 566u: goto L_08AA25F8;
    case 567u: goto L_08AA2608;
    case 568u: goto L_08AA2610;
    case 569u: goto L_08AA261C;
    case 570u: goto L_08AA262C;
    case 571u: goto L_08AA2634;
    case 572u: goto L_08AA2640;
    case 573u: goto L_08AA2650;
    case 574u: goto L_08AA2658;
    case 575u: goto L_08AA2664;
    case 576u: goto L_08AA2674;
    case 577u: goto L_08AA267C;
    case 578u: goto L_08AA2688;
    case 579u: goto L_08AA2698;
    case 580u: goto L_08AA26A0;
    case 581u: goto L_08AA26B0;
    case 582u: goto L_08AA26BC;
    case 583u: goto L_08AA26E0;
    case 584u: goto L_08AA26FC;
    case 585u: goto L_08AA2708;
    case 586u: goto L_08AA2710;
    case 587u: goto L_08AA2718;
    case 588u: goto L_08AA2728;
    case 589u: goto L_08AA2730;
    case 590u: goto L_08AA2738;
    case 591u: goto L_08AA2740;
    case 592u: goto L_08AA2750;
    case 593u: goto L_08AA2754;
    case 594u: goto L_08AA275C;
    case 595u: goto L_08AA2768;
    case 596u: goto L_08AA2778;
    case 597u: goto L_08AA2780;
    case 598u: goto L_08AA2790;
    case 599u: goto L_08AA2798;
    case 600u: goto L_08AA27A8;
    case 601u: goto L_08AA27B0;
    case 602u: goto L_08AA27C0;
    case 603u: goto L_08AA27C8;
    case 604u: goto L_08AA27D4;
    case 605u: goto L_08AA27DC;
    case 606u: goto L_08AA27E8;
    case 607u: goto L_08AA27F0;
    case 608u: goto L_08AA27F8;
    case 609u: goto L_08AA2804;
    case 610u: goto L_08AA280C;
    case 611u: goto L_08AA281C;
    case 612u: goto L_08AA2824;
    case 613u: goto L_08AA2830;
    case 614u: goto L_08AA2838;
    case 615u: goto L_08AA2844;
    case 616u: goto L_08AA2860;
    case 617u: goto L_08AA2884;
    case 618u: goto L_08AA28A0;
    case 619u: goto L_08AA28B0;
    case 620u: goto L_08AA28B8;
    case 621u: goto L_08AA28C8;
    case 622u: goto L_08AA28D0;
    case 623u: goto L_08AA28E0;
    case 624u: goto L_08AA28E8;
    case 625u: goto L_08AA28F8;
    case 626u: goto L_08AA2900;
    case 627u: goto L_08AA290C;
    case 628u: goto L_08AA2914;
    case 629u: goto L_08AA291C;
    case 630u: goto L_08AA292C;
    case 631u: goto L_08AA2934;
    case 632u: goto L_08AA293C;
    case 633u: goto L_08AA2944;
    case 634u: goto L_08AA2954;
    case 635u: goto L_08AA2958;
    case 636u: goto L_08AA2960;
    case 637u: goto L_08AA296C;
    case 638u: goto L_08AA297C;
    case 639u: goto L_08AA2984;
    case 640u: goto L_08AA2994;
    case 641u: goto L_08AA299C;
    case 642u: goto L_08AA29AC;
    case 643u: goto L_08AA29B4;
    case 644u: goto L_08AA29C4;
    case 645u: goto L_08AA29CC;
    case 646u: goto L_08AA29D8;
    case 647u: goto L_08AA29E0;
    case 648u: goto L_08AA29EC;
    case 649u: goto L_08AA29F4;
    case 650u: goto L_08AA29FC;
    case 651u: goto L_08AA2A08;
    case 652u: goto L_08AA2A10;
    case 653u: goto L_08AA2A20;
    case 654u: goto L_08AA2A28;
    case 655u: goto L_08AA2A34;
    case 656u: goto L_08AA2A3C;
    case 657u: goto L_08AA2A48;
    case 658u: goto L_08AA2A64;
    case 659u: goto L_08AA2A88;
    case 660u: goto L_08AA2A98;
    case 661u: goto L_08AA2AA0;
    case 662u: goto L_08AA2AA8;
    case 663u: goto L_08AA2AB8;
    case 664u: goto L_08AA2AC0;
    case 665u: goto L_08AA2AC8;
    case 666u: goto L_08AA2AD0;
    case 667u: goto L_08AA2AE0;
    case 668u: goto L_08AA2AE4;
    case 669u: goto L_08AA2AEC;
    case 670u: goto L_08AA2AFC;
    case 671u: goto L_08AA2B04;
    case 672u: goto L_08AA2B14;
    case 673u: goto L_08AA2B1C;
    case 674u: goto L_08AA2B2C;
    case 675u: goto L_08AA2B34;
    case 676u: goto L_08AA2B40;
    case 677u: goto L_08AA2B48;
    case 678u: goto L_08AA2B58;
    case 679u: goto L_08AA2B60;
    case 680u: goto L_08AA2B6C;
    case 681u: goto L_08AA2B74;
    case 682u: goto L_08AA2B80;
    case 683u: goto L_08AA2B88;
    case 684u: goto L_08AA2B90;
    case 685u: goto L_08AA2B9C;
    case 686u: goto L_08AA2BA4;
    case 687u: goto L_08AA2BB4;
    case 688u: goto L_08AA2BBC;
    case 689u: goto L_08AA2BC8;
    case 690u: goto L_08AA2BD4;
    case 691u: goto L_08AA2BF0;
    case 692u: goto L_08AA2C0C;
    case 693u: goto L_08AA2C28;
    case 694u: goto L_08AA2C34;
    case 695u: goto L_08AA2C3C;
    case 696u: goto L_08AA2C48;
    case 697u: goto L_08AA2C58;
    case 698u: goto L_08AA2C60;
    case 699u: goto L_08AA2C70;
    case 700u: goto L_08AA2C78;
    case 701u: goto L_08AA2C84;
    case 702u: goto L_08AA2C8C;
    case 703u: goto L_08AA2C98;
    case 704u: goto L_08AA2CA8;
    case 705u: goto L_08AA2CB0;
    case 706u: goto L_08AA2CC0;
    case 707u: goto L_08AA2CC8;
    case 708u: goto L_08AA2CD4;
    case 709u: goto L_08AA2CDC;
    case 710u: goto L_08AA2CEC;
    case 711u: goto L_08AA2CF4;
    case 712u: goto L_08AA2D00;
    case 713u: goto L_08AA2D0C;
    case 714u: goto L_08AA2D24;
    case 715u: goto L_08AA2D40;
    case 716u: goto L_08AA2D5C;
    case 717u: goto L_08AA2D6C;
    case 718u: goto L_08AA2D74;
    case 719u: goto L_08AA2D84;
    case 720u: goto L_08AA2D8C;
    case 721u: goto L_08AA2D98;
    case 722u: goto L_08AA2DA0;
    case 723u: goto L_08AA2DA8;
    case 724u: goto L_08AA2DB8;
    case 725u: goto L_08AA2DC0;
    case 726u: goto L_08AA2DC8;
    case 727u: goto L_08AA2DD0;
    case 728u: goto L_08AA2DE0;
    case 729u: goto L_08AA2DE4;
    case 730u: goto L_08AA2DEC;
    case 731u: goto L_08AA2DF8;
    case 732u: goto L_08AA2E08;
    case 733u: goto L_08AA2E10;
    case 734u: goto L_08AA2E20;
    case 735u: goto L_08AA2E28;
    case 736u: goto L_08AA2E34;
    case 737u: goto L_08AA2E3C;
    case 738u: goto L_08AA2E48;
    case 739u: goto L_08AA2E58;
    case 740u: goto L_08AA2E60;
    case 741u: goto L_08AA2E70;
    case 742u: goto L_08AA2E78;
    case 743u: goto L_08AA2E84;
    case 744u: goto L_08AA2E8C;
    case 745u: goto L_08AA2E9C;
    case 746u: goto L_08AA2EA4;
    case 747u: goto L_08AA2EB0;
    case 748u: goto L_08AA2EBC;
    case 749u: goto L_08AA2ED4;
    case 750u: goto L_08AA2EF4;
    case 751u: goto L_08AA2F00;
    case 752u: goto L_08AA2F08;
    case 753u: goto L_08AA2F18;
    case 754u: goto L_08AA2F20;
    case 755u: goto L_08AA2F28;
    case 756u: goto L_08AA2F34;
    case 757u: goto L_08AA2F3C;
    case 758u: goto L_08AA2F48;
    case 759u: goto L_08AA2F60;
    case 760u: goto L_08AA2F7C;
    case 761u: goto L_08AA2F8C;
    case 762u: goto L_08AA2F9C;
    case 763u: goto L_08AA2FA0;
    case 764u: goto L_08AA2FB4;
    case 765u: goto L_08AA2FE0;
    case 766u: goto L_08AA2FEC;
    case 767u: goto L_08AA2FF4;
    case 768u: goto L_08AA301C;
    case 769u: goto L_08AA3024;
    case 770u: goto L_08AA302C;
    case 771u: goto L_08AA3030;
    case 772u: goto L_08AA305C;
    case 773u: goto L_08AA3060;
    case 774u: goto L_08AA3070;
    case 775u: goto L_08AA309C;
    case 776u: goto L_08AA30A8;
    case 777u: goto L_08AA30B0;
    case 778u: goto L_08AA30D8;
    case 779u: goto L_08AA30E0;
    case 780u: goto L_08AA30E8;
    case 781u: goto L_08AA30EC;
    case 782u: goto L_08AA3118;
    case 783u: goto L_08AA311C;
    case 784u: goto L_08AA312C;
    case 785u: goto L_08AA3158;
    case 786u: goto L_08AA3164;
    case 787u: goto L_08AA316C;
    case 788u: goto L_08AA3194;
    case 789u: goto L_08AA319C;
    case 790u: goto L_08AA31A4;
    case 791u: goto L_08AA31A8;
    case 792u: goto L_08AA31D4;
    case 793u: goto L_08AA31D8;
    case 794u: goto L_08AA31E8;
    case 795u: goto L_08AA3214;
    case 796u: goto L_08AA3220;
    case 797u: goto L_08AA3228;
    case 798u: goto L_08AA3250;
    case 799u: goto L_08AA3258;
    case 800u: goto L_08AA3260;
    case 801u: goto L_08AA3264;
    case 802u: goto L_08AA3290;
    case 803u: goto L_08AA3294;
    case 804u: goto L_08AA32A4;
    case 805u: goto L_08AA32F4;
    case 806u: goto L_08AA3304;
    case 807u: goto L_08AA3310;
    case 808u: goto L_08AA3320;
    case 809u: goto L_08AA3338;
    case 810u: goto L_08AA3348;
    case 811u: goto L_08AA3354;
    case 812u: goto L_08AA3364;
    case 813u: goto L_08AA337C;
    case 814u: goto L_08AA3390;
    case 815u: goto L_08AA33A8;
    case 816u: goto L_08AA33BC;
    case 817u: goto L_08AA33CC;
    case 818u: goto L_08AA33E0;
    case 819u: goto L_08AA33F4;
    case 820u: goto L_08AA3404;
    case 821u: goto L_08AA3414;
    case 822u: goto L_08AA3430;
    case 823u: goto L_08AA3448;
    case 824u: goto L_08AA3458;
    case 825u: goto L_08AA3460;
    case 826u: goto L_08AA3484;
    case 827u: goto L_08AA3490;
    case 828u: goto L_08AA34A4;
    case 829u: goto L_08AA34B0;
    case 830u: goto L_08AA34C0;
    case 831u: goto L_08AA34D0;
    case 832u: goto L_08AA34E8;
    case 833u: goto L_08AA34F4;
    case 834u: goto L_08AA3500;
    case 835u: goto L_08AA350C;
    case 836u: goto L_08AA3518;
    case 837u: goto L_08AA3538;
    case 838u: goto L_08AA3548;
    case 839u: goto L_08AA3558;
    case 840u: goto L_08AA3568;
    case 841u: goto L_08AA3578;
    case 842u: goto L_08AA3588;
    case 843u: goto L_08AA3598;
    case 844u: goto L_08AA359C;
    case 845u: goto L_08AA35B0;
    case 846u: goto L_08AA35DC;
    case 847u: goto L_08AA35F8;
    case 848u: goto L_08AA3600;
    case 849u: goto L_08AA3618;
    case 850u: goto L_08AA3628;
    case 851u: goto L_08AA3674;
    case 852u: goto L_08AA3680;
    case 853u: goto L_08AA36A0;
    case 854u: goto L_08AA36B0;
    case 855u: goto L_08AA36C0;
    case 856u: goto L_08AA36C8;
    case 857u: goto L_08AA36DC;
    case 858u: goto L_08AA36E8;
    case 859u: goto L_08AA36F4;
    case 860u: goto L_08AA3704;
    case 861u: goto L_08AA371C;
    case 862u: goto L_08AA3724;
    case 863u: goto L_08AA373C;
    case 864u: goto L_08AA375C;
    case 865u: goto L_08AA37B8;
    case 866u: goto L_08AA37C4;
    case 867u: goto L_08AA37D8;
    case 868u: goto L_08AA3814;
    case 869u: goto L_08AA3828;
    case 870u: goto L_08AA3844;
    case 871u: goto L_08AA3858;
    case 872u: goto L_08AA3878;
    case 873u: goto L_08AA388C;
    case 874u: goto L_08AA3898;
    case 875u: goto L_08AA38BC;
    case 876u: goto L_08AA38C4;
    case 877u: goto L_08AA38DC;
    case 878u: goto L_08AA38E4;
    case 879u: goto L_08AA38EC;
    case 880u: goto L_08AA38F4;
    case 881u: goto L_08AA3900;
    case 882u: goto L_08AA3950;
    case 883u: goto L_08AA3974;
    case 884u: goto L_08AA3994;
    case 885u: goto L_08AA39DC;
    case 886u: goto L_08AA39EC;
    case 887u: goto L_08AA3A04;
    case 888u: goto L_08AA3A20;
    case 889u: goto L_08AA3A44;
    case 890u: goto L_08AA3A78;
    case 891u: goto L_08AA3A9C;
    case 892u: goto L_08AA3AC0;
    case 893u: goto L_08AA3ACC;
    case 894u: goto L_08AA3AD4;
    case 895u: goto L_08AA3ADC;
    case 896u: goto L_08AA3AE4;
    case 897u: goto L_08AA3AEC;
    case 898u: goto L_08AA3AF4;
    case 899u: goto L_08AA3B04;
    case 900u: goto L_08AA3B14;
    case 901u: goto L_08AA3B1C;
    case 902u: goto L_08AA3B24;
    case 903u: goto L_08AA3B38;
    case 904u: goto L_08AA3B40;
    case 905u: goto L_08AA3B50;
    case 906u: goto L_08AA3B58;
    case 907u: goto L_08AA3B60;
    case 908u: goto L_08AA3B74;
    case 909u: goto L_08AA3B90;
    case 910u: goto L_08AA3BAC;
    case 911u: goto L_08AA3BB4;
    case 912u: goto L_08AA3BBC;
    case 913u: goto L_08AA3BD0;
    case 914u: goto L_08AA3BE4;
    case 915u: goto L_08AA3C04;
    case 916u: goto L_08AA3C14;
    case 917u: goto L_08AA3C1C;
    case 918u: goto L_08AA3C28;
    case 919u: goto L_08AA3C44;
    case 920u: goto L_08AA3C50;
    case 921u: goto L_08AA3C5C;
    case 922u: goto L_08AA3C64;
    case 923u: goto L_08AA3C7C;
    case 924u: goto L_08AA3CA0;
    case 925u: goto L_08AA3CA4;
    case 926u: goto L_08AA3CC8;
    case 927u: goto L_08AA3CD0;
    case 928u: goto L_08AA3CE0;
    case 929u: goto L_08AA3CE8;
    case 930u: goto L_08AA3CEC;
    case 931u: goto L_08AA3CF4;
    case 932u: goto L_08AA3D08;
    case 933u: goto L_08AA3D1C;
    case 934u: goto L_08AA3D24;
    case 935u: goto L_08AA3D40;
    case 936u: goto L_08AA3D54;
    case 937u: goto L_08AA3D68;
    case 938u: goto L_08AA3D70;
    case 939u: goto L_08AA3D74;
    case 940u: goto L_08AA3D98;
    case 941u: goto L_08AA3DB4;
    case 942u: goto L_08AA3DC8;
    case 943u: goto L_08AA3DD0;
    case 944u: goto L_08AA3DDC;
    case 945u: goto L_08AA3DE8;
    case 946u: goto L_08AA3DFC;
    case 947u: goto L_08AA3E04;
    case 948u: goto L_08AA3E08;
    case 949u: goto L_08AA3E10;
    case 950u: goto L_08AA3E48;
    case 951u: goto L_08AA3E58;
    case 952u: goto L_08AA3E80;
    case 953u: goto L_08AA3E90;
    case 954u: goto L_08AA3EA0;
    case 955u: goto L_08AA3EA8;
    case 956u: goto L_08AA3EAC;
    case 957u: goto L_08AA3EB4;
    case 958u: goto L_08AA3EC4;
    case 959u: goto L_08AA3ECC;
    case 960u: goto L_08AA3ED0;
    case 961u: goto L_08AA3EE8;
    case 962u: goto L_08AA3EF4;
    case 963u: goto L_08AA3F00;
    case 964u: goto L_08AA3F08;
    case 965u: goto L_08AA3F48;
    case 966u: goto L_08AA3F4C;
    case 967u: goto L_08AA3F78;
    case 968u: goto L_08AA3F80;
    case 969u: goto L_08AA3F8C;
    case 970u: goto L_08AA3F98;
    case 971u: goto L_08AA3FA0;
    case 972u: goto L_08AA3FD8;
    case 973u: goto L_08AA3FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AA0000:
    ctx.gpr[4] = (ctx.gpr[4] & 192u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AA002C;
      }
      goto L_08AA000C;
    }
L_08AA000C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0030;
      }
      goto L_08AA0014;
    }
L_08AA0014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0030;
      }
      goto L_08AA001C;
    }
L_08AA001C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0030;
      }
      goto L_08AA0024;
    }
L_08AA0024:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0030;
      }
      goto L_08AA002C;
    }
L_08AA002C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08AA0030;
L_08AA0030:
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
L_08AA004C:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[4] << 3u);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 15u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA012C;
      }
      goto L_08AA0088;
    }
L_08AA0088:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(6))))));
    goto L_08AA008C;
L_08AA008C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[4]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(30040)));
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[2] & 16383u);
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08AA0114;
      }
      goto L_08AA00BC;
    }
L_08AA00BC:
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] & 32768u);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA00F0;
      }
      goto L_08AA00DC;
    }
L_08AA00DC:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(30040)));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[4]);
    goto L_08AA00F0;
L_08AA00F0:
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] & 16384u);
    ctx.gpr[10] = (0u < ctx.gpr[10] ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0114;
      }
      goto L_08AA0110;
    }
L_08AA0110:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    goto L_08AA0114;
L_08AA0114:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] & 15u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(6))))));
        goto L_08AA008C;
    }
    goto L_08AA012C;
L_08AA012C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA0134:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA0150u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 580u, 0x08A9FAA0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0150u) goto L_08AA0150;
    return;
L_08AA0150:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AA0160u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 653u, 0x08A9FF94u>(ctx, &aot_mem) && ctx.pc == 0x08AA0160u) goto L_08AA0160;
    return;
L_08AA0160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA018C;
      }
      goto L_08AA016C;
    }
L_08AA016C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA018C;
      }
      goto L_08AA0178;
    }
L_08AA0178:
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA0184u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_08AA004C;
L_08AA0184:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA0198;
      }
      goto L_08AA018C;
    }
L_08AA018C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (0u | 0u);
    goto L_08AA0198;
L_08AA0198:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA01AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA01BCu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(10184));
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 557u, 0x08B3E8BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA01BCu) goto L_08AA01BC;
    return;
L_08AA01BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA01C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA021C;
      }
      goto L_08AA01F4;
    }
L_08AA01F4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AA0200u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AA0200u) goto L_08AA0200;
    return;
L_08AA0200:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0218;
      }
      goto L_08AA020C;
    }
L_08AA020C:
    ctx.gpr[31] = (0x08AA0214u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0214u) goto L_08AA0214;
    return;
L_08AA0214:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AA0218;
L_08AA0218:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AA021C;
L_08AA021C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA0234u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0234u) goto L_08AA0234;
    return;
L_08AA0234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AA0248;
    }
    goto L_08AA0240;
L_08AA0240:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA024C;
      }
      goto L_08AA0248;
    }
L_08AA0248:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AA024C;
L_08AA024C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AA0258u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AA0258u) goto L_08AA0258;
    return;
L_08AA0258:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08AA0278u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0278u) goto L_08AA0278;
    return;
L_08AA0278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[2] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA02B4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 405u, 0x08A35A60u>(ctx, &aot_mem) && ctx.pc == 0x08AA02B4u) goto L_08AA02B4;
    return;
L_08AA02B4:
    ctx.gpr[2] = (0u | 0u);
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
L_08AA02D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA02ECu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 404u, 0x08A35A58u>(ctx, &aot_mem) && ctx.pc == 0x08AA02ECu) goto L_08AA02EC;
    return;
L_08AA02EC:
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29704), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA0304u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08AA0304u) goto L_08AA0304;
    return;
L_08AA0304:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA0318:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA036C;
      }
      goto L_08AA0344;
    }
L_08AA0344:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AA0350u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AA0350u) goto L_08AA0350;
    return;
L_08AA0350:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0368;
      }
      goto L_08AA035C;
    }
L_08AA035C:
    ctx.gpr[31] = (0x08AA0364u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0364u) goto L_08AA0364;
    return;
L_08AA0364:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AA0368;
L_08AA0368:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AA036C;
L_08AA036C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA0384u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0384u) goto L_08AA0384;
    return;
L_08AA0384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AA0398;
    }
    goto L_08AA0390;
L_08AA0390:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA039C;
      }
      goto L_08AA0398;
    }
L_08AA0398:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AA039C;
L_08AA039C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AA03A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AA03A8u) goto L_08AA03A8;
    return;
L_08AA03A8:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08AA03C8u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA03C8u) goto L_08AA03C8;
    return;
L_08AA03C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[2] = (ctx.gpr[8] & 255u);
    ctx.gpr[3] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA0408u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 405u, 0x08A35A60u>(ctx, &aot_mem) && ctx.pc == 0x08AA0408u) goto L_08AA0408;
    return;
L_08AA0408:
    ctx.gpr[2] = (0u | 0u);
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
L_08AA042C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA044Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA044Cu) goto L_08AA044C;
    return;
L_08AA044C:
    ctx.gpr[31] = (0x08AA0454u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 229u, 0x08991098u>(ctx, &aot_mem) && ctx.pc == 0x08AA0454u) goto L_08AA0454;
    return;
L_08AA0454:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA0468:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
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
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA0484:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA04B0u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA04B0u) goto L_08AA04B0;
    return;
L_08AA04B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA04BCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 388u, 0x0889DB90u>(ctx, &aot_mem) && ctx.pc == 0x08AA04BCu) goto L_08AA04BC;
    return;
L_08AA04BC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AA04D0u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA04D0u) goto L_08AA04D0;
    return;
L_08AA04D0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AA0548;
      }
      goto L_08AA04DC;
    }
L_08AA04DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA04E8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA04E8u) goto L_08AA04E8;
    return;
L_08AA04E8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA04F8u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AA04F8u) goto L_08AA04F8;
    return;
L_08AA04F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA0508u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA0508u) goto L_08AA0508;
    return;
L_08AA0508:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AA0518u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 508u, 0x08807644u>(ctx, &aot_mem) && ctx.pc == 0x08AA0518u) goto L_08AA0518;
    return;
L_08AA0518:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA0524u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x08AA0524u) goto L_08AA0524;
    return;
L_08AA0524:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0550;
      }
      goto L_08AA052C;
    }
L_08AA052C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA0538u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08AA0538u) goto L_08AA0538;
    return;
L_08AA0538:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA04DC;
      }
      goto L_08AA0548;
    }
L_08AA0548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA0554;
      }
      goto L_08AA0550;
    }
L_08AA0550:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08AA0554;
L_08AA0554:
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
L_08AA0570:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA0594u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0594u) goto L_08AA0594;
    return;
L_08AA0594:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AA05A4u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA05A4u) goto L_08AA05A4;
    return;
L_08AA05A4:
    ctx.gpr[31] = (0x08AA05ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem) && ctx.pc == 0x08AA05ACu) goto L_08AA05AC;
    return;
L_08AA05AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA05B8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 540u, 0x088078B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA05B8u) goto L_08AA05B8;
    return;
L_08AA05B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0624;
      }
      goto L_08AA05C0;
    }
L_08AA05C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA05CCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA05CCu) goto L_08AA05CC;
    return;
L_08AA05CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA05D8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA05D8u) goto L_08AA05D8;
    return;
L_08AA05D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA05E4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA05E4u) goto L_08AA05E4;
    return;
L_08AA05E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AA05F4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 508u, 0x08807644u>(ctx, &aot_mem) && ctx.pc == 0x08AA05F4u) goto L_08AA05F4;
    return;
L_08AA05F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA0600u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x08AA0600u) goto L_08AA0600;
    return;
L_08AA0600:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA061C;
      }
      goto L_08AA0608;
    }
L_08AA0608:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA0614u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08AA0614u) goto L_08AA0614;
    return;
L_08AA0614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA05AC;
      }
      goto L_08AA061C;
    }
L_08AA061C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AA0628;
      }
      goto L_08AA0624;
    }
L_08AA0624:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AA0628;
L_08AA0628:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA063C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA0660u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0660u) goto L_08AA0660;
    return;
L_08AA0660:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA066Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 388u, 0x0889DB90u>(ctx, &aot_mem) && ctx.pc == 0x08AA066Cu) goto L_08AA066C;
    return;
L_08AA066C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA067Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AA067Cu) goto L_08AA067C;
    return;
L_08AA067C:
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
L_08AA0694:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA06B0u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA06B0u) goto L_08AA06B0;
    return;
L_08AA06B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA06BCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x08AA06BCu) goto L_08AA06BC;
    return;
L_08AA06BC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA06D0u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 370u, 0x0889DA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA06D0u) goto L_08AA06D0;
    return;
L_08AA06D0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA06E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA0708u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08AA0708u) goto L_08AA0708;
    return;
L_08AA0708:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA071Cu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA071Cu) goto L_08AA071C;
    return;
L_08AA071C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA0728u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 388u, 0x0889DB90u>(ctx, &aot_mem) && ctx.pc == 0x08AA0728u) goto L_08AA0728;
    return;
L_08AA0728:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    ctx.gpr[19] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA073C;
      }
      goto L_08AA0734;
    }
L_08AA0734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AA0764;
      }
      goto L_08AA073C;
    }
L_08AA073C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA0748u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x08AA0748u) goto L_08AA0748;
    return;
L_08AA0748:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0760;
      }
      goto L_08AA075C;
    }
L_08AA075C:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AA0760;
L_08AA0760:
    ctx.gpr[20] = (0u | 3u);
    goto L_08AA0764;
L_08AA0764:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA0774u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 370u, 0x0889DA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0774u) goto L_08AA0774;
    return;
L_08AA0774:
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA07BC;
      }
      goto L_08AA0788;
    }
L_08AA0788:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA0798u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA0798u) goto L_08AA0798;
    return;
L_08AA0798:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA07A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA07A8u) goto L_08AA07A8;
    return;
L_08AA07A8:
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0788;
      }
      goto L_08AA07BC;
    }
L_08AA07BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA07C8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA07C8u) goto L_08AA07C8;
    return;
L_08AA07C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA07D8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA07D8u) goto L_08AA07D8;
    return;
L_08AA07D8:
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
L_08AA07FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA082Cu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA082Cu) goto L_08AA082C;
    return;
L_08AA082C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA0838u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 388u, 0x0889DB90u>(ctx, &aot_mem) && ctx.pc == 0x08AA0838u) goto L_08AA0838;
    return;
L_08AA0838:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08AA0850u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 300u, 0x0889D684u>(ctx, &aot_mem) && ctx.pc == 0x08AA0850u) goto L_08AA0850;
    return;
L_08AA0850:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AA0890;
      }
      goto L_08AA085C;
    }
L_08AA085C:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA086Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 370u, 0x0889DA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA086Cu) goto L_08AA086C;
    return;
L_08AA086C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA087Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA087Cu) goto L_08AA087C;
    return;
L_08AA087C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0898;
      }
      goto L_08AA0888;
    }
L_08AA0888:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA08CC;
      }
      goto L_08AA0890;
    }
L_08AA0890:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA08E8;
      }
      goto L_08AA0898;
    }
L_08AA0898:
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA08ACu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA08ACu) goto L_08AA08AC;
    return;
L_08AA08AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA08BCu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA08BCu) goto L_08AA08BC;
    return;
L_08AA08BC:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0898;
      }
      goto L_08AA08CC;
    }
L_08AA08CC:
    ctx.gpr[31] = (0x08AA08D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem) && ctx.pc == 0x08AA08D4u) goto L_08AA08D4;
    return;
L_08AA08D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA08E4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA08E4u) goto L_08AA08E4;
    return;
L_08AA08E4:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08AA08E8;
L_08AA08E8:
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
L_08AA0908:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1040), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-4628));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1036));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1044), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1048), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA093Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 284u, 0x0889D588u>(ctx, &aot_mem) && ctx.pc == 0x08AA093Cu) goto L_08AA093C;
    return;
L_08AA093C:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA0954u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 300u, 0x0889D684u>(ctx, &aot_mem) && ctx.pc == 0x08AA0954u) goto L_08AA0954;
    return;
L_08AA0954:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08AA096Cu);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 300u, 0x0889D684u>(ctx, &aot_mem) && ctx.pc == 0x08AA096Cu) goto L_08AA096C;
    return;
L_08AA096C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08AA0988u);
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0988u) goto L_08AA0988;
    return;
L_08AA0988:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA09A0;
      }
      goto L_08AA0990;
    }
L_08AA0990:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA099Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 388u, 0x0889DB90u>(ctx, &aot_mem) && ctx.pc == 0x08AA099Cu) goto L_08AA099C;
    return;
L_08AA099C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08AA09A0;
L_08AA09A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA09ACu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 453u, 0x0889DFC8u>(ctx, &aot_mem) && ctx.pc == 0x08AA09ACu) goto L_08AA09AC;
    return;
L_08AA09AC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AA0A1C;
      }
      goto L_08AA09B8;
    }
L_08AA09B8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(9680));
    goto L_08AA09BC;
L_08AA09BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA09CCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA09CCu) goto L_08AA09CC;
    return;
L_08AA09CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA09D8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 344u, 0x08806984u>(ctx, &aot_mem) && ctx.pc == 0x08AA09D8u) goto L_08AA09D8;
    return;
L_08AA09D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA09EC;
      }
      goto L_08AA09E0;
    }
L_08AA09E0:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA09ECu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem) && ctx.pc == 0x08AA09ECu) goto L_08AA09EC;
    return;
L_08AA09EC:
    ctx.gpr[31] = (0x08AA09F4u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 442u, 0x0889DEF0u>(ctx, &aot_mem) && ctx.pc == 0x08AA09F4u) goto L_08AA09F4;
    return;
L_08AA09F4:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AA0A0C;
      }
      goto L_08AA09FC;
    }
L_08AA09FC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1036)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AA0A0Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 433u, 0x0889DE24u>(ctx, &aot_mem) && ctx.pc == 0x08AA0A0Cu) goto L_08AA0A0C;
    return;
L_08AA0A0C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA09BC;
      }
      goto L_08AA0A1C;
    }
L_08AA0A1C:
    ctx.gpr[31] = (0x08AA0A24u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 439u, 0x0889DEB8u>(ctx, &aot_mem) && ctx.pc == 0x08AA0A24u) goto L_08AA0A24;
    return;
L_08AA0A24:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1040)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1048)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA0A4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA0A70u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0A70u) goto L_08AA0A70;
    return;
L_08AA0A70:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA0A80u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0A80u) goto L_08AA0A80;
    return;
L_08AA0A80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA0A94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA0ABCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x08AA0ABCu) goto L_08AA0ABC;
    return;
L_08AA0ABC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0B1C;
      }
      goto L_08AA0AC4;
    }
L_08AA0AC4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA0AD0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0AD0u) goto L_08AA0AD0;
    return;
L_08AA0AD0:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AA0ADCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0ADCu) goto L_08AA0ADC;
    return;
L_08AA0ADC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (0x08AA0AE8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0AE8u) goto L_08AA0AE8;
    return;
L_08AA0AE8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AA0AF8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 508u, 0x08807644u>(ctx, &aot_mem) && ctx.pc == 0x08AA0AF8u) goto L_08AA0AF8;
    return;
L_08AA0AF8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA0B04u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0B04u) goto L_08AA0B04;
    return;
L_08AA0B04:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AA0B14u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08AA0B14u) goto L_08AA0B14;
    return;
L_08AA0B14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA0B2C;
      }
      goto L_08AA0B1C;
    }
L_08AA0B1C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA0B2Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 353u, 0x08806A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0B2Cu) goto L_08AA0B2C;
    return;
L_08AA0B2C:
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
L_08AA0B44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[22] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA0E78;
      }
      goto L_08AA0B84;
    }
L_08AA0B84:
    ctx.gpr[21] = (2232u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(9708));
    goto L_08AA0B8C;
L_08AA0B8C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA0B9Cu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA0B9Cu) goto L_08AA0B9C;
    return;
L_08AA0B9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA0BACu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA0BACu) goto L_08AA0BAC;
    return;
L_08AA0BAC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AA0BBCu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    goto L_08AA0A94;
L_08AA0BBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (ctx.gpr[22] - ctx.gpr[23]);
      if (branch_taken) {
          goto L_08AA0BDC;
      }
      goto L_08AA0BC4;
    }
L_08AA0BC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AA0BD4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_08AA0A4C;
L_08AA0BD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0BE8;
      }
      goto L_08AA0BDC;
    }
L_08AA0BDC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA0BE8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08AA0BE8u) goto L_08AA0BE8;
    return;
L_08AA0BE8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA0BFC;
      }
      goto L_08AA0BF4;
    }
L_08AA0BF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0E78;
      }
      goto L_08AA0BFC;
    }
L_08AA0BFC:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[22]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA0C20u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA0C20u) goto L_08AA0C20;
    return;
L_08AA0C20:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA0C30u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA0C30u) goto L_08AA0C30;
    return;
L_08AA0C30:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (0x08AA0C40u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AA0A94;
L_08AA0C40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0C60;
      }
      goto L_08AA0C48;
    }
L_08AA0C48:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA0C58u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_08AA0A4C;
L_08AA0C58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0CB8;
      }
      goto L_08AA0C60;
    }
L_08AA0C60:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA0C6Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08AA0C6Cu) goto L_08AA0C6C;
    return;
L_08AA0C6C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA0C7Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA0C7Cu) goto L_08AA0C7C;
    return;
L_08AA0C7C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AA0C8Cu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    goto L_08AA0A94;
L_08AA0C8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0CAC;
      }
      goto L_08AA0C94;
    }
L_08AA0C94:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA0CA4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_08AA0A4C;
L_08AA0CA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0CB8;
      }
      goto L_08AA0CAC;
    }
L_08AA0CAC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA0CB8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08AA0CB8u) goto L_08AA0CB8;
    return;
L_08AA0CB8:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA0CCC;
      }
      goto L_08AA0CC4;
    }
L_08AA0CC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0E78;
      }
      goto L_08AA0CCC;
    }
L_08AA0CCC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA0CDCu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA0CDCu) goto L_08AA0CDC;
    return;
L_08AA0CDC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA0CE8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0CE8u) goto L_08AA0CE8;
    return;
L_08AA0CE8:
    ctx.gpr[30] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA0CFCu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA0CFCu) goto L_08AA0CFC;
    return;
L_08AA0CFC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA0D0Cu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_08AA0A4C;
L_08AA0D0C:
    ctx.gpr[20] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    goto L_08AA0D14;
L_08AA0D14:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    goto L_08AA0D18;
L_08AA0D18:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA0D28u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA0D28u) goto L_08AA0D28;
    return;
L_08AA0D28:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AA0D38u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    goto L_08AA0A94;
L_08AA0D38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0D6C;
      }
      goto L_08AA0D40;
    }
L_08AA0D40:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA0D58;
      }
      goto L_08AA0D4C;
    }
L_08AA0D4C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA0D58u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem) && ctx.pc == 0x08AA0D58u) goto L_08AA0D58;
    return;
L_08AA0D58:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA0D64u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08AA0D64u) goto L_08AA0D64;
    return;
L_08AA0D64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AA0D18;
      }
      goto L_08AA0D6C;
    }
L_08AA0D6C:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08AA0D70;
L_08AA0D70:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA0D80u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA0D80u) goto L_08AA0D80;
    return;
L_08AA0D80:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[31] = (0x08AA0D90u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AA0A94;
L_08AA0D90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0DC4;
      }
      goto L_08AA0D98;
    }
L_08AA0D98:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA0DB0;
      }
      goto L_08AA0DA4;
    }
L_08AA0DA4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA0DB0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem) && ctx.pc == 0x08AA0DB0u) goto L_08AA0DB0;
    return;
L_08AA0DB0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA0DBCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08AA0DBCu) goto L_08AA0DBC;
    return;
L_08AA0DBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AA0D70;
      }
      goto L_08AA0DC4;
    }
L_08AA0DC4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0E34;
      }
      goto L_08AA0DD0;
    }
L_08AA0DD0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA0DDCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08AA0DDCu) goto L_08AA0DDC;
    return;
L_08AA0DDC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA0DECu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA0DECu) goto L_08AA0DEC;
    return;
L_08AA0DEC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA0DFCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA0DFCu) goto L_08AA0DFC;
    return;
L_08AA0DFC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08AA0E0Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08AA0A4C;
L_08AA0E0C:
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[22] - ctx.gpr[20]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0E50;
      }
      goto L_08AA0E20;
    }
L_08AA0E20:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA0E60;
      }
      goto L_08AA0E34;
    }
L_08AA0E34:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA0E44u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08AA0A4C;
L_08AA0E44:
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA0D14;
      }
      goto L_08AA0E50;
    }
L_08AA0E50:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    goto L_08AA0E60;
L_08AA0E60:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA0E70u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08AA0B44;
L_08AA0E70:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0B8C;
      }
      goto L_08AA0E78;
    }
L_08AA0E78:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA0EA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA0EC8u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0EC8u) goto L_08AA0EC8;
    return;
L_08AA0EC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA0ED4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 388u, 0x0889DB90u>(ctx, &aot_mem) && ctx.pc == 0x08AA0ED4u) goto L_08AA0ED4;
    return;
L_08AA0ED4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-4628));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA0EE8u);
    ctx.gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 265u, 0x0889D420u>(ctx, &aot_mem) && ctx.pc == 0x08AA0EE8u) goto L_08AA0EE8;
    return;
L_08AA0EE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA0EF4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x08AA0EF4u) goto L_08AA0EF4;
    return;
L_08AA0EF4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AA0F0C;
      }
      goto L_08AA0EFC;
    }
L_08AA0EFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AA0F0Cu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 269u, 0x0889D46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0F0Cu) goto L_08AA0F0C;
    return;
L_08AA0F0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA0F18u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08AA0F18u) goto L_08AA0F18;
    return;
L_08AA0F18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AA0F28u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08AA0B44;
L_08AA0F28:
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
L_08AA0F40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-4624));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA0F5Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(9608));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 328u, 0x0889D80Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0F5Cu) goto L_08AA0F5C;
    return;
L_08AA0F5C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA0F6C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA0FA4;
      }
      goto L_08AA0F7C;
    }
L_08AA0F7C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8344))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA0F94;
      }
      goto L_08AA0F88;
    }
L_08AA0F88:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA0F9C;
      }
      goto L_08AA0F94;
    }
L_08AA0F94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA0FA8;
      }
      goto L_08AA0F9C;
    }
L_08AA0F9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA0FA8;
      }
      goto L_08AA0FA4;
    }
L_08AA0FA4:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AA0FA8;
L_08AA0FA8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA0FB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[4] & 61440u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA1070;
      }
      goto L_08AA1010;
    }
L_08AA1010:
    ctx.gpr[31] = (0x08AA1018u);
    ctx.gpr[4] = (ctx.gpr[20] >> 12u);
    goto L_08AA0F6C;
L_08AA1018:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1070;
      }
      goto L_08AA1020;
    }
L_08AA1020:
    ctx.gpr[4] = (0u | 16384u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA103C;
      }
      goto L_08AA102C;
    }
L_08AA102C:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1044;
      }
      goto L_08AA103C;
    }
L_08AA103C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1108;
      }
      goto L_08AA1044;
    }
L_08AA1044:
    ctx.gpr[5] = (ctx.gpr[16] >> (ctx.gpr[4] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AA1060;
      }
      goto L_08AA1054;
    }
L_08AA1054:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08AA1060;
L_08AA1060:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA1044;
      }
      goto L_08AA1070;
    }
L_08AA1070:
    ctx.gpr[4] = (61440u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA10C8;
      }
      goto L_08AA1080;
    }
L_08AA1080:
    ctx.gpr[31] = (0x08AA1088u);
    ctx.gpr[4] = (ctx.gpr[4] >> 28u);
    goto L_08AA0F6C;
L_08AA1088:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA10C8;
      }
      goto L_08AA1090;
    }
L_08AA1090:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 15u);
    ctx.gpr[4] = (0u | 16u);
    goto L_08AA109C;
L_08AA109C:
    ctx.gpr[5] = (ctx.gpr[16] >> (ctx.gpr[4] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AA10B8;
      }
      goto L_08AA10AC;
    }
L_08AA10AC:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08AA10B8;
L_08AA10B8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA109C;
      }
      goto L_08AA10C8;
    }
L_08AA10C8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_08AA1104;
      }
      goto L_08AA10D8;
    }
L_08AA10D8:
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_08AA10DC;
L_08AA10DC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA10F4;
      }
      goto L_08AA10E8;
    }
L_08AA10E8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08AA10F4;
L_08AA10F4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA10DC;
      }
      goto L_08AA1104;
    }
L_08AA1104:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08AA1108;
L_08AA1108:
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
L_08AA1128:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1150;
      }
      goto L_08AA1130;
    }
L_08AA1130:
    ctx.gpr[5] = (0u | 15u);
    goto L_08AA1134;
L_08AA1134:
    ctx.gpr[6] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA1144;
      }
      goto L_08AA1140;
    }
L_08AA1140:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08AA1144;
L_08AA1144:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1134;
      }
      goto L_08AA1150;
    }
L_08AA1150:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA1158:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA11E4;
      }
      goto L_08AA1178;
    }
L_08AA1178:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA120C;
      }
      goto L_08AA1180;
    }
L_08AA1180:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA119C;
      }
      goto L_08AA1188;
    }
L_08AA1188:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1214;
      }
      goto L_08AA1194;
    }
L_08AA1194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1314;
      }
      goto L_08AA119C;
    }
L_08AA119C:
    ctx.gpr[31] = (0x08AA11A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA1128;
L_08AA11A4:
    ctx.gpr[31] = (0x08AA11ACu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AA11ACu) goto L_08AA11AC;
    return;
L_08AA11AC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AA11C0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA11C0u) goto L_08AA11C0;
    return;
L_08AA11C0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> (ctx.gpr[4] & 31u)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 15u);
      if (branch_taken) {
          goto L_08AA1314;
      }
      goto L_08AA11E4;
    }
L_08AA11E4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA125C;
      }
      goto L_08AA11F0;
    }
L_08AA11F0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA120C;
      }
      goto L_08AA11F8;
    }
L_08AA11F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA12E4;
      }
      goto L_08AA1204;
    }
L_08AA1204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1314;
      }
      goto L_08AA120C;
    }
L_08AA120C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA1314;
      }
      goto L_08AA1214;
    }
L_08AA1214:
    ctx.gpr[31] = (0x08AA121Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA1128;
L_08AA121C:
    ctx.gpr[31] = (0x08AA1224u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AA1224u) goto L_08AA1224;
    return;
L_08AA1224:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AA1238u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1238u) goto L_08AA1238;
    return;
L_08AA1238:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> (ctx.gpr[4] & 31u)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 15u);
      if (branch_taken) {
          goto L_08AA1314;
      }
      goto L_08AA125C;
    }
L_08AA125C:
    ctx.gpr[31] = (0x08AA1264u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA1128;
L_08AA1264:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA12CC;
      }
      goto L_08AA1274;
    }
L_08AA1274:
    ctx.gpr[31] = (0x08AA127Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AA127Cu) goto L_08AA127C;
    return;
L_08AA127C:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AA1290u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1290u) goto L_08AA1290;
    return;
L_08AA1290:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3196)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3200)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[6] = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA12D4;
      }
      goto L_08AA12C4;
    }
L_08AA12C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AA1314;
      }
      goto L_08AA12CC;
    }
L_08AA12CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AA1314;
      }
      goto L_08AA12D4;
    }
L_08AA12D4:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> (ctx.gpr[4] & 31u)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 15u);
      if (branch_taken) {
          goto L_08AA1314;
      }
      goto L_08AA12E4;
    }
L_08AA12E4:
    ctx.gpr[31] = (0x08AA12ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AA12ECu) goto L_08AA12EC;
    return;
L_08AA12EC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3188)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3192)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AA1300u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1300u) goto L_08AA1300;
    return;
L_08AA1300:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_08AA1314;
L_08AA1314:
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
L_08AA132C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA13A4;
      }
      goto L_08AA134C;
    }
L_08AA134C:
    ctx.gpr[31] = (0x08AA1354u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 102u, 0x089D885Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1354u) goto L_08AA1354;
    return;
L_08AA1354:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08AA1360u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA1360u) goto L_08AA1360;
    return;
L_08AA1360:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08AA136Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA136Cu) goto L_08AA136C;
    return;
L_08AA136C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08AA1378u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA1378u) goto L_08AA1378;
    return;
L_08AA1378:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08AA1384u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA1384u) goto L_08AA1384;
    return;
L_08AA1384:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08AA1390u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA1390u) goto L_08AA1390;
    return;
L_08AA1390:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08AA139Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA139Cu) goto L_08AA139C;
    return;
L_08AA139C:
    ctx.gpr[31] = (0x08AA13A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 518u, 0x0895B97Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA13A4u) goto L_08AA13A4;
    return;
L_08AA13A4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA13B8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA13C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA13E4u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 451u, 0x088DF69Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA13E4u) goto L_08AA13E4;
    return;
L_08AA13E4:
    ctx.gpr[4] = (2234u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31336));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    goto L_08AA140C;
L_08AA140C:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AA140C;
      }
      goto L_08AA1424;
    }
L_08AA1424:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(353), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA1430;
L_08AA1430:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(396), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(30) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA1430;
      }
      goto L_08AA1444;
    }
L_08AA1444:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA144C;
L_08AA144C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(516), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(25) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA144C;
      }
      goto L_08AA1460;
    }
L_08AA1460:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(620), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA14A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA14C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA24C4;
L_08AA14C4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(396));
    goto L_08AA14CC;
L_08AA14CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA14D8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA14D8u) goto L_08AA14D8;
    return;
L_08AA14D8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(30) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA14CC;
      }
      goto L_08AA14E8;
    }
L_08AA14E8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(516));
    goto L_08AA14F0;
L_08AA14F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA14FCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA14FCu) goto L_08AA14FC;
    return;
L_08AA14FC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(25) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA14F0;
      }
      goto L_08AA150C;
    }
L_08AA150C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(631))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AA1564;
      }
      goto L_08AA1518;
    }
L_08AA1518:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(616));
    ctx.gpr[31] = (0x08AA1524u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA1524u) goto L_08AA1524;
    return;
L_08AA1524:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(631))))));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1560;
      }
      goto L_08AA1538;
    }
L_08AA1538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08AA154Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 715u, 0x0887F4DCu>(ctx, &aot_mem) && ctx.pc == 0x08AA154Cu) goto L_08AA154C;
    return;
L_08AA154C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(631))))));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA1538;
      }
      goto L_08AA1560;
    }
L_08AA1560:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), 0u);
    goto L_08AA1564;
L_08AA1564:
    ctx.gpr[31] = (0x08AA156Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 855u, 0x0885F484u>(ctx, &aot_mem) && ctx.pc == 0x08AA156Cu) goto L_08AA156C;
    return;
L_08AA156C:
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
L_08AA1584:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA15B4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 835u, 0x0885F354u>(ctx, &aot_mem) && ctx.pc == 0x08AA15B4u) goto L_08AA15B4;
    return;
L_08AA15B4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA16FC;
      }
      goto L_08AA15C0;
    }
L_08AA15C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(631))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(344));
      if (branch_taken) {
          goto L_08AA16FC;
      }
      goto L_08AA15CC;
    }
L_08AA15CC:
    ctx.gpr[31] = (0x08AA15D4u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3184));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA15D4u) goto L_08AA15D4;
    return;
L_08AA15D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA16FC;
      }
      goto L_08AA15DC;
    }
L_08AA15DC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AA15E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA18A8;
L_08AA15E8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AA1664;
      }
      goto L_08AA15F4;
    }
L_08AA15F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[17] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1664;
      }
      goto L_08AA160C;
    }
L_08AA160C:
    ctx.gpr[31] = (0x08AA1614u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 490u, 0x0895B708u>(ctx, &aot_mem) && ctx.pc == 0x08AA1614u) goto L_08AA1614;
    return;
L_08AA1614:
    ctx.gpr[31] = (0x08AA161Cu);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 622u, 0x08972DA4u>(ctx, &aot_mem) && ctx.pc == 0x08AA161Cu) goto L_08AA161C;
    return;
L_08AA161C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AA1640u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 642u, 0x08972FA0u>(ctx, &aot_mem) && ctx.pc == 0x08AA1640u) goto L_08AA1640;
    return;
L_08AA1640:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AA164Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 523u, 0x0895B9C8u>(ctx, &aot_mem) && ctx.pc == 0x08AA164Cu) goto L_08AA164C;
    return;
L_08AA164C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AA1658u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 101u, 0x089D8830u>(ctx, &aot_mem) && ctx.pc == 0x08AA1658u) goto L_08AA1658;
    return;
L_08AA1658:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA1664u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 638u, 0x08972F40u>(ctx, &aot_mem) && ctx.pc == 0x08AA1664u) goto L_08AA1664;
    return;
L_08AA1664:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA1674u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_08AA19E8;
L_08AA1674:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AA16F0;
      }
      goto L_08AA1680;
    }
L_08AA1680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[17] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA16F0;
      }
      goto L_08AA1698;
    }
L_08AA1698:
    ctx.gpr[31] = (0x08AA16A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 490u, 0x0895B708u>(ctx, &aot_mem) && ctx.pc == 0x08AA16A0u) goto L_08AA16A0;
    return;
L_08AA16A0:
    ctx.gpr[31] = (0x08AA16A8u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 622u, 0x08972DA4u>(ctx, &aot_mem) && ctx.pc == 0x08AA16A8u) goto L_08AA16A8;
    return;
L_08AA16A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AA16CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 642u, 0x08972FA0u>(ctx, &aot_mem) && ctx.pc == 0x08AA16CCu) goto L_08AA16CC;
    return;
L_08AA16CC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA16D8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 523u, 0x0895B9C8u>(ctx, &aot_mem) && ctx.pc == 0x08AA16D8u) goto L_08AA16D8;
    return;
L_08AA16D8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AA16E4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 101u, 0x089D8830u>(ctx, &aot_mem) && ctx.pc == 0x08AA16E4u) goto L_08AA16E4;
    return;
L_08AA16E4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA16F0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 638u, 0x08972F40u>(ctx, &aot_mem) && ctx.pc == 0x08AA16F0u) goto L_08AA16F0;
    return;
L_08AA16F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08AA170C;
      }
      goto L_08AA16FC;
    }
L_08AA16FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_08AA170C;
L_08AA170C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(390), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(389), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(388), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(394), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(393), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(392), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AA172Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 700u, 0x0887F39Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA172Cu) goto L_08AA172C;
    return;
L_08AA172C:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
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
L_08AA175C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA1780u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 31u, 0x08B58180u>(ctx, &aot_mem) && ctx.pc == 0x08AA1780u) goto L_08AA1780;
    return;
L_08AA1780:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1794;
      }
      goto L_08AA1788;
    }
L_08AA1788:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(620), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA17B4;
      }
      goto L_08AA1794;
    }
L_08AA1794:
    ctx.gpr[31] = (0x08AA179Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08AA179Cu) goto L_08AA179C;
    return;
L_08AA179C:
    ctx.gpr[31] = (0x08AA17A4u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA17A4u) goto L_08AA17A4;
    return;
L_08AA17A4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(620), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AA17B4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA17B4u) goto L_08AA17B4;
    return;
L_08AA17B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA17C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(620)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA17FC;
      }
      goto L_08AA17E8;
    }
L_08AA17E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1804;
      }
      goto L_08AA17F4;
    }
L_08AA17F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
      if (branch_taken) {
          goto L_08AA1810;
      }
      goto L_08AA17FC;
    }
L_08AA17FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1828;
      }
      goto L_08AA1804;
    }
L_08AA1804:
    ctx.gpr[31] = (0x08AA180Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08AA180Cu) goto L_08AA180C;
    return;
L_08AA180C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08AA1810;
L_08AA1810:
    ctx.gpr[31] = (0x08AA1818u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(620)));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 690u, 0x0893ED4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1818u) goto L_08AA1818;
    return;
L_08AA1818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(620)));
    ctx.gpr[31] = (0x08AA1824u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA1824u) goto L_08AA1824;
    return;
L_08AA1824:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(620), ctx.gpr[17]);
    goto L_08AA1828;
L_08AA1828:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA183C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(620)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA1844:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[28] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-3236)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA187Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 886u, 0x0885F634u>(ctx, &aot_mem) && ctx.pc == 0x08AA187Cu) goto L_08AA187C;
    return;
L_08AA187C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA18A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA18E8;
      }
      goto L_08AA18D0;
    }
L_08AA18D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[4] & 61440u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA18F4;
      }
      goto L_08AA18E0;
    }
L_08AA18E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1920;
      }
      goto L_08AA18E8;
    }
L_08AA18E8:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA19D4;
      }
      goto L_08AA18F4;
    }
L_08AA18F4:
    ctx.gpr[31] = (0x08AA18FCu);
    ctx.gpr[4] = (ctx.gpr[4] >> 12u);
    goto L_08AA0F6C;
L_08AA18FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1920;
      }
      goto L_08AA1904;
    }
L_08AA1904:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[5] & 61440u);
    ctx.gpr[4] = (ctx.gpr[4] >> 12u);
    ctx.gpr[31] = (0x08AA1918u);
    ctx.gpr[5] = (ctx.gpr[5] & 4095u);
    goto L_08AA1158;
L_08AA1918:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AA19D0;
      }
      goto L_08AA1920;
    }
L_08AA1920:
    ctx.gpr[31] = (0x08AA1928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AA1928u) goto L_08AA1928;
    return;
L_08AA1928:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3164)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3168)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AA193Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA193Cu) goto L_08AA193C;
    return;
L_08AA193C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA19D0;
      }
      goto L_08AA195C;
    }
L_08AA195C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA198C;
      }
      goto L_08AA1968;
    }
L_08AA1968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(631))))));
    ctx.gpr[31] = (0x08AA1978u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_08AA0FB0;
L_08AA1978:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1994;
      }
      goto L_08AA1984;
    }
L_08AA1984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA19D0;
      }
      goto L_08AA198C;
    }
L_08AA198C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA19D4;
      }
      goto L_08AA1994;
    }
L_08AA1994:
    ctx.gpr[31] = (0x08AA199Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AA199Cu) goto L_08AA199C;
    return;
L_08AA199C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AA19B0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA19B0u) goto L_08AA19B0;
    return;
L_08AA19B0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA19D0;
L_08AA19D0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08AA19D4;
L_08AA19D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA19E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA1A30;
      }
      goto L_08AA1A14;
    }
L_08AA1A14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[18] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1A3C;
      }
      goto L_08AA1A28;
    }
L_08AA1A28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1A6C;
      }
      goto L_08AA1A30;
    }
L_08AA1A30:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA1B30;
      }
      goto L_08AA1A3C;
    }
L_08AA1A3C:
    ctx.gpr[31] = (0x08AA1A44u);
    ctx.gpr[4] = (ctx.gpr[5] >> 28u);
    goto L_08AA0F6C;
L_08AA1A44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
      if (branch_taken) {
          goto L_08AA1A6C;
      }
      goto L_08AA1A4C;
    }
L_08AA1A4C:
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[5] >> 28u);
    ctx.gpr[5] = (ctx.gpr[4] >> 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 4095u);
    ctx.gpr[31] = (0x08AA1A64u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08AA1158;
L_08AA1A64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AA1B2C;
      }
      goto L_08AA1A6C;
    }
L_08AA1A6C:
    ctx.gpr[4] = (ctx.gpr[4] & 61440u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1B2C;
      }
      goto L_08AA1A78;
    }
L_08AA1A78:
    ctx.gpr[31] = (0x08AA1A80u);
    ctx.gpr[4] = (ctx.gpr[4] >> 12u);
    goto L_08AA0F6C;
L_08AA1A80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1B2C;
      }
      goto L_08AA1A88;
    }
L_08AA1A88:
    ctx.gpr[31] = (0x08AA1A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AA1A90u) goto L_08AA1A90;
    return;
L_08AA1A90:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3164)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-3168)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AA1AA4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1AA4u) goto L_08AA1AA4;
    return;
L_08AA1AA4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1B2C;
      }
      goto L_08AA1AC4;
    }
L_08AA1AC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(631))))));
    ctx.gpr[31] = (0x08AA1AD4u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_08AA0FB0;
L_08AA1AD4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1B2C;
      }
      goto L_08AA1AE0;
    }
L_08AA1AE0:
    ctx.gpr[31] = (0x08AA1AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AA1AE8u) goto L_08AA1AE8;
    return;
L_08AA1AE8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AA1AFCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1AFCu) goto L_08AA1AFC;
    return;
L_08AA1AFC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1B2C;
      }
      goto L_08AA1B28;
    }
L_08AA1B28:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_08AA1B2C;
L_08AA1B2C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08AA1B30;
L_08AA1B30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA1B48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA1B64u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 886u, 0x0885F634u>(ctx, &aot_mem) && ctx.pc == 0x08AA1B64u) goto L_08AA1B64;
    return;
L_08AA1B64:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AA1B90;
      }
      goto L_08AA1B70;
    }
L_08AA1B70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AA1B94;
      }
      goto L_08AA1B90;
    }
L_08AA1B90:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AA1B94;
L_08AA1B94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA1BA4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(388)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(396));
      if (branch_taken) {
          goto L_08AA1BD4;
      }
      goto L_08AA1BB4;
    }
L_08AA1BB4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(389)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AA1BD4;
      }
      goto L_08AA1BC4;
    }
L_08AA1BC4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(390)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AA1C30;
      }
      goto L_08AA1BD4;
    }
L_08AA1BD4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08AA1C14;
    }
    goto L_08AA1BE0;
L_08AA1BE0:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08AA1BE4;
L_08AA1BE4:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08AA1BE4;
    }
    goto L_08AA1C10;
L_08AA1C10:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08AA1C14;
L_08AA1C14:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(388), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(389), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(390), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(391), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AA1C30;
L_08AA1C30:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(392)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AA1C60;
      }
      goto L_08AA1C40;
    }
L_08AA1C40:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(393)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AA1C60;
      }
      goto L_08AA1C50;
    }
L_08AA1C50:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(394)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AA1CC0;
      }
      goto L_08AA1C60;
    }
L_08AA1C60:
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(516));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_08AA1CA4;
    }
    goto L_08AA1C70;
L_08AA1C70:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AA1C74;
L_08AA1C74:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_08AA1C74;
    }
    goto L_08AA1CA0;
L_08AA1CA0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AA1CA4;
L_08AA1CA4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(392), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(393), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(394), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(395), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AA1CC0;
L_08AA1CC0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA1CC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(353)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA1D10;
      }
      goto L_08AA1CF0;
    }
L_08AA1CF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-3212)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1D10;
      }
      goto L_08AA1CFC;
    }
L_08AA1CFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-3211)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1D8C;
      }
      goto L_08AA1D08;
    }
L_08AA1D08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(632)));
      if (branch_taken) {
          goto L_08AA1E08;
      }
      goto L_08AA1D10;
    }
L_08AA1D10:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[7] = (0u | 5u);
    ctx.gpr[31] = (0x08AA1D2Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1D2Cu) goto L_08AA1D2C;
    return;
L_08AA1D2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[7] = (0u | 5u);
    ctx.gpr[31] = (0x08AA1D64u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1D64u) goto L_08AA1D64;
    return;
L_08AA1D64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[2] = (0u | 100u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AA1FC8;
      }
      goto L_08AA1D8C;
    }
L_08AA1D8C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA1DA8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1DA8u) goto L_08AA1DA8;
    return;
L_08AA1DA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA1DE0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1DE0u) goto L_08AA1DE0;
    return;
L_08AA1DE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[2] = (0u | 101u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AA1FC8;
      }
      goto L_08AA1E08;
    }
L_08AA1E08:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(353)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(632), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08AA1E28u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(632)));
    goto L_08AA2FB4;
L_08AA1E28:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(632)));
    ctx.gpr[31] = (0x08AA1E60u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AA3070;
L_08AA1E60:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(353)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1FC4;
      }
      goto L_08AA1E9C;
    }
L_08AA1E9C:
    ctx.gpr[31] = (0x08AA1EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08AA1EA4u) goto L_08AA1EA4;
    return;
L_08AA1EA4:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1FC4;
      }
      goto L_08AA1EB0;
    }
L_08AA1EB0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1ED4;
      }
      goto L_08AA1EC4;
    }
L_08AA1EC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA1ED4;
L_08AA1ED4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AA1FC4;
      }
      goto L_08AA1EDC;
    }
L_08AA1EDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(548)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA1FC4;
      }
      goto L_08AA1EEC;
    }
L_08AA1EEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(552)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA1FC4;
      }
      goto L_08AA1EFC;
    }
L_08AA1EFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(549)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA1FC4;
      }
      goto L_08AA1F0C;
    }
L_08AA1F0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(553)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA1FC4;
      }
      goto L_08AA1F1C;
    }
L_08AA1F1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(550)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA1FC4;
      }
      goto L_08AA1F2C;
    }
L_08AA1F2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(554)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA1FC4;
      }
      goto L_08AA1F3C;
    }
L_08AA1F3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(632)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(353)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(632), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08AA1F60u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(632)));
    goto L_08AA2FB4;
L_08AA1F60:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(13)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(14)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(15)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(632)));
    ctx.gpr[31] = (0x08AA1F98u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08AA3070;
L_08AA1F98:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(13)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(14)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(15)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AA1FC4;
L_08AA1FC4:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(632)));
    goto L_08AA1FC8;
L_08AA1FC8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA1FE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-3212)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA2024;
      }
      goto L_08AA2010;
    }
L_08AA2010:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-3211)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2098;
      }
      goto L_08AA201C;
    }
L_08AA201C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2110;
      }
      goto L_08AA2024;
    }
L_08AA2024:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[7] = (0u | 5u);
    ctx.gpr[31] = (0x08AA203Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA203Cu) goto L_08AA203C;
    return;
L_08AA203C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[7] = (0u | 5u);
    ctx.gpr[31] = (0x08AA2074u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2074u) goto L_08AA2074;
    return;
L_08AA2074:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AA22BC;
      }
      goto L_08AA2098;
    }
L_08AA2098:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA20B4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA20B4u) goto L_08AA20B4;
    return;
L_08AA20B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA20ECu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA20ECu) goto L_08AA20EC;
    return;
L_08AA20EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AA22BC;
      }
      goto L_08AA2110;
    }
L_08AA2110:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(353)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08AA2280;
    }
    goto L_08AA2120;
L_08AA2120:
    ctx.gpr[19] = (0u | 0u);
    goto L_08AA2124;
L_08AA2124:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA227C;
      }
      goto L_08AA2130;
    }
L_08AA2130:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2174;
      }
      goto L_08AA2140;
    }
L_08AA2140:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(49)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08AA2178;
    }
    goto L_08AA2150;
L_08AA2150:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(50)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08AA2178;
    }
    goto L_08AA2160;
L_08AA2160:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AA2178;
      }
      goto L_08AA2170;
    }
L_08AA2170:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AA2174;
L_08AA2174:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AA2178;
L_08AA2178:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA227C;
      }
      goto L_08AA2180;
    }
L_08AA2180:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA21C4;
      }
      goto L_08AA2190;
    }
L_08AA2190:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(53)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08AA21C8;
    }
    goto L_08AA21A0;
L_08AA21A0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(54)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08AA21C8;
    }
    goto L_08AA21B0;
L_08AA21B0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(55)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AA21C8;
      }
      goto L_08AA21C0;
    }
L_08AA21C0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AA21C4;
L_08AA21C4:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AA21C8;
L_08AA21C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA227C;
      }
      goto L_08AA21D0;
    }
L_08AA21D0:
    ctx.gpr[31] = (0x08AA21D8u);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(353)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AA21D8u) goto L_08AA21D8;
    return;
L_08AA21D8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AA21ECu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA21ECu) goto L_08AA21EC;
    return;
L_08AA21EC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA2210u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AA2FB4;
L_08AA2210:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(9)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(10)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(11)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA2248u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08AA3070;
L_08AA2248:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(9)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(10)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(11)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2124;
      }
      goto L_08AA227C;
    }
L_08AA227C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA2280;
L_08AA2280:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AA22BC;
L_08AA22BC:
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
L_08AA22DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (0u | 8u);
      if (branch_taken) {
          goto L_08AA2300;
      }
      goto L_08AA22F0;
    }
L_08AA22F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08AA2300;
L_08AA2300:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AA2374;
      }
      goto L_08AA230C;
    }
L_08AA230C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(208)));
    ctx.gpr[8] = (ctx.gpr[8] & 512u);
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA236C;
      }
      goto L_08AA2328;
    }
L_08AA2328:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (ctx.gpr[7] & 16384u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA236C;
      }
      goto L_08AA2340;
    }
L_08AA2340:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AA2364;
      }
      goto L_08AA2350;
    }
L_08AA2350:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-939));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AA237C;
      }
      goto L_08AA235C;
    }
L_08AA235C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08AA23AC;
      }
      goto L_08AA2364;
    }
L_08AA2364:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA23F0;
      }
      goto L_08AA236C;
    }
L_08AA236C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA23F0;
      }
      goto L_08AA2374;
    }
L_08AA2374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA23F0;
      }
      goto L_08AA237C;
    }
L_08AA237C:
    ctx.gpr[7] = (0u | 194u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AA2390;
      }
      goto L_08AA2388;
    }
L_08AA2388:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08AA23AC;
      }
      goto L_08AA2390;
    }
L_08AA2390:
    ctx.gpr[7] = (0u | 275u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AA23A4;
      }
      goto L_08AA239C;
    }
L_08AA239C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA23AC;
      }
      goto L_08AA23A4;
    }
L_08AA23A4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(628))))));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08AA23AC;
L_08AA23AC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA23D8;
      }
      goto L_08AA23B4;
    }
L_08AA23B4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 174u);
      if (branch_taken) {
          goto L_08AA23C8;
      }
      goto L_08AA23C0;
    }
L_08AA23C0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA23D0;
      }
      goto L_08AA23C8;
    }
L_08AA23C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA23F0;
      }
      goto L_08AA23D0;
    }
L_08AA23D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA23F0;
      }
      goto L_08AA23D8;
    }
L_08AA23D8:
    ctx.gpr[6] = (0u | 237u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AA23EC;
      }
      goto L_08AA23E4;
    }
L_08AA23E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA23F0;
      }
      goto L_08AA23EC;
    }
L_08AA23EC:
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_08AA23F0;
L_08AA23F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA23F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA240Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 186u, 0x089452D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA240Cu) goto L_08AA240C;
    return;
L_08AA240C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA2420:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA2434u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 187u, 0x089452E0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2434u) goto L_08AA2434;
    return;
L_08AA2434:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA2448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA2464u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 188u, 0x089452F4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2464u) goto L_08AA2464;
    return;
L_08AA2464:
    ctx.gpr[4] = (ctx.gpr[2] & ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2478;
      }
      goto L_08AA2470;
    }
L_08AA2470:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AA2480;
      }
      goto L_08AA2478;
    }
L_08AA2478:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AA2480;
L_08AA2480:
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
L_08AA2498:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AA24B8;
      }
      goto L_08AA24AC;
    }
L_08AA24AC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA24BC;
      }
      goto L_08AA24B8;
    }
L_08AA24B8:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_08AA24BC;
L_08AA24BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA24C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[21] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(12460));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA25B4;
      }
      goto L_08AA2510;
    }
L_08AA2510:
    ctx.gpr[19] = (2182u << 16u);
    ctx.gpr[17] = (2218u << 16u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2328));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4908));
    goto L_08AA2524;
L_08AA2524:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 520u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
        goto L_08AA253C;
    }
    goto L_08AA2534;
L_08AA2534:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA25A0;
      }
      goto L_08AA253C;
    }
L_08AA253C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AA2560u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 614u, 0x08972D0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2560u) goto L_08AA2560;
    return;
L_08AA2560:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA25A0;
      }
      goto L_08AA256C;
    }
L_08AA256C:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA25A0;
      }
      goto L_08AA2580;
    }
L_08AA2580:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(624))))));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AA25A0;
      }
      goto L_08AA258C;
    }
L_08AA258C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08AA259Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08972E68u>(ctx, &aot_mem) && ctx.pc == 0x08AA259Cu) goto L_08AA259C;
    return;
L_08AA259C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    goto L_08AA25A0;
L_08AA25A0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2524;
      }
      goto L_08AA25B4;
    }
L_08AA25B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA25D8:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-3208), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA25E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08AA2610;
      }
      goto L_08AA25F8;
    }
L_08AA25F8:
    ctx.gpr[5] = (2218u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AA2608u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11248));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem) && ctx.pc == 0x08AA2608u) goto L_08AA2608;
    return;
L_08AA2608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA26B0;
      }
      goto L_08AA2610;
    }
L_08AA2610:
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AA2634;
      }
      goto L_08AA261C;
    }
L_08AA261C:
    ctx.gpr[5] = (2218u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AA262Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10336));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem) && ctx.pc == 0x08AA262Cu) goto L_08AA262C;
    return;
L_08AA262C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA26B0;
      }
      goto L_08AA2634;
    }
L_08AA2634:
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AA2658;
      }
      goto L_08AA2640;
    }
L_08AA2640:
    ctx.gpr[5] = (2218u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AA2650u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11556));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem) && ctx.pc == 0x08AA2650u) goto L_08AA2650;
    return;
L_08AA2650:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA26B0;
      }
      goto L_08AA2658;
    }
L_08AA2658:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AA267C;
      }
      goto L_08AA2664;
    }
L_08AA2664:
    ctx.gpr[5] = (2218u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AA2674u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10852));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem) && ctx.pc == 0x08AA2674u) goto L_08AA2674;
    return;
L_08AA2674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA26B0;
      }
      goto L_08AA267C;
    }
L_08AA267C:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AA26A0;
      }
      goto L_08AA2688;
    }
L_08AA2688:
    ctx.gpr[5] = (2218u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AA2698u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10852));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem) && ctx.pc == 0x08AA2698u) goto L_08AA2698;
    return;
L_08AA2698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA26B0;
      }
      goto L_08AA26A0;
    }
L_08AA26A0:
    ctx.gpr[5] = (2218u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AA26B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9916));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem) && ctx.pc == 0x08AA26B0u) goto L_08AA26B0;
    return;
L_08AA26B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA26BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA26E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 403u, 0x08A39B54u>(ctx, &aot_mem) && ctx.pc == 0x08AA26E0u) goto L_08AA26E0;
    return;
L_08AA26E0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2218u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AA26FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12128));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 248u, 0x0881DCCCu>(ctx, &aot_mem) && ctx.pc == 0x08AA26FCu) goto L_08AA26FC;
    return;
L_08AA26FC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3160));
    ctx.gpr[31] = (0x08AA2708u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2708u) goto L_08AA2708;
    return;
L_08AA2708:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AA275C;
      }
      goto L_08AA2710;
    }
L_08AA2710:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3156));
    ctx.gpr[5] = (0u | 0u);
    goto L_08AA2718;
L_08AA2718:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AA2730;
      }
      goto L_08AA2728;
    }
L_08AA2728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA2754;
      }
      goto L_08AA2730;
    }
L_08AA2730:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2740;
      }
      goto L_08AA2738;
    }
L_08AA2738:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2754;
      }
      goto L_08AA2740;
    }
L_08AA2740:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2718;
      }
      goto L_08AA2750;
    }
L_08AA2750:
    ctx.gpr[4] = (0u | 0u);
    goto L_08AA2754;
L_08AA2754:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA27C8;
      }
      goto L_08AA275C;
    }
L_08AA275C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2780;
      }
      goto L_08AA2768;
    }
L_08AA2768:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA2778u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21820));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2778u) goto L_08AA2778;
    return;
L_08AA2778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2830;
      }
      goto L_08AA2780;
    }
L_08AA2780:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-4156));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA2790u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2790u) goto L_08AA2790;
    return;
L_08AA2790:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA27B0;
      }
      goto L_08AA2798;
    }
L_08AA2798:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA27A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21820));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA27A8u) goto L_08AA27A8;
    return;
L_08AA27A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2830;
      }
      goto L_08AA27B0;
    }
L_08AA27B0:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA27C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21540));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA27C0u) goto L_08AA27C0;
    return;
L_08AA27C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2830;
      }
      goto L_08AA27C8;
    }
L_08AA27C8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3148));
    ctx.gpr[31] = (0x08AA27D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA27D4u) goto L_08AA27D4;
    return;
L_08AA27D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA27F8;
      }
      goto L_08AA27DC;
    }
L_08AA27DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA27E8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 102u, 0x089D885Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA27E8u) goto L_08AA27E8;
    return;
L_08AA27E8:
    ctx.gpr[31] = (0x08AA27F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 518u, 0x0895B97Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA27F0u) goto L_08AA27F0;
    return;
L_08AA27F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2830;
      }
      goto L_08AA27F8;
    }
L_08AA27F8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3144));
    ctx.gpr[31] = (0x08AA2804u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2804u) goto L_08AA2804;
    return;
L_08AA2804:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2824;
      }
      goto L_08AA280C;
    }
L_08AA280C:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA281Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21468));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA281Cu) goto L_08AA281C;
    return;
L_08AA281C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2830;
      }
      goto L_08AA2824;
    }
L_08AA2824:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA2830u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2830u) goto L_08AA2830;
    return;
L_08AA2830:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2844;
      }
      goto L_08AA2838;
    }
L_08AA2838:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA2844u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AA2ED4;
L_08AA2844:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08AA2860:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA2884u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 403u, 0x08A39B54u>(ctx, &aot_mem) && ctx.pc == 0x08AA2884u) goto L_08AA2884;
    return;
L_08AA2884:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2218u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AA28A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12128));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 248u, 0x0881DCCCu>(ctx, &aot_mem) && ctx.pc == 0x08AA28A0u) goto L_08AA28A0;
    return;
L_08AA28A0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3540));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA28B0u);
    ctx.gpr[6] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA28B0u) goto L_08AA28B0;
    return;
L_08AA28B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA28D0;
      }
      goto L_08AA28B8;
    }
L_08AA28B8:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA28C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23164));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA28C8u) goto L_08AA28C8;
    return;
L_08AA28C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2A34;
      }
      goto L_08AA28D0;
    }
L_08AA28D0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-4116));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA28E0u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA28E0u) goto L_08AA28E0;
    return;
L_08AA28E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2900;
      }
      goto L_08AA28E8;
    }
L_08AA28E8:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA28F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22940));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA28F8u) goto L_08AA28F8;
    return;
L_08AA28F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2A34;
      }
      goto L_08AA2900;
    }
L_08AA2900:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3160));
    ctx.gpr[31] = (0x08AA290Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA290Cu) goto L_08AA290C;
    return;
L_08AA290C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AA2960;
      }
      goto L_08AA2914;
    }
L_08AA2914:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3156));
    ctx.gpr[5] = (0u | 0u);
    goto L_08AA291C;
L_08AA291C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AA2934;
      }
      goto L_08AA292C;
    }
L_08AA292C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA2958;
      }
      goto L_08AA2934;
    }
L_08AA2934:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2944;
      }
      goto L_08AA293C;
    }
L_08AA293C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2958;
      }
      goto L_08AA2944;
    }
L_08AA2944:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA291C;
      }
      goto L_08AA2954;
    }
L_08AA2954:
    ctx.gpr[4] = (0u | 0u);
    goto L_08AA2958;
L_08AA2958:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA29CC;
      }
      goto L_08AA2960;
    }
L_08AA2960:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2984;
      }
      goto L_08AA296C;
    }
L_08AA296C:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA297Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21820));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA297Cu) goto L_08AA297C;
    return;
L_08AA297C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2A34;
      }
      goto L_08AA2984;
    }
L_08AA2984:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-4156));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA2994u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2994u) goto L_08AA2994;
    return;
L_08AA2994:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA29B4;
      }
      goto L_08AA299C;
    }
L_08AA299C:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA29ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21820));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA29ACu) goto L_08AA29AC;
    return;
L_08AA29AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2A34;
      }
      goto L_08AA29B4;
    }
L_08AA29B4:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA29C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21540));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA29C4u) goto L_08AA29C4;
    return;
L_08AA29C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2A34;
      }
      goto L_08AA29CC;
    }
L_08AA29CC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3148));
    ctx.gpr[31] = (0x08AA29D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA29D8u) goto L_08AA29D8;
    return;
L_08AA29D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA29FC;
      }
      goto L_08AA29E0;
    }
L_08AA29E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA29ECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 102u, 0x089D885Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA29ECu) goto L_08AA29EC;
    return;
L_08AA29EC:
    ctx.gpr[31] = (0x08AA29F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 518u, 0x0895B97Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA29F4u) goto L_08AA29F4;
    return;
L_08AA29F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2A34;
      }
      goto L_08AA29FC;
    }
L_08AA29FC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3144));
    ctx.gpr[31] = (0x08AA2A08u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2A08u) goto L_08AA2A08;
    return;
L_08AA2A08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2A28;
      }
      goto L_08AA2A10;
    }
L_08AA2A10:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA2A20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21468));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2A20u) goto L_08AA2A20;
    return;
L_08AA2A20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2A34;
      }
      goto L_08AA2A28;
    }
L_08AA2A28:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA2A34u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2A34u) goto L_08AA2A34;
    return;
L_08AA2A34:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2A48;
      }
      goto L_08AA2A3C;
    }
L_08AA2A3C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA2A48u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AA2ED4;
L_08AA2A48:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08AA2A64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA2A88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 403u, 0x08A39B54u>(ctx, &aot_mem) && ctx.pc == 0x08AA2A88u) goto L_08AA2A88;
    return;
L_08AA2A88:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3136));
    ctx.gpr[31] = (0x08AA2A98u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA2A98u) goto L_08AA2A98;
    return;
L_08AA2A98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AA2AEC;
      }
      goto L_08AA2AA0;
    }
L_08AA2AA0:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3156));
    ctx.gpr[5] = (0u | 0u);
    goto L_08AA2AA8;
L_08AA2AA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AA2AC0;
      }
      goto L_08AA2AB8;
    }
L_08AA2AB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA2AE4;
      }
      goto L_08AA2AC0;
    }
L_08AA2AC0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2AD0;
      }
      goto L_08AA2AC8;
    }
L_08AA2AC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2AE4;
      }
      goto L_08AA2AD0;
    }
L_08AA2AD0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2AA8;
      }
      goto L_08AA2AE0;
    }
L_08AA2AE0:
    ctx.gpr[4] = (0u | 0u);
    goto L_08AA2AE4;
L_08AA2AE4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2B04;
      }
      goto L_08AA2AEC;
    }
L_08AA2AEC:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA2AFCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24520));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2AFCu) goto L_08AA2AFC;
    return;
L_08AA2AFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2BC8;
      }
      goto L_08AA2B04;
    }
L_08AA2B04:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-4116));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA2B14u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2B14u) goto L_08AA2B14;
    return;
L_08AA2B14:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2B34;
      }
      goto L_08AA2B1C;
    }
L_08AA2B1C:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA2B2Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22940));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2B2Cu) goto L_08AA2B2C;
    return;
L_08AA2B2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2BC8;
      }
      goto L_08AA2B34;
    }
L_08AA2B34:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3160));
    ctx.gpr[31] = (0x08AA2B40u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2B40u) goto L_08AA2B40;
    return;
L_08AA2B40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2B60;
      }
      goto L_08AA2B48;
    }
L_08AA2B48:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA2B58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21540));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2B58u) goto L_08AA2B58;
    return;
L_08AA2B58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2BC8;
      }
      goto L_08AA2B60;
    }
L_08AA2B60:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3148));
    ctx.gpr[31] = (0x08AA2B6Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2B6Cu) goto L_08AA2B6C;
    return;
L_08AA2B6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2B90;
      }
      goto L_08AA2B74;
    }
L_08AA2B74:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2B80u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 102u, 0x089D885Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2B80u) goto L_08AA2B80;
    return;
L_08AA2B80:
    ctx.gpr[31] = (0x08AA2B88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 518u, 0x0895B97Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2B88u) goto L_08AA2B88;
    return;
L_08AA2B88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2BC8;
      }
      goto L_08AA2B90;
    }
L_08AA2B90:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3144));
    ctx.gpr[31] = (0x08AA2B9Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2B9Cu) goto L_08AA2B9C;
    return;
L_08AA2B9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2BBC;
      }
      goto L_08AA2BA4;
    }
L_08AA2BA4:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA2BB4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24580));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2BB4u) goto L_08AA2BB4;
    return;
L_08AA2BB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2BC8;
      }
      goto L_08AA2BBC;
    }
L_08AA2BBC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA2BC8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2BC8u) goto L_08AA2BC8;
    return;
L_08AA2BC8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA2BD4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AA2ED4;
L_08AA2BD4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08AA2BF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA2C0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 403u, 0x08A39B54u>(ctx, &aot_mem) && ctx.pc == 0x08AA2C0Cu) goto L_08AA2C0C;
    return;
L_08AA2C0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2218u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AA2C28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12128));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 248u, 0x0881DCCCu>(ctx, &aot_mem) && ctx.pc == 0x08AA2C28u) goto L_08AA2C28;
    return;
L_08AA2C28:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3160));
    ctx.gpr[31] = (0x08AA2C34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2C34u) goto L_08AA2C34;
    return;
L_08AA2C34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2C78;
      }
      goto L_08AA2C3C;
    }
L_08AA2C3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2C60;
      }
      goto L_08AA2C48;
    }
L_08AA2C48:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2C58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22472));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2C58u) goto L_08AA2C58;
    return;
L_08AA2C58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2D00;
      }
      goto L_08AA2C60;
    }
L_08AA2C60:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2C70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22192));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2C70u) goto L_08AA2C70;
    return;
L_08AA2C70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2D00;
      }
      goto L_08AA2C78;
    }
L_08AA2C78:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3148));
    ctx.gpr[31] = (0x08AA2C84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2C84u) goto L_08AA2C84;
    return;
L_08AA2C84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2CC8;
      }
      goto L_08AA2C8C;
    }
L_08AA2C8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2CB0;
      }
      goto L_08AA2C98;
    }
L_08AA2C98:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2CA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23928));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2CA8u) goto L_08AA2CA8;
    return;
L_08AA2CA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2D00;
      }
      goto L_08AA2CB0;
    }
L_08AA2CB0:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2CC0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23452));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2CC0u) goto L_08AA2CC0;
    return;
L_08AA2CC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2D00;
      }
      goto L_08AA2CC8;
    }
L_08AA2CC8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3144));
    ctx.gpr[31] = (0x08AA2CD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2CD4u) goto L_08AA2CD4;
    return;
L_08AA2CD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2CF4;
      }
      goto L_08AA2CDC;
    }
L_08AA2CDC:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2CECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23392));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2CECu) goto L_08AA2CEC;
    return;
L_08AA2CEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2D00;
      }
      goto L_08AA2CF4;
    }
L_08AA2CF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2D00u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2D00u) goto L_08AA2D00;
    return;
L_08AA2D00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2D0Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AA2ED4;
L_08AA2D0C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA2D24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA2D40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 403u, 0x08A39B54u>(ctx, &aot_mem) && ctx.pc == 0x08AA2D40u) goto L_08AA2D40;
    return;
L_08AA2D40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2218u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AA2D5Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12128));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 248u, 0x0881DCCCu>(ctx, &aot_mem) && ctx.pc == 0x08AA2D5Cu) goto L_08AA2D5C;
    return;
L_08AA2D5C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3840));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA2D6Cu);
    ctx.gpr[6] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 190u, 0x08B58B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2D6Cu) goto L_08AA2D6C;
    return;
L_08AA2D6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2D8C;
      }
      goto L_08AA2D74;
    }
L_08AA2D74:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2D84u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22940));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2D84u) goto L_08AA2D84;
    return;
L_08AA2D84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2EB0;
      }
      goto L_08AA2D8C;
    }
L_08AA2D8C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3160));
    ctx.gpr[31] = (0x08AA2D98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2D98u) goto L_08AA2D98;
    return;
L_08AA2D98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AA2DEC;
      }
      goto L_08AA2DA0;
    }
L_08AA2DA0:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3156));
    ctx.gpr[5] = (0u | 0u);
    goto L_08AA2DA8;
L_08AA2DA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AA2DC0;
      }
      goto L_08AA2DB8;
    }
L_08AA2DB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA2DE4;
      }
      goto L_08AA2DC0;
    }
L_08AA2DC0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2DD0;
      }
      goto L_08AA2DC8;
    }
L_08AA2DC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2DE4;
      }
      goto L_08AA2DD0;
    }
L_08AA2DD0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2DA8;
      }
      goto L_08AA2DE0;
    }
L_08AA2DE0:
    ctx.gpr[4] = (0u | 0u);
    goto L_08AA2DE4;
L_08AA2DE4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2E28;
      }
      goto L_08AA2DEC;
    }
L_08AA2DEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2E10;
      }
      goto L_08AA2DF8;
    }
L_08AA2DF8:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2E08u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24212));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2E08u) goto L_08AA2E08;
    return;
L_08AA2E08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2EB0;
      }
      goto L_08AA2E10;
    }
L_08AA2E10:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2E20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23700));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2E20u) goto L_08AA2E20;
    return;
L_08AA2E20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2EB0;
      }
      goto L_08AA2E28;
    }
L_08AA2E28:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3148));
    ctx.gpr[31] = (0x08AA2E34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2E34u) goto L_08AA2E34;
    return;
L_08AA2E34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2E78;
      }
      goto L_08AA2E3C;
    }
L_08AA2E3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2E60;
      }
      goto L_08AA2E48;
    }
L_08AA2E48:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2E58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23928));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2E58u) goto L_08AA2E58;
    return;
L_08AA2E58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2EB0;
      }
      goto L_08AA2E60;
    }
L_08AA2E60:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2E70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23452));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2E70u) goto L_08AA2E70;
    return;
L_08AA2E70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2EB0;
      }
      goto L_08AA2E78;
    }
L_08AA2E78:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3144));
    ctx.gpr[31] = (0x08AA2E84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2E84u) goto L_08AA2E84;
    return;
L_08AA2E84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2EA4;
      }
      goto L_08AA2E8C;
    }
L_08AA2E8C:
    ctx.gpr[5] = (2196u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2E9Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23392));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2E9Cu) goto L_08AA2E9C;
    return;
L_08AA2E9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2EB0;
      }
      goto L_08AA2EA4;
    }
L_08AA2EA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2EB0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA2EB0u) goto L_08AA2EB0;
    return;
L_08AA2EB0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2EBCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AA2ED4;
L_08AA2EBC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA2ED4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA2EF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 403u, 0x08A39B54u>(ctx, &aot_mem) && ctx.pc == 0x08AA2EF4u) goto L_08AA2EF4;
    return;
L_08AA2EF4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3128));
    ctx.gpr[31] = (0x08AA2F00u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2F00u) goto L_08AA2F00;
    return;
L_08AA2F00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2F20;
      }
      goto L_08AA2F08;
    }
L_08AA2F08:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2F18u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 186u, 0x089452D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2F18u) goto L_08AA2F18;
    return;
L_08AA2F18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2F48;
      }
      goto L_08AA2F20;
    }
L_08AA2F20:
    ctx.gpr[31] = (0x08AA2F28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 403u, 0x08A39B54u>(ctx, &aot_mem) && ctx.pc == 0x08AA2F28u) goto L_08AA2F28;
    return;
L_08AA2F28:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3120));
    ctx.gpr[31] = (0x08AA2F34u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 217u, 0x08B58C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2F34u) goto L_08AA2F34;
    return;
L_08AA2F34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2F48;
      }
      goto L_08AA2F3C;
    }
L_08AA2F3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2F48u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 186u, 0x089452D0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2F48u) goto L_08AA2F48;
    return;
L_08AA2F48:
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
L_08AA2F60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA2F7Cu);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 498u, 0x08B3E084u>(ctx, &aot_mem) && ctx.pc == 0x08AA2F7Cu) goto L_08AA2F7C;
    return;
L_08AA2F7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA2F9C;
      }
      goto L_08AA2F8C;
    }
L_08AA2F8C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2FA0;
      }
      goto L_08AA2F9C;
    }
L_08AA2F9C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08AA2FA0;
L_08AA2FA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA2FB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(355));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 240 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2FF4;
      }
      goto L_08AA2FE0;
    }
L_08AA2FE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3024;
      }
      goto L_08AA2FEC;
    }
L_08AA2FEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
      if (branch_taken) {
          goto L_08AA3030;
      }
      goto L_08AA2FF4;
    }
L_08AA2FF4:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(375));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-720)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-719)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-718)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AA301Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA301Cu) goto L_08AA301C;
    return;
L_08AA301C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA3060;
      }
      goto L_08AA3024;
    }
L_08AA3024:
    ctx.gpr[31] = (0x08AA302Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 333u, 0x08B656D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA302Cu) goto L_08AA302C;
    return;
L_08AA302C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    goto L_08AA3030;
L_08AA3030:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08AA305Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA305Cu) goto L_08AA305C;
    return;
L_08AA305C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AA3060;
L_08AA3060:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3070:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(355));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 240 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA30B0;
      }
      goto L_08AA309C;
    }
L_08AA309C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA30E0;
      }
      goto L_08AA30A8;
    }
L_08AA30A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
      if (branch_taken) {
          goto L_08AA30EC;
      }
      goto L_08AA30B0;
    }
L_08AA30B0:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(375));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-720)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-719)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-718)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AA30D8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA30D8u) goto L_08AA30D8;
    return;
L_08AA30D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA311C;
      }
      goto L_08AA30E0;
    }
L_08AA30E0:
    ctx.gpr[31] = (0x08AA30E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 333u, 0x08B656D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA30E8u) goto L_08AA30E8;
    return;
L_08AA30E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    goto L_08AA30EC;
L_08AA30EC:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08AA3118u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3118u) goto L_08AA3118;
    return;
L_08AA3118:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AA311C;
L_08AA311C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA312C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(371));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 240 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA316C;
      }
      goto L_08AA3158;
    }
L_08AA3158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA319C;
      }
      goto L_08AA3164;
    }
L_08AA3164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
      if (branch_taken) {
          goto L_08AA31A8;
      }
      goto L_08AA316C;
    }
L_08AA316C:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(375));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-720)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-719)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-718)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AA3194u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3194u) goto L_08AA3194;
    return;
L_08AA3194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA31D8;
      }
      goto L_08AA319C;
    }
L_08AA319C:
    ctx.gpr[31] = (0x08AA31A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 333u, 0x08B656D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA31A4u) goto L_08AA31A4;
    return;
L_08AA31A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    goto L_08AA31A8;
L_08AA31A8:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08AA31D4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA31D4u) goto L_08AA31D4;
    return;
L_08AA31D4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AA31D8;
L_08AA31D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA31E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(371));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 240 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3228;
      }
      goto L_08AA3214;
    }
L_08AA3214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3258;
      }
      goto L_08AA3220;
    }
L_08AA3220:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
      if (branch_taken) {
          goto L_08AA3264;
      }
      goto L_08AA3228;
    }
L_08AA3228:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(375));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-720)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-719)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-718)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AA3250u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3250u) goto L_08AA3250;
    return;
L_08AA3250:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA3294;
      }
      goto L_08AA3258;
    }
L_08AA3258:
    ctx.gpr[31] = (0x08AA3260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 333u, 0x08B656D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA3260u) goto L_08AA3260;
    return;
L_08AA3260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    goto L_08AA3264;
L_08AA3264:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08AA3290u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3290u) goto L_08AA3290;
    return;
L_08AA3290:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08AA3294;
L_08AA3294:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA32A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    ctx.gpr[22] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12460));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA32F4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 890u, 0x0885F690u>(ctx, &aot_mem) && ctx.pc == 0x08AA32F4u) goto L_08AA32F4;
    return;
L_08AA32F4:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(396));
    goto L_08AA3304;
L_08AA3304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(396), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA3320;
      }
      goto L_08AA3310;
    }
L_08AA3310:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AA3320u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3320u) goto L_08AA3320;
    return;
L_08AA3320:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(30) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA3304;
      }
      goto L_08AA3338;
    }
L_08AA3338:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(516));
    goto L_08AA3348;
L_08AA3348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(516), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA3364;
      }
      goto L_08AA3354;
    }
L_08AA3354:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AA3364u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3364u) goto L_08AA3364;
    return;
L_08AA3364:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(25) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA3348;
      }
      goto L_08AA337C;
    }
L_08AA337C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(631), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(631))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AA3404;
      }
      goto L_08AA3390;
    }
L_08AA3390:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(616));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AA33A8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA33A8u) goto L_08AA33A8;
    return;
L_08AA33A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(631))))));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA33F4;
      }
      goto L_08AA33BC;
    }
L_08AA33BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08AA33CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 639u, 0x08A53688u>(ctx, &aot_mem) && ctx.pc == 0x08AA33CCu) goto L_08AA33CC;
    return;
L_08AA33CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08AA33E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 706u, 0x0887F414u>(ctx, &aot_mem) && ctx.pc == 0x08AA33E0u) goto L_08AA33E0;
    return;
L_08AA33E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(631))))));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA33BC;
      }
      goto L_08AA33F4;
    }
L_08AA33F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (ctx.gpr[4] << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08AA3414;
      }
      goto L_08AA3404;
    }
L_08AA3404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), 0u);
    ctx.gpr[17] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[22]);
    goto L_08AA3414;
L_08AA3414:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(391), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(395), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA35B0;
      }
      goto L_08AA3430;
    }
L_08AA3430:
    ctx.gpr[19] = (2182u << 16u);
    ctx.gpr[21] = (2196u << 16u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2328));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(22832));
    goto L_08AA3448;
L_08AA3448:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 520u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
        goto L_08AA3460;
    }
    goto L_08AA3458;
L_08AA3458:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA359C;
      }
      goto L_08AA3460;
    }
L_08AA3460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AA3484u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 614u, 0x08972D0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3484u) goto L_08AA3484;
    return;
L_08AA3484:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA359C;
      }
      goto L_08AA3490;
    }
L_08AA3490:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA359C;
      }
      goto L_08AA34A4;
    }
L_08AA34A4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(624))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AA359C;
      }
      goto L_08AA34B0;
    }
L_08AA34B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA34D0;
      }
      goto L_08AA34C0;
    }
L_08AA34C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA34D0;
L_08AA34D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AA34E8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA34E8u) goto L_08AA34E8;
    return;
L_08AA34E8:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AA34F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 658u, 0x089730ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA34F4u) goto L_08AA34F4;
    return;
L_08AA34F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AA3500u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 523u, 0x0895B9C8u>(ctx, &aot_mem) && ctx.pc == 0x08AA3500u) goto L_08AA3500;
    return;
L_08AA3500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08AA350Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 101u, 0x089D8830u>(ctx, &aot_mem) && ctx.pc == 0x08AA350Cu) goto L_08AA350C;
    return;
L_08AA350C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AA3518u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem) && ctx.pc == 0x08AA3518u) goto L_08AA3518;
    return;
L_08AA3518:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AA3538u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 648u, 0x08973008u>(ctx, &aot_mem) && ctx.pc == 0x08AA3538u) goto L_08AA3538;
    return;
L_08AA3538:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AA3548u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3548u) goto L_08AA3548;
    return;
L_08AA3548:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AA3558u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3558u) goto L_08AA3558;
    return;
L_08AA3558:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AA3568u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3568u) goto L_08AA3568;
    return;
L_08AA3568:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AA3578u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3578u) goto L_08AA3578;
    return;
L_08AA3578:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AA3588u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3588u) goto L_08AA3588;
    return;
L_08AA3588:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AA3598u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3598u) goto L_08AA3598;
    return;
L_08AA3598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AA359C;
L_08AA359C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3448;
      }
      goto L_08AA35B0;
    }
L_08AA35B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA35DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2280u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(1456));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA35F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA13C0;
L_08AA35F8:
    ctx.gpr[31] = (0x08AA3600u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3108));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AA3600u) goto L_08AA3600;
    return;
L_08AA3600:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(10192));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 40u);
    ctx.gpr[31] = (0x08AA3618u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9884));
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 279u, 0x08A312B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3618u) goto L_08AA3618;
    return;
L_08AA3618:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3628:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA3680;
      }
      goto L_08AA3674;
    }
L_08AA3674:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3096));
    ctx.gpr[31] = (0x08AA3680u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA3680u) goto L_08AA3680;
    return;
L_08AA3680:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA36DC;
      }
      goto L_08AA36A0;
    }
L_08AA36A0:
    ctx.gpr[5] = (0u | 99u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < 99 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
        goto L_08AA36B0;
    }
    goto L_08AA36B0;
L_08AA36B0:
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(99) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA36C8;
      }
      goto L_08AA36C0;
    }
L_08AA36C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 99u);
      if (branch_taken) {
          goto L_08AA36C8;
      }
      goto L_08AA36C8;
    }
L_08AA36C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3092));
    ctx.gpr[31] = (0x08AA36DCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA36DCu) goto L_08AA36DC;
    return;
L_08AA36DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA36F4;
      }
      goto L_08AA36E8;
    }
L_08AA36E8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7872), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AA36F4u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7864));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem) && ctx.pc == 0x08AA36F4u) goto L_08AA36F4;
    return;
L_08AA36F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7868)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA3724;
      }
      goto L_08AA3704;
    }
L_08AA3704:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3088));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA371Cu);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA371Cu) goto L_08AA371C;
    return;
L_08AA371C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA373C;
      }
      goto L_08AA3724;
    }
L_08AA3724:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3080));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA373Cu);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA373Cu) goto L_08AA373C;
    return;
L_08AA373C:
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
L_08AA375C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (0u | 60u);
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (0u | 100u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14));
    ctx.gpr[7] = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[31] = (0x08AA37B8u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-3072));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08AA37B8u) goto L_08AA37B8;
    return;
L_08AA37B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA37C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (16968u << 16u);
      if (branch_taken) {
          goto L_08AA38F4;
      }
      goto L_08AA37D8;
    }
L_08AA37D8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[7] = (17530u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[9] = (20224u << 16u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (0u | 1000u);
      if (branch_taken) {
          goto L_08AA3828;
      }
      goto L_08AA3814;
    }
L_08AA3814:
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AA3844;
      }
      goto L_08AA3828;
    }
L_08AA3828:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[9] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[9]);
    goto L_08AA3844;
L_08AA3844:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(57)));
    ctx.gpr[7] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA38EC;
      }
      goto L_08AA3858;
    }
L_08AA3858:
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AA388C;
      }
      goto L_08AA3878;
    }
L_08AA3878:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AA38F4;
      }
      goto L_08AA388C;
    }
L_08AA388C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA38E4;
      }
      goto L_08AA3898;
    }
L_08AA3898:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (ctx.lo);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08AA38BC;
    }
    goto L_08AA38BC;
L_08AA38BC:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08AA38DC;
      }
      goto L_08AA38C4;
    }
L_08AA38C4:
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (0u | 168u);
    ctx.gpr[31] = (0x08AA38DCu);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x08AA38DCu) goto L_08AA38DC;
    return;
L_08AA38DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA38F4;
      }
      goto L_08AA38E4;
    }
L_08AA38E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AA38F4;
      }
      goto L_08AA38EC;
    }
L_08AA38EC:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AA38F4;
L_08AA38F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3900:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(333), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u | 157u);
    ctx.gpr[17] = (0u | 81u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_08AA3950;
L_08AA3950:
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[9] << 6u);
    ctx.gpr[10] = (ctx.gpr[10] << 3u);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[16] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[11] = (0u | 0u);
    goto L_08AA3974;
L_08AA3974:
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[11]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (ctx.gpr[11] & 65535u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3974;
      }
      goto L_08AA3994;
    }
L_08AA3994:
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(98), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(142), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(144));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(148));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[9] = (ctx.gpr[9] & 65535u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3950;
      }
      goto L_08AA39DC;
    }
L_08AA39DC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    goto L_08AA39EC;
L_08AA39EC:
    ctx.gpr[4] = (ctx.gpr[17] << 6u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AA3A04;
L_08AA3A04:
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3A04;
      }
      goto L_08AA3A20;
    }
L_08AA3A20:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 244u);
    ctx.gpr[6] = (0u | 225u);
    ctx.gpr[7] = (0u | 91u);
    ctx.gpr[31] = (0x08AA3A44u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3A44u) goto L_08AA3A44;
    return;
L_08AA3A44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AA39EC;
      }
      goto L_08AA3A78;
    }
L_08AA3A78:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3A9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA3AD4;
      }
      goto L_08AA3AC0;
    }
L_08AA3AC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3ADC;
      }
      goto L_08AA3ACC;
    }
L_08AA3ACC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3AE4;
      }
      goto L_08AA3AD4;
    }
L_08AA3AD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3B74;
      }
      goto L_08AA3ADC;
    }
L_08AA3ADC:
    ctx.gpr[31] = (0x08AA3AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AA3AE4u) goto L_08AA3AE4;
    return;
L_08AA3AE4:
    ctx.gpr[31] = (0x08AA3AECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 580u, 0x089BABACu>(ctx, &aot_mem) && ctx.pc == 0x08AA3AECu) goto L_08AA3AEC;
    return;
L_08AA3AEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3B74;
      }
      goto L_08AA3AF4;
    }
L_08AA3AF4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(332), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (0u | 1u);
    goto L_08AA3B04;
L_08AA3B04:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3B24;
      }
      goto L_08AA3B14;
    }
L_08AA3B14:
    ctx.gpr[31] = (0x08AA3B1Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08AA375C;
L_08AA3B1C:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(332), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08AA3B24;
L_08AA3B24:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08AA3B04;
      }
      goto L_08AA3B38;
    }
L_08AA3B38:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    goto L_08AA3B40;
L_08AA3B40:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3B60;
      }
      goto L_08AA3B50;
    }
L_08AA3B50:
    ctx.gpr[31] = (0x08AA3B58u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08AA3628;
L_08AA3B58:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(332), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08AA3B60;
L_08AA3B60:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_08AA3B40;
      }
      goto L_08AA3B74;
    }
L_08AA3B74:
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
L_08AA3B90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(333)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3BD0;
      }
      goto L_08AA3BAC;
    }
L_08AA3BAC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08AA3BB4;
L_08AA3BB4:
    ctx.gpr[31] = (0x08AA3BBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA37C4;
L_08AA3BBC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08AA3BB4;
      }
      goto L_08AA3BD0;
    }
L_08AA3BD0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3BE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08AA3C04;
L_08AA3C04:
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA3C04;
      }
      goto L_08AA3C14;
    }
L_08AA3C14:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08AA3C1C;
L_08AA3C1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3CF4;
      }
      goto L_08AA3C28;
    }
L_08AA3C28:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10207)));
    ctx.gpr[4] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10206)));
      if (branch_taken) {
          goto L_08AA3CA0;
      }
      goto L_08AA3C44;
    }
L_08AA3C44:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10204)));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[6]));
        goto L_08AA3CA4;
    }
    goto L_08AA3C50;
L_08AA3C50:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10205)));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[6]));
        goto L_08AA3CA4;
    }
    goto L_08AA3C5C;
L_08AA3C5C:
    if (ctx.gpr[6] != ctx.gpr[4]) {
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[6]));
        goto L_08AA3CA4;
    }
    goto L_08AA3C64;
L_08AA3C64:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 244u);
    ctx.gpr[6] = (0u | 225u);
    ctx.gpr[7] = (0u | 91u);
    ctx.gpr[31] = (0x08AA3C7Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3C7Cu) goto L_08AA3C7C;
    return;
L_08AA3C7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AA3CC8;
      }
      goto L_08AA3CA0;
    }
L_08AA3CA0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08AA3CA4;
L_08AA3CA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10204)));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10205)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10206), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10205), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10204), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10207), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AA3CC8;
L_08AA3CC8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3CE8;
      }
      goto L_08AA3CD0;
    }
L_08AA3CD0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA3CE0u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3CE0u) goto L_08AA3CE0;
    return;
L_08AA3CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3CEC;
      }
      goto L_08AA3CE8;
    }
L_08AA3CE8:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_08AA3CEC;
L_08AA3CEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3D08;
      }
      goto L_08AA3CF4;
    }
L_08AA3CF4:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08AA3C1C;
      }
      goto L_08AA3D08;
    }
L_08AA3D08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3D1C:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08AA3D24;
L_08AA3D24:
    ctx.gpr[7] = (ctx.gpr[8] << 6u);
    ctx.gpr[9] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA3D54;
      }
      goto L_08AA3D40;
    }
L_08AA3D40:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    goto L_08AA3D54;
L_08AA3D54:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3D24;
      }
      goto L_08AA3D68;
    }
L_08AA3D68:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3D70:
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA3D74;
L_08AA3D74:
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[7] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA3DB4;
      }
      goto L_08AA3D98;
    }
L_08AA3D98:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(98), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(142), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(152), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(0u));
    goto L_08AA3DB4;
L_08AA3DB4:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3D74;
      }
      goto L_08AA3DC8;
    }
L_08AA3DC8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3DD0:
    ctx.gpr[7] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    goto L_08AA3DDC;
L_08AA3DDC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA3E04;
      }
      goto L_08AA3DE8;
    }
L_08AA3DE8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
      if (branch_taken) {
          goto L_08AA3DDC;
      }
      goto L_08AA3DFC;
    }
L_08AA3DFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3E08;
      }
      goto L_08AA3E04;
    }
L_08AA3E04:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08AA3E08;
L_08AA3E08:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3E10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[8] & 65535u);
    ctx.gpr[18] = (ctx.gpr[11] & 65535u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08AA3E48;
L_08AA3E48:
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA3E48;
      }
      goto L_08AA3E58;
    }
L_08AA3E58:
    ctx.gpr[7] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[19] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[19] << 6u);
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3FFC;
      }
      goto L_08AA3E80;
    }
L_08AA3E80:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[20] = (0u | 255u);
      if (branch_taken) {
          goto L_08AA3EA8;
      }
      goto L_08AA3E90;
    }
L_08AA3E90:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08AA3EA0u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3EA0u) goto L_08AA3EA0;
    return;
L_08AA3EA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3EAC;
      }
      goto L_08AA3EA8;
    }
L_08AA3EA8:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_08AA3EAC;
L_08AA3EAC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3ECC;
      }
      goto L_08AA3EB4;
    }
L_08AA3EB4:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(18));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA3EC4u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3EC4u) goto L_08AA3EC4;
    return;
L_08AA3EC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3ED0;
      }
      goto L_08AA3ECC;
    }
L_08AA3ECC:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    goto L_08AA3ED0;
L_08AA3ED0:
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10207)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10206)));
      if (branch_taken) {
          goto L_08AA3F48;
      }
      goto L_08AA3EE8;
    }
L_08AA3EE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10204)));
    if (ctx.gpr[4] != ctx.gpr[20]) {
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[17]));
        goto L_08AA3F4C;
    }
    goto L_08AA3EF4;
L_08AA3EF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10205)));
    if (ctx.gpr[4] != ctx.gpr[20]) {
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[17]));
        goto L_08AA3F4C;
    }
    goto L_08AA3F00;
L_08AA3F00:
    if (ctx.gpr[17] != ctx.gpr[20]) {
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[17]));
        goto L_08AA3F4C;
    }
    goto L_08AA3F08;
L_08AA3F08:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 157u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(79), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10211)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10210)));
      if (branch_taken) {
          goto L_08AA3F78;
      }
      goto L_08AA3F48;
    }
L_08AA3F48:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(78), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08AA3F4C;
L_08AA3F4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10204)));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10205)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10206), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10205), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10204), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10207), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10211)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10210)));
    goto L_08AA3F78;
L_08AA3F78:
    if (ctx.gpr[17] != ctx.gpr[20]) {
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
        goto L_08AA3FD8;
    }
    goto L_08AA3F80;
L_08AA3F80:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10208)));
    if (ctx.gpr[5] != ctx.gpr[20]) {
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
        goto L_08AA3FD8;
    }
    goto L_08AA3F8C;
L_08AA3F8C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10209)));
    if (ctx.gpr[5] != ctx.gpr[20]) {
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
        goto L_08AA3FD8;
    }
    goto L_08AA3F98;
L_08AA3F98:
    if (ctx.gpr[4] != ctx.gpr[20]) {
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
        goto L_08AA3FD8;
    }
    goto L_08AA3FA0;
L_08AA3FA0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 81u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(5)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(7)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AA3FFC;
      }
      goto L_08AA3FD8;
    }
L_08AA3FD8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10208)));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10209)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10210), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10209), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10208), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10211), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AA3FFC;
L_08AA3FFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08AA4000u; return;
}

void recomp_unit_0167(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0167_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_167(Runtime &runtime) {
    runtime.register_generated_unit(167u, 0x08AA0000u, 16384u, &recomp_unit_0167, &recomp_unit_0167_entry);
    runtime.register_function(0x08AA0000u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA000Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0014u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA001Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0024u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA002Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0030u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA004Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0088u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA008Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0110u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0114u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA012Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0134u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0150u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0160u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA016Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0178u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0184u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA018Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0198u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0200u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA020Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0214u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0218u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA021Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0234u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0240u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0248u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA024Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0258u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0278u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0304u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0318u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0344u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0350u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA035Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0364u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0368u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA036Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0384u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0390u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0398u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA039Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA03A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA03C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0408u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA042Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA044Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0454u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0468u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0484u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0508u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0518u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0524u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA052Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0538u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0548u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0550u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0554u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0570u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0594u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0600u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0608u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0614u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA061Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0624u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0628u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA063Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0660u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA066Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA067Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0694u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0708u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA071Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0728u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0734u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA073Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0748u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA075Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0760u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0764u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0774u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0788u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0798u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA082Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0838u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0850u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA085Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA086Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA087Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0888u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0890u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0898u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0908u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA093Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0954u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA096Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0988u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0990u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA099Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0ABCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0ADCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C20u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C7Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CCCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E20u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0EA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0EC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0ED4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0EE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0EF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0EFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F7Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1010u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1018u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1020u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA102Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA103Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1044u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1054u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1060u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1070u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1080u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1088u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1090u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA109Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1104u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1108u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1128u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1130u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1134u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1140u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1144u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1150u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1158u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1178u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1180u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1188u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1194u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA119Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1204u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA120Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1214u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA121Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1224u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1238u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA125Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1264u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1274u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA127Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1290u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1300u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1314u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA132Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA134Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1354u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1360u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA136Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1378u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1384u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1390u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA139Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA140Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1424u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1430u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1444u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA144Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1460u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA150Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1518u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1524u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1538u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA154Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1560u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1564u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA156Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1584u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA160Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1614u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA161Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1640u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA164Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1658u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1664u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1674u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1680u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1698u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA170Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA172Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA175Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1780u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1788u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1794u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA179Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1804u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA180Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1810u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1818u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1824u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1828u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA183Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1844u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA187Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1904u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1918u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1920u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1928u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA193Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA195Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1968u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1978u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1984u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA198Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1994u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA199Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA19B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA19D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA19D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA19E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1CA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1CA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1CC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1CC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1CF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1CFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1DA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1DE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1ED4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1FC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1FC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1FE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2010u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA201Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2024u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA203Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2074u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2098u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2110u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2120u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2124u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2130u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2140u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2150u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2160u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2170u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2174u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2178u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2180u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2190u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2210u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2248u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA227Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2280u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2300u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA230Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2328u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2340u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2350u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA235Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2364u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA236Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2374u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA237Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2388u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2390u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA239Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA240Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2420u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2434u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2448u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2464u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2470u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2478u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2480u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2498u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2510u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2524u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2534u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA253Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2560u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA256Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2580u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA258Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA259Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2608u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2610u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA261Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA262Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2634u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2640u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2650u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2658u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2664u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2674u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA267Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2688u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2698u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2708u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2710u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2718u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2728u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2730u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2738u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2740u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2750u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2754u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA275Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2768u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2778u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2780u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2790u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2798u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2804u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA280Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA281Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2824u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2830u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2838u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2844u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2860u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2884u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2900u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA290Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2914u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA291Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA292Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2934u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA293Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2944u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2954u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2958u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2960u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA296Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA297Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2984u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2994u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA299Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A20u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E20u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2ED4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F20u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F7Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA301Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3024u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA302Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3030u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA305Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3060u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3070u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA309Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3118u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA311Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA312Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3158u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3164u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA316Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3194u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA319Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3214u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3220u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3228u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3250u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3258u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3260u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3264u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3290u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3294u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3304u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3310u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3320u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3338u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3348u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3354u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3364u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA337Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3390u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3404u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3414u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3430u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3448u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3458u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3460u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3484u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3490u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3500u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA350Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3518u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3538u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3548u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3558u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3568u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3578u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3588u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3598u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA359Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3600u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3618u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3628u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3674u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3680u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3704u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA371Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3724u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA373Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA375Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3814u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3828u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3844u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3858u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3878u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA388Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3898u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3900u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3950u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3974u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3994u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A20u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3AC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3ACCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3AD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3ADCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3AE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3AECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3AF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C7Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3ECCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3ED0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FD8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FFCu, &recomp_unit_0167, "recomp_unit_0167");
}
} // namespace psprecomp
