#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0181[4095] = {
    1, 0, 2, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0,
    12, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 17, 0, 18, 0, 19, 0, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 0,
    0, 0, 0, 26, 0, 27, 0, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0,
    37, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 42, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0,
    47, 0, 0, 48, 0, 49, 0, 50, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0,
    0, 0, 56, 0, 57, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0,
    0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0,
    0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77,
    0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 87, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0,
    90, 0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 100,
    0, 101, 102, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0,
    108, 0, 0, 109, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 114, 0, 0, 0, 0, 0, 0, 0, 115,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0,
    0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0,
    0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 135, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138,
    0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 146, 0, 147, 0,
    148, 0, 149, 0, 0, 150, 0, 151, 0, 152, 0, 153, 0, 0, 0, 154, 0, 155, 0, 0, 156, 0, 157, 0, 158, 0, 0, 0, 159, 0, 0, 0,
    0, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 165, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0,
    0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 175,
    0, 176, 0, 177, 0, 178, 0, 179, 0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0,
    0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 194, 0,
    195, 0, 196, 0, 197, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 0,
    0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0,
    211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 218, 0, 219, 0,
    0, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 0, 225, 0, 226, 0, 227, 0, 228, 0, 0, 0, 229, 0, 230, 0, 0, 231, 0, 232, 0,
    233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 240,
    0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 247,
    0, 248, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 0, 256, 0, 0, 257, 0, 258, 0, 0,
    0, 259, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0,
    267, 0, 268, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 0, 276, 0, 277, 0, 0, 0, 278,
    0, 0, 279, 0, 280, 0, 281, 0, 0, 282, 0, 283, 0, 0, 284, 0, 285, 0, 0, 0, 286, 0, 0, 287, 0, 288, 0, 289, 0, 0, 290, 0,
    291, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 295, 0, 296, 0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 300, 0, 301,
    302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 310, 0, 311, 0, 0, 0, 312, 0, 313,
    0, 0, 314, 0, 315, 0, 316, 0, 0, 317, 0, 318, 319, 0, 0, 0, 320, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 324, 0, 0,
    325, 0, 326, 0, 0, 0, 327, 0, 328, 0, 0, 0, 329, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 334,
    0, 335, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 338, 0, 339, 340, 0, 341, 0, 342, 0, 343, 0, 0, 344, 0, 345, 0, 0, 0, 0, 346,
    0, 0, 0, 0, 347, 0, 348, 0, 349, 0, 350, 0, 0, 351, 0, 352, 0, 353, 0, 354, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 357,
    358, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 362, 0, 0, 363, 0, 364, 0, 0, 0, 365, 0, 366, 0, 367, 0, 0, 0,
    368, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 371, 372, 0, 373, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 376, 0, 377, 378, 0,
    379, 0, 0, 380, 0, 381, 0, 382, 383, 0, 0, 0, 0, 384, 0, 0, 385, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 389, 0,
    0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 394, 0, 395, 396, 0, 0, 397, 0, 0, 398, 0, 399,
    0, 400, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 405, 0, 406, 0, 407, 0, 408, 0, 0, 409, 0,
    410, 0, 0, 0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0,
    0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421,
    0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0,
    0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 429, 430,
    0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435,
    0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 444, 0, 445, 0, 446,
    0, 0, 0, 447, 0, 0, 448, 0, 449, 0, 450, 0, 0, 451, 452, 0, 453, 454, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 468, 469, 0, 0, 470, 0, 471, 0, 472, 0, 0, 0,
    473, 0, 474, 0, 475, 0, 476, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0,
    0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0,
    0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 490,
    0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0,
    499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 503, 0, 504, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 507,
    0, 0, 0, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 511, 0, 512, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 515,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0,
    518, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0,
    0, 0, 0, 0, 524, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0,
    0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 0, 534, 0, 535, 0, 0, 0, 536, 537, 0, 0, 0, 538, 0,
    0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 0, 545, 0, 546, 0,
    0, 547, 0, 0, 0, 0, 548, 549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0,
    0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 560, 0, 561,
    0, 0, 0, 0, 562, 0, 563, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 565, 0, 566, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 568,
    0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 0, 573, 0, 574, 0, 0, 0,
    575, 0, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0,
    0, 0, 0, 581, 0, 582, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0, 588,
    0, 589, 0, 590, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 596, 0,
    597, 0, 598, 0, 0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 603,
    0, 604, 0, 605, 0, 0, 606, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 611,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 613, 0, 0, 0, 0, 0, 0, 0, 614, 615, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 617, 0, 618, 619, 0, 620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 0, 0,
    0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 627, 0, 0, 0, 0, 628, 0, 0, 629, 630, 0, 0, 0, 0, 631, 0,
    632, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 635, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 637,
    0, 0, 638, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 640, 0, 0, 641, 0, 642, 0, 643, 0, 0, 0, 0, 0, 0, 644, 0,
    0, 645, 646, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 649, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0, 653, 0, 654, 655, 0, 0, 0, 0, 656, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 658, 0, 659, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 661, 0, 662, 0, 663, 0, 0, 0, 0, 0, 0,
    664, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 667,
    0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 672, 0, 0, 0, 673,
    674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 677, 0, 678, 0, 0, 0, 0, 0, 0, 0,
    679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 681, 0, 0, 0, 682, 683, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 685, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 686, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 689,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 691, 0, 692, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 694, 0, 0, 695, 0, 696, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 698, 0, 0, 699, 0, 700, 701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 703, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 705, 0, 706, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 710, 0, 0, 711, 0, 712, 0, 713, 0, 0, 714, 0, 0, 715, 0, 0, 716, 0, 0, 717, 0, 718,
    0, 719, 0, 720, 721, 0, 722, 0, 723, 0, 0, 0, 724, 0, 725, 0, 726, 0, 727, 0, 728, 0, 729, 0, 0, 730, 0, 0, 0, 0, 731, 0,
    0, 0, 0, 0, 0, 0, 0, 732, 0, 733, 0, 0, 734, 0, 735, 0, 736, 0, 737, 0, 0, 738, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0,
    0, 0, 0, 740, 0, 741, 0, 0, 742, 0, 743, 0, 744, 0, 745, 0, 746, 0, 0, 747, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0,
    0, 749, 0, 750, 0, 0, 751, 0, 752, 0, 753, 0, 754, 0, 0, 755, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 758,
    0, 0, 759, 0, 760, 761, 0, 762, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0,
    766, 767, 768, 0, 769, 0, 0, 770, 0, 771, 772, 0, 0, 0, 773, 0, 0, 0, 774, 0, 775, 0, 776, 0, 0, 777, 0, 0, 0, 0, 0, 0,
    778, 0, 0, 779, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0, 782, 0, 783,
    784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0,
    0, 788, 789, 790, 0, 791, 0, 0, 792, 0, 793, 794, 0, 0, 0, 795, 0, 0, 0, 796, 0, 797, 0, 798, 0, 0, 799, 0, 0, 0, 0, 0,
    0, 800, 0, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 803,
    0, 804, 0, 805, 0, 806, 0, 807, 0, 808, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 0, 0, 810, 0, 0, 811, 0, 0, 0, 0,
    0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 813, 0, 814, 0, 815, 0, 0, 816, 0, 0, 0, 0, 0, 0, 817, 818, 819, 0, 820, 0, 0,
    821, 0, 822, 823, 0, 0, 0, 824, 0, 0, 0, 825, 0, 826, 0, 827, 0, 0, 828, 0, 829, 0, 830, 0, 831, 0, 0, 0, 832, 0, 833, 0,
    834, 0, 835, 0, 0, 836, 0, 0, 0, 0, 0, 0, 837, 838, 839, 0, 840, 0, 0, 841, 0, 842, 843, 0, 0, 0, 844, 0, 0, 0, 845, 0,
    846, 0, 847, 0, 848, 0, 849, 0, 0, 850, 0, 851, 852, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 853, 0, 0, 854, 0, 855, 856, 0, 857,
    0, 0, 858, 0, 859, 0, 0, 0, 860, 0, 861, 0, 862, 0, 0, 0, 863, 0, 0, 0, 0, 0, 864, 0, 0, 0, 0, 865, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 866, 0, 867, 0, 0, 0, 0, 0, 868, 0, 0, 0, 0, 0, 869, 0, 0, 0, 0, 870, 0, 871, 0, 872, 0, 873, 874,
    0, 0, 0, 0, 0, 0, 875, 0, 0, 0, 0, 0, 0, 876, 877, 878, 0, 879, 0, 880, 0, 0, 0, 881, 0, 0, 0, 0, 0, 0, 882, 0,
    883, 0, 884, 0, 885, 0, 0, 0, 886, 0, 887, 0, 888, 0, 0, 0, 889, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0,
    0, 891, 0, 892, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 893, 0, 0, 0, 0, 894, 0, 0, 895, 0, 896, 0, 897,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 898, 0, 0, 0, 899, 0, 0, 0, 900, 901, 902, 0, 0, 0, 903, 0, 0, 904, 0, 905,
    0, 0, 906, 0, 0, 0, 907, 0, 0, 0, 908, 0, 0, 0, 909, 910, 911, 0, 0, 0, 912, 0, 913, 0, 914, 0, 915, 0, 916, 0, 917, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 918, 0, 919, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 920, 0, 0, 0, 921, 0, 0, 0, 0, 922, 0, 923, 0, 924, 0, 925, 0, 0, 926, 0, 0, 927, 0, 928, 929, 0, 930, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 931, 0, 0, 932, 0, 0, 0, 933, 0, 934, 0, 0, 0, 0, 0, 0, 0, 0, 935, 0, 936, 0, 0,
    937, 0, 938, 939, 0, 940, 941, 0, 0, 0, 942, 0, 0, 0, 0, 0, 0, 0, 943, 944, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 945,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 946, 0, 947, 0, 0, 0, 948, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 949, 950, 0, 0, 0, 951, 0, 952, 0, 953, 0, 954, 0, 955, 0, 956, 0, 0, 0, 0, 0, 0, 0, 0, 0, 957,
    0, 958, 0, 959, 960, 0, 961, 0, 0, 0, 962, 0, 963, 964, 0, 965, 0, 966, 0, 0, 0, 967, 0, 968, 0, 0, 969, 0, 0, 970, 971, 0,
    972, 0, 0, 0, 0, 0, 0, 0, 0, 0, 973, 0, 974, 0, 0, 0, 0, 0, 0, 975, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 976,
};
void recomp_unit_0181_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AD8000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0181[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AD8000;
    case 2u: goto L_08AD8008;
    case 3u: goto L_08AD8010;
    case 4u: goto L_08AD801C;
    case 5u: goto L_08AD8024;
    case 6u: goto L_08AD802C;
    case 7u: goto L_08AD8034;
    case 8u: goto L_08AD803C;
    case 9u: goto L_08AD8044;
    case 10u: goto L_08AD8058;
    case 11u: goto L_08AD806C;
    case 12u: goto L_08AD8080;
    case 13u: goto L_08AD8088;
    case 14u: goto L_08AD8094;
    case 15u: goto L_08AD80A0;
    case 16u: goto L_08AD80AC;
    case 17u: goto L_08AD80B4;
    case 18u: goto L_08AD80BC;
    case 19u: goto L_08AD80C4;
    case 20u: goto L_08AD80D0;
    case 21u: goto L_08AD80D8;
    case 22u: goto L_08AD80E0;
    case 23u: goto L_08AD80E8;
    case 24u: goto L_08AD80F0;
    case 25u: goto L_08AD80F8;
    case 26u: goto L_08AD810C;
    case 27u: goto L_08AD8114;
    case 28u: goto L_08AD8120;
    case 29u: goto L_08AD8128;
    case 30u: goto L_08AD8130;
    case 31u: goto L_08AD8138;
    case 32u: goto L_08AD8140;
    case 33u: goto L_08AD8148;
    case 34u: goto L_08AD8154;
    case 35u: goto L_08AD8160;
    case 36u: goto L_08AD8174;
    case 37u: goto L_08AD8180;
    case 38u: goto L_08AD818C;
    case 39u: goto L_08AD8194;
    case 40u: goto L_08AD81AC;
    case 41u: goto L_08AD81C0;
    case 42u: goto L_08AD81C8;
    case 43u: goto L_08AD81D0;
    case 44u: goto L_08AD81DC;
    case 45u: goto L_08AD81E8;
    case 46u: goto L_08AD81F4;
    case 47u: goto L_08AD8200;
    case 48u: goto L_08AD820C;
    case 49u: goto L_08AD8214;
    case 50u: goto L_08AD821C;
    case 51u: goto L_08AD8230;
    case 52u: goto L_08AD8238;
    case 53u: goto L_08AD8248;
    case 54u: goto L_08AD826C;
    case 55u: goto L_08AD8278;
    case 56u: goto L_08AD8288;
    case 57u: goto L_08AD8290;
    case 58u: goto L_08AD829C;
    case 59u: goto L_08AD82A4;
    case 60u: goto L_08AD82B4;
    case 61u: goto L_08AD82BC;
    case 62u: goto L_08AD82D4;
    case 63u: goto L_08AD82DC;
    case 64u: goto L_08AD82EC;
    case 65u: goto L_08AD82F4;
    case 66u: goto L_08AD8308;
    case 67u: goto L_08AD8318;
    case 68u: goto L_08AD8330;
    case 69u: goto L_08AD8344;
    case 70u: goto L_08AD834C;
    case 71u: goto L_08AD835C;
    case 72u: goto L_08AD8364;
    case 73u: goto L_08AD8384;
    case 74u: goto L_08AD83BC;
    case 75u: goto L_08AD83CC;
    case 76u: goto L_08AD83DC;
    case 77u: goto L_08AD83FC;
    case 78u: goto L_08AD840C;
    case 79u: goto L_08AD841C;
    case 80u: goto L_08AD8434;
    case 81u: goto L_08AD8454;
    case 82u: goto L_08AD8478;
    case 83u: goto L_08AD8490;
    case 84u: goto L_08AD84A4;
    case 85u: goto L_08AD84B4;
    case 86u: goto L_08AD84C8;
    case 87u: goto L_08AD84D4;
    case 88u: goto L_08AD84DC;
    case 89u: goto L_08AD84EC;
    case 90u: goto L_08AD8500;
    case 91u: goto L_08AD8510;
    case 92u: goto L_08AD851C;
    case 93u: goto L_08AD8524;
    case 94u: goto L_08AD8534;
    case 95u: goto L_08AD853C;
    case 96u: goto L_08AD8544;
    case 97u: goto L_08AD854C;
    case 98u: goto L_08AD8564;
    case 99u: goto L_08AD8570;
    case 100u: goto L_08AD857C;
    case 101u: goto L_08AD8584;
    case 102u: goto L_08AD8588;
    case 103u: goto L_08AD85A0;
    case 104u: goto L_08AD85AC;
    case 105u: goto L_08AD85CC;
    case 106u: goto L_08AD85DC;
    case 107u: goto L_08AD85F0;
    case 108u: goto L_08AD8600;
    case 109u: goto L_08AD860C;
    case 110u: goto L_08AD8610;
    case 111u: goto L_08AD8628;
    case 112u: goto L_08AD8644;
    case 113u: goto L_08AD8658;
    case 114u: goto L_08AD865C;
    case 115u: goto L_08AD867C;
    case 116u: goto L_08AD86CC;
    case 117u: goto L_08AD86DC;
    case 118u: goto L_08AD86E8;
    case 119u: goto L_08AD8728;
    case 120u: goto L_08AD8730;
    case 121u: goto L_08AD8738;
    case 122u: goto L_08AD8740;
    case 123u: goto L_08AD8748;
    case 124u: goto L_08AD8774;
    case 125u: goto L_08AD8784;
    case 126u: goto L_08AD87A4;
    case 127u: goto L_08AD87C0;
    case 128u: goto L_08AD87D0;
    case 129u: goto L_08AD87E0;
    case 130u: goto L_08AD87F8;
    case 131u: goto L_08AD8810;
    case 132u: goto L_08AD8818;
    case 133u: goto L_08AD8830;
    case 134u: goto L_08AD8840;
    case 135u: goto L_08AD8844;
    case 136u: goto L_08AD884C;
    case 137u: goto L_08AD885C;
    case 138u: goto L_08AD887C;
    case 139u: goto L_08AD8890;
    case 140u: goto L_08AD8898;
    case 141u: goto L_08AD88B0;
    case 142u: goto L_08AD88B8;
    case 143u: goto L_08AD88D0;
    case 144u: goto L_08AD88D8;
    case 145u: goto L_08AD88E8;
    case 146u: goto L_08AD88F0;
    case 147u: goto L_08AD88F8;
    case 148u: goto L_08AD8900;
    case 149u: goto L_08AD8908;
    case 150u: goto L_08AD8914;
    case 151u: goto L_08AD891C;
    case 152u: goto L_08AD8924;
    case 153u: goto L_08AD892C;
    case 154u: goto L_08AD893C;
    case 155u: goto L_08AD8944;
    case 156u: goto L_08AD8950;
    case 157u: goto L_08AD8958;
    case 158u: goto L_08AD8960;
    case 159u: goto L_08AD8970;
    case 160u: goto L_08AD898C;
    case 161u: goto L_08AD899C;
    case 162u: goto L_08AD89A4;
    case 163u: goto L_08AD89B8;
    case 164u: goto L_08AD89D0;
    case 165u: goto L_08AD89D4;
    case 166u: goto L_08AD89E0;
    case 167u: goto L_08AD89F0;
    case 168u: goto L_08AD8A10;
    case 169u: goto L_08AD8A24;
    case 170u: goto L_08AD8A2C;
    case 171u: goto L_08AD8A44;
    case 172u: goto L_08AD8A4C;
    case 173u: goto L_08AD8A64;
    case 174u: goto L_08AD8A6C;
    case 175u: goto L_08AD8A7C;
    case 176u: goto L_08AD8A84;
    case 177u: goto L_08AD8A8C;
    case 178u: goto L_08AD8A94;
    case 179u: goto L_08AD8A9C;
    case 180u: goto L_08AD8AA8;
    case 181u: goto L_08AD8AB4;
    case 182u: goto L_08AD8ABC;
    case 183u: goto L_08AD8AC8;
    case 184u: goto L_08AD8AD0;
    case 185u: goto L_08AD8AD8;
    case 186u: goto L_08AD8AEC;
    case 187u: goto L_08AD8B0C;
    case 188u: goto L_08AD8B20;
    case 189u: goto L_08AD8B28;
    case 190u: goto L_08AD8B40;
    case 191u: goto L_08AD8B48;
    case 192u: goto L_08AD8B60;
    case 193u: goto L_08AD8B68;
    case 194u: goto L_08AD8B78;
    case 195u: goto L_08AD8B80;
    case 196u: goto L_08AD8B88;
    case 197u: goto L_08AD8B90;
    case 198u: goto L_08AD8B98;
    case 199u: goto L_08AD8BA4;
    case 200u: goto L_08AD8BAC;
    case 201u: goto L_08AD8BCC;
    case 202u: goto L_08AD8BDC;
    case 203u: goto L_08AD8BEC;
    case 204u: goto L_08AD8C04;
    case 205u: goto L_08AD8C1C;
    case 206u: goto L_08AD8C28;
    case 207u: goto L_08AD8C44;
    case 208u: goto L_08AD8C54;
    case 209u: goto L_08AD8C58;
    case 210u: goto L_08AD8C64;
    case 211u: goto L_08AD8C80;
    case 212u: goto L_08AD8C90;
    case 213u: goto L_08AD8C9C;
    case 214u: goto L_08AD8CB0;
    case 215u: goto L_08AD8CB8;
    case 216u: goto L_08AD8CD0;
    case 217u: goto L_08AD8CD8;
    case 218u: goto L_08AD8CF0;
    case 219u: goto L_08AD8CF8;
    case 220u: goto L_08AD8D08;
    case 221u: goto L_08AD8D10;
    case 222u: goto L_08AD8D18;
    case 223u: goto L_08AD8D20;
    case 224u: goto L_08AD8D28;
    case 225u: goto L_08AD8D34;
    case 226u: goto L_08AD8D3C;
    case 227u: goto L_08AD8D44;
    case 228u: goto L_08AD8D4C;
    case 229u: goto L_08AD8D5C;
    case 230u: goto L_08AD8D64;
    case 231u: goto L_08AD8D70;
    case 232u: goto L_08AD8D78;
    case 233u: goto L_08AD8D80;
    case 234u: goto L_08AD8D90;
    case 235u: goto L_08AD8DAC;
    case 236u: goto L_08AD8DBC;
    case 237u: goto L_08AD8DC8;
    case 238u: goto L_08AD8DDC;
    case 239u: goto L_08AD8DF4;
    case 240u: goto L_08AD8DFC;
    case 241u: goto L_08AD8E08;
    case 242u: goto L_08AD8E2C;
    case 243u: goto L_08AD8E3C;
    case 244u: goto L_08AD8E48;
    case 245u: goto L_08AD8E5C;
    case 246u: goto L_08AD8E64;
    case 247u: goto L_08AD8E7C;
    case 248u: goto L_08AD8E84;
    case 249u: goto L_08AD8E9C;
    case 250u: goto L_08AD8EA4;
    case 251u: goto L_08AD8EB4;
    case 252u: goto L_08AD8EBC;
    case 253u: goto L_08AD8EC4;
    case 254u: goto L_08AD8ECC;
    case 255u: goto L_08AD8ED4;
    case 256u: goto L_08AD8EE0;
    case 257u: goto L_08AD8EEC;
    case 258u: goto L_08AD8EF4;
    case 259u: goto L_08AD8F04;
    case 260u: goto L_08AD8F0C;
    case 261u: goto L_08AD8F14;
    case 262u: goto L_08AD8F30;
    case 263u: goto L_08AD8F40;
    case 264u: goto L_08AD8F4C;
    case 265u: goto L_08AD8F60;
    case 266u: goto L_08AD8F68;
    case 267u: goto L_08AD8F80;
    case 268u: goto L_08AD8F88;
    case 269u: goto L_08AD8FA0;
    case 270u: goto L_08AD8FA8;
    case 271u: goto L_08AD8FB8;
    case 272u: goto L_08AD8FC0;
    case 273u: goto L_08AD8FC8;
    case 274u: goto L_08AD8FD0;
    case 275u: goto L_08AD8FD8;
    case 276u: goto L_08AD8FE4;
    case 277u: goto L_08AD8FEC;
    case 278u: goto L_08AD8FFC;
    case 279u: goto L_08AD9008;
    case 280u: goto L_08AD9010;
    case 281u: goto L_08AD9018;
    case 282u: goto L_08AD9024;
    case 283u: goto L_08AD902C;
    case 284u: goto L_08AD9038;
    case 285u: goto L_08AD9040;
    case 286u: goto L_08AD9050;
    case 287u: goto L_08AD905C;
    case 288u: goto L_08AD9064;
    case 289u: goto L_08AD906C;
    case 290u: goto L_08AD9078;
    case 291u: goto L_08AD9080;
    case 292u: goto L_08AD9088;
    case 293u: goto L_08AD9098;
    case 294u: goto L_08AD90B0;
    case 295u: goto L_08AD90B8;
    case 296u: goto L_08AD90C0;
    case 297u: goto L_08AD90C8;
    case 298u: goto L_08AD90D8;
    case 299u: goto L_08AD90E0;
    case 300u: goto L_08AD90F4;
    case 301u: goto L_08AD90FC;
    case 302u: goto L_08AD9100;
    case 303u: goto L_08AD9108;
    case 304u: goto L_08AD9110;
    case 305u: goto L_08AD9118;
    case 306u: goto L_08AD9120;
    case 307u: goto L_08AD9130;
    case 308u: goto L_08AD9140;
    case 309u: goto L_08AD9150;
    case 310u: goto L_08AD915C;
    case 311u: goto L_08AD9164;
    case 312u: goto L_08AD9174;
    case 313u: goto L_08AD917C;
    case 314u: goto L_08AD9188;
    case 315u: goto L_08AD9190;
    case 316u: goto L_08AD9198;
    case 317u: goto L_08AD91A4;
    case 318u: goto L_08AD91AC;
    case 319u: goto L_08AD91B0;
    case 320u: goto L_08AD91C0;
    case 321u: goto L_08AD91C8;
    case 322u: goto L_08AD91D8;
    case 323u: goto L_08AD91F0;
    case 324u: goto L_08AD91F4;
    case 325u: goto L_08AD9200;
    case 326u: goto L_08AD9208;
    case 327u: goto L_08AD9218;
    case 328u: goto L_08AD9220;
    case 329u: goto L_08AD9230;
    case 330u: goto L_08AD9238;
    case 331u: goto L_08AD9240;
    case 332u: goto L_08AD925C;
    case 333u: goto L_08AD9268;
    case 334u: goto L_08AD927C;
    case 335u: goto L_08AD9284;
    case 336u: goto L_08AD9294;
    case 337u: goto L_08AD929C;
    case 338u: goto L_08AD92B0;
    case 339u: goto L_08AD92B8;
    case 340u: goto L_08AD92BC;
    case 341u: goto L_08AD92C4;
    case 342u: goto L_08AD92CC;
    case 343u: goto L_08AD92D4;
    case 344u: goto L_08AD92E0;
    case 345u: goto L_08AD92E8;
    case 346u: goto L_08AD92FC;
    case 347u: goto L_08AD9310;
    case 348u: goto L_08AD9318;
    case 349u: goto L_08AD9320;
    case 350u: goto L_08AD9328;
    case 351u: goto L_08AD9334;
    case 352u: goto L_08AD933C;
    case 353u: goto L_08AD9344;
    case 354u: goto L_08AD934C;
    case 355u: goto L_08AD935C;
    case 356u: goto L_08AD9368;
    case 357u: goto L_08AD937C;
    case 358u: goto L_08AD9380;
    case 359u: goto L_08AD938C;
    case 360u: goto L_08AD93A4;
    case 361u: goto L_08AD93B4;
    case 362u: goto L_08AD93BC;
    case 363u: goto L_08AD93C8;
    case 364u: goto L_08AD93D0;
    case 365u: goto L_08AD93E0;
    case 366u: goto L_08AD93E8;
    case 367u: goto L_08AD93F0;
    case 368u: goto L_08AD9400;
    case 369u: goto L_08AD9410;
    case 370u: goto L_08AD9420;
    case 371u: goto L_08AD9434;
    case 372u: goto L_08AD9438;
    case 373u: goto L_08AD9440;
    case 374u: goto L_08AD9450;
    case 375u: goto L_08AD9458;
    case 376u: goto L_08AD946C;
    case 377u: goto L_08AD9474;
    case 378u: goto L_08AD9478;
    case 379u: goto L_08AD9480;
    case 380u: goto L_08AD948C;
    case 381u: goto L_08AD9494;
    case 382u: goto L_08AD949C;
    case 383u: goto L_08AD94A0;
    case 384u: goto L_08AD94B4;
    case 385u: goto L_08AD94C0;
    case 386u: goto L_08AD94C8;
    case 387u: goto L_08AD94DC;
    case 388u: goto L_08AD94EC;
    case 389u: goto L_08AD94F8;
    case 390u: goto L_08AD951C;
    case 391u: goto L_08AD9524;
    case 392u: goto L_08AD9534;
    case 393u: goto L_08AD953C;
    case 394u: goto L_08AD9550;
    case 395u: goto L_08AD9558;
    case 396u: goto L_08AD955C;
    case 397u: goto L_08AD9568;
    case 398u: goto L_08AD9574;
    case 399u: goto L_08AD957C;
    case 400u: goto L_08AD9584;
    case 401u: goto L_08AD9590;
    case 402u: goto L_08AD9598;
    case 403u: goto L_08AD95B4;
    case 404u: goto L_08AD95C8;
    case 405u: goto L_08AD95D4;
    case 406u: goto L_08AD95DC;
    case 407u: goto L_08AD95E4;
    case 408u: goto L_08AD95EC;
    case 409u: goto L_08AD95F8;
    case 410u: goto L_08AD9600;
    case 411u: goto L_08AD9614;
    case 412u: goto L_08AD961C;
    case 413u: goto L_08AD9658;
    case 414u: goto L_08AD9678;
    case 415u: goto L_08AD9684;
    case 416u: goto L_08AD96A0;
    case 417u: goto L_08AD96B8;
    case 418u: goto L_08AD96C8;
    case 419u: goto L_08AD96D4;
    case 420u: goto L_08AD96E0;
    case 421u: goto L_08AD96FC;
    case 422u: goto L_08AD9718;
    case 423u: goto L_08AD9720;
    case 424u: goto L_08AD9774;
    case 425u: goto L_08AD9794;
    case 426u: goto L_08AD97C0;
    case 427u: goto L_08AD97D8;
    case 428u: goto L_08AD97E0;
    case 429u: goto L_08AD97F8;
    case 430u: goto L_08AD97FC;
    case 431u: goto L_08AD9804;
    case 432u: goto L_08AD9830;
    case 433u: goto L_08AD984C;
    case 434u: goto L_08AD9860;
    case 435u: goto L_08AD987C;
    case 436u: goto L_08AD9894;
    case 437u: goto L_08AD98B0;
    case 438u: goto L_08AD98BC;
    case 439u: goto L_08AD98E0;
    case 440u: goto L_08AD98EC;
    case 441u: goto L_08AD9924;
    case 442u: goto L_08AD9944;
    case 443u: goto L_08AD9968;
    case 444u: goto L_08AD996C;
    case 445u: goto L_08AD9974;
    case 446u: goto L_08AD997C;
    case 447u: goto L_08AD998C;
    case 448u: goto L_08AD9998;
    case 449u: goto L_08AD99A0;
    case 450u: goto L_08AD99A8;
    case 451u: goto L_08AD99B4;
    case 452u: goto L_08AD99B8;
    case 453u: goto L_08AD99C0;
    case 454u: goto L_08AD99C4;
    case 455u: goto L_08AD99CC;
    case 456u: goto L_08AD99E8;
    case 457u: goto L_08AD9A24;
    case 458u: goto L_08AD9A40;
    case 459u: goto L_08AD9A54;
    case 460u: goto L_08AD9A6C;
    case 461u: goto L_08AD9AA4;
    case 462u: goto L_08AD9ABC;
    case 463u: goto L_08AD9AD4;
    case 464u: goto L_08AD9B08;
    case 465u: goto L_08AD9B20;
    case 466u: goto L_08AD9B2C;
    case 467u: goto L_08AD9B48;
    case 468u: goto L_08AD9B50;
    case 469u: goto L_08AD9B54;
    case 470u: goto L_08AD9B60;
    case 471u: goto L_08AD9B68;
    case 472u: goto L_08AD9B70;
    case 473u: goto L_08AD9B80;
    case 474u: goto L_08AD9B88;
    case 475u: goto L_08AD9B90;
    case 476u: goto L_08AD9B98;
    case 477u: goto L_08AD9BA8;
    case 478u: goto L_08AD9BB0;
    case 479u: goto L_08AD9BD4;
    case 480u: goto L_08AD9BDC;
    case 481u: goto L_08AD9BF0;
    case 482u: goto L_08AD9C0C;
    case 483u: goto L_08AD9C20;
    case 484u: goto L_08AD9C78;
    case 485u: goto L_08AD9C8C;
    case 486u: goto L_08AD9CB4;
    case 487u: goto L_08AD9CC0;
    case 488u: goto L_08AD9CDC;
    case 489u: goto L_08AD9CF4;
    case 490u: goto L_08AD9CFC;
    case 491u: goto L_08AD9D08;
    case 492u: goto L_08AD9D18;
    case 493u: goto L_08AD9D28;
    case 494u: goto L_08AD9D38;
    case 495u: goto L_08AD9D44;
    case 496u: goto L_08AD9DA4;
    case 497u: goto L_08AD9DD8;
    case 498u: goto L_08AD9DEC;
    case 499u: goto L_08AD9E00;
    case 500u: goto L_08AD9E14;
    case 501u: goto L_08AD9E28;
    case 502u: goto L_08AD9E3C;
    case 503u: goto L_08AD9E48;
    case 504u: goto L_08AD9E50;
    case 505u: goto L_08AD9E68;
    case 506u: goto L_08AD9E70;
    case 507u: goto L_08AD9E7C;
    case 508u: goto L_08AD9E98;
    case 509u: goto L_08AD9EA4;
    case 510u: goto L_08AD9EC4;
    case 511u: goto L_08AD9EC8;
    case 512u: goto L_08AD9ED0;
    case 513u: goto L_08AD9ED8;
    case 514u: goto L_08AD9EE0;
    case 515u: goto L_08AD9EFC;
    case 516u: goto L_08AD9F2C;
    case 517u: goto L_08AD9F74;
    case 518u: goto L_08AD9F80;
    case 519u: goto L_08AD9F8C;
    case 520u: goto L_08AD9FA4;
    case 521u: goto L_08AD9FB4;
    case 522u: goto L_08AD9FD4;
    case 523u: goto L_08AD9FF8;
    case 524u: goto L_08ADA010;
    case 525u: goto L_08ADA018;
    case 526u: goto L_08ADA020;
    case 527u: goto L_08ADA044;
    case 528u: goto L_08ADA060;
    case 529u: goto L_08ADA078;
    case 530u: goto L_08ADA088;
    case 531u: goto L_08ADA098;
    case 532u: goto L_08ADA0B4;
    case 533u: goto L_08ADA0BC;
    case 534u: goto L_08ADA0CC;
    case 535u: goto L_08ADA0D4;
    case 536u: goto L_08ADA0E4;
    case 537u: goto L_08ADA0E8;
    case 538u: goto L_08ADA0F8;
    case 539u: goto L_08ADA110;
    case 540u: goto L_08ADA128;
    case 541u: goto L_08ADA140;
    case 542u: goto L_08ADA14C;
    case 543u: goto L_08ADA158;
    case 544u: goto L_08ADA164;
    case 545u: goto L_08ADA170;
    case 546u: goto L_08ADA178;
    case 547u: goto L_08ADA184;
    case 548u: goto L_08ADA198;
    case 549u: goto L_08ADA19C;
    case 550u: goto L_08ADA1AC;
    case 551u: goto L_08ADA1DC;
    case 552u: goto L_08ADA214;
    case 553u: goto L_08ADA220;
    case 554u: goto L_08ADA2B4;
    case 555u: goto L_08ADA2F8;
    case 556u: goto L_08ADA308;
    case 557u: goto L_08ADA338;
    case 558u: goto L_08ADA350;
    case 559u: goto L_08ADA368;
    case 560u: goto L_08ADA374;
    case 561u: goto L_08ADA37C;
    case 562u: goto L_08ADA390;
    case 563u: goto L_08ADA398;
    case 564u: goto L_08ADA3B8;
    case 565u: goto L_08ADA3C8;
    case 566u: goto L_08ADA3D0;
    case 567u: goto L_08ADA3E0;
    case 568u: goto L_08ADA3FC;
    case 569u: goto L_08ADA410;
    case 570u: goto L_08ADA420;
    case 571u: goto L_08ADA450;
    case 572u: goto L_08ADA458;
    case 573u: goto L_08ADA468;
    case 574u: goto L_08ADA470;
    case 575u: goto L_08ADA480;
    case 576u: goto L_08ADA498;
    case 577u: goto L_08ADA4A8;
    case 578u: goto L_08ADA4B4;
    case 579u: goto L_08ADA4DC;
    case 580u: goto L_08ADA4E8;
    case 581u: goto L_08ADA50C;
    case 582u: goto L_08ADA514;
    case 583u: goto L_08ADA51C;
    case 584u: goto L_08ADA540;
    case 585u: goto L_08ADA548;
    case 586u: goto L_08ADA56C;
    case 587u: goto L_08ADA574;
    case 588u: goto L_08ADA57C;
    case 589u: goto L_08ADA584;
    case 590u: goto L_08ADA58C;
    case 591u: goto L_08ADA598;
    case 592u: goto L_08ADA5C4;
    case 593u: goto L_08ADA644;
    case 594u: goto L_08ADA658;
    case 595u: goto L_08ADA668;
    case 596u: goto L_08ADA678;
    case 597u: goto L_08ADA680;
    case 598u: goto L_08ADA688;
    case 599u: goto L_08ADA6A8;
    case 600u: goto L_08ADA6B0;
    case 601u: goto L_08ADA6C0;
    case 602u: goto L_08ADA6E8;
    case 603u: goto L_08ADA6FC;
    case 604u: goto L_08ADA704;
    case 605u: goto L_08ADA70C;
    case 606u: goto L_08ADA718;
    case 607u: goto L_08ADA724;
    case 608u: goto L_08ADA738;
    case 609u: goto L_08ADA744;
    case 610u: goto L_08ADA774;
    case 611u: goto L_08ADA77C;
    case 612u: goto L_08ADA7A8;
    case 613u: goto L_08ADA7B0;
    case 614u: goto L_08ADA7D0;
    case 615u: goto L_08ADA7D4;
    case 616u: goto L_08ADA7DC;
    case 617u: goto L_08ADA804;
    case 618u: goto L_08ADA80C;
    case 619u: goto L_08ADA810;
    case 620u: goto L_08ADA818;
    case 621u: goto L_08ADA82C;
    case 622u: goto L_08ADA848;
    case 623u: goto L_08ADA85C;
    case 624u: goto L_08ADA870;
    case 625u: goto L_08ADA894;
    case 626u: goto L_08ADA8B8;
    case 627u: goto L_08ADA8C0;
    case 628u: goto L_08ADA8D4;
    case 629u: goto L_08ADA8E0;
    case 630u: goto L_08ADA8E4;
    case 631u: goto L_08ADA8F8;
    case 632u: goto L_08ADA900;
    case 633u: goto L_08ADA90C;
    case 634u: goto L_08ADA934;
    case 635u: goto L_08ADA938;
    case 636u: goto L_08ADA958;
    case 637u: goto L_08ADA97C;
    case 638u: goto L_08ADA988;
    case 639u: goto L_08ADA9A4;
    case 640u: goto L_08ADA9C0;
    case 641u: goto L_08ADA9CC;
    case 642u: goto L_08ADA9D4;
    case 643u: goto L_08ADA9DC;
    case 644u: goto L_08ADA9F8;
    case 645u: goto L_08ADAA04;
    case 646u: goto L_08ADAA08;
    case 647u: goto L_08ADAA10;
    case 648u: goto L_08ADAA50;
    case 649u: goto L_08ADAA54;
    case 650u: goto L_08ADAA5C;
    case 651u: goto L_08ADAA98;
    case 652u: goto L_08ADAAA0;
    case 653u: goto L_08ADAAB0;
    case 654u: goto L_08ADAAB8;
    case 655u: goto L_08ADAABC;
    case 656u: goto L_08ADAAD0;
    case 657u: goto L_08ADAAD8;
    case 658u: goto L_08ADAB18;
    case 659u: goto L_08ADAB20;
    case 660u: goto L_08ADAB34;
    case 661u: goto L_08ADAB54;
    case 662u: goto L_08ADAB5C;
    case 663u: goto L_08ADAB64;
    case 664u: goto L_08ADAB80;
    case 665u: goto L_08ADABA4;
    case 666u: goto L_08ADABE0;
    case 667u: goto L_08ADABFC;
    case 668u: goto L_08ADAC0C;
    case 669u: goto L_08ADAC2C;
    case 670u: goto L_08ADAC50;
    case 671u: goto L_08ADAC64;
    case 672u: goto L_08ADAC6C;
    case 673u: goto L_08ADAC7C;
    case 674u: goto L_08ADAC80;
    case 675u: goto L_08ADACA8;
    case 676u: goto L_08ADACC8;
    case 677u: goto L_08ADACD8;
    case 678u: goto L_08ADACE0;
    case 679u: goto L_08ADAD00;
    case 680u: goto L_08ADAD2C;
    case 681u: goto L_08ADAD34;
    case 682u: goto L_08ADAD44;
    case 683u: goto L_08ADAD48;
    case 684u: goto L_08ADAD68;
    case 685u: goto L_08ADAD74;
    case 686u: goto L_08ADADA0;
    case 687u: goto L_08ADADA4;
    case 688u: goto L_08ADADD8;
    case 689u: goto L_08ADADFC;
    case 690u: goto L_08ADAEAC;
    case 691u: goto L_08ADAEB8;
    case 692u: goto L_08ADAEC0;
    case 693u: goto L_08ADAEC4;
    case 694u: goto L_08ADAF14;
    case 695u: goto L_08ADAF20;
    case 696u: goto L_08ADAF28;
    case 697u: goto L_08ADAF2C;
    case 698u: goto L_08ADAF94;
    case 699u: goto L_08ADAFA0;
    case 700u: goto L_08ADAFA8;
    case 701u: goto L_08ADAFAC;
    case 702u: goto L_08ADAFF0;
    case 703u: goto L_08ADAFF8;
    case 704u: goto L_08ADB020;
    case 705u: goto L_08ADB02C;
    case 706u: goto L_08ADB034;
    case 707u: goto L_08ADB04C;
    case 708u: goto L_08ADB068;
    case 709u: goto L_08ADB094;
    case 710u: goto L_08ADB0A8;
    case 711u: goto L_08ADB0B4;
    case 712u: goto L_08ADB0BC;
    case 713u: goto L_08ADB0C4;
    case 714u: goto L_08ADB0D0;
    case 715u: goto L_08ADB0DC;
    case 716u: goto L_08ADB0E8;
    case 717u: goto L_08ADB0F4;
    case 718u: goto L_08ADB0FC;
    case 719u: goto L_08ADB104;
    case 720u: goto L_08ADB10C;
    case 721u: goto L_08ADB110;
    case 722u: goto L_08ADB118;
    case 723u: goto L_08ADB120;
    case 724u: goto L_08ADB130;
    case 725u: goto L_08ADB138;
    case 726u: goto L_08ADB140;
    case 727u: goto L_08ADB148;
    case 728u: goto L_08ADB150;
    case 729u: goto L_08ADB158;
    case 730u: goto L_08ADB164;
    case 731u: goto L_08ADB178;
    case 732u: goto L_08ADB19C;
    case 733u: goto L_08ADB1A4;
    case 734u: goto L_08ADB1B0;
    case 735u: goto L_08ADB1B8;
    case 736u: goto L_08ADB1C0;
    case 737u: goto L_08ADB1C8;
    case 738u: goto L_08ADB1D4;
    case 739u: goto L_08ADB1E8;
    case 740u: goto L_08ADB20C;
    case 741u: goto L_08ADB214;
    case 742u: goto L_08ADB220;
    case 743u: goto L_08ADB228;
    case 744u: goto L_08ADB230;
    case 745u: goto L_08ADB238;
    case 746u: goto L_08ADB240;
    case 747u: goto L_08ADB24C;
    case 748u: goto L_08ADB260;
    case 749u: goto L_08ADB284;
    case 750u: goto L_08ADB28C;
    case 751u: goto L_08ADB298;
    case 752u: goto L_08ADB2A0;
    case 753u: goto L_08ADB2A8;
    case 754u: goto L_08ADB2B0;
    case 755u: goto L_08ADB2BC;
    case 756u: goto L_08ADB2D0;
    case 757u: goto L_08ADB2F4;
    case 758u: goto L_08ADB2FC;
    case 759u: goto L_08ADB308;
    case 760u: goto L_08ADB310;
    case 761u: goto L_08ADB314;
    case 762u: goto L_08ADB31C;
    case 763u: goto L_08ADB324;
    case 764u: goto L_08ADB348;
    case 765u: goto L_08ADB364;
    case 766u: goto L_08ADB380;
    case 767u: goto L_08ADB384;
    case 768u: goto L_08ADB388;
    case 769u: goto L_08ADB390;
    case 770u: goto L_08ADB39C;
    case 771u: goto L_08ADB3A4;
    case 772u: goto L_08ADB3A8;
    case 773u: goto L_08ADB3B8;
    case 774u: goto L_08ADB3C8;
    case 775u: goto L_08ADB3D0;
    case 776u: goto L_08ADB3D8;
    case 777u: goto L_08ADB3E4;
    case 778u: goto L_08ADB400;
    case 779u: goto L_08ADB40C;
    case 780u: goto L_08ADB424;
    case 781u: goto L_08ADB46C;
    case 782u: goto L_08ADB474;
    case 783u: goto L_08ADB47C;
    case 784u: goto L_08ADB480;
    case 785u: goto L_08ADB4B4;
    case 786u: goto L_08ADB4C4;
    case 787u: goto L_08ADB4E8;
    case 788u: goto L_08ADB504;
    case 789u: goto L_08ADB508;
    case 790u: goto L_08ADB50C;
    case 791u: goto L_08ADB514;
    case 792u: goto L_08ADB520;
    case 793u: goto L_08ADB528;
    case 794u: goto L_08ADB52C;
    case 795u: goto L_08ADB53C;
    case 796u: goto L_08ADB54C;
    case 797u: goto L_08ADB554;
    case 798u: goto L_08ADB55C;
    case 799u: goto L_08ADB568;
    case 800u: goto L_08ADB584;
    case 801u: goto L_08ADB590;
    case 802u: goto L_08ADB5C8;
    case 803u: goto L_08ADB5FC;
    case 804u: goto L_08ADB604;
    case 805u: goto L_08ADB60C;
    case 806u: goto L_08ADB614;
    case 807u: goto L_08ADB61C;
    case 808u: goto L_08ADB624;
    case 809u: goto L_08ADB650;
    case 810u: goto L_08ADB660;
    case 811u: goto L_08ADB66C;
    case 812u: goto L_08ADB68C;
    case 813u: goto L_08ADB6AC;
    case 814u: goto L_08ADB6B4;
    case 815u: goto L_08ADB6BC;
    case 816u: goto L_08ADB6C8;
    case 817u: goto L_08ADB6E4;
    case 818u: goto L_08ADB6E8;
    case 819u: goto L_08ADB6EC;
    case 820u: goto L_08ADB6F4;
    case 821u: goto L_08ADB700;
    case 822u: goto L_08ADB708;
    case 823u: goto L_08ADB70C;
    case 824u: goto L_08ADB71C;
    case 825u: goto L_08ADB72C;
    case 826u: goto L_08ADB734;
    case 827u: goto L_08ADB73C;
    case 828u: goto L_08ADB748;
    case 829u: goto L_08ADB750;
    case 830u: goto L_08ADB758;
    case 831u: goto L_08ADB760;
    case 832u: goto L_08ADB770;
    case 833u: goto L_08ADB778;
    case 834u: goto L_08ADB780;
    case 835u: goto L_08ADB788;
    case 836u: goto L_08ADB794;
    case 837u: goto L_08ADB7B0;
    case 838u: goto L_08ADB7B4;
    case 839u: goto L_08ADB7B8;
    case 840u: goto L_08ADB7C0;
    case 841u: goto L_08ADB7CC;
    case 842u: goto L_08ADB7D4;
    case 843u: goto L_08ADB7D8;
    case 844u: goto L_08ADB7E8;
    case 845u: goto L_08ADB7F8;
    case 846u: goto L_08ADB800;
    case 847u: goto L_08ADB808;
    case 848u: goto L_08ADB810;
    case 849u: goto L_08ADB818;
    case 850u: goto L_08ADB824;
    case 851u: goto L_08ADB82C;
    case 852u: goto L_08ADB830;
    case 853u: goto L_08ADB85C;
    case 854u: goto L_08ADB868;
    case 855u: goto L_08ADB870;
    case 856u: goto L_08ADB874;
    case 857u: goto L_08ADB87C;
    case 858u: goto L_08ADB888;
    case 859u: goto L_08ADB890;
    case 860u: goto L_08ADB8A0;
    case 861u: goto L_08ADB8A8;
    case 862u: goto L_08ADB8B0;
    case 863u: goto L_08ADB8C0;
    case 864u: goto L_08ADB8D8;
    case 865u: goto L_08ADB8EC;
    case 866u: goto L_08ADB914;
    case 867u: goto L_08ADB91C;
    case 868u: goto L_08ADB934;
    case 869u: goto L_08ADB94C;
    case 870u: goto L_08ADB960;
    case 871u: goto L_08ADB968;
    case 872u: goto L_08ADB970;
    case 873u: goto L_08ADB978;
    case 874u: goto L_08ADB97C;
    case 875u: goto L_08ADB998;
    case 876u: goto L_08ADB9B4;
    case 877u: goto L_08ADB9B8;
    case 878u: goto L_08ADB9BC;
    case 879u: goto L_08ADB9C4;
    case 880u: goto L_08ADB9CC;
    case 881u: goto L_08ADB9DC;
    case 882u: goto L_08ADB9F8;
    case 883u: goto L_08ADBA00;
    case 884u: goto L_08ADBA08;
    case 885u: goto L_08ADBA10;
    case 886u: goto L_08ADBA20;
    case 887u: goto L_08ADBA28;
    case 888u: goto L_08ADBA30;
    case 889u: goto L_08ADBA40;
    case 890u: goto L_08ADBA78;
    case 891u: goto L_08ADBA84;
    case 892u: goto L_08ADBA8C;
    case 893u: goto L_08ADBACC;
    case 894u: goto L_08ADBAE0;
    case 895u: goto L_08ADBAEC;
    case 896u: goto L_08ADBAF4;
    case 897u: goto L_08ADBAFC;
    case 898u: goto L_08ADBB30;
    case 899u: goto L_08ADBB40;
    case 900u: goto L_08ADBB50;
    case 901u: goto L_08ADBB54;
    case 902u: goto L_08ADBB58;
    case 903u: goto L_08ADBB68;
    case 904u: goto L_08ADBB74;
    case 905u: goto L_08ADBB7C;
    case 906u: goto L_08ADBB88;
    case 907u: goto L_08ADBB98;
    case 908u: goto L_08ADBBA8;
    case 909u: goto L_08ADBBB8;
    case 910u: goto L_08ADBBBC;
    case 911u: goto L_08ADBBC0;
    case 912u: goto L_08ADBBD0;
    case 913u: goto L_08ADBBD8;
    case 914u: goto L_08ADBBE0;
    case 915u: goto L_08ADBBE8;
    case 916u: goto L_08ADBBF0;
    case 917u: goto L_08ADBBF8;
    case 918u: goto L_08ADBC44;
    case 919u: goto L_08ADBC4C;
    case 920u: goto L_08ADBC8C;
    case 921u: goto L_08ADBC9C;
    case 922u: goto L_08ADBCB0;
    case 923u: goto L_08ADBCB8;
    case 924u: goto L_08ADBCC0;
    case 925u: goto L_08ADBCC8;
    case 926u: goto L_08ADBCD4;
    case 927u: goto L_08ADBCE0;
    case 928u: goto L_08ADBCE8;
    case 929u: goto L_08ADBCEC;
    case 930u: goto L_08ADBCF4;
    case 931u: goto L_08ADBD24;
    case 932u: goto L_08ADBD30;
    case 933u: goto L_08ADBD40;
    case 934u: goto L_08ADBD48;
    case 935u: goto L_08ADBD6C;
    case 936u: goto L_08ADBD74;
    case 937u: goto L_08ADBD80;
    case 938u: goto L_08ADBD88;
    case 939u: goto L_08ADBD8C;
    case 940u: goto L_08ADBD94;
    case 941u: goto L_08ADBD98;
    case 942u: goto L_08ADBDA8;
    case 943u: goto L_08ADBDC8;
    case 944u: goto L_08ADBDCC;
    case 945u: goto L_08ADBDFC;
    case 946u: goto L_08ADBE28;
    case 947u: goto L_08ADBE30;
    case 948u: goto L_08ADBE40;
    case 949u: goto L_08ADBE98;
    case 950u: goto L_08ADBE9C;
    case 951u: goto L_08ADBEAC;
    case 952u: goto L_08ADBEB4;
    case 953u: goto L_08ADBEBC;
    case 954u: goto L_08ADBEC4;
    case 955u: goto L_08ADBECC;
    case 956u: goto L_08ADBED4;
    case 957u: goto L_08ADBEFC;
    case 958u: goto L_08ADBF04;
    case 959u: goto L_08ADBF0C;
    case 960u: goto L_08ADBF10;
    case 961u: goto L_08ADBF18;
    case 962u: goto L_08ADBF28;
    case 963u: goto L_08ADBF30;
    case 964u: goto L_08ADBF34;
    case 965u: goto L_08ADBF3C;
    case 966u: goto L_08ADBF44;
    case 967u: goto L_08ADBF54;
    case 968u: goto L_08ADBF5C;
    case 969u: goto L_08ADBF68;
    case 970u: goto L_08ADBF74;
    case 971u: goto L_08ADBF78;
    case 972u: goto L_08ADBF80;
    case 973u: goto L_08ADBFA8;
    case 974u: goto L_08ADBFB0;
    case 975u: goto L_08ADBFCC;
    case 976u: goto L_08ADBFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AD8000:
    ctx.gpr[31] = (0x08AD8008u);
    ctx.gpr[5] = (0u | 193u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 234u, 0x08AD4E34u>(ctx, &aot_mem) && ctx.pc == 0x08AD8008u) goto L_08AD8008;
    return;
L_08AD8008:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD801C;
      }
      goto L_08AD8010;
    }
L_08AD8010:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD801Cu);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD801Cu) goto L_08AD801C;
    return;
L_08AD801C:
    ctx.gpr[31] = (0x08AD8024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AD8024u) goto L_08AD8024;
    return;
L_08AD8024:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8088;
      }
      goto L_08AD802C;
    }
L_08AD802C:
    ctx.gpr[31] = (0x08AD8034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AD8034u) goto L_08AD8034;
    return;
L_08AD8034:
    ctx.gpr[31] = (0x08AD803Cu);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 1029u, 0x08AB3FB8u>(ctx, &aot_mem) && ctx.pc == 0x08AD803Cu) goto L_08AD803C;
    return;
L_08AD803C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8088;
      }
      goto L_08AD8044;
    }
L_08AD8044:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-344));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 246u);
    ctx.gpr[31] = (0x08AD8058u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem) && ctx.pc == 0x08AD8058u) goto L_08AD8058;
    return;
L_08AD8058:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-336));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 218u);
    ctx.gpr[31] = (0x08AD806Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem) && ctx.pc == 0x08AD806Cu) goto L_08AD806C;
    return;
L_08AD806C:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-324));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[31] = (0x08AD8080u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem) && ctx.pc == 0x08AD8080u) goto L_08AD8080;
    return;
L_08AD8080:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD80D0;
      }
      goto L_08AD8088;
    }
L_08AD8088:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD8094u);
    ctx.gpr[5] = (0u | 218u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD8094u) goto L_08AD8094;
    return;
L_08AD8094:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD80A0u);
    ctx.gpr[5] = (0u | 246u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD80A0u) goto L_08AD80A0;
    return;
L_08AD80A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD80ACu);
    ctx.gpr[5] = (0u | 218u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 234u, 0x08AD4E34u>(ctx, &aot_mem) && ctx.pc == 0x08AD80ACu) goto L_08AD80AC;
    return;
L_08AD80AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AD80D0;
      }
      goto L_08AD80B4;
    }
L_08AD80B4:
    ctx.gpr[31] = (0x08AD80BCu);
    ctx.gpr[5] = (0u | 246u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 234u, 0x08AD4E34u>(ctx, &aot_mem) && ctx.pc == 0x08AD80BCu) goto L_08AD80BC;
    return;
L_08AD80BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD80D0;
      }
      goto L_08AD80C4;
    }
L_08AD80C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD80D0u);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD80D0u) goto L_08AD80D0;
    return;
L_08AD80D0:
    ctx.gpr[31] = (0x08AD80D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AD80D8u) goto L_08AD80D8;
    return;
L_08AD80D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8114;
      }
      goto L_08AD80E0;
    }
L_08AD80E0:
    ctx.gpr[31] = (0x08AD80E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AD80E8u) goto L_08AD80E8;
    return;
L_08AD80E8:
    ctx.gpr[31] = (0x08AD80F0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 1u, 0x08AB4000u>(ctx, &aot_mem) && ctx.pc == 0x08AD80F0u) goto L_08AD80F0;
    return;
L_08AD80F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD8114;
      }
      goto L_08AD80F8;
    }
L_08AD80F8:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-316));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 261u);
    ctx.gpr[31] = (0x08AD810Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem) && ctx.pc == 0x08AD810Cu) goto L_08AD810C;
    return;
L_08AD810C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8120;
      }
      goto L_08AD8114;
    }
L_08AD8114:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD8120u);
    ctx.gpr[5] = (0u | 261u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD8120u) goto L_08AD8120;
    return;
L_08AD8120:
    ctx.gpr[31] = (0x08AD8128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AD8128u) goto L_08AD8128;
    return;
L_08AD8128:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD81D0;
      }
      goto L_08AD8130;
    }
L_08AD8130:
    ctx.gpr[31] = (0x08AD8138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AD8138u) goto L_08AD8138;
    return;
L_08AD8138:
    ctx.gpr[31] = (0x08AD8140u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 1009u, 0x08AB3F00u>(ctx, &aot_mem) && ctx.pc == 0x08AD8140u) goto L_08AD8140;
    return;
L_08AD8140:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD81D0;
      }
      goto L_08AD8148;
    }
L_08AD8148:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD8154u);
    ctx.gpr[5] = (0u | 117u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD8154u) goto L_08AD8154;
    return;
L_08AD8154:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD8160u);
    ctx.gpr[5] = (0u | 118u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD8160u) goto L_08AD8160;
    return;
L_08AD8160:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 204u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AD8174u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem) && ctx.pc == 0x08AD8174u) goto L_08AD8174;
    return;
L_08AD8174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11816)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD81F4;
      }
      goto L_08AD8180;
    }
L_08AD8180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5472)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AD81C8;
      }
      goto L_08AD818C;
    }
L_08AD818C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD81C8;
      }
      goto L_08AD8194;
    }
L_08AD8194:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-304));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 117u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AD81ACu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem) && ctx.pc == 0x08AD81ACu) goto L_08AD81AC;
    return;
L_08AD81AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AD81C0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem) && ctx.pc == 0x08AD81C0u) goto L_08AD81C0;
    return;
L_08AD81C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD81F4;
      }
      goto L_08AD81C8;
    }
L_08AD81C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD81F4;
      }
      goto L_08AD81D0;
    }
L_08AD81D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD81DCu);
    ctx.gpr[5] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD81DCu) goto L_08AD81DC;
    return;
L_08AD81DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD81E8u);
    ctx.gpr[5] = (0u | 117u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD81E8u) goto L_08AD81E8;
    return;
L_08AD81E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD81F4u);
    ctx.gpr[5] = (0u | 118u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD81F4u) goto L_08AD81F4;
    return;
L_08AD81F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8214;
      }
      goto L_08AD8200;
    }
L_08AD8200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-408)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AD821C;
      }
      goto L_08AD820C;
    }
L_08AD820C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD835C;
      }
      goto L_08AD8214;
    }
L_08AD8214:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8364;
      }
      goto L_08AD821C;
    }
L_08AD821C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8364;
      }
      goto L_08AD8230;
    }
L_08AD8230:
    ctx.gpr[31] = (0x08AD8238u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08AD8238u) goto L_08AD8238;
    return;
L_08AD8238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AD8248u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 526u, 0x08A8EB48u>(ctx, &aot_mem) && ctx.pc == 0x08AD8248u) goto L_08AD8248;
    return;
L_08AD8248:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5428)));
    ctx.gpr[20] = (2280u << 16u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(11952));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    goto L_08AD826C;
L_08AD826C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD82BC;
      }
      goto L_08AD8278;
    }
L_08AD8278:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD82BC;
      }
      goto L_08AD8288;
    }
L_08AD8288:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD829C;
      }
      goto L_08AD8290;
    }
L_08AD8290:
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AD82B4;
      }
      goto L_08AD829C;
    }
L_08AD829C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD82BC;
      }
      goto L_08AD82A4;
    }
L_08AD82A4:
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(18)));
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08AD82BC;
      }
      goto L_08AD82B4;
    }
L_08AD82B4:
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    goto L_08AD82BC;
L_08AD82BC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AD826C;
      }
      goto L_08AD82D4;
    }
L_08AD82D4:
    ctx.gpr[31] = (0x08AD82DCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 450u, 0x08B41DB8u>(ctx, &aot_mem) && ctx.pc == 0x08AD82DCu) goto L_08AD82DC;
    return;
L_08AD82DC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD82ECu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 234u, 0x08AD4E34u>(ctx, &aot_mem) && ctx.pc == 0x08AD82ECu) goto L_08AD82EC;
    return;
L_08AD82EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD834C;
      }
      goto L_08AD82F4;
    }
L_08AD82F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
      if (branch_taken) {
          goto L_08AD8318;
      }
      goto L_08AD8308;
    }
L_08AD8308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD8318;
L_08AD8318:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(630))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[17] << (ctx.gpr[5] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD834C;
      }
      goto L_08AD8330;
    }
L_08AD8330:
    ctx.gpr[7] = (ctx.gpr[28] + static_cast<std::uint32_t>(-296));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD8344u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 4u, 0x08AD4040u>(ctx, &aot_mem) && ctx.pc == 0x08AD8344u) goto L_08AD8344;
    return;
L_08AD8344:
    ctx.gpr[4] = (0u | 350u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-408), ctx.gpr[4]);
    goto L_08AD834C;
L_08AD834C:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08AD8364;
      }
      goto L_08AD835C;
    }
L_08AD835C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-408), ctx.gpr[4]);
    goto L_08AD8364;
L_08AD8364:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD8384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD83CC;
      }
      goto L_08AD83BC;
    }
L_08AD83BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD83CC;
L_08AD83CC:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AD83DCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD83DCu) goto L_08AD83DC;
    return;
L_08AD83DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (109u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(25708));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD84D4;
      }
      goto L_08AD83FC;
    }
L_08AD83FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD84D4;
      }
      goto L_08AD840C;
    }
L_08AD840C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD84D4;
      }
      goto L_08AD841C;
    }
L_08AD841C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD84D4;
      }
      goto L_08AD8434;
    }
L_08AD8434:
    ctx.gpr[4] = (109u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25708));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AD8454u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 285u, 0x08A3137Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8454u) goto L_08AD8454;
    return;
L_08AD8454:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AD8478u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD8478u) goto L_08AD8478;
    return;
L_08AD8478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AD8490u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD8490u) goto L_08AD8490;
    return;
L_08AD8490:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AD84DC;
      }
      goto L_08AD84A4;
    }
L_08AD84A4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AD84B4u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD84B4u) goto L_08AD84B4;
    return;
L_08AD84B4:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD84C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12504));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem) && ctx.pc == 0x08AD84C8u) goto L_08AD84C8;
    return;
L_08AD84C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AD8524;
      }
      goto L_08AD84D4;
    }
L_08AD84D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD865C;
      }
      goto L_08AD84DC;
    }
L_08AD84DC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AD84ECu);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD84ECu) goto L_08AD84EC;
    return;
L_08AD84EC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AD8524;
      }
      goto L_08AD8500;
    }
L_08AD8500:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AD8510u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD8510u) goto L_08AD8510;
    return;
L_08AD8510:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD851Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 521u, 0x08AD30D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD851Cu) goto L_08AD851C;
    return;
L_08AD851C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    goto L_08AD8524;
L_08AD8524:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AD8534u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD8534u) goto L_08AD8534;
    return;
L_08AD8534:
    ctx.gpr[31] = (0x08AD853Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 463u, 0x088DF79Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD853Cu) goto L_08AD853C;
    return;
L_08AD853C:
    ctx.gpr[31] = (0x08AD8544u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 463u, 0x088DF79Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD8544u) goto L_08AD8544;
    return;
L_08AD8544:
    ctx.gpr[31] = (0x08AD854Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 471u, 0x088DF818u>(ctx, &aot_mem) && ctx.pc == 0x08AD854Cu) goto L_08AD854C;
    return;
L_08AD854C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AD8564u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD8564u) goto L_08AD8564;
    return;
L_08AD8564:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD85AC;
      }
      goto L_08AD8570;
    }
L_08AD8570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
        goto L_08AD8588;
    }
    goto L_08AD857C;
L_08AD857C:
    ctx.gpr[31] = (0x08AD8584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08AD8584u) goto L_08AD8584;
    return;
L_08AD8584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    goto L_08AD8588;
L_08AD8588:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AD85A0u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD85A0u) goto L_08AD85A0;
    return;
L_08AD85A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD85ACu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 695u, 0x0893EDA0u>(ctx, &aot_mem) && ctx.pc == 0x08AD85ACu) goto L_08AD85AC;
    return;
L_08AD85AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AD8628;
      }
      goto L_08AD85CC;
    }
L_08AD85CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AD860C;
      }
      goto L_08AD85DC;
    }
L_08AD85DC:
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[9] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD860C;
      }
      goto L_08AD85F0;
    }
L_08AD85F0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[7] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AD860C;
      }
      goto L_08AD8600;
    }
L_08AD8600:
    ctx.gpr[6] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8610;
      }
      goto L_08AD860C;
    }
L_08AD860C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08AD8610;
L_08AD8610:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AD85CC;
      }
      goto L_08AD8628;
    }
L_08AD8628:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD8644u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 523u, 0x08ABE6BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8644u) goto L_08AD8644;
    return;
L_08AD8644:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD8658u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 563u, 0x08ABE988u>(ctx, &aot_mem) && ctx.pc == 0x08AD8658u) goto L_08AD8658;
    return;
L_08AD8658:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08AD865C;
L_08AD865C:
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
L_08AD867C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-528));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD86CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 669u, 0x0887F210u>(ctx, &aot_mem) && ctx.pc == 0x08AD86CCu) goto L_08AD86CC;
    return;
L_08AD86CC:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    ctx.gpr[31] = (0x08AD86DCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD86DCu) goto L_08AD86DC;
    return;
L_08AD86DC:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AD8730;
      }
      goto L_08AD86E8;
    }
L_08AD86E8:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[6] = (16880u << 16u);
    ctx.gpr[7] = (0u | 49u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.fpr[24] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08AD8738;
      }
      goto L_08AD8728;
    }
L_08AD8728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[23]) < 0 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AD8740;
      }
      goto L_08AD8730;
    }
L_08AD8730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8738;
    }
L_08AD8738:
    ctx.gpr[23] = (0u | 49u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[23]) < 0 ? 1u : 0u);
    goto L_08AD8740;
L_08AD8740:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[23] = (0u | 0u);
        goto L_08AD8748;
    }
    goto L_08AD8748;
L_08AD8748:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (16840u << 16u);
    ctx.gpr[6] = (0u | 49u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 49u);
        goto L_08AD8774;
    }
    goto L_08AD8774;
L_08AD8774:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[6] = (0u | 0u);
        goto L_08AD8784;
    }
    goto L_08AD8784;
L_08AD8784:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD8BAC;
      }
      goto L_08AD87A4;
    }
L_08AD87A4:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(10));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
        goto L_08AD87C0;
    }
    goto L_08AD87C0;
L_08AD87C0:
    ctx.gpr[18] = (0u | 49u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 49 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_08AD87D0;
    }
    goto L_08AD87D0;
L_08AD87D0:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD8818;
      }
      goto L_08AD87E0;
    }
L_08AD87E0:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(-10));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_08AD87F8;
    }
    goto L_08AD87F8;
L_08AD87F8:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
        goto L_08AD8810;
    }
    goto L_08AD8810;
L_08AD8810:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD8844;
      }
      goto L_08AD8818;
    }
L_08AD8818:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(2));
    ctx.gpr[22] = (0u | 49u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 49 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(10));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
        goto L_08AD8830;
    }
    goto L_08AD8830;
L_08AD8830:
    ctx.gpr[19] = (0u | 49u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 49 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_08AD8840;
    }
    goto L_08AD8840;
L_08AD8840:
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AD8844;
L_08AD8844:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AD8914;
      }
      goto L_08AD884C;
    }
L_08AD884C:
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
      if (branch_taken) {
          goto L_08AD8908;
      }
      goto L_08AD885C;
    }
L_08AD885C:
    ctx.gpr[4] = (ctx.gpr[21] << 4u);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[4]);
    goto L_08AD887C;
L_08AD887C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08AD8890u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem) && ctx.pc == 0x08AD8890u) goto L_08AD8890;
    return;
L_08AD8890:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8900;
      }
      goto L_08AD8898;
    }
L_08AD8898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AD88B0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem) && ctx.pc == 0x08AD88B0u) goto L_08AD88B0;
    return;
L_08AD88B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD88F8;
      }
      goto L_08AD88B8;
    }
L_08AD88B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08AD88D0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem) && ctx.pc == 0x08AD88D0u) goto L_08AD88D0;
    return;
L_08AD88D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD88F0;
      }
      goto L_08AD88D8;
    }
L_08AD88D8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2800));
      if (branch_taken) {
          goto L_08AD887C;
      }
      goto L_08AD88E8;
    }
L_08AD88E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8908;
      }
      goto L_08AD88F0;
    }
L_08AD88F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD88F8;
    }
L_08AD88F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8900;
    }
L_08AD8900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8908;
    }
L_08AD8908:
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AD884C;
      }
      goto L_08AD8914;
    }
L_08AD8914:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    goto L_08AD891C;
L_08AD891C:
    ctx.gpr[31] = (0x08AD8924u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 439u, 0x08AD5914u>(ctx, &aot_mem) && ctx.pc == 0x08AD8924u) goto L_08AD8924;
    return;
L_08AD8924:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8960;
      }
      goto L_08AD892C;
    }
L_08AD892C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AD893Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 669u, 0x0887F210u>(ctx, &aot_mem) && ctx.pc == 0x08AD893Cu) goto L_08AD893C;
    return;
L_08AD893C:
    ctx.gpr[31] = (0x08AD8944u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8944u) goto L_08AD8944;
    return;
L_08AD8944:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8958;
      }
      goto L_08AD8950;
    }
L_08AD8950:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD891C;
      }
      goto L_08AD8958;
    }
L_08AD8958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8960;
    }
L_08AD8960:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD89A4;
      }
      goto L_08AD8970;
    }
L_08AD8970:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(10));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
        goto L_08AD898C;
    }
    goto L_08AD898C;
L_08AD898C:
    ctx.gpr[23] = (0u | 49u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 49 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
        goto L_08AD899C;
    }
    goto L_08AD899C;
L_08AD899C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD89D4;
      }
      goto L_08AD89A4;
    }
L_08AD89A4:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(2));
    ctx.gpr[22] = (0u | 49u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 49 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
        goto L_08AD89B8;
    }
    goto L_08AD89B8;
L_08AD89B8:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(-10));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
        goto L_08AD89D0;
    }
    goto L_08AD89D0;
L_08AD89D0:
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AD89D4;
L_08AD89D4:
    ctx.gpr[19] = (ctx.gpr[23] | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AD8AA8;
      }
      goto L_08AD89E0;
    }
L_08AD89E0:
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
      if (branch_taken) {
          goto L_08AD8A9C;
      }
      goto L_08AD89F0;
    }
L_08AD89F0:
    ctx.gpr[4] = (ctx.gpr[21] << 4u);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[4]);
    goto L_08AD8A10;
L_08AD8A10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08AD8A24u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 830u, 0x08AD70FCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8A24u) goto L_08AD8A24;
    return;
L_08AD8A24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8A94;
      }
      goto L_08AD8A2C;
    }
L_08AD8A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AD8A44u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 830u, 0x08AD70FCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8A44u) goto L_08AD8A44;
    return;
L_08AD8A44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8A8C;
      }
      goto L_08AD8A4C;
    }
L_08AD8A4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08AD8A64u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 830u, 0x08AD70FCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8A64u) goto L_08AD8A64;
    return;
L_08AD8A64:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8A84;
      }
      goto L_08AD8A6C;
    }
L_08AD8A6C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2800));
      if (branch_taken) {
          goto L_08AD8A10;
      }
      goto L_08AD8A7C;
    }
L_08AD8A7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8A9C;
      }
      goto L_08AD8A84;
    }
L_08AD8A84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8A8C;
    }
L_08AD8A8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8A94;
    }
L_08AD8A94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8A9C;
    }
L_08AD8A9C:
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AD89E0;
      }
      goto L_08AD8AA8;
    }
L_08AD8AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x08AD8AB4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 862u, 0x08AD72E8u>(ctx, &aot_mem) && ctx.pc == 0x08AD8AB4u) goto L_08AD8AB4;
    return;
L_08AD8AB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8AD0;
      }
      goto L_08AD8ABC;
    }
L_08AD8ABC:
    ctx.gpr[19] = (ctx.gpr[23] | 0u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AD8AD8;
      }
      goto L_08AD8AC8;
    }
L_08AD8AC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8BA4;
      }
      goto L_08AD8AD0;
    }
L_08AD8AD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8AD8;
    }
L_08AD8AD8:
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
      if (branch_taken) {
          goto L_08AD8B98;
      }
      goto L_08AD8AEC;
    }
L_08AD8AEC:
    ctx.gpr[4] = (ctx.gpr[21] << 4u);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[4]);
    goto L_08AD8B0C;
L_08AD8B0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08AD8B20u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem) && ctx.pc == 0x08AD8B20u) goto L_08AD8B20;
    return;
L_08AD8B20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8B90;
      }
      goto L_08AD8B28;
    }
L_08AD8B28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AD8B40u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem) && ctx.pc == 0x08AD8B40u) goto L_08AD8B40;
    return;
L_08AD8B40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8B88;
      }
      goto L_08AD8B48;
    }
L_08AD8B48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08AD8B60u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem) && ctx.pc == 0x08AD8B60u) goto L_08AD8B60;
    return;
L_08AD8B60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8B80;
      }
      goto L_08AD8B68;
    }
L_08AD8B68:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2800));
      if (branch_taken) {
          goto L_08AD8B0C;
      }
      goto L_08AD8B78;
    }
L_08AD8B78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8B98;
      }
      goto L_08AD8B80;
    }
L_08AD8B80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8B88;
    }
L_08AD8B88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8B90;
    }
L_08AD8B90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8B98;
    }
L_08AD8B98:
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AD8AD8;
      }
      goto L_08AD8BA4;
    }
L_08AD8BA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8FE4;
      }
      goto L_08AD8BAC;
    }
L_08AD8BAC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
        goto L_08AD8BCC;
    }
    goto L_08AD8BCC;
L_08AD8BCC:
    ctx.gpr[18] = (0u | 49u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 49 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_08AD8BDC;
    }
    goto L_08AD8BDC;
L_08AD8BDC:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AD8C28;
      }
      goto L_08AD8BEC;
    }
L_08AD8BEC:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
        goto L_08AD8C04;
    }
    goto L_08AD8C04;
L_08AD8C04:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
        goto L_08AD8C1C;
    }
    goto L_08AD8C1C;
L_08AD8C1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD8C58;
      }
      goto L_08AD8C28;
    }
L_08AD8C28:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[6]);
    ctx.gpr[30] = (0u | 49u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 49 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(10));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
        goto L_08AD8C44;
    }
    goto L_08AD8C44;
L_08AD8C44:
    ctx.gpr[21] = (0u | 49u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 49 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
        goto L_08AD8C54;
    }
    goto L_08AD8C54;
L_08AD8C54:
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AD8C58;
L_08AD8C58:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[30];
    ctx.gpr[4] = (ctx.gpr[21] << 4u);
      if (branch_taken) {
          goto L_08AD8D34;
      }
      goto L_08AD8C64;
    }
L_08AD8C64:
    ctx.gpr[19] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[21] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_08AD8C80;
L_08AD8C80:
    ctx.gpr[17] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AD8D28;
      }
      goto L_08AD8C90;
    }
L_08AD8C90:
    ctx.gpr[16] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[4]);
    goto L_08AD8C9C;
L_08AD8C9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08AD8CB0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem) && ctx.pc == 0x08AD8CB0u) goto L_08AD8CB0;
    return;
L_08AD8CB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8D20;
      }
      goto L_08AD8CB8;
    }
L_08AD8CB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AD8CD0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem) && ctx.pc == 0x08AD8CD0u) goto L_08AD8CD0;
    return;
L_08AD8CD0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8D18;
      }
      goto L_08AD8CD8;
    }
L_08AD8CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08AD8CF0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem) && ctx.pc == 0x08AD8CF0u) goto L_08AD8CF0;
    return;
L_08AD8CF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8D10;
      }
      goto L_08AD8CF8;
    }
L_08AD8CF8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08AD8C9C;
      }
      goto L_08AD8D08;
    }
L_08AD8D08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8D28;
      }
      goto L_08AD8D10;
    }
L_08AD8D10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8D18;
    }
L_08AD8D18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8D20;
    }
L_08AD8D20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8D28;
    }
L_08AD8D28:
    ctx.gpr[20] = (ctx.gpr[22] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[30];
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AD8C80;
      }
      goto L_08AD8D34;
    }
L_08AD8D34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    goto L_08AD8D3C;
L_08AD8D3C:
    ctx.gpr[31] = (0x08AD8D44u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 439u, 0x08AD5914u>(ctx, &aot_mem) && ctx.pc == 0x08AD8D44u) goto L_08AD8D44;
    return;
L_08AD8D44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8D80;
      }
      goto L_08AD8D4C;
    }
L_08AD8D4C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AD8D5Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 669u, 0x0887F210u>(ctx, &aot_mem) && ctx.pc == 0x08AD8D5Cu) goto L_08AD8D5C;
    return;
L_08AD8D5C:
    ctx.gpr[31] = (0x08AD8D64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8D64u) goto L_08AD8D64;
    return;
L_08AD8D64:
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8D78;
      }
      goto L_08AD8D70;
    }
L_08AD8D70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8D3C;
      }
      goto L_08AD8D78;
    }
L_08AD8D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8D80;
    }
L_08AD8D80:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
      if (branch_taken) {
          goto L_08AD8DC8;
      }
      goto L_08AD8D90;
    }
L_08AD8D90:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(10));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
        goto L_08AD8DAC;
    }
    goto L_08AD8DAC;
L_08AD8DAC:
    ctx.gpr[22] = (0u | 49u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 49 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
        goto L_08AD8DBC;
    }
    goto L_08AD8DBC;
L_08AD8DBC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD8DFC;
      }
      goto L_08AD8DC8;
    }
L_08AD8DC8:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[30] = (0u | 49u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 49 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
        goto L_08AD8DDC;
    }
    goto L_08AD8DDC;
L_08AD8DDC:
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
        goto L_08AD8DF4;
    }
    goto L_08AD8DF4;
L_08AD8DF4:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AD8DFC;
L_08AD8DFC:
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[30];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD8EE0;
      }
      goto L_08AD8E08;
    }
L_08AD8E08:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] << 4u);
    ctx.gpr[21] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_08AD8E2C;
L_08AD8E2C:
    ctx.gpr[17] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AD8ED4;
      }
      goto L_08AD8E3C;
    }
L_08AD8E3C:
    ctx.gpr[16] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[4]);
    goto L_08AD8E48;
L_08AD8E48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08AD8E5Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 830u, 0x08AD70FCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8E5Cu) goto L_08AD8E5C;
    return;
L_08AD8E5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8ECC;
      }
      goto L_08AD8E64;
    }
L_08AD8E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AD8E7Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 830u, 0x08AD70FCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8E7Cu) goto L_08AD8E7C;
    return;
L_08AD8E7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8EC4;
      }
      goto L_08AD8E84;
    }
L_08AD8E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08AD8E9Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 830u, 0x08AD70FCu>(ctx, &aot_mem) && ctx.pc == 0x08AD8E9Cu) goto L_08AD8E9C;
    return;
L_08AD8E9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8EBC;
      }
      goto L_08AD8EA4;
    }
L_08AD8EA4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08AD8E48;
      }
      goto L_08AD8EB4;
    }
L_08AD8EB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8ED4;
      }
      goto L_08AD8EBC;
    }
L_08AD8EBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8EC4;
    }
L_08AD8EC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8ECC;
    }
L_08AD8ECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8ED4;
    }
L_08AD8ED4:
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[30];
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AD8E2C;
      }
      goto L_08AD8EE0;
    }
L_08AD8EE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x08AD8EECu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 862u, 0x08AD72E8u>(ctx, &aot_mem) && ctx.pc == 0x08AD8EECu) goto L_08AD8EEC;
    return;
L_08AD8EEC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8F0C;
      }
      goto L_08AD8EF4;
    }
L_08AD8EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[30];
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_08AD8F14;
      }
      goto L_08AD8F04;
    }
L_08AD8F04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8FE4;
      }
      goto L_08AD8F0C;
    }
L_08AD8F0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8F14;
    }
L_08AD8F14:
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[22] << 4u);
    ctx.gpr[21] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_08AD8F30;
L_08AD8F30:
    ctx.gpr[17] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AD8FD8;
      }
      goto L_08AD8F40;
    }
L_08AD8F40:
    ctx.gpr[16] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[4]);
    goto L_08AD8F4C;
L_08AD8F4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08AD8F60u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem) && ctx.pc == 0x08AD8F60u) goto L_08AD8F60;
    return;
L_08AD8F60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8FD0;
      }
      goto L_08AD8F68;
    }
L_08AD8F68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AD8F80u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem) && ctx.pc == 0x08AD8F80u) goto L_08AD8F80;
    return;
L_08AD8F80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8FC8;
      }
      goto L_08AD8F88;
    }
L_08AD8F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08AD8FA0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 805u, 0x08AD6F90u>(ctx, &aot_mem) && ctx.pc == 0x08AD8FA0u) goto L_08AD8FA0;
    return;
L_08AD8FA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8FC0;
      }
      goto L_08AD8FA8;
    }
L_08AD8FA8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08AD8F4C;
      }
      goto L_08AD8FB8;
    }
L_08AD8FB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8FD8;
      }
      goto L_08AD8FC0;
    }
L_08AD8FC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8FC8;
    }
L_08AD8FC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8FD0;
    }
L_08AD8FD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD8FD8;
    }
L_08AD8FD8:
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[30];
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AD8F30;
      }
      goto L_08AD8FE4;
    }
L_08AD8FE4:
    ctx.gpr[31] = (0x08AD8FECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD8FECu) goto L_08AD8FEC;
    return;
L_08AD8FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD902C;
      }
      goto L_08AD8FFC;
    }
L_08AD8FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x08AD9008u);
    ctx.gpr[5] = (0u | 131u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 382u, 0x08AD5658u>(ctx, &aot_mem) && ctx.pc == 0x08AD9008u) goto L_08AD9008;
    return;
L_08AD9008:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9018;
      }
      goto L_08AD9010;
    }
L_08AD9010:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD902C;
      }
      goto L_08AD9018;
    }
L_08AD9018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[31] = (0x08AD9024u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 669u, 0x0887F210u>(ctx, &aot_mem) && ctx.pc == 0x08AD9024u) goto L_08AD9024;
    return;
L_08AD9024:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD8FE4;
      }
      goto L_08AD902C;
    }
L_08AD902C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[31] = (0x08AD9038u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 669u, 0x0887F210u>(ctx, &aot_mem) && ctx.pc == 0x08AD9038u) goto L_08AD9038;
    return;
L_08AD9038:
    ctx.gpr[31] = (0x08AD9040u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9040u) goto L_08AD9040;
    return;
L_08AD9040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9080;
      }
      goto L_08AD9050;
    }
L_08AD9050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x08AD905Cu);
    ctx.gpr[5] = (0u | 131u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 382u, 0x08AD5658u>(ctx, &aot_mem) && ctx.pc == 0x08AD905Cu) goto L_08AD905C;
    return;
L_08AD905C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD906C;
      }
      goto L_08AD9064;
    }
L_08AD9064:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9080;
      }
      goto L_08AD906C;
    }
L_08AD906C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[31] = (0x08AD9078u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 669u, 0x0887F210u>(ctx, &aot_mem) && ctx.pc == 0x08AD9078u) goto L_08AD9078;
    return;
L_08AD9078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9038;
      }
      goto L_08AD9080;
    }
L_08AD9080:
    ctx.gpr[31] = (0x08AD9088u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9088u) goto L_08AD9088;
    return;
L_08AD9088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD933C;
      }
      goto L_08AD9098;
    }
L_08AD9098:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_08AD90B0;
L_08AD90B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AD91C0;
      }
      goto L_08AD90B8;
    }
L_08AD90B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD91C0;
      }
      goto L_08AD90C0;
    }
L_08AD90C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AD90D8;
      }
      goto L_08AD90C8;
    }
L_08AD90C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_08AD90E0;
    }
    goto L_08AD90D8;
L_08AD90D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD9100;
      }
      goto L_08AD90E0;
    }
L_08AD90E0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08AD90FC;
    }
    goto L_08AD90F4;
L_08AD90F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD9100;
      }
      goto L_08AD90FC;
    }
L_08AD90FC:
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[22]);
    goto L_08AD9100;
L_08AD9100:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9118;
      }
      goto L_08AD9108;
    }
L_08AD9108:
    ctx.gpr[31] = (0x08AD9110u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 128u, 0x0890C798u>(ctx, &aot_mem) && ctx.pc == 0x08AD9110u) goto L_08AD9110;
    return;
L_08AD9110:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9120;
      }
      goto L_08AD9118;
    }
L_08AD9118:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AD91B0;
      }
      goto L_08AD9120;
    }
L_08AD9120:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x08AD9130u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD9130u) goto L_08AD9130;
    return;
L_08AD9130:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 131u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD91AC;
      }
      goto L_08AD9140;
    }
L_08AD9140:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_08AD9174;
      }
      goto L_08AD9150;
    }
L_08AD9150:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AD9164;
      }
      goto L_08AD915C;
    }
L_08AD915C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9174;
      }
      goto L_08AD9164;
    }
L_08AD9164:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD9150;
      }
      goto L_08AD9174;
    }
L_08AD9174:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AD9188;
      }
      goto L_08AD917C;
    }
L_08AD917C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08AD9188;
L_08AD9188:
    ctx.gpr[31] = (0x08AD9190u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem) && ctx.pc == 0x08AD9190u) goto L_08AD9190;
    return;
L_08AD9190:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
      if (branch_taken) {
          goto L_08AD91A4;
      }
      goto L_08AD9198;
    }
L_08AD9198:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD91AC;
      }
      goto L_08AD91A4;
    }
L_08AD91A4:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    goto L_08AD91AC;
L_08AD91AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_08AD91B0;
L_08AD91B0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(3344));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AD90B0;
      }
      goto L_08AD91C0;
    }
L_08AD91C0:
    ctx.gpr[31] = (0x08AD91C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD91C8u) goto L_08AD91C8;
    return;
L_08AD91C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD933C;
      }
      goto L_08AD91D8;
    }
L_08AD91D8:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 10000u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[22] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08AD9230;
      }
      goto L_08AD91F0;
    }
L_08AD91F0:
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_08AD91F4;
L_08AD91F4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AD9208;
      }
      goto L_08AD9200;
    }
L_08AD9200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9220;
      }
      goto L_08AD9208;
    }
L_08AD9208:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(224)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9220;
      }
      goto L_08AD9218;
    }
L_08AD9218:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    goto L_08AD9220;
L_08AD9220:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD91F4;
      }
      goto L_08AD9230;
    }
L_08AD9230:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AD9240;
      }
      goto L_08AD9238;
    }
L_08AD9238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD933C;
      }
      goto L_08AD9240;
    }
L_08AD9240:
    ctx.gpr[22] = (ctx.gpr[22] << 2u);
    ctx.gpr[22] = (ctx.gpr[29] + ctx.gpr[22]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD925Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 521u, 0x08AD5EF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD925Cu) goto L_08AD925C;
    return;
L_08AD925C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD9268u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 541u, 0x08AD6020u>(ctx, &aot_mem) && ctx.pc == 0x08AD9268u) goto L_08AD9268;
    return;
L_08AD9268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD92FC;
      }
      goto L_08AD927C;
    }
L_08AD927C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AD9294;
      }
      goto L_08AD9284;
    }
L_08AD9284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
        goto L_08AD929C;
    }
    goto L_08AD9294;
L_08AD9294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD92BC;
      }
      goto L_08AD929C;
    }
L_08AD929C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_08AD92B8;
    }
    goto L_08AD92B0;
L_08AD92B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD92BC;
      }
      goto L_08AD92B8;
    }
L_08AD92B8:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[18]);
    goto L_08AD92BC;
L_08AD92BC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD92E8;
      }
      goto L_08AD92C4;
    }
L_08AD92C4:
    ctx.gpr[31] = (0x08AD92CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 128u, 0x0890C798u>(ctx, &aot_mem) && ctx.pc == 0x08AD92CCu) goto L_08AD92CC;
    return;
L_08AD92CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD92E8;
      }
      goto L_08AD92D4;
    }
L_08AD92D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AD92E8;
      }
      goto L_08AD92E0;
    }
L_08AD92E0:
    ctx.gpr[31] = (0x08AD92E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem) && ctx.pc == 0x08AD92E8u) goto L_08AD92E8;
    return;
L_08AD92E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(3344));
      if (branch_taken) {
          goto L_08AD927C;
      }
      goto L_08AD92FC;
    }
L_08AD92FC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x08AD9310u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 439u, 0x08AD5914u>(ctx, &aot_mem) && ctx.pc == 0x08AD9310u) goto L_08AD9310;
    return;
L_08AD9310:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AD9328;
      }
      goto L_08AD9318;
    }
L_08AD9318:
    ctx.gpr[31] = (0x08AD9320u);
    ctx.gpr[5] = (0u | 131u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 382u, 0x08AD5658u>(ctx, &aot_mem) && ctx.pc == 0x08AD9320u) goto L_08AD9320;
    return;
L_08AD9320:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9334;
      }
      goto L_08AD9328;
    }
L_08AD9328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[31] = (0x08AD9334u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 669u, 0x0887F210u>(ctx, &aot_mem) && ctx.pc == 0x08AD9334u) goto L_08AD9334;
    return;
L_08AD9334:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD91C0;
      }
      goto L_08AD933C;
    }
L_08AD933C:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(452), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AD9344;
L_08AD9344:
    ctx.gpr[31] = (0x08AD934Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD934Cu) goto L_08AD934C;
    return;
L_08AD934C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD935C;
    }
L_08AD935C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD961C;
      }
      goto L_08AD9368;
    }
L_08AD9368:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(356));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(436));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD938C;
      }
      goto L_08AD937C;
    }
L_08AD937C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AD9380;
L_08AD9380:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] != ctx.gpr[6]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
        goto L_08AD9380;
    }
    goto L_08AD938C;
L_08AD938C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[30] = (0u | 10000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[4]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[29] | 0u);
    goto L_08AD93A4;
L_08AD93A4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD93BC;
      }
      goto L_08AD93B4;
    }
L_08AD93B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD94C8;
      }
      goto L_08AD93BC;
    }
L_08AD93BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(356)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD93D0;
      }
      goto L_08AD93C8;
    }
L_08AD93C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD94C8;
      }
      goto L_08AD93D0;
    }
L_08AD93D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AD93E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 234u, 0x08AD4E34u>(ctx, &aot_mem) && ctx.pc == 0x08AD93E0u) goto L_08AD93E0;
    return;
L_08AD93E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AD94C8;
      }
      goto L_08AD93E8;
    }
L_08AD93E8:
    ctx.gpr[31] = (0x08AD93F0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 750u, 0x08AD3F30u>(ctx, &aot_mem) && ctx.pc == 0x08AD93F0u) goto L_08AD93F0;
    return;
L_08AD93F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(9)));
    ctx.gpr[4] = (ctx.gpr[4] & 131u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD94C8;
      }
      goto L_08AD9400;
    }
L_08AD9400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD9420;
      }
      goto L_08AD9410;
    }
L_08AD9410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AD9420;
L_08AD9420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(28))))));
      if (branch_taken) {
          goto L_08AD94B4;
      }
      goto L_08AD9434;
    }
L_08AD9434:
    ctx.gpr[17] = (0u | 0u);
    goto L_08AD9438;
L_08AD9438:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AD9450;
      }
      goto L_08AD9440;
    }
L_08AD9440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_08AD9458;
    }
    goto L_08AD9450;
L_08AD9450:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD9478;
      }
      goto L_08AD9458;
    }
L_08AD9458:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08AD9474;
    }
    goto L_08AD946C;
L_08AD946C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD9478;
      }
      goto L_08AD9474;
    }
L_08AD9474:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08AD9478;
L_08AD9478:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD94A0;
      }
      goto L_08AD9480;
    }
L_08AD9480:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AD94A0;
      }
      goto L_08AD948C;
    }
L_08AD948C:
    ctx.gpr[31] = (0x08AD9494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem) && ctx.pc == 0x08AD9494u) goto L_08AD9494;
    return;
L_08AD9494:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD94A0;
      }
      goto L_08AD949C;
    }
L_08AD949C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5));
    goto L_08AD94A0;
L_08AD94A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2080));
      if (branch_taken) {
          goto L_08AD9438;
      }
      goto L_08AD94B4;
    }
L_08AD94B4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD94C8;
      }
      goto L_08AD94C0;
    }
L_08AD94C0:
    ctx.gpr[30] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[21]);
    goto L_08AD94C8;
L_08AD94C8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD93A4;
      }
      goto L_08AD94DC;
    }
L_08AD94DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD94F8;
      }
      goto L_08AD94EC;
    }
L_08AD94EC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(452), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AD9614;
      }
      goto L_08AD94F8;
    }
L_08AD94F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[22] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD95C8;
      }
      goto L_08AD951C;
    }
L_08AD951C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AD9534;
      }
      goto L_08AD9524;
    }
L_08AD9524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
        goto L_08AD953C;
    }
    goto L_08AD9534;
L_08AD9534:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD955C;
      }
      goto L_08AD953C;
    }
L_08AD953C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08AD9558;
    }
    goto L_08AD9550;
L_08AD9550:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD955C;
      }
      goto L_08AD9558;
    }
L_08AD9558:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[20]);
    goto L_08AD955C;
L_08AD955C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD95B4;
      }
      goto L_08AD9568;
    }
L_08AD9568:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08AD95B4;
      }
      goto L_08AD9574;
    }
L_08AD9574:
    ctx.gpr[31] = (0x08AD957Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 772u, 0x08AFF508u>(ctx, &aot_mem) && ctx.pc == 0x08AD957Cu) goto L_08AD957C;
    return;
L_08AD957C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD95B4;
      }
      goto L_08AD9584;
    }
L_08AD9584:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD9590u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9590u) goto L_08AD9590;
    return;
L_08AD9590:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD95B4;
      }
      goto L_08AD9598;
    }
L_08AD9598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AD95B4u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD95B4u) goto L_08AD95B4;
    return;
L_08AD95B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2080));
      if (branch_taken) {
          goto L_08AD951C;
      }
      goto L_08AD95C8;
    }
L_08AD95C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (0x08AD95D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 503u, 0x08AD5DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD95D4u) goto L_08AD95D4;
    return;
L_08AD95D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AD95EC;
      }
      goto L_08AD95DC;
    }
L_08AD95DC:
    ctx.gpr[31] = (0x08AD95E4u);
    ctx.gpr[5] = (0u | 131u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 382u, 0x08AD5658u>(ctx, &aot_mem) && ctx.pc == 0x08AD95E4u) goto L_08AD95E4;
    return;
L_08AD95E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9600;
      }
      goto L_08AD95EC;
    }
L_08AD95EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[31] = (0x08AD95F8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 669u, 0x0887F210u>(ctx, &aot_mem) && ctx.pc == 0x08AD95F8u) goto L_08AD95F8;
    return;
L_08AD95F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9614;
      }
      goto L_08AD9600;
    }
L_08AD9600:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(356), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD938C;
      }
      goto L_08AD9614;
    }
L_08AD9614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9344;
      }
      goto L_08AD961C;
    }
L_08AD961C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9658:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD9678u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    goto L_08ADA1AC;
L_08AD9678:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9684:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD96A0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 510u, 0x0881EEC0u>(ctx, &aot_mem) && ctx.pc == 0x08AD96A0u) goto L_08AD96A0;
    return;
L_08AD96A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] & 1024u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
      if (branch_taken) {
          goto L_08AD96FC;
      }
      goto L_08AD96B8;
    }
L_08AD96B8:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD96FC;
      }
      goto L_08AD96C8;
    }
L_08AD96C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD96FC;
      }
      goto L_08AD96D4;
    }
L_08AD96D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD96E0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08AD96E0u) goto L_08AD96E0;
    return;
L_08AD96E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AD96FCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD96FCu) goto L_08AD96FC;
    return;
L_08AD96FC:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9718:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9720:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-280)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-280), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] & 255u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD9774u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 727u, 0x0881FF54u>(ctx, &aot_mem) && ctx.pc == 0x08AD9774u) goto L_08AD9774;
    return;
L_08AD9774:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AD9794u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 55u, 0x08820384u>(ctx, &aot_mem) && ctx.pc == 0x08AD9794u) goto L_08AD9794;
    return;
L_08AD9794:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[19] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD97E0;
      }
      goto L_08AD97C0;
    }
L_08AD97C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD97D8u);
    ctx.gpr[8] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 4u, 0x0882001Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD97D8u) goto L_08AD97D8;
    return;
L_08AD97D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AD97FC;
      }
      goto L_08AD97E0;
    }
L_08AD97E0:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD97F8u);
    ctx.gpr[8] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 4u, 0x0882001Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD97F8u) goto L_08AD97F8;
    return;
L_08AD97F8:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    goto L_08AD97FC;
L_08AD97FC:
    ctx.gpr[31] = (0x08AD9804u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AD9C78;
L_08AD9804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] & 992u);
    ctx.gpr[6] = (ctx.gpr[6] >> 5u);
    ctx.gpr[31] = (0x08AD9830u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 26u, 0x088201D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9830u) goto L_08AD9830;
    return;
L_08AD9830:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AD984Cu);
    ctx.gpr[9] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 115u, 0x08820850u>(ctx, &aot_mem) && ctx.pc == 0x08AD984Cu) goto L_08AD984C;
    return;
L_08AD984C:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AD98B0;
      }
      goto L_08AD9860;
    }
L_08AD9860:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD98B0;
      }
      goto L_08AD987C;
    }
L_08AD987C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(232));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AD9894u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD9894u) goto L_08AD9894;
    return;
L_08AD9894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AD98B0u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD98B0u) goto L_08AD98B0;
    return;
L_08AD98B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27440)));
    ctx.gpr[31] = (0x08AD98BCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 388u, 0x088715BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD98BCu) goto L_08AD98BC;
    return;
L_08AD98BC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD98E0u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 468u, 0x0881EB44u>(ctx, &aot_mem) && ctx.pc == 0x08AD98E0u) goto L_08AD98E0;
    return;
L_08AD98E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD98ECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 203u, 0x08820E28u>(ctx, &aot_mem) && ctx.pc == 0x08AD98ECu) goto L_08AD98EC;
    return;
L_08AD98EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-280)));
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-280), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9924:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[6] << 6u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD99C0;
      }
      goto L_08AD9944;
    }
L_08AD9944:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 6u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 7u);
      if (branch_taken) {
          goto L_08AD996C;
      }
      goto L_08AD9968;
    }
L_08AD9968:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AD996C;
L_08AD996C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD99C0;
      }
      goto L_08AD9974;
    }
L_08AD9974:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD99A8;
      }
      goto L_08AD997C;
    }
L_08AD997C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD9998;
      }
      goto L_08AD998C;
    }
L_08AD998C:
    ctx.gpr[6] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AD99A0;
      }
      goto L_08AD9998;
    }
L_08AD9998:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08AD99A0;
L_08AD99A0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD99C0;
      }
      goto L_08AD99A8;
    }
L_08AD99A8:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD99B8;
      }
      goto L_08AD99B4;
    }
L_08AD99B4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD99B8;
L_08AD99B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD99C4;
      }
      goto L_08AD99C0;
    }
L_08AD99C0:
    ctx.gpr[2] = (0u | 5u);
    goto L_08AD99C4;
L_08AD99C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD99CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD99E8u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_08AD9C78;
L_08AD99E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[6] = (ctx.gpr[5] & 992u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] >> 5u);
    ctx.gpr[31] = (0x08AD9A24u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 26u, 0x088201D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9A24u) goto L_08AD9A24;
    return;
L_08AD9A24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08AD9A40u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 115u, 0x08820850u>(ctx, &aot_mem) && ctx.pc == 0x08AD9A40u) goto L_08AD9A40;
    return;
L_08AD9A40:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27440)));
    ctx.gpr[31] = (0x08AD9A54u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 388u, 0x088715BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD9A54u) goto L_08AD9A54;
    return;
L_08AD9A54:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9A6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[18] << 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD9AA4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9AA4u) goto L_08AD9AA4;
    return;
L_08AD9AA4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD9ABCu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 12u, 0x088200E8u>(ctx, &aot_mem) && ctx.pc == 0x08AD9ABCu) goto L_08AD9ABC;
    return;
L_08AD9ABC:
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
L_08AD9AD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD9B08u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9B08u) goto L_08AD9B08;
    return;
L_08AD9B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AD9BB0;
      }
      goto L_08AD9B20;
    }
L_08AD9B20:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9B50;
      }
      goto L_08AD9B2C;
    }
L_08AD9B2C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (ctx.gpr[7] & 14u);
    ctx.gpr[7] = (ctx.gpr[7] ^ 6u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9B50;
      }
      goto L_08AD9B48;
    }
L_08AD9B48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9B54;
      }
      goto L_08AD9B50;
    }
L_08AD9B50:
    ctx.gpr[6] = (0u | 0u);
    goto L_08AD9B54;
L_08AD9B54:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9B90;
      }
      goto L_08AD9B60;
    }
L_08AD9B60:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9B70;
      }
      goto L_08AD9B68;
    }
L_08AD9B68:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9B88;
      }
      goto L_08AD9B70;
    }
L_08AD9B70:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD9BB0;
      }
      goto L_08AD9B80;
    }
L_08AD9B80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 13u);
      if (branch_taken) {
          goto L_08AD9BF0;
      }
      goto L_08AD9B88;
    }
L_08AD9B88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 13u);
      if (branch_taken) {
          goto L_08AD9BF0;
      }
      goto L_08AD9B90;
    }
L_08AD9B90:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9BB0;
      }
      goto L_08AD9B98;
    }
L_08AD9B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AD9BB0;
      }
      goto L_08AD9BA8;
    }
L_08AD9BA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 13u);
      if (branch_taken) {
          goto L_08AD9BF0;
      }
      goto L_08AD9BB0;
    }
L_08AD9BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (30u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] >> 17u);
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9BDC;
      }
      goto L_08AD9BD4;
    }
L_08AD9BD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 15u);
      if (branch_taken) {
          goto L_08AD9BF0;
      }
      goto L_08AD9BDC;
    }
L_08AD9BDC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD9BF0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 576u, 0x088230BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD9BF0u) goto L_08AD9BF0;
    return;
L_08AD9BF0:
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
L_08AD9C0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD9C20u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 424u, 0x0881E6E4u>(ctx, &aot_mem) && ctx.pc == 0x08AD9C20u) goto L_08AD9C20;
    return;
L_08AD9C20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(43))))));
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32440));
    ctx.gpr[4] = (ctx.gpr[4] | 15u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(43))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-241));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9C78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD9C8Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 726u, 0x0881FF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9C8Cu) goto L_08AD9C8C;
    return;
L_08AD9C8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (65535u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AD9CB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 664u, 0x0881FA54u>(ctx, &aot_mem) && ctx.pc == 0x08AD9CB4u) goto L_08AD9CB4;
    return;
L_08AD9CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9D08;
      }
      goto L_08AD9CC0;
    }
L_08AD9CC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9D08;
      }
      goto L_08AD9CDC;
    }
L_08AD9CDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(216));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AD9CF4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD9CF4u) goto L_08AD9CF4;
    return;
L_08AD9CF4:
    ctx.gpr[31] = (0x08AD9CFCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 563u, 0x0881F274u>(ctx, &aot_mem) && ctx.pc == 0x08AD9CFCu) goto L_08AD9CFC;
    return;
L_08AD9CFC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD9D18;
      }
      goto L_08AD9D08;
    }
L_08AD9D08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08AD9D18;
L_08AD9D18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9D28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD9D38u);
    // nop
    goto L_08AD9C78;
L_08AD9D38:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD9D44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[10] = (17278u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD9DA4u);
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9DA4u) goto L_08AD9DA4;
    return;
L_08AD9DA4:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(13)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-2)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-1)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(15))))));
    ctx.gpr[7] = (ctx.gpr[7] & 16u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08AD9E14;
      }
      goto L_08AD9DD8;
    }
L_08AD9DD8:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(15))))));
    ctx.gpr[7] = (ctx.gpr[7] & 32u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9E00;
      }
      goto L_08AD9DEC;
    }
L_08AD9DEC:
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(15))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_08AD9E48;
      }
      goto L_08AD9E00;
    }
L_08AD9E00:
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(15))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_08AD9E48;
      }
      goto L_08AD9E14;
    }
L_08AD9E14:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(15))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9E3C;
      }
      goto L_08AD9E28;
    }
L_08AD9E28:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(15))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_08AD9E48;
      }
      goto L_08AD9E3C;
    }
L_08AD9E3C:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(15))))));
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
    goto L_08AD9E48;
L_08AD9E48:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9E70;
      }
      goto L_08AD9E50;
    }
L_08AD9E50:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_08AD9EC8;
      }
      goto L_08AD9E68;
    }
L_08AD9E68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD9EC8;
      }
      goto L_08AD9E70;
    }
L_08AD9E70:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD9E7Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9E7Cu) goto L_08AD9E7C;
    return;
L_08AD9E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AD9E98u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD9E98u) goto L_08AD9E98;
    return;
L_08AD9E98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(15))))));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_08AD9EC8;
      }
      goto L_08AD9EA4;
    }
L_08AD9EA4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 254u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9EC8;
      }
      goto L_08AD9EC4;
    }
L_08AD9EC4:
    ctx.gpr[23] = (0u | 0u);
    goto L_08AD9EC8;
L_08AD9EC8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9ED8;
      }
      goto L_08AD9ED0;
    }
L_08AD9ED0:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD9EE0;
      }
      goto L_08AD9ED8;
    }
L_08AD9ED8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AD9EFC;
      }
      goto L_08AD9EE0;
    }
L_08AD9EE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(254));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AD9EFC;
L_08AD9EFC:
    ctx.gpr[2] = (ctx.gpr[23] | 0u);
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
L_08AD9F2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD9F74u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 620u, 0x0881F7A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9F74u) goto L_08AD9F74;
    return;
L_08AD9F74:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD9F80u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 348u, 0x0881E25Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD9F80u) goto L_08AD9F80;
    return;
L_08AD9F80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AD9F8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 426u, 0x0881E7E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9F8Cu) goto L_08AD9F8C;
    return;
L_08AD9F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AD9FA4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD9FA4u) goto L_08AD9FA4;
    return;
L_08AD9FA4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD9FB4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9FB4u) goto L_08AD9FB4;
    return;
L_08AD9FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AD9FD4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD9FD4u) goto L_08AD9FD4;
    return;
L_08AD9FD4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    jump_target = ctx.gpr[11];
    ctx.gpr[31] = (0x08AD9FF8u);
    ctx.gpr[10] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD9FF8u) goto L_08AD9FF8;
    return;
L_08AD9FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ADA010u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADA010u) goto L_08ADA010;
    return;
L_08ADA010:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08ADA020;
      }
      goto L_08ADA018;
    }
L_08ADA018:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADA020;
L_08ADA020:
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
L_08ADA044:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ADA060u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA060u) goto L_08ADA060;
    return;
L_08ADA060:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA198;
      }
      goto L_08ADA078;
    }
L_08ADA078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    goto L_08ADA088;
L_08ADA088:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[10]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA184;
      }
      goto L_08ADA098;
    }
L_08ADA098:
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[9] << (ctx.gpr[11] & 31u));
    ctx.gpr[3] = (ctx.gpr[3] & ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADA0BC;
      }
      goto L_08ADA0B4;
    }
L_08ADA0B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08ADA0E8;
      }
      goto L_08ADA0BC;
    }
L_08ADA0BC:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (ctx.gpr[3] & ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA0D4;
      }
      goto L_08ADA0CC;
    }
L_08ADA0CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_08ADA0E8;
      }
      goto L_08ADA0D4;
    }
L_08ADA0D4:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (ctx.gpr[3] & ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA0E8;
      }
      goto L_08ADA0E4;
    }
L_08ADA0E4:
    ctx.gpr[2] = (ctx.gpr[9] | 0u);
    goto L_08ADA0E8;
L_08ADA0E8:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (ctx.gpr[10] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA184;
      }
      goto L_08ADA0F8;
    }
L_08ADA0F8:
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[10]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(16384)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA110:
    ctx.gpr[4] = (ctx.gpr[2] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[2] ^ 5u);
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADA19C;
      }
      goto L_08ADA128;
    }
L_08ADA128:
    ctx.gpr[4] = (ctx.gpr[2] ^ 7u);
    ctx.gpr[5] = (ctx.gpr[2] ^ 5u);
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADA19C;
      }
      goto L_08ADA140;
    }
L_08ADA140:
    ctx.gpr[2] = (ctx.gpr[2] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADA19C;
      }
      goto L_08ADA14C;
    }
L_08ADA14C:
    ctx.gpr[2] = (ctx.gpr[2] ^ 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADA19C;
      }
      goto L_08ADA158;
    }
L_08ADA158:
    ctx.gpr[2] = (ctx.gpr[2] ^ 5u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADA19C;
      }
      goto L_08ADA164;
    }
L_08ADA164:
    ctx.gpr[2] = (ctx.gpr[2] ^ 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADA19C;
      }
      goto L_08ADA170;
    }
L_08ADA170:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADA19C;
      }
      goto L_08ADA178;
    }
L_08ADA178:
    ctx.gpr[2] = (ctx.gpr[2] & 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADA19C;
      }
      goto L_08ADA184;
    }
L_08ADA184:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ADA088;
      }
      goto L_08ADA198;
    }
L_08ADA198:
    ctx.gpr[2] = (0u | 1u);
    goto L_08ADA19C;
L_08ADA19C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA1AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ADA1DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27440)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 388u, 0x088715BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADA1DCu) goto L_08ADA1DC;
    return;
L_08ADA1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27440)));
    ctx.gpr[5] = (ctx.gpr[2] << 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08ADA214u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADA214u) goto L_08ADA214;
    return;
L_08ADA214:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ADA220u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 330u, 0x0881E160u>(ctx, &aot_mem) && ctx.pc == 0x08ADA220u) goto L_08ADA220;
    return;
L_08ADA220:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (49024u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (ctx.gpr[2] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADA2B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ADA2F8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 438u, 0x0881E8FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADA2F8u) goto L_08ADA2F8;
    return;
L_08ADA2F8:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ADA308u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 545u, 0x0881F0FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADA308u) goto L_08ADA308;
    return;
L_08ADA308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] << 6u);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADA368;
      }
      goto L_08ADA338;
    }
L_08ADA338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA368;
      }
      goto L_08ADA350;
    }
L_08ADA350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA37C;
      }
      goto L_08ADA368;
    }
L_08ADA368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 255u);
      if (branch_taken) {
          goto L_08ADA398;
      }
      goto L_08ADA374;
    }
L_08ADA374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA458;
      }
      goto L_08ADA37C;
    }
L_08ADA37C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADA390u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 613u, 0x0881F6CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADA390u) goto L_08ADA390;
    return;
L_08ADA390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA598;
      }
      goto L_08ADA398;
    }
L_08ADA398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA3D0;
      }
      goto L_08ADA3B8;
    }
L_08ADA3B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08ADA3C8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 571u, 0x088E3E88u>(ctx, &aot_mem) && ctx.pc == 0x08ADA3C8u) goto L_08ADA3C8;
    return;
L_08ADA3C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA3E0;
      }
      goto L_08ADA3D0;
    }
L_08ADA3D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
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
    goto L_08ADA3E0;
L_08ADA3E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08ADA3FCu);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADA3FCu) goto L_08ADA3FC;
    return;
L_08ADA3FC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08ADA410u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 87u, 0x088205F8u>(ctx, &aot_mem) && ctx.pc == 0x08ADA410u) goto L_08ADA410;
    return;
L_08ADA410:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(43))))));
    ctx.gpr[4] = (ctx.gpr[4] & 240u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA450;
      }
      goto L_08ADA420;
    }
L_08ADA420:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(43))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-241));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] & 240u);
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADA450;
L_08ADA450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA480;
      }
      goto L_08ADA458;
    }
L_08ADA458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADA470;
      }
      goto L_08ADA468;
    }
L_08ADA468:
    ctx.gpr[31] = (0x08ADA470u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x08ADA470u) goto L_08ADA470;
    return;
L_08ADA470:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(43))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-241));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADA480;
L_08ADA480:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(42))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] & 992u);
    ctx.gpr[6] = (ctx.gpr[6] >> 5u);
    ctx.gpr[31] = (0x08ADA498u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 26u, 0x088201D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA498u) goto L_08ADA498;
    return;
L_08ADA498:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ADA4A8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08ADA5C4;
L_08ADA4A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(41)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08ADA540;
      }
      goto L_08ADA4B4;
    }
L_08ADA4B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(41)));
    ctx.gpr[5] = (17278u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADA540;
      }
      goto L_08ADA4DC;
    }
L_08ADA4DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08ADA540;
      }
      goto L_08ADA4E8;
    }
L_08ADA4E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08ADA50Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADA50Cu) goto L_08ADA50C;
    return;
L_08ADA50C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA51C;
      }
      goto L_08ADA514;
    }
L_08ADA514:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADA540;
      }
      goto L_08ADA51C;
    }
L_08ADA51C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(43))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-241));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ADA540u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08ADA5C4;
L_08ADA540:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA584;
      }
      goto L_08ADA548;
    }
L_08ADA548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08ADA56Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADA56Cu) goto L_08ADA56C;
    return;
L_08ADA56C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA57C;
      }
      goto L_08ADA574;
    }
L_08ADA574:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADA584;
      }
      goto L_08ADA57C;
    }
L_08ADA57C:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADA584;
L_08ADA584:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA598;
      }
      goto L_08ADA58C;
    }
L_08ADA58C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ADA598u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AD9F2C;
L_08ADA598:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_08ADA5C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-656));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(42)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[4] << 6u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[30] = (ctx.gpr[5] + ctx.gpr[30]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27440)));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ADA644u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 418u, 0x088717A4u>(ctx, &aot_mem) && ctx.pc == 0x08ADA644u) goto L_08ADA644;
    return;
L_08ADA644:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08ADA6B0;
      }
      goto L_08ADA658;
    }
L_08ADA658:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(43))))));
    ctx.gpr[4] = (ctx.gpr[4] & 240u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA680;
      }
      goto L_08ADA668;
    }
L_08ADA668:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(43))))));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    if (ctx.gpr[7] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
        goto L_08ADA688;
    }
    goto L_08ADA678;
L_08ADA678:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA6B0;
      }
      goto L_08ADA680;
    }
L_08ADA680:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADADA4;
      }
      goto L_08ADA688;
    }
L_08ADA688:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08ADA6A8u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADA6A8u) goto L_08ADA6A8;
    return;
L_08ADA6A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA704;
      }
      goto L_08ADA6B0;
    }
L_08ADA6B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ADA6C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 545u, 0x0881F0FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADA6C0u) goto L_08ADA6C0;
    return;
L_08ADA6C0:
    ctx.gpr[4] = (17278u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08ADA6E8u);
    ctx.gpr[16] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 344u, 0x0881E21Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADA6E8u) goto L_08ADA6E8;
    return;
L_08ADA6E8:
    ctx.gpr[23] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(592), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08ADA70C;
      }
      goto L_08ADA6FC;
    }
L_08ADA6FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAAD0;
      }
      goto L_08ADA704;
    }
L_08ADA704:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADADA4;
      }
      goto L_08ADA70C;
    }
L_08ADA70C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08ADA718u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA718u) goto L_08ADA718;
    return;
L_08ADA718:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
      if (branch_taken) {
          goto L_08ADA77C;
      }
      goto L_08ADA724;
    }
L_08ADA724:
    ctx.gpr[6] = (ctx.gpr[23] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ADA738u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_08ADA044;
L_08ADA738:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA7A8;
      }
      goto L_08ADA744;
    }
L_08ADA744:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[9] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(5));
    ctx.gpr[6] = (ctx.gpr[23] & 255u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(6));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ADA774u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_08AD9D44;
L_08ADA774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ADA7A8;
      }
      goto L_08ADA77C;
    }
L_08ADA77C:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 254u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[22] = (0u | 1u);
    goto L_08ADA7A8;
L_08ADA7A8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08ADAABC;
      }
      goto L_08ADA7B0;
    }
L_08ADA7B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA7D4;
      }
      goto L_08ADA7D0;
    }
L_08ADA7D0:
    ctx.gpr[22] = (0u | 0u);
    goto L_08ADA7D4;
L_08ADA7D4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08ADA810;
      }
      goto L_08ADA7DC;
    }
L_08ADA7DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08ADA804u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADA804u) goto L_08ADA804;
    return;
L_08ADA804:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA810;
      }
      goto L_08ADA80C;
    }
L_08ADA80C:
    ctx.gpr[22] = (0u | 0u);
    goto L_08ADA810;
L_08ADA810:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA8F8;
      }
      goto L_08ADA818;
    }
L_08ADA818:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA8F8;
      }
      goto L_08ADA82C;
    }
L_08ADA82C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    ctx.gpr[31] = (0x08ADA848u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA848u) goto L_08ADA848;
    return;
L_08ADA848:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ADA8E4;
      }
      goto L_08ADA85C;
    }
L_08ADA85C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA8D4;
      }
      goto L_08ADA870;
    }
L_08ADA870:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ADA8B8;
      }
      goto L_08ADA894;
    }
L_08ADA894:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ADA8C0;
      }
      goto L_08ADA8B8;
    }
L_08ADA8B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA8D4;
      }
      goto L_08ADA8C0;
    }
L_08ADA8C0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(13)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA870;
      }
      goto L_08ADA8D4;
    }
L_08ADA8D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADA8E4;
      }
      goto L_08ADA8E0;
    }
L_08ADA8E0:
    ctx.gpr[22] = (0u | 0u);
    goto L_08ADA8E4;
L_08ADA8E4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA82C;
      }
      goto L_08ADA8F8;
    }
L_08ADA8F8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAABC;
      }
      goto L_08ADA900;
    }
L_08ADA900:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.gpr[31] = (0x08ADA90Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 426u, 0x08871880u>(ctx, &aot_mem) && ctx.pc == 0x08ADA90Cu) goto L_08ADA90C;
    return;
L_08ADA90C:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAAB0;
      }
      goto L_08ADA934;
    }
L_08ADA934:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
    goto L_08ADA938;
L_08ADA938:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ADA958u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AD9A6C;
L_08ADA958:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ADA97Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AD9A6C;
L_08ADA97C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ADAAA0;
      }
      goto L_08ADA988;
    }
L_08ADA988:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADA9DC;
      }
      goto L_08ADA9A4;
    }
L_08ADA9A4:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    ctx.gpr[31] = (0x08ADA9C0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA9C0u) goto L_08ADA9C0;
    return;
L_08ADA9C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADA9D4;
      }
      goto L_08ADA9CC;
    }
L_08ADA9CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADAA08;
      }
      goto L_08ADA9D4;
    }
L_08ADA9D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADAA08;
      }
      goto L_08ADA9DC;
    }
L_08ADA9DC:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    ctx.gpr[31] = (0x08ADA9F8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADA9F8u) goto L_08ADA9F8;
    return;
L_08ADA9F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADAA08;
      }
      goto L_08ADAA04;
    }
L_08ADAA04:
    ctx.gpr[16] = (0u | 1u);
    goto L_08ADAA08;
L_08ADAA08:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08ADAA54;
      }
      goto L_08ADAA10;
    }
L_08ADAA10:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAA54;
      }
      goto L_08ADAA50;
    }
L_08ADAA50:
    ctx.gpr[19] = (0u | 1u);
    goto L_08ADAA54;
L_08ADAA54:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08ADAA98;
      }
      goto L_08ADAA5C;
    }
L_08ADAA5C:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADAA98;
L_08ADAA98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAAB0;
      }
      goto L_08ADAAA0;
    }
L_08ADAAA0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08ADA938;
      }
      goto L_08ADAAB0;
    }
L_08ADAAB0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAABC;
      }
      goto L_08ADAAB8;
    }
L_08ADAAB8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08ADAABC;
L_08ADAABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADA70C;
      }
      goto L_08ADAAD0;
    }
L_08ADAAD0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAB20;
      }
      goto L_08ADAAD8;
    }
L_08ADAAD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(43))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(43))))));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 240u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAB34;
      }
      goto L_08ADAB18;
    }
L_08ADAB18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAC50;
      }
      goto L_08ADAB20;
    }
L_08ADAB20:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADADA4;
      }
      goto L_08ADAB34;
    }
L_08ADAB34:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08ADABA4;
      }
      goto L_08ADAB54;
    }
L_08ADAB54:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ADAB80;
      }
      goto L_08ADAB5C;
    }
L_08ADAB5C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAB80;
      }
      goto L_08ADAB64;
    }
L_08ADAB64:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADABE0;
      }
      goto L_08ADAB80;
    }
L_08ADAB80:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADABE0;
      }
      goto L_08ADABA4;
    }
L_08ADABA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADABE0;
L_08ADABE0:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    ctx.gpr[31] = (0x08ADABFCu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881E1C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADABFCu) goto L_08ADABFC;
    return;
L_08ADABFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08ADAC2C;
      }
      goto L_08ADAC0C;
    }
L_08ADAC0C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADAC2C;
L_08ADAC2C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08ADAB34;
      }
      goto L_08ADAC50;
    }
L_08ADAC50:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[12])) && ctx.fpr[20] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADAC6C;
      }
      goto L_08ADAC64;
    }
L_08ADAC64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADAD44;
      }
      goto L_08ADAC6C;
    }
L_08ADAC6C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADACD8;
      }
      goto L_08ADAC7C;
    }
L_08ADAC7C:
    ctx.gpr[5] = (17096u << 16u);
    goto L_08ADAC80;
L_08ADAC80:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ADACC8;
      }
      goto L_08ADACA8;
    }
L_08ADACA8:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-12)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADACC8;
L_08ADACC8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (17096u << 16u);
      if (branch_taken) {
          goto L_08ADAC80;
      }
      goto L_08ADACD8;
    }
L_08ADACD8:
    ctx.gpr[31] = (0x08ADACE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08ADACE0u) goto L_08ADACE0;
    return;
L_08ADACE0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (0u | 100u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.hi);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
        goto L_08ADAD48;
    }
    goto L_08ADAD00;
L_08ADAD00:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADAD34;
      }
      goto L_08ADAD2C;
    }
L_08ADAD2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ADAD48;
      }
      goto L_08ADAD34;
    }
L_08ADAD34:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADAD00;
      }
      goto L_08ADAD44;
    }
L_08ADAD44:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    goto L_08ADAD48;
L_08ADAD48:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ADAD74;
      }
      goto L_08ADAD68;
    }
L_08ADAD68:
    ctx.gpr[4] = (0u | 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ADADA0;
      }
      goto L_08ADAD74;
    }
L_08ADAD74:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADADA0;
L_08ADADA0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08ADADA4;
L_08ADADA4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADADD8:
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADADFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 200u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 246u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 275u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08ADAEACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08ADAEACu) goto L_08ADAEAC;
    return;
L_08ADAEAC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08ADAEC4;
      }
      goto L_08ADAEB8;
    }
L_08ADAEB8:
    ctx.gpr[31] = (0x08ADAEC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08ADAEC0u) goto L_08ADAEC0;
    return;
L_08ADAEC0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08ADAEC4;
L_08ADAEC4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08ADAF14u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08ADAF14u) goto L_08ADAF14;
    return;
L_08ADAF14:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08ADAF2C;
      }
      goto L_08ADAF20;
    }
L_08ADAF20:
    ctx.gpr[31] = (0x08ADAF28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08ADAF28u) goto L_08ADAF28;
    return;
L_08ADAF28:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08ADAF2C;
L_08ADAF2C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(124));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(142), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), 0u);
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[31] = (0x08ADAF94u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08ADAF94u) goto L_08ADAF94;
    return;
L_08ADAF94:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08ADAFAC;
      }
      goto L_08ADAFA0;
    }
L_08ADAFA0:
    ctx.gpr[31] = (0x08ADAFA8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08ADAFA8u) goto L_08ADAFA8;
    return;
L_08ADAFA8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08ADAFAC;
L_08ADAFAC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(172));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADAFF0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 465u, 0x08A7620Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADAFF0u) goto L_08ADAFF0;
    return;
L_08ADAFF0:
    ctx.gpr[31] = (0x08ADAFF8u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 169u, 0x089414B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADAFF8u) goto L_08ADAFF8;
    return;
L_08ADAFF8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(276), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(277), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(305), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08ADB020u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08ADB020u) goto L_08ADB020;
    return;
L_08ADB020:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[18] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(252), ctx.gpr[17]);
        goto L_08ADB04C;
    }
    goto L_08ADB02C;
L_08ADB02C:
    ctx.gpr[31] = (0x08ADB034u);
    ctx.gpr[4] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB034u) goto L_08ADB034;
    return;
L_08ADB034:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(252), ctx.gpr[17]);
    goto L_08ADB04C;
L_08ADB04C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08ADB068:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ADB324;
      }
      goto L_08ADB094;
    }
L_08ADB094:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(252)));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_08ADB0C4;
      }
      goto L_08ADB0A8;
    }
L_08ADB0A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB0BC;
      }
      goto L_08ADB0B4;
    }
L_08ADB0B4:
    ctx.gpr[31] = (0x08ADB0BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08ADB0BCu) goto L_08ADB0BC;
    return;
L_08ADB0BC:
    ctx.gpr[31] = (0x08ADB0C4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB0C4u) goto L_08ADB0C4;
    return;
L_08ADB0C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08ADB0D0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 585u, 0x08A87C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB0D0u) goto L_08ADB0D0;
    return;
L_08ADB0D0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(208));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_08ADB110;
      }
      goto L_08ADB0DC;
    }
L_08ADB0DC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(212));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ADB10C;
      }
      goto L_08ADB0E8;
    }
L_08ADB0E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADB10C;
      }
      goto L_08ADB0F4;
    }
L_08ADB0F4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
        goto L_08ADB110;
    }
    goto L_08ADB0FC;
L_08ADB0FC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
        goto L_08ADB110;
    }
    goto L_08ADB104;
L_08ADB104:
    ctx.gpr[31] = (0x08ADB10Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08ADB10Cu) goto L_08ADB10C;
    return;
L_08ADB10C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
    goto L_08ADB110;
L_08ADB110:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_08ADB1B8;
      }
      goto L_08ADB118;
    }
L_08ADB118:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_08ADB148;
      }
      goto L_08ADB120;
    }
L_08ADB120:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08ADB148;
      }
      goto L_08ADB130;
    }
L_08ADB130:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB148;
      }
      goto L_08ADB138;
    }
L_08ADB138:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB148;
      }
      goto L_08ADB140;
    }
L_08ADB140:
    ctx.gpr[31] = (0x08ADB148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08ADB148u) goto L_08ADB148;
    return;
L_08ADB148:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB1B8;
      }
      goto L_08ADB150;
    }
L_08ADB150:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB1B8;
      }
      goto L_08ADB158;
    }
L_08ADB158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB19C;
      }
      goto L_08ADB164;
    }
L_08ADB164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08ADB178u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 422u, 0x08B6DF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB178u) goto L_08ADB178;
    return;
L_08ADB178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    goto L_08ADB19C;
L_08ADB19C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB1B8;
      }
      goto L_08ADB1A4;
    }
L_08ADB1A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB1B8;
      }
      goto L_08ADB1B0;
    }
L_08ADB1B0:
    ctx.gpr[31] = (0x08ADB1B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08ADB1B8u) goto L_08ADB1B8;
    return;
L_08ADB1B8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB228;
      }
      goto L_08ADB1C0;
    }
L_08ADB1C0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB228;
      }
      goto L_08ADB1C8;
    }
L_08ADB1C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB20C;
      }
      goto L_08ADB1D4;
    }
L_08ADB1D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08ADB1E8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 250u, 0x08B714BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADB1E8u) goto L_08ADB1E8;
    return;
L_08ADB1E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), 0u);
    goto L_08ADB20C;
L_08ADB20C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB228;
      }
      goto L_08ADB214;
    }
L_08ADB214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB228;
      }
      goto L_08ADB220;
    }
L_08ADB220:
    ctx.gpr[31] = (0x08ADB228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08ADB228u) goto L_08ADB228;
    return;
L_08ADB228:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB2A0;
      }
      goto L_08ADB230;
    }
L_08ADB230:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB2A0;
      }
      goto L_08ADB238;
    }
L_08ADB238:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB2A0;
      }
      goto L_08ADB240;
    }
L_08ADB240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB284;
      }
      goto L_08ADB24C;
    }
L_08ADB24C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08ADB260u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 462u, 0x08B6AA64u>(ctx, &aot_mem) && ctx.pc == 0x08ADB260u) goto L_08ADB260;
    return;
L_08ADB260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), 0u);
    goto L_08ADB284;
L_08ADB284:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB2A0;
      }
      goto L_08ADB28C;
    }
L_08ADB28C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB2A0;
      }
      goto L_08ADB298;
    }
L_08ADB298:
    ctx.gpr[31] = (0x08ADB2A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08ADB2A0u) goto L_08ADB2A0;
    return;
L_08ADB2A0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08ADB314;
      }
      goto L_08ADB2A8;
    }
L_08ADB2A8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08ADB314;
      }
      goto L_08ADB2B0;
    }
L_08ADB2B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB2F4;
      }
      goto L_08ADB2BC;
    }
L_08ADB2BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08ADB2D0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 201u, 0x08B710D8u>(ctx, &aot_mem) && ctx.pc == 0x08ADB2D0u) goto L_08ADB2D0;
    return;
L_08ADB2D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    goto L_08ADB2F4;
L_08ADB2F4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08ADB314;
      }
      goto L_08ADB2FC;
    }
L_08ADB2FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
        goto L_08ADB314;
    }
    goto L_08ADB308;
L_08ADB308:
    ctx.gpr[31] = (0x08ADB310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08ADB310u) goto L_08ADB310;
    return;
L_08ADB310:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    goto L_08ADB314;
L_08ADB314:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB324;
      }
      goto L_08ADB31C;
    }
L_08ADB31C:
    ctx.gpr[31] = (0x08ADB324u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB324u) goto L_08ADB324;
    return;
L_08ADB324:
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
L_08ADB348:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB384;
      }
      goto L_08ADB364;
    }
L_08ADB364:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADB388;
      }
      goto L_08ADB380;
    }
L_08ADB380:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ADB384;
L_08ADB384:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADB388;
L_08ADB388:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB474;
      }
      goto L_08ADB390;
    }
L_08ADB390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08ADB3A8;
    }
    goto L_08ADB39C;
L_08ADB39C:
    ctx.gpr[31] = (0x08ADB3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB3A4u) goto L_08ADB3A4;
    return;
L_08ADB3A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08ADB3A8;
L_08ADB3A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB3C8;
      }
      goto L_08ADB3B8;
    }
L_08ADB3B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADB3D0;
      }
      goto L_08ADB3C8;
    }
L_08ADB3C8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADB3D0;
L_08ADB3D0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB474;
      }
      goto L_08ADB3D8;
    }
L_08ADB3D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB474;
      }
      goto L_08ADB3E4;
    }
L_08ADB3E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB474;
      }
      goto L_08ADB400;
    }
L_08ADB400:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(233)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB474;
      }
      goto L_08ADB40C;
    }
L_08ADB40C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB474;
      }
      goto L_08ADB424;
    }
L_08ADB424:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7684)));
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADB47C;
      }
      goto L_08ADB46C;
    }
L_08ADB46C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB480;
      }
      goto L_08ADB474;
    }
L_08ADB474:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB4B4;
      }
      goto L_08ADB47C;
    }
L_08ADB47C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ADB480;
L_08ADB480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08ADB4B4u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 59u, 0x08A884A0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB4B4u) goto L_08ADB4B4;
    return;
L_08ADB4B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADB4C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB508;
      }
      goto L_08ADB4E8;
    }
L_08ADB4E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADB50C;
      }
      goto L_08ADB504;
    }
L_08ADB504:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ADB508;
L_08ADB508:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADB50C;
L_08ADB50C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB60C;
      }
      goto L_08ADB514;
    }
L_08ADB514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08ADB52C;
    }
    goto L_08ADB520;
L_08ADB520:
    ctx.gpr[31] = (0x08ADB528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB528u) goto L_08ADB528;
    return;
L_08ADB528:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08ADB52C;
L_08ADB52C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB54C;
      }
      goto L_08ADB53C;
    }
L_08ADB53C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADB554;
      }
      goto L_08ADB54C;
    }
L_08ADB54C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADB554;
L_08ADB554:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB60C;
      }
      goto L_08ADB55C;
    }
L_08ADB55C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB60C;
      }
      goto L_08ADB568;
    }
L_08ADB568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB60C;
      }
      goto L_08ADB584;
    }
L_08ADB584:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(233)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB60C;
      }
      goto L_08ADB590;
    }
L_08ADB590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB604;
      }
      goto L_08ADB5C8;
    }
L_08ADB5C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB614;
      }
      goto L_08ADB5FC;
    }
L_08ADB5FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB61C;
      }
      goto L_08ADB604;
    }
L_08ADB604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB91C;
      }
      goto L_08ADB60C;
    }
L_08ADB60C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB91C;
      }
      goto L_08ADB614;
    }
L_08ADB614:
    ctx.gpr[31] = (0x08ADB61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADB61Cu) goto L_08ADB61C;
    return;
L_08ADB61C:
    ctx.gpr[31] = (0x08ADB624u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 559u, 0x08A5306Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB624u) goto L_08ADB624;
    return;
L_08ADB624:
    ctx.gpr[17] = (ctx.gpr[2] + static_cast<std::uint32_t>(108));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ADB6AC;
      }
      goto L_08ADB650;
    }
L_08ADB650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08ADB660u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADB660u) goto L_08ADB660;
    return;
L_08ADB660:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB68C;
      }
      goto L_08ADB66C;
    }
L_08ADB66C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08ADB68Cu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(96))))));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADB68Cu) goto L_08ADB68C;
    return;
L_08ADB68C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB650;
      }
      goto L_08ADB6AC;
    }
L_08ADB6AC:
    ctx.gpr[31] = (0x08ADB6B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 565u, 0x08ADE16Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB6B4u) goto L_08ADB6B4;
    return;
L_08ADB6B4:
    ctx.gpr[31] = (0x08ADB6BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 610u, 0x08ADE404u>(ctx, &aot_mem) && ctx.pc == 0x08ADB6BCu) goto L_08ADB6BC;
    return;
L_08ADB6BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB6E8;
      }
      goto L_08ADB6C8;
    }
L_08ADB6C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADB6EC;
      }
      goto L_08ADB6E4;
    }
L_08ADB6E4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ADB6E8;
L_08ADB6E8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADB6EC;
L_08ADB6EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB778;
      }
      goto L_08ADB6F4;
    }
L_08ADB6F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08ADB70C;
    }
    goto L_08ADB700;
L_08ADB700:
    ctx.gpr[31] = (0x08ADB708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB708u) goto L_08ADB708;
    return;
L_08ADB708:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08ADB70C;
L_08ADB70C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB72C;
      }
      goto L_08ADB71C;
    }
L_08ADB71C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADB734;
      }
      goto L_08ADB72C;
    }
L_08ADB72C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADB734;
L_08ADB734:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB778;
      }
      goto L_08ADB73C;
    }
L_08ADB73C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(233)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB778;
      }
      goto L_08ADB748;
    }
L_08ADB748:
    ctx.gpr[31] = (0x08ADB750u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 578u, 0x08A76CA8u>(ctx, &aot_mem) && ctx.pc == 0x08ADB750u) goto L_08ADB750;
    return;
L_08ADB750:
    ctx.gpr[31] = (0x08ADB758u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 212u, 0x089417B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB758u) goto L_08ADB758;
    return;
L_08ADB758:
    ctx.gpr[31] = (0x08ADB760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 308u, 0x089754A4u>(ctx, &aot_mem) && ctx.pc == 0x08ADB760u) goto L_08ADB760;
    return;
L_08ADB760:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08ADB780;
      }
      goto L_08ADB770;
    }
L_08ADB770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB788;
      }
      goto L_08ADB778;
    }
L_08ADB778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB91C;
      }
      goto L_08ADB780;
    }
L_08ADB780:
    ctx.gpr[31] = (0x08ADB788u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 126u, 0x08AE0790u>(ctx, &aot_mem) && ctx.pc == 0x08ADB788u) goto L_08ADB788;
    return;
L_08ADB788:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB7B4;
      }
      goto L_08ADB794;
    }
L_08ADB794:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADB7B8;
      }
      goto L_08ADB7B0;
    }
L_08ADB7B0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ADB7B4;
L_08ADB7B4:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADB7B8;
L_08ADB7B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB808;
      }
      goto L_08ADB7C0;
    }
L_08ADB7C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08ADB7D8;
    }
    goto L_08ADB7CC;
L_08ADB7CC:
    ctx.gpr[31] = (0x08ADB7D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB7D4u) goto L_08ADB7D4;
    return;
L_08ADB7D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08ADB7D8;
L_08ADB7D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB7F8;
      }
      goto L_08ADB7E8;
    }
L_08ADB7E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADB800;
      }
      goto L_08ADB7F8;
    }
L_08ADB7F8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADB800;
L_08ADB800:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB810;
      }
      goto L_08ADB808;
    }
L_08ADB808:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB91C;
      }
      goto L_08ADB810;
    }
L_08ADB810:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    goto L_08ADB818;
L_08ADB818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08ADB830;
    }
    goto L_08ADB824;
L_08ADB824:
    ctx.gpr[31] = (0x08ADB82Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADB82Cu) goto L_08ADB82C;
    return;
L_08ADB82C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADB830;
L_08ADB830:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB890;
      }
      goto L_08ADB85C;
    }
L_08ADB85C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08ADB874;
    }
    goto L_08ADB868;
L_08ADB868:
    ctx.gpr[31] = (0x08ADB870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADB870u) goto L_08ADB870;
    return;
L_08ADB870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADB874;
L_08ADB874:
    ctx.gpr[31] = (0x08ADB87Cu);
    ctx.gpr[5] = (ctx.gpr[17] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 561u, 0x08A53098u>(ctx, &aot_mem) && ctx.pc == 0x08ADB87Cu) goto L_08ADB87C;
    return;
L_08ADB87C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08ADB888u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 741u, 0x08933D7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB888u) goto L_08ADB888;
    return;
L_08ADB888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADB818;
      }
      goto L_08ADB890;
    }
L_08ADB890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08ADB8A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB8A0u) goto L_08ADB8A0;
    return;
L_08ADB8A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB8B0;
      }
      goto L_08ADB8A8;
    }
L_08ADB8A8:
    ctx.gpr[31] = (0x08ADB8B0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 751u, 0x08933E38u>(ctx, &aot_mem) && ctx.pc == 0x08ADB8B0u) goto L_08ADB8B0;
    return;
L_08ADB8B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB914;
      }
      goto L_08ADB8C0;
    }
L_08ADB8C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB914;
      }
      goto L_08ADB8D8;
    }
L_08ADB8D8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08ADB914;
      }
      goto L_08ADB8EC;
    }
L_08ADB8EC:
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10337)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADB914u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x08ADB914u) goto L_08ADB914;
    return;
L_08ADB914:
    ctx.gpr[31] = (0x08ADB91Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 583u, 0x08A8AFE0u>(ctx, &aot_mem) && ctx.pc == 0x08ADB91Cu) goto L_08ADB91C;
    return;
L_08ADB91C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADB934:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ADB968;
      }
      goto L_08ADB94C;
    }
L_08ADB94C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB970;
      }
      goto L_08ADB960;
    }
L_08ADB960:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
      if (branch_taken) {
          goto L_08ADB97C;
      }
      goto L_08ADB968;
    }
L_08ADB968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB9CC;
      }
      goto L_08ADB970;
    }
L_08ADB970:
    ctx.gpr[31] = (0x08ADB978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADB978u) goto L_08ADB978;
    return;
L_08ADB978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08ADB97C;
L_08ADB97C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADB9B8;
      }
      goto L_08ADB998;
    }
L_08ADB998:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADB9BC;
      }
      goto L_08ADB9B4;
    }
L_08ADB9B4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08ADB9B8;
L_08ADB9B8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADB9BC;
L_08ADB9BC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADB9CC;
      }
      goto L_08ADB9C4;
    }
L_08ADB9C4:
    ctx.gpr[31] = (0x08ADB9CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 126u, 0x08AE0790u>(ctx, &aot_mem) && ctx.pc == 0x08ADB9CCu) goto L_08ADB9CC;
    return;
L_08ADB9CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADB9DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08ADB9F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 984u, 0x08ADFDB4u>(ctx, &aot_mem) && ctx.pc == 0x08ADB9F8u) goto L_08ADB9F8;
    return;
L_08ADB9F8:
    ctx.gpr[31] = (0x08ADBA00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 600u, 0x08AD3634u>(ctx, &aot_mem) && ctx.pc == 0x08ADBA00u) goto L_08ADBA00;
    return;
L_08ADBA00:
    ctx.gpr[31] = (0x08ADBA08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 575u, 0x08AD34BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADBA08u) goto L_08ADBA08;
    return;
L_08ADBA08:
    ctx.gpr[31] = (0x08ADBA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 604u, 0x08AD3670u>(ctx, &aot_mem) && ctx.pc == 0x08ADBA10u) goto L_08ADBA10;
    return;
L_08ADBA10:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08ADBA20u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08ADBA20u) goto L_08ADBA20;
    return;
L_08ADBA20:
    ctx.gpr[31] = (0x08ADBA28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 898u, 0x08ADFA14u>(ctx, &aot_mem) && ctx.pc == 0x08ADBA28u) goto L_08ADBA28;
    return;
L_08ADBA28:
    ctx.gpr[31] = (0x08ADBA30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 517u, 0x08ADDF74u>(ctx, &aot_mem) && ctx.pc == 0x08ADBA30u) goto L_08ADBA30;
    return;
L_08ADBA30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADBA40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ADBA8C;
      }
      goto L_08ADBA78;
    }
L_08ADBA78:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08ADBA84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 126u, 0x08AE0790u>(ctx, &aot_mem) && ctx.pc == 0x08ADBA84u) goto L_08ADBA84;
    return;
L_08ADBA84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADBDCC;
      }
      goto L_08ADBA8C;
    }
L_08ADBA8C:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (0u | 216u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10085)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (18766u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17999));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-21032));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08ADBACCu);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBACCu) goto L_08ADBACC;
    return;
L_08ADBACC:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(214));
    ctx.gpr[22] = (0u | 3u);
    ctx.gpr[20] = (0u | 0u);
    goto L_08ADBAE0;
L_08ADBAE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(260));
      if (branch_taken) {
          goto L_08ADBAFC;
      }
      goto L_08ADBAEC;
    }
L_08ADBAEC:
    ctx.gpr[31] = (0x08ADBAF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 656u, 0x08B66B84u>(ctx, &aot_mem) && ctx.pc == 0x08ADBAF4u) goto L_08ADBAF4;
    return;
L_08ADBAF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(260));
    goto L_08ADBAFC;
L_08ADBAFC:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[20]);
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(210), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(211), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(212), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(213), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADBB54;
      }
      goto L_08ADBB30;
    }
L_08ADBB30:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
        goto L_08ADBB58;
    }
    goto L_08ADBB40;
L_08ADBB40:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08ADBB58;
      }
      goto L_08ADBB50;
    }
L_08ADBB50:
    ctx.gpr[6] = (0u | 1u);
    goto L_08ADBB54;
L_08ADBB54:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    goto L_08ADBB58;
L_08ADBB58:
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBC8C;
      }
      goto L_08ADBB68;
    }
L_08ADBB68:
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADBB88;
      }
      goto L_08ADBB74;
    }
L_08ADBB74:
    ctx.gpr[31] = (0x08ADBB7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 656u, 0x08B66B84u>(ctx, &aot_mem) && ctx.pc == 0x08ADBB7Cu) goto L_08ADBB7C;
    return;
L_08ADBB7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(260));
    ctx.gpr[5] = (0u | 0u);
    goto L_08ADBB88;
L_08ADBB88:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
      if (branch_taken) {
          goto L_08ADBBBC;
      }
      goto L_08ADBB98;
    }
L_08ADBB98:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_08ADBBC0;
    }
    goto L_08ADBBA8;
L_08ADBBA8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ADBBC0;
      }
      goto L_08ADBBB8;
    }
L_08ADBBB8:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ADBBBC;
L_08ADBBBC:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08ADBBC0;
L_08ADBBC0:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBBD8;
      }
      goto L_08ADBBD0;
    }
L_08ADBBD0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08ADBBD8;
L_08ADBBD8:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
        goto L_08ADBBF0;
    }
    goto L_08ADBBE0;
L_08ADBBE0:
    ctx.gpr[31] = (0x08ADBBE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBBE8u) goto L_08ADBBE8;
    return;
L_08ADBBE8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    goto L_08ADBBF0;
L_08ADBBF0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBC4C;
      }
      goto L_08ADBBF8;
    }
L_08ADBBF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(214), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(215), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(217), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(219), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(214), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(216), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(218), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(220), static_cast<std::uint16_t>(ctx.gpr[22]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08ADBC44u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 378u, 0x08A89B54u>(ctx, &aot_mem) && ctx.pc == 0x08ADBC44u) goto L_08ADBC44;
    return;
L_08ADBC44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBC8C;
      }
      goto L_08ADBC4C;
    }
L_08ADBC4C:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(18));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[1]));
    rt.memory().aot_store_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(27), 0u);
    goto L_08ADBC8C;
L_08ADBC8C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08ADBAE0;
      }
      goto L_08ADBC9C;
    }
L_08ADBC9C:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
        goto L_08ADBCC0;
    }
    goto L_08ADBCB0;
L_08ADBCB0:
    ctx.gpr[31] = (0x08ADBCB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBCB8u) goto L_08ADBCB8;
    return;
L_08ADBCB8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    goto L_08ADBCC0;
L_08ADBCC0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBD74;
      }
      goto L_08ADBCC8;
    }
L_08ADBCC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08ADBCD4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 17u, 0x08A88164u>(ctx, &aot_mem) && ctx.pc == 0x08ADBCD4u) goto L_08ADBCD4;
    return;
L_08ADBCD4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBCEC;
      }
      goto L_08ADBCE0;
    }
L_08ADBCE0:
    ctx.gpr[31] = (0x08ADBCE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADBCE8u) goto L_08ADBCE8;
    return;
L_08ADBCE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADBCEC;
L_08ADBCEC:
    ctx.gpr[31] = (0x08ADBCF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 559u, 0x08A5306Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBCF4u) goto L_08ADBCF4;
    return;
L_08ADBCF4:
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(108));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBD6C;
      }
      goto L_08ADBD24;
    }
L_08ADBD24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBD40;
      }
      goto L_08ADBD30;
    }
L_08ADBD30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    goto L_08ADBD40;
L_08ADBD40:
    ctx.gpr[31] = (0x08ADBD48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADBD48u) goto L_08ADBD48;
    return;
L_08ADBD48:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBD24;
      }
      goto L_08ADBD6C;
    }
L_08ADBD6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08ADBD98;
      }
      goto L_08ADBD74;
    }
L_08ADBD74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBD8C;
      }
      goto L_08ADBD80;
    }
L_08ADBD80:
    ctx.gpr[31] = (0x08ADBD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADBD88u) goto L_08ADBD88;
    return;
L_08ADBD88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADBD8C;
L_08ADBD8C:
    ctx.gpr[31] = (0x08ADBD94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 598u, 0x08A53344u>(ctx, &aot_mem) && ctx.pc == 0x08ADBD94u) goto L_08ADBD94;
    return;
L_08ADBD94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(100)));
    goto L_08ADBD98;
L_08ADBD98:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08ADBDA8u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(116));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 759u, 0x08933F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBDA8u) goto L_08ADBDA8;
    return;
L_08ADBDA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10337)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08ADBDC8u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 139u, 0x08A88BC8u>(ctx, &aot_mem) && ctx.pc == 0x08ADBDC8u) goto L_08ADBDC8;
    return;
L_08ADBDC8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08ADBDCC;
L_08ADBDCC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADBDFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(233), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ADBE30;
      }
      goto L_08ADBE28;
    }
L_08ADBE28:
    ctx.gpr[31] = (0x08ADBE30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADBE30u) goto L_08ADBE30;
    return;
L_08ADBE30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08ADBE9C;
      }
      goto L_08ADBE40;
    }
L_08ADBE40:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(26))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08ADBE98u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 417u, 0x08A89DCCu>(ctx, &aot_mem) && ctx.pc == 0x08ADBE98u) goto L_08ADBE98;
    return;
L_08ADBE98:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    goto L_08ADBE9C;
L_08ADBE9C:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[31] = (0x08ADBEACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 59u, 0x08A884A0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBEACu) goto L_08ADBEAC;
    return;
L_08ADBEAC:
    ctx.gpr[31] = (0x08ADBEB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 583u, 0x08A8AFE0u>(ctx, &aot_mem) && ctx.pc == 0x08ADBEB4u) goto L_08ADBEB4;
    return;
L_08ADBEB4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADBEBC;
L_08ADBEBC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
        goto L_08ADBED4;
    }
    goto L_08ADBEC4;
L_08ADBEC4:
    ctx.gpr[31] = (0x08ADBECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADBECCu) goto L_08ADBECC;
    return;
L_08ADBECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08ADBED4;
L_08ADBED4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBF74;
      }
      goto L_08ADBEFC;
    }
L_08ADBEFC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBF10;
      }
      goto L_08ADBF04;
    }
L_08ADBF04:
    ctx.gpr[31] = (0x08ADBF0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADBF0Cu) goto L_08ADBF0C;
    return;
L_08ADBF0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADBF10;
L_08ADBF10:
    ctx.gpr[31] = (0x08ADBF18u);
    ctx.gpr[5] = (ctx.gpr[18] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 561u, 0x08A53098u>(ctx, &aot_mem) && ctx.pc == 0x08ADBF18u) goto L_08ADBF18;
    return;
L_08ADBF18:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBF34;
      }
      goto L_08ADBF28;
    }
L_08ADBF28:
    ctx.gpr[31] = (0x08ADBF30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADBF30u) goto L_08ADBF30;
    return;
L_08ADBF30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADBF34;
L_08ADBF34:
    ctx.gpr[31] = (0x08ADBF3Cu);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 573u, 0x08A53124u>(ctx, &aot_mem) && ctx.pc == 0x08ADBF3Cu) goto L_08ADBF3C;
    return;
L_08ADBF3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBF68;
      }
      goto L_08ADBF44;
    }
L_08ADBF44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADBF5C;
      }
      goto L_08ADBF54;
    }
L_08ADBF54:
    ctx.gpr[4] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    goto L_08ADBF5C;
L_08ADBF5C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(233), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(233)));
      if (branch_taken) {
          goto L_08ADBF78;
      }
      goto L_08ADBF68;
    }
L_08ADBF68:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
      if (branch_taken) {
          goto L_08ADBEBC;
      }
      goto L_08ADBF74;
    }
L_08ADBF74:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(233)));
    goto L_08ADBF78;
L_08ADBF78:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADBFB0;
      }
      goto L_08ADBF80;
    }
L_08ADBF80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7684)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ADBFB0;
      }
      goto L_08ADBFA8;
    }
L_08ADBFA8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(233), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(233)));
    goto L_08ADBFB0;
L_08ADBFB0:
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
L_08ADBFCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[6] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
        (void)rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 2u, 0x08ADC00Cu>(ctx, &aot_mem); return;
    }
    goto L_08ADBFF8;
L_08ADBFF8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.pc = 0x08ADC000u; return;
}

void recomp_unit_0181(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0181_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_181(Runtime &runtime) {
    runtime.register_generated_unit(181u, 0x08AD8000u, 16384u, &recomp_unit_0181, &recomp_unit_0181_entry);
    runtime.register_function(0x08AD8000u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8008u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8010u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD801Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8024u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD802Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8034u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD803Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8044u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8058u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD806Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8080u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8088u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8094u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD80F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD810Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8114u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8120u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8128u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8130u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8138u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8140u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8148u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8154u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8160u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8174u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8180u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD818Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8194u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD81ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD81C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD81C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD81D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD81DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD81E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD81F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8200u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD820Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8214u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD821Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8230u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8238u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8248u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD826Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8278u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8288u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8290u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD829Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD82A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD82B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD82BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD82D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD82DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD82ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD82F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8308u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8318u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8330u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8344u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD834Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD835Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8364u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8384u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD83BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD83CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD83DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD83FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD840Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD841Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8434u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8454u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8478u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8490u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD84ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8500u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8510u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD851Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8524u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8534u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD853Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8544u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD854Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8564u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8570u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD857Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8584u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8588u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD85A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD85ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD85CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD85DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD85F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8600u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD860Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8610u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8628u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8644u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8658u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD865Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD867Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD86CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD86DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD86E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8728u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8730u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8738u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8740u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8748u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8774u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8784u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD87F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8810u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8818u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8830u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8840u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8844u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD884Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD885Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD887Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8890u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8898u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD88F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8900u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8908u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8914u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD891Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8924u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD892Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD893Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8944u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8950u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8958u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8960u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8970u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD898Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD899Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD89F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A2Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A44u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A4Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A6Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A84u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A94u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8A9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8AA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8AB4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8ABCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8AC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8AD0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8AD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8AECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B0Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B68u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B78u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B80u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B90u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8B98u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8BA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8BACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8BCCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8BDCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8BECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C1Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C44u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C80u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C90u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8C9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8CB0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8CB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8CD0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8CD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8CF0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8CF8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D44u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D4Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D5Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D78u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D80u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8D90u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8DACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8DBCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8DC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8DDCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8DF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8DFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E2Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E5Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E84u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8E9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8EA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8EB4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8EBCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8EC4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8ECCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8ED4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8EE0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8EECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8EF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F0Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F14u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F30u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F4Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F68u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F80u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8F88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FA0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FC0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FD0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FE4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD8FFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9008u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9010u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9018u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9024u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD902Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9038u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9040u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9050u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD905Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9064u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD906Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9078u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9080u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9088u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9098u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD90FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9100u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9108u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9110u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9118u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9120u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9130u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9140u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9150u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD915Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9164u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9174u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD917Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9188u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9190u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9198u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD91F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9200u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9208u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9218u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9220u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9230u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9238u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9240u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD925Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9268u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD927Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9284u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9294u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD929Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD92FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9310u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9318u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9320u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9328u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9334u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD933Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9344u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD934Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD935Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9368u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD937Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9380u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD938Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD93F0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9400u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9410u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9420u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9434u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9438u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9440u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9450u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9458u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD946Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9474u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9478u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9480u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD948Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9494u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD949Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD94F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD951Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9524u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9534u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD953Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9550u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9558u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD955Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9568u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9574u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD957Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9584u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9590u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9598u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD95F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9600u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9614u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD961Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9658u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9678u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9684u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD96FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9718u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9720u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9774u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9794u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD97FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9804u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9830u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD984Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9860u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD987Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9894u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD98ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9924u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9944u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9968u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD996Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9974u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD997Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD998Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9998u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD99A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD99A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD99B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD99B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD99C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD99C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD99CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD99E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9A6Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9ABCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9AD4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B2Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B60u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B68u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B80u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B90u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9B98u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BB0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BD4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BDCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9BF0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C0Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C78u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9C8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CB4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CC0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CDCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9CFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D38u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9D44u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9DECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E00u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E14u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E68u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E70u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9E98u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EC4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9ED0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9ED8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EE0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9EFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F2Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F80u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9F8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9FA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9FB4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9FD4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08AD9FF8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA010u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA018u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA020u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA044u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA060u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA078u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA088u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA098u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA0B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA0BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA0CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA0D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA0E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA0E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA0F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA110u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA128u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA140u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA14Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA158u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA164u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA170u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA178u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA184u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA198u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA19Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA1ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA1DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA214u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA220u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA2B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA2F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA308u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA338u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA350u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA368u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA374u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA37Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA390u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA398u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA3FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA410u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA420u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA450u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA458u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA468u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA470u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA480u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA498u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA4E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA50Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA514u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA51Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA540u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA548u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA56Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA574u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA57Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA584u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA58Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA598u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA5C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA644u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA658u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA668u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA678u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA680u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA688u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA6FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA704u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA70Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA718u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA724u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA738u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA744u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA774u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA77Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA7DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA804u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA80Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA810u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA818u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA82Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA848u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA85Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA870u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA894u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8E0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA8F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA900u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA90Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA934u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA938u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA958u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA97Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA988u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADA9F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA5Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAA98u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAAA0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAAB0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAAB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAABCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAAD0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAAD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB5Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAB80u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABE0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADABFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC0Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC2Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC64u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC6Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAC80u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADACA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADACC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADACD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADACE0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD00u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD2Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD44u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD68u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAD74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADADA0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADADA4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADADD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADADFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAEACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAEB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAEC0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAEC4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF14u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF2Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAF94u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAFA0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAFA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAFACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAFF0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADAFF8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB020u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB02Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB034u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB04Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB068u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB094u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB0A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB0B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB0BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB0C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB0D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB0DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB0E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB0F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB0FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB104u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB10Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB110u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB118u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB120u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB130u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB138u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB140u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB148u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB150u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB158u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB164u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB178u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB19Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB1A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB1B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB1B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB1C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB1C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB1D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB1E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB20Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB214u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB220u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB228u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB230u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB238u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB240u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB24Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB260u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB284u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB28Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB298u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB2A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB2A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB2B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB2BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB2D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB2F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB2FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB308u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB310u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB314u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB31Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB324u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB348u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB364u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB380u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB384u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB388u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB390u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB39Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3A4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3D0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB3E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB400u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB40Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB424u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB46Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB474u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB47Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB480u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB4E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB504u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB508u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB50Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB514u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB520u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB528u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB52Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB53Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB54Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB554u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB55Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB568u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB584u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB590u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB5C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB5FCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB604u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB60Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB614u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB61Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB624u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB650u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB660u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB66Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB68Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB6ACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB6B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB6BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB6C8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB6E4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB6E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB6ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB6F4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB700u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB708u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB70Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB71Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB72Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB734u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB73Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB748u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB750u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB758u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB760u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB770u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB778u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB780u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB788u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB794u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7D4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7E8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB7F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB800u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB808u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB810u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB818u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB824u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB82Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB830u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB85Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB868u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB870u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB874u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB87Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB888u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB890u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8A0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8A8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8B0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8C0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8D8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB8ECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB914u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB91Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB934u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB94Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB960u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB968u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB970u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB978u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB97Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB998u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9B4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9B8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9BCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9C4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9CCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9DCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADB9F8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA00u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA08u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA20u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA30u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA78u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA84u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBA8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBACCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBAE0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBAECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBAF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBAFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB30u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB50u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB58u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB68u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB7Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBB98u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBBCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBC0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBD0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBD8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBE0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBE8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBF0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBBF8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC44u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC4Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBC9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCB0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCB8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCC0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCD4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCE0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCE8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCECu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBCF4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD24u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD30u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD48u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD6Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD80u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD88u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD8Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD94u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBD98u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDC8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDCCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBDFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE30u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE40u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE98u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBE9Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEACu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEB4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEBCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEC4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBECCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBED4u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBEFCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF04u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF0Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF10u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF18u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF28u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF30u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF34u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF3Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF44u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF54u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF5Cu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF68u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF74u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF78u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBF80u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFA8u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFB0u, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFCCu, &recomp_unit_0181, "recomp_unit_0181");
    runtime.register_function(0x08ADBFF8u, &recomp_unit_0181, "recomp_unit_0181");
}
} // namespace psprecomp
