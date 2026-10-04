#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0148[4095] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 5, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 0, 0,
    0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0,
    23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0,
    0, 29, 0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0,
    37, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43,
    0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 50, 51, 0, 52, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61,
    0, 62, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0,
    68, 0, 69, 0, 70, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 81, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 85, 0, 86, 0, 0, 0, 0, 0,
    0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0,
    96, 0, 0, 0, 0, 97, 98, 0, 0, 99, 100, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0,
    105, 0, 0, 106, 0, 0, 107, 0, 108, 109, 110, 0, 0, 111, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 115, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 123, 0, 124, 0, 0, 125, 0, 126,
    0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 131, 132, 133, 0, 0, 134, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 138, 0, 0, 139,
    0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 144, 0, 145, 0, 146, 0, 0, 0, 147, 0, 0, 0, 148, 0, 149, 0,
    150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 163, 164, 0, 165, 0, 0, 0, 0, 166, 0,
    167, 0, 0, 168, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 173, 174, 0, 175, 0, 176, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184,
    0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 189, 190, 0, 191, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 194, 0, 195,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 200, 201, 0, 202,
    0, 0, 0, 203, 0, 204, 0, 0, 0, 205, 0, 206, 0, 0, 0, 207, 0, 208, 0, 0, 209, 0, 210, 0, 0, 0, 211, 0, 212, 0, 0, 0,
    213, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 220, 221, 222,
    0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0,
    0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 240,
    0, 241, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 251, 252, 0, 253, 0, 254, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 262, 263, 0,
    0, 0, 264, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 273, 274, 0, 0, 0, 275, 0, 0, 276, 0,
    0, 0, 0, 277, 278, 0, 0, 279, 0, 0, 0, 0, 280, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0,
    0, 0, 0, 0, 284, 0, 285, 286, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0,
    296, 0, 297, 0, 0, 298, 0, 0, 299, 0, 300, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0,
    317, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 322, 0, 323, 0, 324, 0, 0, 0, 0, 325, 0, 0,
    0, 326, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 334,
    0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 341,
    0, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 351,
    0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 358, 0, 0, 0, 359,
    0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0,
    0, 0, 366, 0, 367, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0,
    0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0,
    0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0,
    391, 0, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 395, 0, 396, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 400, 0,
    0, 401, 0, 0, 402, 0, 0, 0, 403, 0, 0, 404, 0, 0, 405, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0,
    410, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 416,
    0, 0, 417, 0, 0, 0, 418, 0, 0, 419, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0,
    0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 428, 0, 0, 429, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432,
    0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 436, 0, 0, 0, 437, 0, 0, 438, 0, 439, 0, 0, 0, 440, 0, 441, 0, 0, 0,
    442, 0, 443, 0, 444, 0, 0, 445, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 450, 0, 0, 0, 451,
    0, 0, 452, 0, 453, 0, 454, 0, 455, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 459, 0, 0, 0, 460, 0, 0, 461, 0, 462,
    0, 463, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 468, 0, 0, 469, 0, 470, 0, 0, 0, 0, 471, 0, 0,
    0, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 475, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0,
    480, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 485, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 491, 0, 492, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0,
    0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 497, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 500, 0, 0, 501, 0, 502, 503, 0, 0, 0, 0,
    0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 508, 0, 509, 0, 510, 0, 0, 0, 0, 511,
    0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 514, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0,
    518, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 521, 0, 0, 0, 522, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 0, 0, 525,
    0, 526, 0, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 530, 0, 0, 531, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 533,
    0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 538, 0, 0, 539, 0, 0,
    540, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 548, 0, 549, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0, 552, 0, 553, 0, 554, 0,
    555, 0, 0, 556, 0, 557, 0, 558, 0, 559, 0, 560, 0, 0, 0, 0, 561, 0, 0, 562, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 567, 568, 569, 0,
    0, 0, 570, 0, 571, 0, 572, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0,
    0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 580, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0,
    0, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0, 0, 0, 589, 0, 0, 590, 0, 0, 0, 0,
    0, 591, 0, 0, 592, 0, 0, 0, 0, 593, 0, 594, 0, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 598, 0, 599, 0, 0, 600,
    0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 602, 0, 603, 0, 0, 0, 0, 604, 0, 605, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0,
    608, 0, 0, 0, 609, 610, 611, 0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 615, 0, 0, 0, 616, 0, 0, 0, 617, 0,
    0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0,
    621, 0, 0, 0, 622, 0, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 0, 626, 0, 0, 627, 0, 628, 0, 0, 0, 629, 0, 0,
    0, 630, 0, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    634, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 636, 637, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 0, 0, 0, 640,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 642, 0, 0, 0, 0, 643, 644, 0, 645, 0, 0, 646, 0, 0, 0, 0,
    647, 648, 0, 649, 0, 0, 650, 0, 0, 0, 0, 651, 652, 0, 653, 0, 0, 654, 0, 0, 0, 0, 655, 0, 0, 656, 0, 0, 657, 0, 0, 0,
    0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 659, 0, 660, 0, 661, 0, 0, 0, 662, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 670, 0, 0, 671, 672, 0, 673, 0, 674, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 676, 0, 677, 0, 0, 0, 678,
    0, 679, 0, 0, 0, 680, 0, 681, 0, 682, 0, 683, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0,
    0, 686, 0, 0, 0, 0, 687, 688, 0, 689, 0, 0, 690, 0, 0, 0, 0, 691, 692, 0, 693, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 696,
    0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 699, 0, 700, 0, 701, 0, 0, 702, 0, 0, 703, 0, 0, 0,
    0, 704, 0, 705, 0, 0, 706, 0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 710, 0,
    711, 0, 712, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 715, 0, 716, 0, 0, 0, 717, 0, 718, 0, 0, 0, 719, 0, 720,
    0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 723, 0, 724, 0, 0,
    0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 728, 0, 0, 0, 0, 729, 0, 0, 0, 730, 0, 0, 731,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 734, 0, 0, 0,
    0, 0, 0, 0, 735, 0, 0, 736, 0, 0, 0, 0, 737, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 740, 0, 0, 741,
    0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 744, 0, 0, 745, 0, 0, 0, 0, 0, 746, 0, 747, 0, 0, 748,
    0, 0, 749, 750, 0, 0, 751, 0, 0, 752, 0, 0, 753, 754, 0, 0, 0, 755, 0, 0, 756, 0, 0, 757, 758, 0, 759, 0, 0, 760, 0, 0,
    761, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 764, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 766, 0, 0, 767, 0, 0, 0, 768, 0, 0, 0, 0, 769, 0, 770, 0, 0,
    0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 773, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 775, 0, 776, 0, 0, 0, 777,
    0, 0, 0, 778, 779, 0, 780, 0, 781, 0, 0, 0, 0, 0, 782, 783, 784, 0, 0, 0, 0, 0, 785, 0, 786, 787, 0, 0, 0, 0, 788, 0,
    0, 0, 789, 0, 0, 0, 0, 790, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 793, 0, 0, 0, 794, 0, 0, 0, 795,
    0, 0, 0, 796, 0, 0, 0, 0, 797, 0, 798, 0, 799, 0, 0, 800, 0, 0, 801, 0, 802, 0, 803, 0, 0, 804, 0, 0, 805, 0, 0, 0,
    0, 0, 0, 0, 806, 0, 0, 0, 807, 0, 0, 808, 0, 0, 0, 0, 809, 0, 0, 0, 810, 0, 0, 811, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 814, 0, 0, 0, 0, 815, 0, 816, 0, 0, 0, 0, 0, 0,
    817, 0, 0, 818, 0, 0, 819, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0, 821, 0, 822, 0, 0, 823, 0, 0, 824, 825, 0, 0, 0, 0,
    0, 826, 0, 0, 827, 0, 0, 0, 0, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 829, 0, 0, 830, 0, 0, 0, 831, 0, 0, 0, 0, 832,
    0, 833, 0, 0, 0, 0, 834, 0, 0, 0, 0, 835, 0, 836, 0, 837, 0, 838, 0, 0, 839, 0, 840, 0, 841, 0, 0, 842, 0, 0, 843, 0,
    0, 0, 0, 0, 0, 844, 0, 0, 0, 845, 0, 0, 0, 0, 0, 0, 846, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 848, 0, 0, 0, 849,
    0, 850, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 0, 0, 852, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 853, 0, 0, 0, 854, 0, 855, 0, 856, 0, 857, 0, 858, 0, 859, 0, 860, 0, 0, 0,
    0, 0, 0, 861, 0, 0, 0, 862, 0, 0, 0, 0, 863, 0, 864, 0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 866, 0, 0, 0, 0, 0, 867,
    868, 0, 869, 0, 0, 0, 0, 870, 871, 0, 0, 0, 0, 0, 0, 0, 0, 872, 0, 873, 0, 0, 0, 0, 0, 0, 0, 874, 0, 0, 875, 0,
    0, 0, 0, 0, 876, 877, 0, 878, 0, 0, 0, 0, 0, 0, 0, 879, 0, 0, 0, 0, 0, 0, 0, 880, 0, 881, 0, 0, 0, 0, 0, 0,
    882, 0, 0, 0, 883, 0, 0, 0, 0, 0, 0, 884, 0, 0, 0, 885, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 887, 0, 0, 0, 0, 0,
    0, 888, 0, 0, 0, 889, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 891, 0, 0, 0, 892, 0, 893, 0, 0, 0, 0, 0, 894, 0, 895, 0,
    896, 0, 0, 0, 0, 0, 897, 0, 0, 0, 0, 0, 0, 0, 898, 0, 0, 0, 0, 0, 0, 0, 899, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    900, 0, 0, 0, 0, 0, 0, 901, 0, 0, 0, 0, 902, 0, 0, 0, 0, 0, 903, 0, 0, 0, 0, 0, 904, 0, 0, 0, 0, 0, 0, 905,
    0, 0, 0, 0, 0, 0, 906, 0, 0, 0, 0, 0, 0, 0, 907, 0, 0, 0, 0, 0, 908, 0, 909, 0, 910, 0, 0, 0, 0, 0, 911,
};
void recomp_unit_0148_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A54004u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0148[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A54004;
    case 2u: goto L_08A5400C;
    case 3u: goto L_08A54024;
    case 4u: goto L_08A54034;
    case 5u: goto L_08A54090;
    case 6u: goto L_08A54094;
    case 7u: goto L_08A540EC;
    case 8u: goto L_08A540F8;
    case 9u: goto L_08A54134;
    case 10u: goto L_08A5415C;
    case 11u: goto L_08A54168;
    case 12u: goto L_08A54174;
    case 13u: goto L_08A54188;
    case 14u: goto L_08A54190;
    case 15u: goto L_08A54198;
    case 16u: goto L_08A541A0;
    case 17u: goto L_08A541A8;
    case 18u: goto L_08A541B8;
    case 19u: goto L_08A541CC;
    case 20u: goto L_08A541DC;
    case 21u: goto L_08A541E8;
    case 22u: goto L_08A541F8;
    case 23u: goto L_08A54204;
    case 24u: goto L_08A5420C;
    case 25u: goto L_08A54248;
    case 26u: goto L_08A54250;
    case 27u: goto L_08A5426C;
    case 28u: goto L_08A5427C;
    case 29u: goto L_08A54288;
    case 30u: goto L_08A54298;
    case 31u: goto L_08A542A4;
    case 32u: goto L_08A542AC;
    case 33u: goto L_08A542CC;
    case 34u: goto L_08A542D4;
    case 35u: goto L_08A542E8;
    case 36u: goto L_08A542F8;
    case 37u: goto L_08A54304;
    case 38u: goto L_08A54314;
    case 39u: goto L_08A54320;
    case 40u: goto L_08A54328;
    case 41u: goto L_08A54340;
    case 42u: goto L_08A54358;
    case 43u: goto L_08A54380;
    case 44u: goto L_08A543A0;
    case 45u: goto L_08A543A8;
    case 46u: goto L_08A543B0;
    case 47u: goto L_08A543C4;
    case 48u: goto L_08A543D4;
    case 49u: goto L_08A543E4;
    case 50u: goto L_08A543E8;
    case 51u: goto L_08A543EC;
    case 52u: goto L_08A543F4;
    case 53u: goto L_08A54414;
    case 54u: goto L_08A54424;
    case 55u: goto L_08A54430;
    case 56u: goto L_08A54438;
    case 57u: goto L_08A54448;
    case 58u: goto L_08A54458;
    case 59u: goto L_08A54464;
    case 60u: goto L_08A54474;
    case 61u: goto L_08A54480;
    case 62u: goto L_08A54488;
    case 63u: goto L_08A5449C;
    case 64u: goto L_08A544B4;
    case 65u: goto L_08A544D8;
    case 66u: goto L_08A544E8;
    case 67u: goto L_08A544F8;
    case 68u: goto L_08A54504;
    case 69u: goto L_08A5450C;
    case 70u: goto L_08A54514;
    case 71u: goto L_08A5451C;
    case 72u: goto L_08A5452C;
    case 73u: goto L_08A5453C;
    case 74u: goto L_08A54548;
    case 75u: goto L_08A54558;
    case 76u: goto L_08A54564;
    case 77u: goto L_08A5456C;
    case 78u: goto L_08A54584;
    case 79u: goto L_08A54598;
    case 80u: goto L_08A545AC;
    case 81u: goto L_08A545B4;
    case 82u: goto L_08A545B8;
    case 83u: goto L_08A545D8;
    case 84u: goto L_08A545E0;
    case 85u: goto L_08A545E4;
    case 86u: goto L_08A545EC;
    case 87u: goto L_08A54610;
    case 88u: goto L_08A54634;
    case 89u: goto L_08A5464C;
    case 90u: goto L_08A54654;
    case 91u: goto L_08A546AC;
    case 92u: goto L_08A546B4;
    case 93u: goto L_08A546D0;
    case 94u: goto L_08A546E8;
    case 95u: goto L_08A546F4;
    case 96u: goto L_08A54704;
    case 97u: goto L_08A54718;
    case 98u: goto L_08A5471C;
    case 99u: goto L_08A54728;
    case 100u: goto L_08A5472C;
    case 101u: goto L_08A54734;
    case 102u: goto L_08A54740;
    case 103u: goto L_08A5476C;
    case 104u: goto L_08A54778;
    case 105u: goto L_08A54784;
    case 106u: goto L_08A54790;
    case 107u: goto L_08A5479C;
    case 108u: goto L_08A547A4;
    case 109u: goto L_08A547A8;
    case 110u: goto L_08A547AC;
    case 111u: goto L_08A547B8;
    case 112u: goto L_08A547C0;
    case 113u: goto L_08A547CC;
    case 114u: goto L_08A547DC;
    case 115u: goto L_08A547E4;
    case 116u: goto L_08A547F4;
    case 117u: goto L_08A5480C;
    case 118u: goto L_08A54820;
    case 119u: goto L_08A54834;
    case 120u: goto L_08A54844;
    case 121u: goto L_08A54850;
    case 122u: goto L_08A5485C;
    case 123u: goto L_08A54864;
    case 124u: goto L_08A5486C;
    case 125u: goto L_08A54878;
    case 126u: goto L_08A54880;
    case 127u: goto L_08A54888;
    case 128u: goto L_08A54894;
    case 129u: goto L_08A548A0;
    case 130u: goto L_08A548AC;
    case 131u: goto L_08A548B4;
    case 132u: goto L_08A548B8;
    case 133u: goto L_08A548BC;
    case 134u: goto L_08A548C8;
    case 135u: goto L_08A548D0;
    case 136u: goto L_08A548DC;
    case 137u: goto L_08A548EC;
    case 138u: goto L_08A548F4;
    case 139u: goto L_08A54900;
    case 140u: goto L_08A54918;
    case 141u: goto L_08A54928;
    case 142u: goto L_08A54930;
    case 143u: goto L_08A54938;
    case 144u: goto L_08A54944;
    case 145u: goto L_08A5494C;
    case 146u: goto L_08A54954;
    case 147u: goto L_08A54964;
    case 148u: goto L_08A54974;
    case 149u: goto L_08A5497C;
    case 150u: goto L_08A54984;
    case 151u: goto L_08A54994;
    case 152u: goto L_08A549A4;
    case 153u: goto L_08A549B0;
    case 154u: goto L_08A549B4;
    case 155u: goto L_08A549C4;
    case 156u: goto L_08A549D4;
    case 157u: goto L_08A549E0;
    case 158u: goto L_08A54A00;
    case 159u: goto L_08A54A28;
    case 160u: goto L_08A54A38;
    case 161u: goto L_08A54A48;
    case 162u: goto L_08A54A58;
    case 163u: goto L_08A54A5C;
    case 164u: goto L_08A54A60;
    case 165u: goto L_08A54A68;
    case 166u: goto L_08A54A7C;
    case 167u: goto L_08A54A84;
    case 168u: goto L_08A54A90;
    case 169u: goto L_08A54A98;
    case 170u: goto L_08A54AA4;
    case 171u: goto L_08A54AB0;
    case 172u: goto L_08A54ABC;
    case 173u: goto L_08A54AC4;
    case 174u: goto L_08A54AC8;
    case 175u: goto L_08A54AD0;
    case 176u: goto L_08A54AD8;
    case 177u: goto L_08A54AE0;
    case 178u: goto L_08A54AEC;
    case 179u: goto L_08A54AFC;
    case 180u: goto L_08A54B14;
    case 181u: goto L_08A54B40;
    case 182u: goto L_08A54B54;
    case 183u: goto L_08A54B74;
    case 184u: goto L_08A54B80;
    case 185u: goto L_08A54B88;
    case 186u: goto L_08A54B9C;
    case 187u: goto L_08A54BAC;
    case 188u: goto L_08A54BBC;
    case 189u: goto L_08A54BC0;
    case 190u: goto L_08A54BC4;
    case 191u: goto L_08A54BCC;
    case 192u: goto L_08A54BE0;
    case 193u: goto L_08A54BE8;
    case 194u: goto L_08A54BF8;
    case 195u: goto L_08A54C00;
    case 196u: goto L_08A54C3C;
    case 197u: goto L_08A54C50;
    case 198u: goto L_08A54C60;
    case 199u: goto L_08A54C70;
    case 200u: goto L_08A54C74;
    case 201u: goto L_08A54C78;
    case 202u: goto L_08A54C80;
    case 203u: goto L_08A54C90;
    case 204u: goto L_08A54C98;
    case 205u: goto L_08A54CA8;
    case 206u: goto L_08A54CB0;
    case 207u: goto L_08A54CC0;
    case 208u: goto L_08A54CC8;
    case 209u: goto L_08A54CD4;
    case 210u: goto L_08A54CDC;
    case 211u: goto L_08A54CEC;
    case 212u: goto L_08A54CF4;
    case 213u: goto L_08A54D04;
    case 214u: goto L_08A54D0C;
    case 215u: goto L_08A54D1C;
    case 216u: goto L_08A54D38;
    case 217u: goto L_08A54D44;
    case 218u: goto L_08A54D58;
    case 219u: goto L_08A54D68;
    case 220u: goto L_08A54D78;
    case 221u: goto L_08A54D7C;
    case 222u: goto L_08A54D80;
    case 223u: goto L_08A54D88;
    case 224u: goto L_08A54DB8;
    case 225u: goto L_08A54DC8;
    case 226u: goto L_08A54DD0;
    case 227u: goto L_08A54DF0;
    case 228u: goto L_08A54DF8;
    case 229u: goto L_08A54E0C;
    case 230u: goto L_08A54E14;
    case 231u: goto L_08A54E38;
    case 232u: goto L_08A54E40;
    case 233u: goto L_08A54E48;
    case 234u: goto L_08A54E5C;
    case 235u: goto L_08A54E80;
    case 236u: goto L_08A54EBC;
    case 237u: goto L_08A54ED4;
    case 238u: goto L_08A54EF0;
    case 239u: goto L_08A54EF8;
    case 240u: goto L_08A54F00;
    case 241u: goto L_08A54F08;
    case 242u: goto L_08A54F14;
    case 243u: goto L_08A54F1C;
    case 244u: goto L_08A54F34;
    case 245u: goto L_08A54F48;
    case 246u: goto L_08A54F50;
    case 247u: goto L_08A54F5C;
    case 248u: goto L_08A54F98;
    case 249u: goto L_08A54FA8;
    case 250u: goto L_08A54FB8;
    case 251u: goto L_08A54FBC;
    case 252u: goto L_08A54FC0;
    case 253u: goto L_08A54FC8;
    case 254u: goto L_08A54FD0;
    case 255u: goto L_08A54FE4;
    case 256u: goto L_08A54FEC;
    case 257u: goto L_08A55014;
    case 258u: goto L_08A55020;
    case 259u: goto L_08A55054;
    case 260u: goto L_08A55064;
    case 261u: goto L_08A55074;
    case 262u: goto L_08A55078;
    case 263u: goto L_08A5507C;
    case 264u: goto L_08A5508C;
    case 265u: goto L_08A55090;
    case 266u: goto L_08A550A0;
    case 267u: goto L_08A550C0;
    case 268u: goto L_08A550F8;
    case 269u: goto L_08A55104;
    case 270u: goto L_08A55138;
    case 271u: goto L_08A55148;
    case 272u: goto L_08A55158;
    case 273u: goto L_08A5515C;
    case 274u: goto L_08A55160;
    case 275u: goto L_08A55170;
    case 276u: goto L_08A5517C;
    case 277u: goto L_08A55190;
    case 278u: goto L_08A55194;
    case 279u: goto L_08A551A0;
    case 280u: goto L_08A551B4;
    case 281u: goto L_08A551B8;
    case 282u: goto L_08A551C8;
    case 283u: goto L_08A551F0;
    case 284u: goto L_08A55214;
    case 285u: goto L_08A5521C;
    case 286u: goto L_08A55220;
    case 287u: goto L_08A55240;
    case 288u: goto L_08A55248;
    case 289u: goto L_08A55258;
    case 290u: goto L_08A5528C;
    case 291u: goto L_08A55298;
    case 292u: goto L_08A552BC;
    case 293u: goto L_08A552D8;
    case 294u: goto L_08A552EC;
    case 295u: goto L_08A552F8;
    case 296u: goto L_08A55304;
    case 297u: goto L_08A5530C;
    case 298u: goto L_08A55318;
    case 299u: goto L_08A55324;
    case 300u: goto L_08A5532C;
    case 301u: goto L_08A55334;
    case 302u: goto L_08A55344;
    case 303u: goto L_08A55354;
    case 304u: goto L_08A55398;
    case 305u: goto L_08A553AC;
    case 306u: goto L_08A55414;
    case 307u: goto L_08A55420;
    case 308u: goto L_08A55444;
    case 309u: goto L_08A55458;
    case 310u: goto L_08A55504;
    case 311u: goto L_08A5551C;
    case 312u: goto L_08A55534;
    case 313u: goto L_08A555C4;
    case 314u: goto L_08A555CC;
    case 315u: goto L_08A555F4;
    case 316u: goto L_08A555FC;
    case 317u: goto L_08A55604;
    case 318u: goto L_08A5561C;
    case 319u: goto L_08A55624;
    case 320u: goto L_08A55638;
    case 321u: goto L_08A55648;
    case 322u: goto L_08A55654;
    case 323u: goto L_08A5565C;
    case 324u: goto L_08A55664;
    case 325u: goto L_08A55678;
    case 326u: goto L_08A55688;
    case 327u: goto L_08A55694;
    case 328u: goto L_08A556A8;
    case 329u: goto L_08A556B8;
    case 330u: goto L_08A556C0;
    case 331u: goto L_08A556D4;
    case 332u: goto L_08A556E4;
    case 333u: goto L_08A556F0;
    case 334u: goto L_08A55700;
    case 335u: goto L_08A55708;
    case 336u: goto L_08A55724;
    case 337u: goto L_08A55734;
    case 338u: goto L_08A55740;
    case 339u: goto L_08A5575C;
    case 340u: goto L_08A55764;
    case 341u: goto L_08A55780;
    case 342u: goto L_08A55790;
    case 343u: goto L_08A5579C;
    case 344u: goto L_08A557A8;
    case 345u: goto L_08A557B0;
    case 346u: goto L_08A557B8;
    case 347u: goto L_08A557C0;
    case 348u: goto L_08A557C8;
    case 349u: goto L_08A557D0;
    case 350u: goto L_08A557E8;
    case 351u: goto L_08A55800;
    case 352u: goto L_08A55820;
    case 353u: goto L_08A55830;
    case 354u: goto L_08A55840;
    case 355u: goto L_08A5584C;
    case 356u: goto L_08A5585C;
    case 357u: goto L_08A55868;
    case 358u: goto L_08A55870;
    case 359u: goto L_08A55880;
    case 360u: goto L_08A5588C;
    case 361u: goto L_08A558C8;
    case 362u: goto L_08A5590C;
    case 363u: goto L_08A55920;
    case 364u: goto L_08A55960;
    case 365u: goto L_08A5596C;
    case 366u: goto L_08A5598C;
    case 367u: goto L_08A55994;
    case 368u: goto L_08A5599C;
    case 369u: goto L_08A559B0;
    case 370u: goto L_08A559C8;
    case 371u: goto L_08A559D4;
    case 372u: goto L_08A559E0;
    case 373u: goto L_08A559F4;
    case 374u: goto L_08A55A0C;
    case 375u: goto L_08A55A20;
    case 376u: goto L_08A55A30;
    case 377u: goto L_08A55A3C;
    case 378u: goto L_08A55A44;
    case 379u: goto L_08A55A6C;
    case 380u: goto L_08A55A88;
    case 381u: goto L_08A55A90;
    case 382u: goto L_08A55ABC;
    case 383u: goto L_08A55ACC;
    case 384u: goto L_08A55AD4;
    case 385u: goto L_08A55AE4;
    case 386u: goto L_08A55AF8;
    case 387u: goto L_08A55B50;
    case 388u: goto L_08A55B58;
    case 389u: goto L_08A55B60;
    case 390u: goto L_08A55B74;
    case 391u: goto L_08A55B84;
    case 392u: goto L_08A55B90;
    case 393u: goto L_08A55B9C;
    case 394u: goto L_08A55BA8;
    case 395u: goto L_08A55BBC;
    case 396u: goto L_08A55BC4;
    case 397u: goto L_08A55BCC;
    case 398u: goto L_08A55BE0;
    case 399u: goto L_08A55BF0;
    case 400u: goto L_08A55BFC;
    case 401u: goto L_08A55C08;
    case 402u: goto L_08A55C14;
    case 403u: goto L_08A55C24;
    case 404u: goto L_08A55C30;
    case 405u: goto L_08A55C3C;
    case 406u: goto L_08A55C44;
    case 407u: goto L_08A55C54;
    case 408u: goto L_08A55C68;
    case 409u: goto L_08A55C78;
    case 410u: goto L_08A55C84;
    case 411u: goto L_08A55C94;
    case 412u: goto L_08A55CA0;
    case 413u: goto L_08A55CC0;
    case 414u: goto L_08A55CDC;
    case 415u: goto L_08A55CF0;
    case 416u: goto L_08A55D00;
    case 417u: goto L_08A55D0C;
    case 418u: goto L_08A55D1C;
    case 419u: goto L_08A55D28;
    case 420u: goto L_08A55D30;
    case 421u: goto L_08A55D40;
    case 422u: goto L_08A55D54;
    case 423u: goto L_08A55D64;
    case 424u: goto L_08A55D88;
    case 425u: goto L_08A55D98;
    case 426u: goto L_08A55DA8;
    case 427u: goto L_08A55DB4;
    case 428u: goto L_08A55DC4;
    case 429u: goto L_08A55DD0;
    case 430u: goto L_08A55DD8;
    case 431u: goto L_08A55DE8;
    case 432u: goto L_08A55E00;
    case 433u: goto L_08A55E08;
    case 434u: goto L_08A55E1C;
    case 435u: goto L_08A55E2C;
    case 436u: goto L_08A55E38;
    case 437u: goto L_08A55E48;
    case 438u: goto L_08A55E54;
    case 439u: goto L_08A55E5C;
    case 440u: goto L_08A55E6C;
    case 441u: goto L_08A55E74;
    case 442u: goto L_08A55E84;
    case 443u: goto L_08A55E8C;
    case 444u: goto L_08A55E94;
    case 445u: goto L_08A55EA0;
    case 446u: goto L_08A55EA8;
    case 447u: goto L_08A55EC0;
    case 448u: goto L_08A55ED4;
    case 449u: goto L_08A55EE4;
    case 450u: goto L_08A55EF0;
    case 451u: goto L_08A55F00;
    case 452u: goto L_08A55F0C;
    case 453u: goto L_08A55F14;
    case 454u: goto L_08A55F1C;
    case 455u: goto L_08A55F24;
    case 456u: goto L_08A55F2C;
    case 457u: goto L_08A55F40;
    case 458u: goto L_08A55F50;
    case 459u: goto L_08A55F5C;
    case 460u: goto L_08A55F6C;
    case 461u: goto L_08A55F78;
    case 462u: goto L_08A55F80;
    case 463u: goto L_08A55F88;
    case 464u: goto L_08A55F90;
    case 465u: goto L_08A55FA4;
    case 466u: goto L_08A55FB4;
    case 467u: goto L_08A55FC0;
    case 468u: goto L_08A55FD0;
    case 469u: goto L_08A55FDC;
    case 470u: goto L_08A55FE4;
    case 471u: goto L_08A55FF8;
    case 472u: goto L_08A56010;
    case 473u: goto L_08A56018;
    case 474u: goto L_08A56034;
    case 475u: goto L_08A5603C;
    case 476u: goto L_08A56044;
    case 477u: goto L_08A56054;
    case 478u: goto L_08A56068;
    case 479u: goto L_08A56078;
    case 480u: goto L_08A56084;
    case 481u: goto L_08A56094;
    case 482u: goto L_08A560A0;
    case 483u: goto L_08A560B0;
    case 484u: goto L_08A560C8;
    case 485u: goto L_08A560D0;
    case 486u: goto L_08A560D8;
    case 487u: goto L_08A560EC;
    case 488u: goto L_08A560FC;
    case 489u: goto L_08A56130;
    case 490u: goto L_08A56140;
    case 491u: goto L_08A5614C;
    case 492u: goto L_08A56154;
    case 493u: goto L_08A56164;
    case 494u: goto L_08A56174;
    case 495u: goto L_08A56188;
    case 496u: goto L_08A561A0;
    case 497u: goto L_08A561AC;
    case 498u: goto L_08A561BC;
    case 499u: goto L_08A561C8;
    case 500u: goto L_08A561D8;
    case 501u: goto L_08A561E4;
    case 502u: goto L_08A561EC;
    case 503u: goto L_08A561F0;
    case 504u: goto L_08A56210;
    case 505u: goto L_08A5622C;
    case 506u: goto L_08A5623C;
    case 507u: goto L_08A5624C;
    case 508u: goto L_08A5625C;
    case 509u: goto L_08A56264;
    case 510u: goto L_08A5626C;
    case 511u: goto L_08A56280;
    case 512u: goto L_08A56290;
    case 513u: goto L_08A5629C;
    case 514u: goto L_08A562AC;
    case 515u: goto L_08A562B8;
    case 516u: goto L_08A562C0;
    case 517u: goto L_08A562FC;
    case 518u: goto L_08A56304;
    case 519u: goto L_08A56320;
    case 520u: goto L_08A56330;
    case 521u: goto L_08A5633C;
    case 522u: goto L_08A5634C;
    case 523u: goto L_08A56358;
    case 524u: goto L_08A56360;
    case 525u: goto L_08A56380;
    case 526u: goto L_08A56388;
    case 527u: goto L_08A5639C;
    case 528u: goto L_08A563AC;
    case 529u: goto L_08A563B8;
    case 530u: goto L_08A563C8;
    case 531u: goto L_08A563D4;
    case 532u: goto L_08A563DC;
    case 533u: goto L_08A56400;
    case 534u: goto L_08A56418;
    case 535u: goto L_08A56438;
    case 536u: goto L_08A56454;
    case 537u: goto L_08A56460;
    case 538u: goto L_08A5646C;
    case 539u: goto L_08A56478;
    case 540u: goto L_08A56484;
    case 541u: goto L_08A5648C;
    case 542u: goto L_08A564A4;
    case 543u: goto L_08A564C0;
    case 544u: goto L_08A564D8;
    case 545u: goto L_08A564EC;
    case 546u: goto L_08A5651C;
    case 547u: goto L_08A5652C;
    case 548u: goto L_08A56538;
    case 549u: goto L_08A56540;
    case 550u: goto L_08A56550;
    case 551u: goto L_08A56558;
    case 552u: goto L_08A5656C;
    case 553u: goto L_08A56574;
    case 554u: goto L_08A5657C;
    case 555u: goto L_08A56584;
    case 556u: goto L_08A56590;
    case 557u: goto L_08A56598;
    case 558u: goto L_08A565A0;
    case 559u: goto L_08A565A8;
    case 560u: goto L_08A565B0;
    case 561u: goto L_08A565C4;
    case 562u: goto L_08A565D0;
    case 563u: goto L_08A565D8;
    case 564u: goto L_08A56610;
    case 565u: goto L_08A56654;
    case 566u: goto L_08A56664;
    case 567u: goto L_08A56674;
    case 568u: goto L_08A56678;
    case 569u: goto L_08A5667C;
    case 570u: goto L_08A5668C;
    case 571u: goto L_08A56694;
    case 572u: goto L_08A5669C;
    case 573u: goto L_08A566A0;
    case 574u: goto L_08A566F0;
    case 575u: goto L_08A56714;
    case 576u: goto L_08A5672C;
    case 577u: goto L_08A56738;
    case 578u: goto L_08A5674C;
    case 579u: goto L_08A56758;
    case 580u: goto L_08A5678C;
    case 581u: goto L_08A567A0;
    case 582u: goto L_08A567A8;
    case 583u: goto L_08A567BC;
    case 584u: goto L_08A567FC;
    case 585u: goto L_08A56820;
    case 586u: goto L_08A56828;
    case 587u: goto L_08A56840;
    case 588u: goto L_08A5684C;
    case 589u: goto L_08A56864;
    case 590u: goto L_08A56870;
    case 591u: goto L_08A56888;
    case 592u: goto L_08A56894;
    case 593u: goto L_08A568A8;
    case 594u: goto L_08A568B0;
    case 595u: goto L_08A568C0;
    case 596u: goto L_08A568D4;
    case 597u: goto L_08A568E0;
    case 598u: goto L_08A568EC;
    case 599u: goto L_08A568F4;
    case 600u: goto L_08A56900;
    case 601u: goto L_08A56924;
    case 602u: goto L_08A56934;
    case 603u: goto L_08A5693C;
    case 604u: goto L_08A56950;
    case 605u: goto L_08A56958;
    case 606u: goto L_08A56960;
    case 607u: goto L_08A56974;
    case 608u: goto L_08A56984;
    case 609u: goto L_08A56994;
    case 610u: goto L_08A56998;
    case 611u: goto L_08A5699C;
    case 612u: goto L_08A569A4;
    case 613u: goto L_08A569C4;
    case 614u: goto L_08A569D4;
    case 615u: goto L_08A569DC;
    case 616u: goto L_08A569EC;
    case 617u: goto L_08A569FC;
    case 618u: goto L_08A56A0C;
    case 619u: goto L_08A56A1C;
    case 620u: goto L_08A56A74;
    case 621u: goto L_08A56A84;
    case 622u: goto L_08A56A94;
    case 623u: goto L_08A56AA0;
    case 624u: goto L_08A56AAC;
    case 625u: goto L_08A56AC8;
    case 626u: goto L_08A56AD4;
    case 627u: goto L_08A56AE0;
    case 628u: goto L_08A56AE8;
    case 629u: goto L_08A56AF8;
    case 630u: goto L_08A56B08;
    case 631u: goto L_08A56B18;
    case 632u: goto L_08A56B28;
    case 633u: goto L_08A56B38;
    case 634u: goto L_08A56B84;
    case 635u: goto L_08A56BA0;
    case 636u: goto L_08A56BB0;
    case 637u: goto L_08A56BB4;
    case 638u: goto L_08A56BD8;
    case 639u: goto L_08A56BE0;
    case 640u: goto L_08A56C00;
    case 641u: goto L_08A56C38;
    case 642u: goto L_08A56C44;
    case 643u: goto L_08A56C58;
    case 644u: goto L_08A56C5C;
    case 645u: goto L_08A56C64;
    case 646u: goto L_08A56C70;
    case 647u: goto L_08A56C84;
    case 648u: goto L_08A56C88;
    case 649u: goto L_08A56C90;
    case 650u: goto L_08A56C9C;
    case 651u: goto L_08A56CB0;
    case 652u: goto L_08A56CB4;
    case 653u: goto L_08A56CBC;
    case 654u: goto L_08A56CC8;
    case 655u: goto L_08A56CDC;
    case 656u: goto L_08A56CE8;
    case 657u: goto L_08A56CF4;
    case 658u: goto L_08A56D18;
    case 659u: goto L_08A56D34;
    case 660u: goto L_08A56D3C;
    case 661u: goto L_08A56D44;
    case 662u: goto L_08A56D54;
    case 663u: goto L_08A56D5C;
    case 664u: goto L_08A56D64;
    case 665u: goto L_08A56DA8;
    case 666u: goto L_08A56DB4;
    case 667u: goto L_08A56DC8;
    case 668u: goto L_08A56E14;
    case 669u: goto L_08A56E54;
    case 670u: goto L_08A56E5C;
    case 671u: goto L_08A56E68;
    case 672u: goto L_08A56E6C;
    case 673u: goto L_08A56E74;
    case 674u: goto L_08A56E7C;
    case 675u: goto L_08A56EDC;
    case 676u: goto L_08A56EE8;
    case 677u: goto L_08A56EF0;
    case 678u: goto L_08A56F00;
    case 679u: goto L_08A56F08;
    case 680u: goto L_08A56F18;
    case 681u: goto L_08A56F20;
    case 682u: goto L_08A56F28;
    case 683u: goto L_08A56F30;
    case 684u: goto L_08A56F50;
    case 685u: goto L_08A56F7C;
    case 686u: goto L_08A56F88;
    case 687u: goto L_08A56F9C;
    case 688u: goto L_08A56FA0;
    case 689u: goto L_08A56FA8;
    case 690u: goto L_08A56FB4;
    case 691u: goto L_08A56FC8;
    case 692u: goto L_08A56FCC;
    case 693u: goto L_08A56FD4;
    case 694u: goto L_08A56FE0;
    case 695u: goto L_08A56FF4;
    case 696u: goto L_08A57000;
    case 697u: goto L_08A5700C;
    case 698u: goto L_08A57030;
    case 699u: goto L_08A5704C;
    case 700u: goto L_08A57054;
    case 701u: goto L_08A5705C;
    case 702u: goto L_08A57068;
    case 703u: goto L_08A57074;
    case 704u: goto L_08A57088;
    case 705u: goto L_08A57090;
    case 706u: goto L_08A5709C;
    case 707u: goto L_08A570A8;
    case 708u: goto L_08A570B0;
    case 709u: goto L_08A570F4;
    case 710u: goto L_08A570FC;
    case 711u: goto L_08A57104;
    case 712u: goto L_08A5710C;
    case 713u: goto L_08A57114;
    case 714u: goto L_08A571B8;
    case 715u: goto L_08A571C8;
    case 716u: goto L_08A571D0;
    case 717u: goto L_08A571E0;
    case 718u: goto L_08A571E8;
    case 719u: goto L_08A571F8;
    case 720u: goto L_08A57200;
    case 721u: goto L_08A57210;
    case 722u: goto L_08A57268;
    case 723u: goto L_08A57270;
    case 724u: goto L_08A57278;
    case 725u: goto L_08A57294;
    case 726u: goto L_08A572B4;
    case 727u: goto L_08A572C4;
    case 728u: goto L_08A572D0;
    case 729u: goto L_08A572E4;
    case 730u: goto L_08A572F4;
    case 731u: goto L_08A57300;
    case 732u: goto L_08A57340;
    case 733u: goto L_08A5735C;
    case 734u: goto L_08A57374;
    case 735u: goto L_08A57394;
    case 736u: goto L_08A573A0;
    case 737u: goto L_08A573B4;
    case 738u: goto L_08A573BC;
    case 739u: goto L_08A573E8;
    case 740u: goto L_08A573F4;
    case 741u: goto L_08A57400;
    case 742u: goto L_08A57418;
    case 743u: goto L_08A57430;
    case 744u: goto L_08A57448;
    case 745u: goto L_08A57454;
    case 746u: goto L_08A5746C;
    case 747u: goto L_08A57474;
    case 748u: goto L_08A57480;
    case 749u: goto L_08A5748C;
    case 750u: goto L_08A57490;
    case 751u: goto L_08A5749C;
    case 752u: goto L_08A574A8;
    case 753u: goto L_08A574B4;
    case 754u: goto L_08A574B8;
    case 755u: goto L_08A574C8;
    case 756u: goto L_08A574D4;
    case 757u: goto L_08A574E0;
    case 758u: goto L_08A574E4;
    case 759u: goto L_08A574EC;
    case 760u: goto L_08A574F8;
    case 761u: goto L_08A57504;
    case 762u: goto L_08A57510;
    case 763u: goto L_08A57564;
    case 764u: goto L_08A57570;
    case 765u: goto L_08A575AC;
    case 766u: goto L_08A575C0;
    case 767u: goto L_08A575CC;
    case 768u: goto L_08A575DC;
    case 769u: goto L_08A575F0;
    case 770u: goto L_08A575F8;
    case 771u: goto L_08A5760C;
    case 772u: goto L_08A5762C;
    case 773u: goto L_08A57638;
    case 774u: goto L_08A57648;
    case 775u: goto L_08A57668;
    case 776u: goto L_08A57670;
    case 777u: goto L_08A57680;
    case 778u: goto L_08A57690;
    case 779u: goto L_08A57694;
    case 780u: goto L_08A5769C;
    case 781u: goto L_08A576A4;
    case 782u: goto L_08A576BC;
    case 783u: goto L_08A576C0;
    case 784u: goto L_08A576C4;
    case 785u: goto L_08A576DC;
    case 786u: goto L_08A576E4;
    case 787u: goto L_08A576E8;
    case 788u: goto L_08A576FC;
    case 789u: goto L_08A5770C;
    case 790u: goto L_08A57720;
    case 791u: goto L_08A57730;
    case 792u: goto L_08A5774C;
    case 793u: goto L_08A57760;
    case 794u: goto L_08A57770;
    case 795u: goto L_08A57780;
    case 796u: goto L_08A57790;
    case 797u: goto L_08A577A4;
    case 798u: goto L_08A577AC;
    case 799u: goto L_08A577B4;
    case 800u: goto L_08A577C0;
    case 801u: goto L_08A577CC;
    case 802u: goto L_08A577D4;
    case 803u: goto L_08A577DC;
    case 804u: goto L_08A577E8;
    case 805u: goto L_08A577F4;
    case 806u: goto L_08A57814;
    case 807u: goto L_08A57824;
    case 808u: goto L_08A57830;
    case 809u: goto L_08A57844;
    case 810u: goto L_08A57854;
    case 811u: goto L_08A57860;
    case 812u: goto L_08A5789C;
    case 813u: goto L_08A578BC;
    case 814u: goto L_08A578CC;
    case 815u: goto L_08A578E0;
    case 816u: goto L_08A578E8;
    case 817u: goto L_08A57904;
    case 818u: goto L_08A57910;
    case 819u: goto L_08A5791C;
    case 820u: goto L_08A57930;
    case 821u: goto L_08A5794C;
    case 822u: goto L_08A57954;
    case 823u: goto L_08A57960;
    case 824u: goto L_08A5796C;
    case 825u: goto L_08A57970;
    case 826u: goto L_08A57988;
    case 827u: goto L_08A57994;
    case 828u: goto L_08A579BC;
    case 829u: goto L_08A579D0;
    case 830u: goto L_08A579DC;
    case 831u: goto L_08A579EC;
    case 832u: goto L_08A57A00;
    case 833u: goto L_08A57A08;
    case 834u: goto L_08A57A1C;
    case 835u: goto L_08A57A30;
    case 836u: goto L_08A57A38;
    case 837u: goto L_08A57A40;
    case 838u: goto L_08A57A48;
    case 839u: goto L_08A57A54;
    case 840u: goto L_08A57A5C;
    case 841u: goto L_08A57A64;
    case 842u: goto L_08A57A70;
    case 843u: goto L_08A57A7C;
    case 844u: goto L_08A57A98;
    case 845u: goto L_08A57AA8;
    case 846u: goto L_08A57AC4;
    case 847u: goto L_08A57AD4;
    case 848u: goto L_08A57AF0;
    case 849u: goto L_08A57B00;
    case 850u: goto L_08A57B08;
    case 851u: goto L_08A57B44;
    case 852u: goto L_08A57B54;
    case 853u: goto L_08A57BB4;
    case 854u: goto L_08A57BC4;
    case 855u: goto L_08A57BCC;
    case 856u: goto L_08A57BD4;
    case 857u: goto L_08A57BDC;
    case 858u: goto L_08A57BE4;
    case 859u: goto L_08A57BEC;
    case 860u: goto L_08A57BF4;
    case 861u: goto L_08A57C10;
    case 862u: goto L_08A57C20;
    case 863u: goto L_08A57C34;
    case 864u: goto L_08A57C3C;
    case 865u: goto L_08A57C5C;
    case 866u: goto L_08A57C68;
    case 867u: goto L_08A57C80;
    case 868u: goto L_08A57C84;
    case 869u: goto L_08A57C8C;
    case 870u: goto L_08A57CA0;
    case 871u: goto L_08A57CA4;
    case 872u: goto L_08A57CC8;
    case 873u: goto L_08A57CD0;
    case 874u: goto L_08A57CF0;
    case 875u: goto L_08A57CFC;
    case 876u: goto L_08A57D14;
    case 877u: goto L_08A57D18;
    case 878u: goto L_08A57D20;
    case 879u: goto L_08A57D40;
    case 880u: goto L_08A57D60;
    case 881u: goto L_08A57D68;
    case 882u: goto L_08A57D84;
    case 883u: goto L_08A57D94;
    case 884u: goto L_08A57DB0;
    case 885u: goto L_08A57DC0;
    case 886u: goto L_08A57DDC;
    case 887u: goto L_08A57DEC;
    case 888u: goto L_08A57E08;
    case 889u: goto L_08A57E18;
    case 890u: goto L_08A57E34;
    case 891u: goto L_08A57E44;
    case 892u: goto L_08A57E54;
    case 893u: goto L_08A57E5C;
    case 894u: goto L_08A57E74;
    case 895u: goto L_08A57E7C;
    case 896u: goto L_08A57E84;
    case 897u: goto L_08A57E9C;
    case 898u: goto L_08A57EBC;
    case 899u: goto L_08A57EDC;
    case 900u: goto L_08A57F04;
    case 901u: goto L_08A57F20;
    case 902u: goto L_08A57F34;
    case 903u: goto L_08A57F4C;
    case 904u: goto L_08A57F64;
    case 905u: goto L_08A57F80;
    case 906u: goto L_08A57F9C;
    case 907u: goto L_08A57FBC;
    case 908u: goto L_08A57FD4;
    case 909u: goto L_08A57FDC;
    case 910u: goto L_08A57FE4;
    case 911u: goto L_08A57FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A54004:
    ctx.gpr[31] = (0x08A5400Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B7359Cu;
    return;
L_08A5400C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-6096), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6176)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6172)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A54024;
L_08A54024:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54034:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[4] = (0u << 4u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2100), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2112));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A540EC;
      }
      goto L_08A54090;
    }
L_08A54090:
    ctx.gpr[5] = (0u | 255u);
    goto L_08A54094;
L_08A54094:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 255u);
      if (branch_taken) {
          goto L_08A54094;
      }
      goto L_08A540EC;
    }
L_08A540EC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A540F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A54F5C;
L_08A540F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[31] = (0x08A54134u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A54F5C;
L_08A54134:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5415Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(125));
    goto L_08A56758;
L_08A5415C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A541A8;
      }
      goto L_08A54168;
    }
L_08A54168:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A541A8;
      }
      goto L_08A54174;
    }
L_08A54174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2213u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22960));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A541A8;
      }
      goto L_08A54188;
    }
L_08A54188:
    ctx.gpr[31] = (0x08A54190u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A552D8;
L_08A54190:
    ctx.gpr[31] = (0x08A54198u);
    ctx.gpr[4] = (0u | 13620u);
    ctx.pc = 0x08B72F54u;
    return;
L_08A54198:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A541B8;
      }
      goto L_08A541A0;
    }
L_08A541A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5420C;
      }
      goto L_08A541A8;
    }
L_08A541A8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3164), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54340;
      }
      goto L_08A541B8;
    }
L_08A541B8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(7160));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08A541CCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A541CCu) goto L_08A541CC;
    return;
L_08A541CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A541DCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A541DCu) goto L_08A541DC;
    return;
L_08A541DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A541E8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A541E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A54204;
      }
      goto L_08A541F8;
    }
L_08A541F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08A54204u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A54204u) goto L_08A54204;
    return;
L_08A54204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54340;
      }
      goto L_08A5420C;
    }
L_08A5420C:
    ctx.gpr[6] = (2213u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(15116));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (15u << 16u);
    ctx.gpr[9] = (31u << 16u);
    ctx.gpr[11] = (8u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 4096u);
    ctx.gpr[10] = (0u | 3u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16960));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-31616));
    ctx.gpr[31] = (0x08A54248u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-24288));
    ctx.pc = 0x08B72F84u;
    return;
L_08A54248:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A542AC;
      }
      goto L_08A54250;
    }
L_08A54250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(7196));
    ctx.gpr[31] = (0x08A5426Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A5426Cu) goto L_08A5426C;
    return;
L_08A5426C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5427Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5427Cu) goto L_08A5427C;
    return;
L_08A5427C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A54288u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A54288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A542A4;
      }
      goto L_08A54298;
    }
L_08A54298:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A542A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A542A4u) goto L_08A542A4;
    return;
L_08A542A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54340;
      }
      goto L_08A542AC;
    }
L_08A542AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 8192u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[8] = (0u | 8192u);
    ctx.gpr[31] = (0x08A542CCu);
    ctx.gpr[9] = (0u | 136u);
    ctx.pc = 0x08B72F74u;
    return;
L_08A542CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A54328;
      }
      goto L_08A542D4;
    }
L_08A542D4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(7236));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08A542E8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A542E8u) goto L_08A542E8;
    return;
L_08A542E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A542F8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A542F8u) goto L_08A542F8;
    return;
L_08A542F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A54304u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A54304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A54320;
      }
      goto L_08A54314;
    }
L_08A54314:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A54320u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A54320u) goto L_08A54320;
    return;
L_08A54320:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54340;
      }
      goto L_08A54328;
    }
L_08A54328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6152)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6148)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[2] = (0u | 1u);
    goto L_08A54340;
L_08A54340:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54358:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54424;
      }
      goto L_08A54380;
    }
L_08A54380:
    ctx.gpr[4] = (ctx.gpr[18] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A543A8;
      }
      goto L_08A543A0;
    }
L_08A543A0:
    ctx.gpr[31] = (0x08A543A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A543A8u) goto L_08A543A8;
    return;
L_08A543A8:
    ctx.gpr[31] = (0x08A543B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08A54F5C;
L_08A543B0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A543E8;
      }
      goto L_08A543C4;
    }
L_08A543C4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08A543EC;
    }
    goto L_08A543D4;
L_08A543D4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A543EC;
      }
      goto L_08A543E4;
    }
L_08A543E4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A543E8;
L_08A543E8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A543EC;
L_08A543EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54414;
      }
      goto L_08A543F4;
    }
L_08A543F4:
    ctx.gpr[4] = (ctx.gpr[18] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7072), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A54424;
      }
      goto L_08A54414;
    }
L_08A54414:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54380;
      }
      goto L_08A54424;
    }
L_08A54424:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[31] = (0x08A54430u);
    // nop
    ctx.pc = 0x08B72FB4u;
    return;
L_08A54430:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A54488;
      }
      goto L_08A54438;
    }
L_08A54438:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(7268));
    ctx.gpr[31] = (0x08A54448u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A54448u) goto L_08A54448;
    return;
L_08A54448:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A54458u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A54458u) goto L_08A54458;
    return;
L_08A54458:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A54464u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08A564A4;
L_08A54464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A54480;
      }
      goto L_08A54474;
    }
L_08A54474:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A54480u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A54480u) goto L_08A54480;
    return;
L_08A54480:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5449C;
      }
      goto L_08A54488;
    }
L_08A54488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6168)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6164)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A5449C;
L_08A5449C:
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
L_08A544B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A544D8u);
    ctx.gpr[6] = (0u | 1064u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08A544D8u) goto L_08A544D8;
    return;
L_08A544D8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2100));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A544E8u);
    ctx.gpr[6] = (0u | 1064u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08A544E8u) goto L_08A544E8;
    return;
L_08A544E8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1156));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A544F8u);
    ctx.gpr[6] = (0u | 938u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08A544F8u) goto L_08A544F8;
    return;
L_08A544F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[31] = (0x08A54504u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A54ED4;
L_08A54504:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54584;
      }
      goto L_08A5450C;
    }
L_08A5450C:
    ctx.gpr[31] = (0x08A54514u);
    // nop
    ctx.pc = 0x08B72FB4u;
    return;
L_08A54514:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A5456C;
      }
      goto L_08A5451C;
    }
L_08A5451C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(7300));
    ctx.gpr[31] = (0x08A5452Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A5452Cu) goto L_08A5452C;
    return;
L_08A5452C:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5453Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A5453Cu) goto L_08A5453C;
    return;
L_08A5453C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A54548u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08A564A4;
L_08A54548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A54564;
      }
      goto L_08A54558;
    }
L_08A54558:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A54564u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A54564u) goto L_08A54564;
    return;
L_08A54564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54598;
      }
      goto L_08A5456C;
    }
L_08A5456C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6160)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6156)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A54598;
      }
      goto L_08A54584;
    }
L_08A54584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6176)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6172)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A54598;
L_08A54598:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A545AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08A545B8;
      }
      goto L_08A545B4;
    }
L_08A545B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    goto L_08A545B8;
L_08A545B8:
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A545E0;
      }
      goto L_08A545D8;
    }
L_08A545D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A545E4;
      }
      goto L_08A545E0;
    }
L_08A545E0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A545E4;
L_08A545E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A545EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A54610u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08A56714;
L_08A54610:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A546AC;
      }
      goto L_08A54634;
    }
L_08A54634:
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(2104));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A5464Cu);
    ctx.gpr[7] = (0u | 0u);
    ctx.pc = 0x08B72F64u;
    return;
L_08A5464C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A546AC;
      }
      goto L_08A54654;
    }
L_08A54654:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2100), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    goto L_08A546AC;
L_08A546AC:
    ctx.gpr[31] = (0x08A546B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A56738;
L_08A546B4:
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
L_08A546D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5471C;
      }
      goto L_08A546E8;
    }
L_08A546E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A546F4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A56418;
L_08A546F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3164)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A54718;
      }
      goto L_08A54704;
    }
L_08A54704:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6144)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6140)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    goto L_08A54718;
L_08A54718:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08A5471C;
L_08A5471C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3164)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5472C;
      }
      goto L_08A54728;
    }
L_08A54728:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3164), static_cast<std::uint8_t>(0u));
    goto L_08A5472C;
L_08A5472C:
    ctx.gpr[31] = (0x08A54734u);
    // nop
    goto L_08A56210;
L_08A54734:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54740:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5476Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 259u, 0x08B65214u>(ctx, &aot_mem) && ctx.pc == 0x08A5476Cu) goto L_08A5476C;
    return;
L_08A5476C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A547E4;
      }
      goto L_08A54778;
    }
L_08A54778:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6092));
      if (branch_taken) {
          goto L_08A547AC;
      }
      goto L_08A54784;
    }
L_08A54784:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A54790u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A54790u) goto L_08A54790;
    return;
L_08A54790:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A547A8;
      }
      goto L_08A5479C;
    }
L_08A5479C:
    ctx.gpr[31] = (0x08A547A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08A547A4u) goto L_08A547A4;
    return;
L_08A547A4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A547A8;
L_08A547A8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08A547AC;
L_08A547AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A547B8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08A547B8u) goto L_08A547B8;
    return;
L_08A547B8:
    ctx.gpr[31] = (0x08A547C0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A547C0u) goto L_08A547C0;
    return;
L_08A547C0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A547CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A547CCu) goto L_08A547CC;
    return;
L_08A547CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A547DCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A547DCu) goto L_08A547DC;
    return;
L_08A547DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A549E0;
      }
      goto L_08A547E4;
    }
L_08A547E4:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A547F4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem) && ctx.pc == 0x08A547F4u) goto L_08A547F4;
    return;
L_08A547F4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A5480Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5480Cu) goto L_08A5480C;
    return;
L_08A5480C:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A54820u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 237u, 0x08B65088u>(ctx, &aot_mem) && ctx.pc == 0x08A54820u) goto L_08A54820;
    return;
L_08A54820:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 32u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08A54834;
L_08A54834:
    ctx.gpr[8] = (0u | 8u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
        goto L_08A54844;
    }
    goto L_08A54844;
L_08A54844:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54878;
      }
      goto L_08A54850;
    }
L_08A54850:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A5486C;
      }
      goto L_08A5485C;
    }
L_08A5485C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5486C;
      }
      goto L_08A54864;
    }
L_08A54864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A54878;
      }
      goto L_08A5486C;
    }
L_08A5486C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A54834;
      }
      goto L_08A54878;
    }
L_08A54878:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A548F4;
      }
      goto L_08A54880;
    }
L_08A54880:
    ctx.gpr[31] = (0x08A54888u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08A54888u) goto L_08A54888;
    return;
L_08A54888:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6092));
      if (branch_taken) {
          goto L_08A548BC;
      }
      goto L_08A54894;
    }
L_08A54894:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A548A0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A548A0u) goto L_08A548A0;
    return;
L_08A548A0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A548B8;
      }
      goto L_08A548AC;
    }
L_08A548AC:
    ctx.gpr[31] = (0x08A548B4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08A548B4u) goto L_08A548B4;
    return;
L_08A548B4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08A548B8;
L_08A548B8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_08A548BC;
L_08A548BC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A548C8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08A548C8u) goto L_08A548C8;
    return;
L_08A548C8:
    ctx.gpr[31] = (0x08A548D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A548D0u) goto L_08A548D0;
    return;
L_08A548D0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A548DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A548DCu) goto L_08A548DC;
    return;
L_08A548DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A548ECu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A548ECu) goto L_08A548EC;
    return;
L_08A548EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A549E0;
      }
      goto L_08A548F4;
    }
L_08A548F4:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08A54900u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem) && ctx.pc == 0x08A54900u) goto L_08A54900;
    return;
L_08A54900:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A54918u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08A54918u) goto L_08A54918;
    return;
L_08A54918:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A54928u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 328u, 0x089F5BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A54928u) goto L_08A54928;
    return;
L_08A54928:
    ctx.gpr[31] = (0x08A54930u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x08A54930u) goto L_08A54930;
    return;
L_08A54930:
    ctx.gpr[31] = (0x08A54938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 96u, 0x08B0C748u>(ctx, &aot_mem) && ctx.pc == 0x08A54938u) goto L_08A54938;
    return;
L_08A54938:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A54944u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 283u, 0x08AFD8D8u>(ctx, &aot_mem) && ctx.pc == 0x08A54944u) goto L_08A54944;
    return;
L_08A54944:
    ctx.gpr[31] = (0x08A5494Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 332u, 0x089F5C38u>(ctx, &aot_mem) && ctx.pc == 0x08A5494Cu) goto L_08A5494C;
    return;
L_08A5494C:
    ctx.gpr[31] = (0x08A54954u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A54954u) goto L_08A54954;
    return;
L_08A54954:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A54964u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A54964u) goto L_08A54964;
    return;
L_08A54964:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A54974u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A54974u) goto L_08A54974;
    return;
L_08A54974:
    ctx.gpr[31] = (0x08A5497Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08A5497Cu) goto L_08A5497C;
    return;
L_08A5497C:
    ctx.gpr[31] = (0x08A54984u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem) && ctx.pc == 0x08A54984u) goto L_08A54984;
    return;
L_08A54984:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A549B4;
      }
      goto L_08A54994;
    }
L_08A54994:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08A549A4u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 272u, 0x08B652B8u>(ctx, &aot_mem) && ctx.pc == 0x08A549A4u) goto L_08A549A4;
    return;
L_08A549A4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6084));
    ctx.gpr[31] = (0x08A549B0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 737u, 0x08B670D0u>(ctx, &aot_mem) && ctx.pc == 0x08A549B0u) goto L_08A549B0;
    return;
L_08A549B0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08A549B4;
L_08A549B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A549C4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A549C4u) goto L_08A549C4;
    return;
L_08A549C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A549E0;
      }
      goto L_08A549D4;
    }
L_08A549D4:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A549E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A549E0u) goto L_08A549E0;
    return;
L_08A549E0:
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
L_08A54A00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(1156));
    goto L_08A54A28;
L_08A54A28:
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[11];
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54A5C;
      }
      goto L_08A54A38;
    }
L_08A54A38:
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2)));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.gpr[9] = (ctx.gpr[10] & 255u);
        goto L_08A54A60;
    }
    goto L_08A54A48;
L_08A54A48:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[2];
    ctx.gpr[9] = (ctx.gpr[10] & 255u);
      if (branch_taken) {
          goto L_08A54A60;
      }
      goto L_08A54A58;
    }
L_08A54A58:
    ctx.gpr[10] = (0u | 1u);
    goto L_08A54A5C;
L_08A54A5C:
    ctx.gpr[9] = (ctx.gpr[10] & 255u);
    goto L_08A54A60;
L_08A54A60:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54A84;
      }
      goto L_08A54A68;
    }
L_08A54A68:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(134));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(134));
      if (branch_taken) {
          goto L_08A54A28;
      }
      goto L_08A54A7C;
    }
L_08A54A7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54A98;
      }
      goto L_08A54A84;
    }
L_08A54A84:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1162));
    ctx.gpr[31] = (0x08A54A90u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A54740;
L_08A54A90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54AFC;
      }
      goto L_08A54A98;
    }
L_08A54A98:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6092));
      if (branch_taken) {
          goto L_08A54AD0;
      }
      goto L_08A54AA4;
    }
L_08A54AA4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A54AB0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A54AB0u) goto L_08A54AB0;
    return;
L_08A54AB0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54AC8;
      }
      goto L_08A54ABC;
    }
L_08A54ABC:
    ctx.gpr[31] = (0x08A54AC4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08A54AC4u) goto L_08A54AC4;
    return;
L_08A54AC4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A54AC8;
L_08A54AC8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6092));
    goto L_08A54AD0;
L_08A54AD0:
    ctx.gpr[31] = (0x08A54AD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08A54AD8u) goto L_08A54AD8;
    return;
L_08A54AD8:
    ctx.gpr[31] = (0x08A54AE0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem) && ctx.pc == 0x08A54AE0u) goto L_08A54AE0;
    return;
L_08A54AE0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A54AECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A54AECu) goto L_08A54AEC;
    return;
L_08A54AEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A54AFCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A54AFCu) goto L_08A54AFC;
    return;
L_08A54AFC:
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
L_08A54B14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A54B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08A54B40u) goto L_08A54B40;
    return;
L_08A54B40:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6068)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6072)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A54B54u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A54B54u) goto L_08A54B54;
    return;
L_08A54B54:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1156));
    goto L_08A54B74;
L_08A54B74:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1162))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54B88;
      }
      goto L_08A54B80;
    }
L_08A54B80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A54BCC;
      }
      goto L_08A54B88;
    }
L_08A54B88:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54BC0;
      }
      goto L_08A54B9C;
    }
L_08A54B9C:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[9] != ctx.gpr[10]) {
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
        goto L_08A54BC4;
    }
    goto L_08A54BAC;
L_08A54BAC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[9];
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
      if (branch_taken) {
          goto L_08A54BC4;
      }
      goto L_08A54BBC;
    }
L_08A54BBC:
    ctx.gpr[8] = (0u | 1u);
    goto L_08A54BC0;
L_08A54BC0:
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
    goto L_08A54BC4;
L_08A54BC4:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54BE8;
      }
      goto L_08A54BCC;
    }
L_08A54BCC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(134));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(134));
      if (branch_taken) {
          goto L_08A54B74;
      }
      goto L_08A54BE0;
    }
L_08A54BE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 6u);
      if (branch_taken) {
          goto L_08A54C00;
      }
      goto L_08A54BE8;
    }
L_08A54BE8:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1162));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A54BF8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A54740;
L_08A54BF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54D1C;
      }
      goto L_08A54C00;
    }
L_08A54C00:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(1156));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1162));
    ctx.gpr[31] = (0x08A54C3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A54F5C;
L_08A54C3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54C74;
      }
      goto L_08A54C50;
    }
L_08A54C50:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_08A54C78;
    }
    goto L_08A54C60;
L_08A54C60:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A54C78;
      }
      goto L_08A54C70;
    }
L_08A54C70:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A54C74;
L_08A54C74:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08A54C78;
L_08A54C78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54CC8;
      }
      goto L_08A54C80;
    }
L_08A54C80:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A54C90u);
    ctx.gpr[6] = (0u | 128u);
    ctx.pc = 0x08B730A4u;
    return;
L_08A54C90:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A54D0C;
      }
      goto L_08A54C98;
    }
L_08A54C98:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6080));
    ctx.gpr[31] = (0x08A54CA8u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08A54CA8u) goto L_08A54CA8;
    return;
L_08A54CA8:
    ctx.gpr[31] = (0x08A54CB0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A54CB0u) goto L_08A54CB0;
    return;
L_08A54CB0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08A54CC0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A54CC0u) goto L_08A54CC0;
    return;
L_08A54CC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54D1C;
      }
      goto L_08A54CC8;
    }
L_08A54CC8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A54CD4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B72FCCu;
    return;
L_08A54CD4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A54D0C;
      }
      goto L_08A54CDC;
    }
L_08A54CDC:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6080));
    ctx.gpr[31] = (0x08A54CECu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08A54CECu) goto L_08A54CEC;
    return;
L_08A54CEC:
    ctx.gpr[31] = (0x08A54CF4u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A54CF4u) goto L_08A54CF4;
    return;
L_08A54CF4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08A54D04u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A54D04u) goto L_08A54D04;
    return;
L_08A54D04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54D1C;
      }
      goto L_08A54D0C;
    }
L_08A54D0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A54D1Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08A54740;
L_08A54D1C:
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
L_08A54D38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1156));
    goto L_08A54D44;
L_08A54D44:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54D7C;
      }
      goto L_08A54D58;
    }
L_08A54D58:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[9] != ctx.gpr[10]) {
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
        goto L_08A54D80;
    }
    goto L_08A54D68;
L_08A54D68:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08A54D80;
      }
      goto L_08A54D78;
    }
L_08A54D78:
    ctx.gpr[7] = (0u | 1u);
    goto L_08A54D7C;
L_08A54D7C:
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_08A54D80;
L_08A54D80:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 255u);
      if (branch_taken) {
          goto L_08A54DB8;
      }
      goto L_08A54D88;
    }
L_08A54D88:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[9]));
    goto L_08A54DB8;
L_08A54DB8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(134));
      if (branch_taken) {
          goto L_08A54D44;
      }
      goto L_08A54DC8;
    }
L_08A54DC8:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54DD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A54E0C;
      }
      goto L_08A54DF0;
    }
L_08A54DF0:
    ctx.gpr[31] = (0x08A54DF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A56714;
L_08A54DF8:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 17u);
      if (branch_taken) {
          goto L_08A54E14;
      }
      goto L_08A54E0C;
    }
L_08A54E0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54E48;
      }
      goto L_08A54E14;
    }
L_08A54E14:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A54E14;
      }
      goto L_08A54E38;
    }
L_08A54E38:
    ctx.gpr[31] = (0x08A54E40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A56738;
L_08A54E40:
    ctx.gpr[31] = (0x08A54E48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A56900;
L_08A54E48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54E5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A54E80u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    goto L_08A56714;
L_08A54E80:
    ctx.gpr[4] = (ctx.gpr[18] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A54EBCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A56738;
L_08A54EBC:
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
L_08A54ED4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A54EF8;
      }
      goto L_08A54EF0;
    }
L_08A54EF0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    goto L_08A54EF8;
L_08A54EF8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54F1C;
      }
      goto L_08A54F00;
    }
L_08A54F00:
    ctx.gpr[31] = (0x08A54F08u);
    // nop
    ctx.pc = 0x08B72F34u;
    return;
L_08A54F08:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A54F1C;
      }
      goto L_08A54F14;
    }
L_08A54F14:
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    goto L_08A54F1C;
L_08A54F1C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54F34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-6096)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54F50;
      }
      goto L_08A54F48;
    }
L_08A54F48:
    ctx.gpr[31] = (0x08A54F50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3166));
    ctx.pc = 0x08B7305Cu;
    return;
L_08A54F50:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54F5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(3166));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54FBC;
      }
      goto L_08A54F98;
    }
L_08A54F98:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
        goto L_08A54FC0;
    }
    goto L_08A54FA8;
L_08A54FA8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A54FC0;
      }
      goto L_08A54FB8;
    }
L_08A54FB8:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A54FBC;
L_08A54FBC:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A54FC0;
L_08A54FC0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54FD0;
      }
      goto L_08A54FC8;
    }
L_08A54FC8:
    ctx.gpr[31] = (0x08A54FD0u);
    // nop
    goto L_08A54F34;
L_08A54FD0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54FE4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(3172));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54FEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_08A55014;
L_08A55014:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55020u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A545AC;
L_08A55020:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55078;
      }
      goto L_08A55054;
    }
L_08A55054:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08A5507C;
    }
    goto L_08A55064;
L_08A55064:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A5507C;
      }
      goto L_08A55074;
    }
L_08A55074:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A55078;
L_08A55078:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A5507C;
L_08A5507C:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55090;
      }
      goto L_08A5508C;
    }
L_08A5508C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A55090;
L_08A55090:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A55014;
      }
      goto L_08A550A0;
    }
L_08A550A0:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_08A550C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08A550F8;
L_08A550F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55104u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A545AC;
L_08A55104:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5515C;
      }
      goto L_08A55138;
    }
L_08A55138:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08A55160;
    }
    goto L_08A55148;
L_08A55148:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A55160;
      }
      goto L_08A55158;
    }
L_08A55158:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A5515C;
L_08A5515C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A55160;
L_08A55160:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A551B8;
      }
      goto L_08A55170;
    }
L_08A55170:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5517Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A545AC;
L_08A5517C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55194;
      }
      goto L_08A55190;
    }
L_08A55190:
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    goto L_08A55194;
L_08A55194:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A551A0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A545AC;
L_08A551A0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A551B8;
      }
      goto L_08A551B4;
    }
L_08A551B4:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    goto L_08A551B8;
L_08A551B8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A550F8;
      }
      goto L_08A551C8;
    }
L_08A551C8:
    ctx.gpr[2] = (ctx.gpr[20] + ctx.gpr[21]);
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
L_08A551F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A5521C;
      }
      goto L_08A55214;
    }
L_08A55214:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A552BC;
      }
      goto L_08A5521C;
    }
L_08A5521C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A55220;
L_08A55220:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55220;
      }
      goto L_08A55240;
    }
L_08A55240:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 5u);
    goto L_08A55248;
L_08A55248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08A55258u);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(114)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08A55258u) goto L_08A55258;
    return;
L_08A55258:
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(114)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08A55248;
      }
      goto L_08A5528C;
    }
L_08A5528C:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    goto L_08A55298;
L_08A55298:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(114)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55298;
      }
      goto L_08A552BC;
    }
L_08A552BC:
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
L_08A552D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A55318;
      }
      goto L_08A552EC;
    }
L_08A552EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A552F8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = 0x08B72F5Cu;
    return;
L_08A552F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A55304u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.pc = 0x08B72F94u;
    return;
L_08A55304:
    ctx.gpr[31] = (0x08A5530Cu);
    // nop
    ctx.pc = 0x08B72F6Cu;
    return;
L_08A5530C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    goto L_08A55318;
L_08A55318:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55324:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3184), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5532C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3184)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55334:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A55344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 766u, 0x08B1B3B4u>(ctx, &aot_mem) && ctx.pc == 0x08A55344u) goto L_08A55344;
    return;
L_08A55344:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-6096), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55354:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (2213u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(22));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A55398u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(15300));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55398u) goto L_08A55398;
    return;
L_08A55398:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A553AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A55414u);
    ctx.gpr[5] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 94u, 0x08B60818u>(ctx, &aot_mem) && ctx.pc == 0x08A55414u) goto L_08A55414;
    return;
L_08A55414:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(6));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 64u);
    goto L_08A55420;
L_08A55420:
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(7))))));
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A55420;
      }
      goto L_08A55444;
    }
L_08A55444:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55458:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25860));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6064)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6060)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[17] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (2213u << 16u);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(21332));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (0u | 152u);
    ctx.gpr[31] = (0x08A55504u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55504u) goto L_08A55504;
    return;
L_08A55504:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1156));
    ctx.gpr[7] = (2213u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(21420));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x08A5551Cu);
    ctx.gpr[6] = (0u | 134u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5551Cu) goto L_08A5551C;
    return;
L_08A5551C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2096), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2100));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (0u | 152u);
    ctx.gpr[31] = (0x08A55534u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55534u) goto L_08A55534;
    return;
L_08A55534:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3166), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3167), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3168), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3169), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3170), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3171), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3172), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3176), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3177), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3178), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3179), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3180), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3181), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(3176));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(3182), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08A555C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A555CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A555F4u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.pc = 0x08B7346Cu;
    return;
L_08A555F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A557E8;
      }
      goto L_08A555FC;
    }
L_08A555FC:
    ctx.gpr[31] = (0x08A55604u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B7349Cu;
    return;
L_08A55604:
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A5561Cu);
    ctx.gpr[4] = (2u << 16u);
    ctx.pc = 0x08B7306Cu;
    return;
L_08A5561C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A55654;
      }
      goto L_08A55624;
    }
L_08A55624:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(7332));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x08A55638u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A55638u) goto L_08A55638;
    return;
L_08A55638:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A55648u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem) && ctx.pc == 0x08A55648u) goto L_08A55648;
    return;
L_08A55648:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A557C8;
      }
      goto L_08A55654;
    }
L_08A55654:
    ctx.gpr[31] = (0x08A5565Cu);
    // nop
    ctx.pc = 0x08B7304Cu;
    return;
L_08A5565C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A55694;
      }
      goto L_08A55664;
    }
L_08A55664:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(7368));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x08A55678u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A55678u) goto L_08A55678;
    return;
L_08A55678:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A55688u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem) && ctx.pc == 0x08A55688u) goto L_08A55688;
    return;
L_08A55688:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A557C0;
      }
      goto L_08A55694;
    }
L_08A55694:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08A556A8u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08A556A8u) goto L_08A556A8;
    return;
L_08A556A8:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (0u | 6144u);
    ctx.gpr[31] = (0x08A556B8u);
    ctx.gpr[5] = (0u | 48u);
    ctx.pc = 0x08B72FDCu;
    return;
L_08A556B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A556F0;
      }
      goto L_08A556C0;
    }
L_08A556C0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(7412));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x08A556D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A556D4u) goto L_08A556D4;
    return;
L_08A556D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A556E4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem) && ctx.pc == 0x08A556E4u) goto L_08A556E4;
    return;
L_08A556E4:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A557B8;
      }
      goto L_08A556F0;
    }
L_08A556F0:
    ctx.gpr[4] = (2213u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55700u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14952));
    ctx.pc = 0x08B72FACu;
    return;
L_08A55700:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A55740;
      }
      goto L_08A55708;
    }
L_08A55708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(7472));
    ctx.gpr[31] = (0x08A55724u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A55724u) goto L_08A55724;
    return;
L_08A55724:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A55734u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem) && ctx.pc == 0x08A55734u) goto L_08A55734;
    return;
L_08A55734:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A557B0;
      }
      goto L_08A55740;
    }
L_08A55740:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A5575Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7528));
    ctx.pc = 0x08B7341Cu;
    return;
L_08A5575C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2096), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A5579C;
      }
      goto L_08A55764;
    }
L_08A55764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(7548));
    ctx.gpr[31] = (0x08A55780u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A55780u) goto L_08A55780;
    return;
L_08A55780:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A55790u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem) && ctx.pc == 0x08A55790u) goto L_08A55790;
    return;
L_08A55790:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A557B0;
      }
      goto L_08A5579C;
    }
L_08A5579C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[31] = (0x08A557A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A560B0;
L_08A557A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A557E8;
      }
      goto L_08A557B0;
    }
L_08A557B0:
    ctx.gpr[31] = (0x08A557B8u);
    // nop
    ctx.pc = 0x08B72FD4u;
    return;
L_08A557B8:
    ctx.gpr[31] = (0x08A557C0u);
    // nop
    ctx.pc = 0x08B7302Cu;
    return;
L_08A557C0:
    ctx.gpr[31] = (0x08A557C8u);
    // nop
    ctx.pc = 0x08B73064u;
    return;
L_08A557C8:
    ctx.gpr[31] = (0x08A557D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 766u, 0x08B1B3B4u>(ctx, &aot_mem) && ctx.pc == 0x08A557D0u) goto L_08A557D0;
    return;
L_08A557D0:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-6096), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6176)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6172)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08A557E8;
L_08A557E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55800:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A55870;
      }
      goto L_08A55820;
    }
L_08A55820:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(7580));
    ctx.gpr[31] = (0x08A55830u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A55830u) goto L_08A55830;
    return;
L_08A55830:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A55840u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A55840u) goto L_08A55840;
    return;
L_08A55840:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5584Cu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08A564A4;
L_08A5584C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55868;
      }
      goto L_08A5585C;
    }
L_08A5585C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A55868u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A55868u) goto L_08A55868;
    return;
L_08A55868:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5599C;
      }
      goto L_08A55870;
    }
L_08A55870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5599C;
      }
      goto L_08A55880;
    }
L_08A55880:
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(104));
    goto L_08A5588C;
L_08A5588C:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(114));
    goto L_08A558C8;
L_08A558C8:
    ctx.gpr[9] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A558C8;
      }
      goto L_08A5590C;
    }
L_08A5590C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(152));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_08A5588C;
      }
      goto L_08A55920;
    }
L_08A55920:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[31] = (0x08A55960u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A54F34;
L_08A55960:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55994;
      }
      goto L_08A5596C;
    }
L_08A5596C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3164), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6144)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6140)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[31] = (0x08A5598Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A54034;
L_08A5598C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5599C;
      }
      goto L_08A55994;
    }
L_08A55994:
    ctx.gpr[31] = (0x08A5599Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A56210;
L_08A5599C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A559B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    goto L_08A559C8;
L_08A559C8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A55A20;
      }
      goto L_08A559D4;
    }
L_08A559D4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A559F4;
      }
      goto L_08A559E0;
    }
L_08A559E0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6104)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6100)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08A55A20;
      }
      goto L_08A559F4;
    }
L_08A559F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A55A0Cu);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    goto L_08A56418;
L_08A55A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A55A20;
L_08A55A20:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_08A559C8;
      }
      goto L_08A55A30;
    }
L_08A55A30:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55A3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55A44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A55A88;
      }
      goto L_08A55A6C;
    }
L_08A55A6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6144)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6140)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08A55A88;
L_08A55A88:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55A90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A55C44;
      }
      goto L_08A55ABC;
    }
L_08A55ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A55ACCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B73074u;
    return;
L_08A55ACC:
    ctx.gpr[31] = (0x08A55AD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A55AD4u) goto L_08A55AD4;
    return;
L_08A55AD4:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A55AE4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A55AE4u) goto L_08A55AE4;
    return;
L_08A55AE4:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A55AF8u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55AF8u) goto L_08A55AF8;
    return;
L_08A55AF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(125))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(126))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(128))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(129))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(130))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(131))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(132))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A55BBC;
      }
      goto L_08A55B50;
    }
L_08A55B50:
    ctx.gpr[31] = (0x08A55B58u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B72FE4u;
    return;
L_08A55B58:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A55BA8;
      }
      goto L_08A55B60;
    }
L_08A55B60:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(7608));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08A55B74u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A55B74u) goto L_08A55B74;
    return;
L_08A55B74:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A55B84u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A55B84u) goto L_08A55B84;
    return;
L_08A55B84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55B90u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A564A4;
L_08A55B90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55BA8;
      }
      goto L_08A55B9C;
    }
L_08A55B9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08A55BA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A55BA8u) goto L_08A55BA8;
    return;
L_08A55BA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6128)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6124)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A55C24;
      }
      goto L_08A55BBC;
    }
L_08A55BBC:
    ctx.gpr[31] = (0x08A55BC4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    ctx.pc = 0x08B72F9Cu;
    return;
L_08A55BC4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A55C14;
      }
      goto L_08A55BCC;
    }
L_08A55BCC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(7636));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A55BE0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A55BE0u) goto L_08A55BE0;
    return;
L_08A55BE0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A55BF0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A55BF0u) goto L_08A55BF0;
    return;
L_08A55BF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55BFCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A564A4;
L_08A55BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55C14;
      }
      goto L_08A55C08;
    }
L_08A55C08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A55C14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A55C14u) goto L_08A55C14;
    return;
L_08A55C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6120)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6116)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08A55C24;
L_08A55C24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55C3C;
      }
      goto L_08A55C30;
    }
L_08A55C30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A55C3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A55C3Cu) goto L_08A55C3C;
    return;
L_08A55C3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55CA0;
      }
      goto L_08A55C44;
    }
L_08A55C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55CA0;
      }
      goto L_08A55C54;
    }
L_08A55C54:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(7268));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08A55C68u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A55C68u) goto L_08A55C68;
    return;
L_08A55C68:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A55C78u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A55C78u) goto L_08A55C78;
    return;
L_08A55C78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55C84u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A55C84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55CA0;
      }
      goto L_08A55C94;
    }
L_08A55C94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08A55CA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A55CA0u) goto L_08A55CA0;
    return;
L_08A55CA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55CC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55D30;
      }
      goto L_08A55CDC;
    }
L_08A55CDC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(7672));
    ctx.gpr[31] = (0x08A55CF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A55CF0u) goto L_08A55CF0;
    return;
L_08A55CF0:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55D00u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A55D00u) goto L_08A55D00;
    return;
L_08A55D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A55D0Cu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08A564A4;
L_08A55D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55D28;
      }
      goto L_08A55D1C;
    }
L_08A55D1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A55D28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A55D28u) goto L_08A55D28;
    return;
L_08A55D28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55D54;
      }
      goto L_08A55D30;
    }
L_08A55D30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55D54;
      }
      goto L_08A55D40;
    }
L_08A55D40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6108)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A55D54;
L_08A55D54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55D64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(716), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(724), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A55DD8;
      }
      goto L_08A55D88;
    }
L_08A55D88:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(7700));
    ctx.gpr[31] = (0x08A55D98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A55D98u) goto L_08A55D98;
    return;
L_08A55D98:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A55DA8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A55DA8u) goto L_08A55DA8;
    return;
L_08A55DA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55DB4u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08A564A4;
L_08A55DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55DD0;
      }
      goto L_08A55DC4;
    }
L_08A55DC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A55DD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A55DD0u) goto L_08A55DD0;
    return;
L_08A55DD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55FF8;
      }
      goto L_08A55DD8;
    }
L_08A55DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55FF8;
      }
      goto L_08A55DE8;
    }
L_08A55DE8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[4] = (0u | 672u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(680));
    ctx.gpr[31] = (0x08A55E00u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.pc = 0x08B72FC4u;
    return;
L_08A55E00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A55E5C;
      }
      goto L_08A55E08;
    }
L_08A55E08:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(7732));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(684));
    ctx.gpr[31] = (0x08A55E1Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A55E1Cu) goto L_08A55E1C;
    return;
L_08A55E1C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A55E2Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A55E2Cu) goto L_08A55E2C;
    return;
L_08A55E2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55E38u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A55E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55E54;
      }
      goto L_08A55E48;
    }
L_08A55E48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    ctx.gpr[31] = (0x08A55E54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A55E54u) goto L_08A55E54;
    return;
L_08A55E54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55FF8;
      }
      goto L_08A55E5C;
    }
L_08A55E5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    ctx.gpr[17] = (0u | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
        goto L_08A55E6C;
    }
    goto L_08A55E6C;
L_08A55E6C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55EA0;
      }
      goto L_08A55E74;
    }
L_08A55E74:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A55E84u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem) && ctx.pc == 0x08A55E84u) goto L_08A55E84;
    return;
L_08A55E84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E94;
      }
      goto L_08A55E8C;
    }
L_08A55E8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55EA0;
      }
      goto L_08A55E94;
    }
L_08A55E94:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E74;
      }
      goto L_08A55EA0;
    }
L_08A55EA0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55F80;
      }
      goto L_08A55EA8;
    }
L_08A55EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55F1C;
      }
      goto L_08A55EC0;
    }
L_08A55EC0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(7764));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(692));
    ctx.gpr[31] = (0x08A55ED4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A55ED4u) goto L_08A55ED4;
    return;
L_08A55ED4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A55EE4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A55EE4u) goto L_08A55EE4;
    return;
L_08A55EE4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55EF0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A55EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55F0C;
      }
      goto L_08A55F00;
    }
L_08A55F00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[31] = (0x08A55F0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A55F0Cu) goto L_08A55F0C;
    return;
L_08A55F0C:
    ctx.gpr[31] = (0x08A55F14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 764u, 0x08A53F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55F14u) goto L_08A55F14;
    return;
L_08A55F14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55FF8;
      }
      goto L_08A55F1C;
    }
L_08A55F1C:
    ctx.gpr[31] = (0x08A55F24u);
    // nop
    ctx.pc = 0x08B72F9Cu;
    return;
L_08A55F24:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A55F78;
      }
      goto L_08A55F2C;
    }
L_08A55F2C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(7636));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(700));
    ctx.gpr[31] = (0x08A55F40u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A55F40u) goto L_08A55F40;
    return;
L_08A55F40:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A55F50u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A55F50u) goto L_08A55F50;
    return;
L_08A55F50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55F5Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A55F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55F78;
      }
      goto L_08A55F6C;
    }
L_08A55F6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[31] = (0x08A55F78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A55F78u) goto L_08A55F78;
    return;
L_08A55F78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55FF8;
      }
      goto L_08A55F80;
    }
L_08A55F80:
    ctx.gpr[31] = (0x08A55F88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B72FBCu;
    return;
L_08A55F88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A55FE4;
      }
      goto L_08A55F90;
    }
L_08A55F90:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(7800));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(708));
    ctx.gpr[31] = (0x08A55FA4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A55FA4u) goto L_08A55FA4;
    return;
L_08A55FA4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A55FB4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A55FB4u) goto L_08A55FB4;
    return;
L_08A55FB4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55FC0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A55FC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A55FDC;
      }
      goto L_08A55FD0;
    }
L_08A55FD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    ctx.gpr[31] = (0x08A55FDCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A55FDCu) goto L_08A55FDC;
    return;
L_08A55FDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55FF8;
      }
      goto L_08A55FE4;
    }
L_08A55FE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6128)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6124)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A55FF8;
L_08A55FF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(716)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56010:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56018:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56044;
      }
      goto L_08A56034;
    }
L_08A56034:
    ctx.gpr[31] = (0x08A5603Cu);
    // nop
    goto L_08A560B0;
L_08A5603C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A560A0;
      }
      goto L_08A56044;
    }
L_08A56044:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A560A0;
      }
      goto L_08A56054;
    }
L_08A56054:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(7268));
    ctx.gpr[31] = (0x08A56068u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A56068u) goto L_08A56068;
    return;
L_08A56068:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A56078u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A56078u) goto L_08A56078;
    return;
L_08A56078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A56084u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08A564A4;
L_08A56084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A560A0;
      }
      goto L_08A56094;
    }
L_08A56094:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08A560A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A560A0u) goto L_08A560A0;
    return;
L_08A560A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A560B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A560C8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_08A560FC;
L_08A560C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A560D8;
      }
      goto L_08A560D0;
    }
L_08A560D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A560EC;
      }
      goto L_08A560D8;
    }
L_08A560D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6136)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6132)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A560EC;
L_08A560EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A560FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A56130u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56130u) goto L_08A56130;
    return;
L_08A56130:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A56140u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08A56140u) goto L_08A56140;
    return;
L_08A56140:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[31] = (0x08A5614Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.pc = 0x08B72FA4u;
    return;
L_08A5614C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A561EC;
      }
      goto L_08A56154;
    }
L_08A56154:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(7828));
    ctx.gpr[31] = (0x08A56164u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A56164u) goto L_08A56164;
    return;
L_08A56164:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A56174u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A56174u) goto L_08A56174;
    return;
L_08A56174:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A56188u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A56188u) goto L_08A56188;
    return;
L_08A56188:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A561A0u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 7u, 0x08B6804Cu>(ctx, &aot_mem) && ctx.pc == 0x08A561A0u) goto L_08A561A0;
    return;
L_08A561A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A561ACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A564A4;
L_08A561AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A561C8;
      }
      goto L_08A561BC;
    }
L_08A561BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08A561C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A561C8u) goto L_08A561C8;
    return;
L_08A561C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A561E4;
      }
      goto L_08A561D8;
    }
L_08A561D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A561E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A561E4u) goto L_08A561E4;
    return;
L_08A561E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A561F0;
      }
      goto L_08A561EC;
    }
L_08A561EC:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A561F0;
L_08A561F0:
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
L_08A56210:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5622Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A552D8;
L_08A5622C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5623Cu);
    ctx.gpr[6] = (0u | 1064u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5623Cu) goto L_08A5623C;
    return;
L_08A5623C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2100));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5624Cu);
    ctx.gpr[6] = (0u | 1064u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5624Cu) goto L_08A5624C;
    return;
L_08A5624C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1156));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A5625Cu);
    ctx.gpr[6] = (0u | 938u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5625Cu) goto L_08A5625C;
    return;
L_08A5625C:
    ctx.gpr[31] = (0x08A56264u);
    ctx.gpr[4] = (0u | 13620u);
    ctx.pc = 0x08B72F54u;
    return;
L_08A56264:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A562C0;
      }
      goto L_08A5626C;
    }
L_08A5626C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(7160));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A56280u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A56280u) goto L_08A56280;
    return;
L_08A56280:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A56290u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A56290u) goto L_08A56290;
    return;
L_08A56290:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5629Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A5629C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A562B8;
      }
      goto L_08A562AC;
    }
L_08A562AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A562B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A562B8u) goto L_08A562B8;
    return;
L_08A562B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56400;
      }
      goto L_08A562C0;
    }
L_08A562C0:
    ctx.gpr[6] = (2213u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(14992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (15u << 16u);
    ctx.gpr[9] = (31u << 16u);
    ctx.gpr[11] = (8u << 16u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 4096u);
    ctx.gpr[10] = (0u | 3u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16960));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-31616));
    ctx.gpr[31] = (0x08A562FCu);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-24288));
    ctx.pc = 0x08B72F84u;
    return;
L_08A562FC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A56360;
      }
      goto L_08A56304;
    }
L_08A56304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(7196));
    ctx.gpr[31] = (0x08A56320u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A56320u) goto L_08A56320;
    return;
L_08A56320:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A56330u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A56330u) goto L_08A56330;
    return;
L_08A56330:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5633Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A5633C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A56358;
      }
      goto L_08A5634C;
    }
L_08A5634C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08A56358u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A56358u) goto L_08A56358;
    return;
L_08A56358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56400;
      }
      goto L_08A56360;
    }
L_08A56360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 8192u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[8] = (0u | 8192u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A56380u);
    ctx.gpr[10] = (0u | 0u);
    ctx.pc = 0x08B72F74u;
    return;
L_08A56380:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A563DC;
      }
      goto L_08A56388;
    }
L_08A56388:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(7236));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A5639Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08A5639Cu) goto L_08A5639C;
    return;
L_08A5639C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A563ACu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08A563ACu) goto L_08A563AC;
    return;
L_08A563AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A563B8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A564A4;
L_08A563B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A563D4;
      }
      goto L_08A563C8;
    }
L_08A563C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A563D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08A563D4u) goto L_08A563D4;
    return;
L_08A563D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56400;
      }
      goto L_08A563DC;
    }
L_08A563DC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6144)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6140)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    goto L_08A56400;
L_08A56400:
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
L_08A56418:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A56438u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08A56714;
L_08A56438:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A5646C;
      }
      goto L_08A56454;
    }
L_08A56454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A5646C;
      }
      goto L_08A56460;
    }
L_08A56460:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2100), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), 0u);
      if (branch_taken) {
          goto L_08A56484;
      }
      goto L_08A5646C;
    }
L_08A5646C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08A56478u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(2104));
    ctx.pc = 0x08B72F8Cu;
    return;
L_08A56478:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2100), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    goto L_08A56484;
L_08A56484:
    ctx.gpr[31] = (0x08A5648Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A56738;
L_08A5648C:
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
L_08A564A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A564C0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 764u, 0x08A53F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A564C0u) goto L_08A564C0;
    return;
L_08A564C0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A564D8u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem) && ctx.pc == 0x08A564D8u) goto L_08A564D8;
    return;
L_08A564D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A564EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5651Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A56714;
L_08A5651C:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(2104));
    goto L_08A5652C;
L_08A5652C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2100)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56540;
      }
      goto L_08A56538;
    }
L_08A56538:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A56558;
      }
      goto L_08A56540;
    }
L_08A56540:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A56550u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 23u, 0x08B58100u>(ctx, &aot_mem) && ctx.pc == 0x08A56550u) goto L_08A56550;
    return;
L_08A56550:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56574;
      }
      goto L_08A56558;
    }
L_08A56558:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(152));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_08A5652C;
      }
      goto L_08A5656C;
    }
L_08A5656C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5657C;
      }
      goto L_08A56574;
    }
L_08A56574:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A566F0;
      }
      goto L_08A5657C;
    }
L_08A5657C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A56598;
      }
      goto L_08A56584;
    }
L_08A56584:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A565C4;
      }
      goto L_08A56590;
    }
L_08A56590:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_08A565A8;
      }
      goto L_08A56598;
    }
L_08A56598:
    ctx.gpr[31] = (0x08A565A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A56738;
L_08A565A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A566F0;
      }
      goto L_08A565A8;
    }
L_08A565A8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A565C4;
      }
      goto L_08A565B0;
    }
L_08A565B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2213u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21964));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
      if (branch_taken) {
          goto L_08A566A0;
      }
      goto L_08A565C4;
    }
L_08A565C4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08A565D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B72FCCu;
    return;
L_08A565D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A5669C;
      }
      goto L_08A565D8;
    }
L_08A565D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x08A56610u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A54F5C;
L_08A56610:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(6));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56678;
      }
      goto L_08A56654;
    }
L_08A56654:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_08A5667C;
    }
    goto L_08A56664;
L_08A56664:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A5667C;
      }
      goto L_08A56674;
    }
L_08A56674:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A56678;
L_08A56678:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08A5667C;
L_08A5667C:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5669C;
      }
      goto L_08A5668C;
    }
L_08A5668C:
    ctx.gpr[31] = (0x08A56694u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A56738;
L_08A56694:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A566F0;
      }
      goto L_08A5669C;
    }
L_08A5669C:
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    goto L_08A566A0;
L_08A566A0:
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2100), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2104));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A566F0;
L_08A566F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56714:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5672Cu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B734BCu;
    return;
L_08A5672C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56738:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5674Cu);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B734A4u;
    return;
L_08A5674C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56758:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5678Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5678Cu) goto L_08A5678C;
    return;
L_08A5678C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6052)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6056)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6044)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6048)));
    goto L_08A567A0;
L_08A567A0:
    ctx.gpr[31] = (0x08A567A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08A567A8u) goto L_08A567A8;
    return;
L_08A567A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A567BCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A567BCu) goto L_08A567BC;
    return;
L_08A567BC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A567A0;
      }
      goto L_08A567FC;
    }
L_08A567FC:
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
L_08A56820:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56840;
      }
      goto L_08A56828;
    }
L_08A56828:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A568A8;
      }
      goto L_08A56840;
    }
L_08A56840:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A56864;
      }
      goto L_08A5684C;
    }
L_08A5684C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A568A8;
      }
      goto L_08A56864;
    }
L_08A56864:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A56888;
      }
      goto L_08A56870;
    }
L_08A56870:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A568A8;
      }
      goto L_08A56888;
    }
L_08A56888:
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A568A8;
      }
      goto L_08A56894;
    }
L_08A56894:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A568A8;
L_08A568A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A568B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A568F4;
      }
      goto L_08A568C0;
    }
L_08A568C0:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25876));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5868), 0u);
      if (branch_taken) {
          goto L_08A568E0;
      }
      goto L_08A568D4;
    }
L_08A568D4:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A568E0;
L_08A568E0:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A568F4;
      }
      goto L_08A568EC;
    }
L_08A568EC:
    ctx.gpr[31] = (0x08A568F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A568F4u) goto L_08A568F4;
    return;
L_08A568F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56900:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A56924u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A56714;
L_08A56924:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08A56AE8;
      }
      goto L_08A56934;
    }
L_08A56934:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08A5693C;
L_08A5693C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A56958;
      }
      goto L_08A56950;
    }
L_08A56950:
    ctx.gpr[31] = (0x08A56958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56958u) goto L_08A56958;
    return;
L_08A56958:
    ctx.gpr[31] = (0x08A56960u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08A54F5C;
L_08A56960:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56998;
      }
      goto L_08A56974;
    }
L_08A56974:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_08A5699C;
    }
    goto L_08A56984;
L_08A56984:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A5699C;
      }
      goto L_08A56994;
    }
L_08A56994:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A56998;
L_08A56998:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08A5699C;
L_08A5699C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A569C4;
      }
      goto L_08A569A4;
    }
L_08A569A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7072)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08A569C4;
L_08A569C4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A5693C;
      }
      goto L_08A569D4;
    }
L_08A569D4:
    ctx.gpr[31] = (0x08A569DCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem) && ctx.pc == 0x08A569DCu) goto L_08A569DC;
    return;
L_08A569DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A569ECu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x08A569ECu) goto L_08A569EC;
    return;
L_08A569EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A569FCu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem) && ctx.pc == 0x08A569FCu) goto L_08A569FC;
    return;
L_08A569FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A56A0Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem) && ctx.pc == 0x08A56A0Cu) goto L_08A56A0C;
    return;
L_08A56A0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A56A1Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 145u, 0x08ADC774u>(ctx, &aot_mem) && ctx.pc == 0x08A56A1Cu) goto L_08A56A1C;
    return;
L_08A56A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(54)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(110), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(122), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(37)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A56A74u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 149u, 0x08ADC794u>(ctx, &aot_mem) && ctx.pc == 0x08A56A74u) goto L_08A56A74;
    return;
L_08A56A74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A56A84u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem) && ctx.pc == 0x08A56A84u) goto L_08A56A84;
    return;
L_08A56A84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A56A94u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(123), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem) && ctx.pc == 0x08A56A94u) goto L_08A56A94;
    return;
L_08A56A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A56AA0;
L_08A56AA0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A56AACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 396u, 0x08ADD774u>(ctx, &aot_mem) && ctx.pc == 0x08A56AACu) goto L_08A56AAC;
    return;
L_08A56AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56AA0;
      }
      goto L_08A56AC8;
    }
L_08A56AC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A56BD8;
      }
      goto L_08A56AD4;
    }
L_08A56AD4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A56AE0u);
    ctx.gpr[5] = (0u | 136u);
    ctx.pc = 0x08B72F7Cu;
    return;
L_08A56AE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56BD8;
      }
      goto L_08A56AE8;
    }
L_08A56AE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A56AF8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 138u, 0x08ADC73Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56AF8u) goto L_08A56AF8;
    return;
L_08A56AF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A56B08u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 136u, 0x08ADC72Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56B08u) goto L_08A56B08;
    return;
L_08A56B08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A56B18u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56B18u) goto L_08A56B18;
    return;
L_08A56B18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A56B28u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 146u, 0x08ADC77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56B28u) goto L_08A56B28;
    return;
L_08A56B28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A56B38u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 144u, 0x08ADC76Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56B38u) goto L_08A56B38;
    return;
L_08A56B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(110)));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(113)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A56B84u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 148u, 0x08ADC78Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56B84u) goto L_08A56B84;
    return;
L_08A56B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(122)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A56BA0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(123)));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 150u, 0x08ADC79Cu>(ctx, &aot_mem) && ctx.pc == 0x08A56BA0u) goto L_08A56BA0;
    return;
L_08A56BA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A56BB0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 152u, 0x08ADC7ACu>(ctx, &aot_mem) && ctx.pc == 0x08A56BB0u) goto L_08A56BB0;
    return;
L_08A56BB0:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A56BB4;
L_08A56BB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(114)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56BB4;
      }
      goto L_08A56BD8;
    }
L_08A56BD8:
    ctx.gpr[31] = (0x08A56BE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A56738;
L_08A56BE0:
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
L_08A56C00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A56C58;
      }
      goto L_08A56C38;
    }
L_08A56C38:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
        goto L_08A56C5C;
    }
    goto L_08A56C44;
L_08A56C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2213u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23184));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A56D3C;
      }
      goto L_08A56C58;
    }
L_08A56C58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    goto L_08A56C5C;
L_08A56C5C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
        goto L_08A56C88;
    }
    goto L_08A56C64;
L_08A56C64:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
        goto L_08A56C88;
    }
    goto L_08A56C70;
L_08A56C70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2213u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23744));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A56D3C;
      }
      goto L_08A56C84;
    }
L_08A56C84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    goto L_08A56C88;
L_08A56C88:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
        goto L_08A56CB4;
    }
    goto L_08A56C90;
L_08A56C90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
        goto L_08A56CB4;
    }
    goto L_08A56C9C;
L_08A56C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2213u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23908));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A56D3C;
      }
      goto L_08A56CB0;
    }
L_08A56CB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    goto L_08A56CB4;
L_08A56CB4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56CDC;
      }
      goto L_08A56CBC;
    }
L_08A56CBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56CDC;
      }
      goto L_08A56CC8;
    }
L_08A56CC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2213u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24592));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A56D3C;
      }
      goto L_08A56CDC;
    }
L_08A56CDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A56CE8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A564EC;
L_08A56CE8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A56D34;
      }
      goto L_08A56CF4;
    }
L_08A56CF4:
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2100));
      if (branch_taken) {
          goto L_08A56F28;
      }
      goto L_08A56D18;
    }
L_08A56D18:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(7856)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56D34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56F30;
      }
      goto L_08A56D3C;
    }
L_08A56D3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56F30;
      }
      goto L_08A56D44;
    }
L_08A56D44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08A56D64;
      }
      goto L_08A56D54;
    }
L_08A56D54:
    ctx.gpr[31] = (0x08A56D5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A56738;
L_08A56D5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56F30;
      }
      goto L_08A56D64;
    }
L_08A56D64:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (0u | 136u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), 0u);
      if (branch_taken) {
          goto L_08A56E14;
      }
      goto L_08A56DA8;
    }
L_08A56DA8:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A56DC8;
      }
      goto L_08A56DB4;
    }
L_08A56DB4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[19];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A56DB4;
      }
      goto L_08A56DC8;
    }
L_08A56DC8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    goto L_08A56E14;
L_08A56E14:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A56E54u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08A54D38;
L_08A56E54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56D54;
      }
      goto L_08A56E5C;
    }
L_08A56E5C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A56E6C;
      }
      goto L_08A56E68;
    }
L_08A56E68:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A56E6C;
L_08A56E6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56D54;
      }
      goto L_08A56E74;
    }
L_08A56E74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56D54;
      }
      goto L_08A56E7C;
    }
L_08A56E7C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A56D54;
      }
      goto L_08A56EDC;
    }
L_08A56EDC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A56EF0;
      }
      goto L_08A56EE8;
    }
L_08A56EE8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A56D54;
      }
      goto L_08A56EF0;
    }
L_08A56EF0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A56F08;
      }
      goto L_08A56F00;
    }
L_08A56F00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56D54;
      }
      goto L_08A56F08;
    }
L_08A56F08:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A56F20;
      }
      goto L_08A56F18;
    }
L_08A56F18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56D54;
      }
      goto L_08A56F20;
    }
L_08A56F20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56D54;
      }
      goto L_08A56F28;
    }
L_08A56F28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56D54;
      }
      goto L_08A56F30;
    }
L_08A56F30:
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
L_08A56F50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A56F9C;
      }
      goto L_08A56F7C;
    }
L_08A56F7C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
        goto L_08A56FA0;
    }
    goto L_08A56F88;
L_08A56F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2213u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23184));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A57054;
      }
      goto L_08A56F9C;
    }
L_08A56F9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
    goto L_08A56FA0;
L_08A56FA0:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
        goto L_08A56FCC;
    }
    goto L_08A56FA8;
L_08A56FA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
        goto L_08A56FCC;
    }
    goto L_08A56FB4;
L_08A56FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2213u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23744));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A57054;
      }
      goto L_08A56FC8;
    }
L_08A56FC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
    goto L_08A56FCC;
L_08A56FCC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56FF4;
      }
      goto L_08A56FD4;
    }
L_08A56FD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56FF4;
      }
      goto L_08A56FE0;
    }
L_08A56FE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2213u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24592));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A57054;
      }
      goto L_08A56FF4;
    }
L_08A56FF4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A57000u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A564EC;
L_08A57000:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A5704C;
      }
      goto L_08A5700C;
    }
L_08A5700C:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2100));
      if (branch_taken) {
          goto L_08A57104;
      }
      goto L_08A57030;
    }
L_08A57030:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(7896)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5704C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57278;
      }
      goto L_08A57054;
    }
L_08A57054:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57278;
      }
      goto L_08A5705C;
    }
L_08A5705C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5709C;
      }
      goto L_08A57068;
    }
L_08A57068:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5709C;
      }
      goto L_08A57074;
    }
L_08A57074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2213u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23100));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5709C;
      }
      goto L_08A57088;
    }
L_08A57088:
    ctx.gpr[31] = (0x08A57090u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A54FEC;
L_08A57090:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 7 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
        goto L_08A570B0;
    }
    goto L_08A5709C;
L_08A5709C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08A570A8u);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.pc = 0x08B72F8Cu;
    return;
L_08A570A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57104;
      }
      goto L_08A570B0;
    }
L_08A570B0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A570F4u);
    ctx.gpr[7] = (0u | 0u);
    ctx.pc = 0x08B72F64u;
    return;
L_08A570F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A57104;
      }
      goto L_08A570FC;
    }
L_08A570FC:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A57104;
L_08A57104:
    ctx.gpr[31] = (0x08A5710Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A56738;
L_08A5710C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57278;
      }
      goto L_08A57114;
    }
L_08A57114:
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(6));
    ctx.gpr[31] = (0x08A571B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A54D38;
L_08A571B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A571C8u);
    ctx.gpr[5] = (0u | 136u);
    ctx.pc = 0x08B72F7Cu;
    return;
L_08A571C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57104;
      }
      goto L_08A571D0;
    }
L_08A571D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A571E8;
      }
      goto L_08A571E0;
    }
L_08A571E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A57104;
      }
      goto L_08A571E8;
    }
L_08A571E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A57200;
      }
      goto L_08A571F8;
    }
L_08A571F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57104;
      }
      goto L_08A57200;
    }
L_08A57200:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 255u);
      if (branch_taken) {
          goto L_08A57268;
      }
      goto L_08A57210;
    }
L_08A57210:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A57268u);
    ctx.gpr[5] = (0u | 136u);
    ctx.pc = 0x08B72F7Cu;
    return;
L_08A57268:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A57104;
      }
      goto L_08A57270;
    }
L_08A57270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57104;
      }
      goto L_08A57278;
    }
L_08A57278:
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
L_08A57294:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A572B4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 555u, 0x088079D0u>(ctx, &aot_mem) && ctx.pc == 0x08A572B4u) goto L_08A572B4;
    return;
L_08A572B4:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-5916));
    ctx.gpr[31] = (0x08A572C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 249u, 0x0889D344u>(ctx, &aot_mem) && ctx.pc == 0x08A572C4u) goto L_08A572C4;
    return;
L_08A572C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A572D0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 492u, 0x08807510u>(ctx, &aot_mem) && ctx.pc == 0x08A572D0u) goto L_08A572D0;
    return;
L_08A572D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A572E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A572F4u);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-5916));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem) && ctx.pc == 0x08A572F4u) goto L_08A572F4;
    return;
L_08A572F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57300:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A57340u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08A57340u) goto L_08A57340;
    return;
L_08A57340:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08A5735Cu);
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem) && ctx.pc == 0x08A5735Cu) goto L_08A5735C;
    return;
L_08A5735C:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A57374u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem) && ctx.pc == 0x08A57374u) goto L_08A57374;
    return;
L_08A57374:
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A57394u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08A57394u) goto L_08A57394;
    return;
L_08A57394:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A573BC;
      }
      goto L_08A573A0;
    }
L_08A573A0:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A573B4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 406u, 0x08932014u>(ctx, &aot_mem) && ctx.pc == 0x08A573B4u) goto L_08A573B4;
    return;
L_08A573B4:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    goto L_08A573BC;
L_08A573BC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (16224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 255u);
    ctx.gpr[31] = (0x08A573E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08A573E8u) goto L_08A573E8;
    return;
L_08A573E8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57454;
      }
      goto L_08A573F4;
    }
L_08A573F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A57400u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08A57400u) goto L_08A57400;
    return;
L_08A57400:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A57418u);
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08A57418u) goto L_08A57418;
    return;
L_08A57418:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A57430u);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08A57430u) goto L_08A57430;
    return;
L_08A57430:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A57448u);
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08A57448u) goto L_08A57448;
    return;
L_08A57448:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    goto L_08A57454;
L_08A57454:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5746Cu);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5746Cu) goto L_08A5746C;
    return;
L_08A5746C:
    ctx.gpr[31] = (0x08A57474u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08A57474u) goto L_08A57474;
    return;
L_08A57474:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57490;
      }
      goto L_08A57480;
    }
L_08A57480:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5748Cu);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08A5748Cu) goto L_08A5748C;
    return;
L_08A5748C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A57490;
L_08A57490:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08A5749Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08A5749Cu) goto L_08A5749C;
    return;
L_08A5749C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A574B8;
      }
      goto L_08A574A8;
    }
L_08A574A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A574B4u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08A574B4u) goto L_08A574B4;
    return;
L_08A574B4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A574B8;
L_08A574B8:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A574C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08A574C8u) goto L_08A574C8;
    return;
L_08A574C8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A574E4;
      }
      goto L_08A574D4;
    }
L_08A574D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A574E0u);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A574E0u) goto L_08A574E0;
    return;
L_08A574E0:
    ctx.gpr[17] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08A574E4;
L_08A574E4:
    ctx.gpr[31] = (0x08A574ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08A574ECu) goto L_08A574EC;
    return;
L_08A574EC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 12 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(51)));
        goto L_08A57510;
    }
    goto L_08A574F8;
L_08A574F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A57504u);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08A57504u) goto L_08A57504;
    return;
L_08A57504:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(51)));
    goto L_08A57510;
L_08A57510:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(50)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(49)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[6] << 8u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08A57564u);
    ctx.gpr[11] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 502u, 0x08A765B8u>(ctx, &aot_mem) && ctx.pc == 0x08A57564u) goto L_08A57564;
    return;
L_08A57564:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A57570u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08A57294;
L_08A57570:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A575AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A575C0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A572E4;
L_08A575C0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A575F8;
      }
      goto L_08A575CC;
    }
L_08A575CC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A575F8;
      }
      goto L_08A575DC;
    }
L_08A575DC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x08A575F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 550u, 0x08A76A38u>(ctx, &aot_mem) && ctx.pc == 0x08A575F0u) goto L_08A575F0;
    return;
L_08A575F0:
    ctx.gpr[4] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A575F8;
L_08A575F8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5760C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5762Cu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A572E4;
L_08A5762C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A576E4;
      }
      goto L_08A57638;
    }
L_08A57638:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2237u << 16u);
      if (branch_taken) {
          goto L_08A576E4;
      }
      goto L_08A57648;
    }
L_08A57648:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(180)));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5769C;
      }
      goto L_08A57668;
    }
L_08A57668:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08A57670;
L_08A57670:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
        goto L_08A57690;
    }
    goto L_08A57680;
L_08A57680:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A57694;
      }
      goto L_08A57690;
    }
L_08A57690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A57694;
L_08A57694:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08A57670;
    }
    goto L_08A5769C;
L_08A5769C:
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
        goto L_08A576C0;
    }
    goto L_08A576A4;
L_08A576A4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
        goto L_08A576C4;
    }
    goto L_08A576BC;
L_08A576BC:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A576C0;
L_08A576C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08A576C4;
L_08A576C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A576DCu);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08A576DCu) goto L_08A576DC;
    return;
L_08A576DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A576E8;
      }
      goto L_08A576E4;
    }
L_08A576E4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A576E8;
L_08A576E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A576FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5770Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A5770Cu) goto L_08A5770C;
    return;
L_08A5770C:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[31] = (0x08A57720u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 592u, 0x08A76D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A57720u) goto L_08A57720;
    return;
L_08A57720:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57730:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5774Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem) && ctx.pc == 0x08A5774Cu) goto L_08A5774C;
    return;
L_08A5774C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A57760u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 236u, 0x0887CCD4u>(ctx, &aot_mem) && ctx.pc == 0x08A57760u) goto L_08A57760;
    return;
L_08A57760:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57770:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A57780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 241u, 0x0887CD60u>(ctx, &aot_mem) && ctx.pc == 0x08A57780u) goto L_08A57780;
    return;
L_08A57780:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57790:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A577B4;
      }
      goto L_08A577A4;
    }
L_08A577A4:
    ctx.gpr[31] = (0x08A577ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08A577ACu) goto L_08A577AC;
    return;
L_08A577AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[5] = (2232u << 16u);
    goto L_08A577B4;
L_08A577B4:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-5916));
    ctx.gpr[31] = (0x08A577C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7936));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 270u, 0x08885284u>(ctx, &aot_mem) && ctx.pc == 0x08A577C0u) goto L_08A577C0;
    return;
L_08A577C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A577DC;
      }
      goto L_08A577CC;
    }
L_08A577CC:
    ctx.gpr[31] = (0x08A577D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08A577D4u) goto L_08A577D4;
    return;
L_08A577D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[5] = (2232u << 16u);
    goto L_08A577DC;
L_08A577DC:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A577E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8028));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 266u, 0x08885220u>(ctx, &aot_mem) && ctx.pc == 0x08A577E8u) goto L_08A577E8;
    return;
L_08A577E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A577F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A57814u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 555u, 0x088079D0u>(ctx, &aot_mem) && ctx.pc == 0x08A57814u) goto L_08A57814;
    return;
L_08A57814:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-5904));
    ctx.gpr[31] = (0x08A57824u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 249u, 0x0889D344u>(ctx, &aot_mem) && ctx.pc == 0x08A57824u) goto L_08A57824;
    return;
L_08A57824:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A57830u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 492u, 0x08807510u>(ctx, &aot_mem) && ctx.pc == 0x08A57830u) goto L_08A57830;
    return;
L_08A57830:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57844:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A57854u);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-5904));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem) && ctx.pc == 0x08A57854u) goto L_08A57854;
    return;
L_08A57854:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57860:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5789Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem) && ctx.pc == 0x08A5789Cu) goto L_08A5789C;
    return;
L_08A5789C:
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A578BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08A578BCu) goto L_08A578BC;
    return;
L_08A578BC:
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08A578E8;
      }
      goto L_08A578CC;
    }
L_08A578CC:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A578E0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 406u, 0x08932014u>(ctx, &aot_mem) && ctx.pc == 0x08A578E0u) goto L_08A578E0;
    return;
L_08A578E0:
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
    goto L_08A578E8;
L_08A578E8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (255u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A57904u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08A57904u) goto L_08A57904;
    return;
L_08A57904:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5794C;
      }
      goto L_08A57910;
    }
L_08A57910:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5791Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08A5791Cu) goto L_08A5791C;
    return;
L_08A5791C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A57930u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 155u, 0x08ADC7D8u>(ctx, &aot_mem) && ctx.pc == 0x08A57930u) goto L_08A57930;
    return;
L_08A57930:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_08A5794C;
L_08A5794C:
    ctx.gpr[31] = (0x08A57954u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08A57954u) goto L_08A57954;
    return;
L_08A57954:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57970;
      }
      goto L_08A57960;
    }
L_08A57960:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5796Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08A5796Cu) goto L_08A5796C;
    return;
L_08A5796C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A57970;
L_08A57970:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(208));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A57988u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 171u, 0x089414D8u>(ctx, &aot_mem) && ctx.pc == 0x08A57988u) goto L_08A57988;
    return;
L_08A57988:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A57994u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08A577F4;
L_08A57994:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A579BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A579D0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A57844;
L_08A579D0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57A08;
      }
      goto L_08A579DC;
    }
L_08A579DC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A57A08;
      }
      goto L_08A579EC;
    }
L_08A579EC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x08A57A00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 197u, 0x089416B0u>(ctx, &aot_mem) && ctx.pc == 0x08A57A00u) goto L_08A57A00;
    return;
L_08A57A00:
    ctx.gpr[4] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A57A08;
L_08A57A08:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57A1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-5952));
      if (branch_taken) {
          goto L_08A57A40;
      }
      goto L_08A57A30;
    }
L_08A57A30:
    ctx.gpr[31] = (0x08A57A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08A57A38u) goto L_08A57A38;
    return;
L_08A57A38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-5952));
    goto L_08A57A40;
L_08A57A40:
    ctx.gpr[31] = (0x08A57A48u);
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-5904));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 270u, 0x08885284u>(ctx, &aot_mem) && ctx.pc == 0x08A57A48u) goto L_08A57A48;
    return;
L_08A57A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A57A64;
      }
      goto L_08A57A54;
    }
L_08A57A54:
    ctx.gpr[31] = (0x08A57A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08A57A5Cu) goto L_08A57A5C;
    return;
L_08A57A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[5] = (2232u << 16u);
    goto L_08A57A64;
L_08A57A64:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A57A70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8084));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 266u, 0x08885220u>(ctx, &aot_mem) && ctx.pc == 0x08A57A70u) goto L_08A57A70;
    return;
L_08A57A70:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57A7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A57A98u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08A57A98u) goto L_08A57A98;
    return;
L_08A57A98:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57AA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A57AC4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08A57AC4u) goto L_08A57AC4;
    return;
L_08A57AC4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57AD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A57AF0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08A57AF0u) goto L_08A57AF0;
    return;
L_08A57AF0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57B00:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57B08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[8] = (2236u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1364)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(29704), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(29704));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1368)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A57B44u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08A57B44u) goto L_08A57B44;
    return;
L_08A57B44:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57B54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32304));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1360)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1344)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1364)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1348)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1368)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1352)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[17];
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(29704), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(29704));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A57BB4u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08A57BB4u) goto L_08A57BB4;
    return;
L_08A57BB4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57BC4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57BCC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57BD4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57BDC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57BE4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57BEC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57BF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A57C10u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08A57C10u) goto L_08A57C10;
    return;
L_08A57C10:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57C20:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    ctx.gpr[6] = (0u < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A57C3C;
      }
      goto L_08A57C34;
    }
L_08A57C34:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08A57C84;
      }
      goto L_08A57C3C;
    }
L_08A57C3C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(518));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(521)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A57C68;
      }
      goto L_08A57C5C;
    }
L_08A57C5C:
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A57C84;
      }
      goto L_08A57C68;
    }
L_08A57C68:
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C84;
      }
      goto L_08A57C80;
    }
L_08A57C80:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A57C84;
L_08A57C84:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57C8C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4188)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A57CA4;
      }
      goto L_08A57CA0;
    }
L_08A57CA0:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A57CA4;
L_08A57CA4:
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
          goto L_08A57CD0;
      }
      goto L_08A57CC8;
    }
L_08A57CC8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A57D18;
      }
      goto L_08A57CD0;
    }
L_08A57CD0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(518));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(521)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A57CFC;
      }
      goto L_08A57CF0;
    }
L_08A57CF0:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A57D18;
      }
      goto L_08A57CFC;
    }
L_08A57CFC:
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57D18;
      }
      goto L_08A57D14;
    }
L_08A57D14:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A57D18;
L_08A57D18:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57D20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A57D40u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08A57D40u) goto L_08A57D40;
    return;
L_08A57D40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4188), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57D60:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57D68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A57D84u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08A57D84u) goto L_08A57D84;
    return;
L_08A57D84:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57D94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A57DB0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08A57DB0u) goto L_08A57DB0;
    return;
L_08A57DB0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57DC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A57DDCu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08A57DDCu) goto L_08A57DDC;
    return;
L_08A57DDC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57DEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A57E08u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08A57E08u) goto L_08A57E08;
    return;
L_08A57E08:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57E18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A57E34u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08A57E34u) goto L_08A57E34;
    return;
L_08A57E34:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57E44:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4215), static_cast<std::uint8_t>(ctx.gpr[4]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57E54:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57E5C:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A57E7C;
      }
      goto L_08A57E74;
    }
L_08A57E74:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08A57E7C;
      }
      goto L_08A57E7C;
    }
L_08A57E7C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57E84:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
L_08A57E9C:
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
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
L_08A57EBC:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 4u, 3u);
      ctx.read_vfpu_vector_ct<8u, 3u>(vfpu_target_raw);
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
L_08A57EDC:
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
L_08A57F04:
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
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57F20:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
L_08A57F34:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
L_08A57F4C:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
L_08A57F64:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
L_08A57F80:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
L_08A57F9C:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
L_08A57FBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A57FDC;
      }
      goto L_08A57FD4;
    }
L_08A57FD4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A57FDC;
      }
      goto L_08A57FDC;
    }
L_08A57FDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57FE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 1u, 0x08A58004u>(ctx, &aot_mem); return;
      }
      goto L_08A57FFC;
    }
L_08A57FFC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 1u, 0x08A58004u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 1u, 0x08A58004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0148(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0148_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_148(Runtime &runtime) {
    runtime.register_generated_unit(148u, 0x08A54000u, 16384u, &recomp_unit_0148, &recomp_unit_0148_entry);
    runtime.register_function(0x08A54004u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5400Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54024u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54034u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54090u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54094u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A540ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A540F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54134u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5415Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54168u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54174u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54188u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54190u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54198u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54204u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5420Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54248u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54250u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5426Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5427Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54288u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54298u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A542A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A542ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A542CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A542D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A542E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A542F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54304u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54314u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54320u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54328u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54340u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54358u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54380u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54414u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54424u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54430u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54438u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54448u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54458u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54464u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54474u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54480u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54488u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5449Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54504u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5450Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54514u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5451Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5452Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5453Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54548u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54558u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54564u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5456Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54584u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54598u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54610u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54634u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5464Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54654u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54704u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54718u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5471Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54728u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5472Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54734u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54740u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5476Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54778u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54784u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54790u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5479Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5480Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54820u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54834u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54844u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54850u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5485Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54864u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5486Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54878u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54880u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54888u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54894u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54900u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54918u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54928u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54930u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54938u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54944u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5494Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54954u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54964u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54974u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5497Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54984u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54994u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A28u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A38u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A48u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54ABCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AD0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AD8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AFCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B40u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B74u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B80u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BBCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BC0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C74u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C80u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CC0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D0Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D38u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D80u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DB8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DD0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E0Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E38u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E40u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E48u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E80u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EBCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54ED4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F34u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F48u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FB8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FBCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FC0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FD0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55014u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55020u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55054u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55064u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55074u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55078u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5507Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5508Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55090u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55104u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55138u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55148u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55158u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5515Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55160u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55170u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5517Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55190u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55194u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55214u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5521Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55220u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55240u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55248u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55258u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5528Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55298u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55304u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5530Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55318u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55324u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5532Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55334u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55344u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55354u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55398u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55414u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55420u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55444u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55458u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55504u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5551Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55534u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55604u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5561Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55624u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55638u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55648u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55654u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5565Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55664u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55678u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55688u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55694u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A556A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A556B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A556C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A556D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A556E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A556F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55700u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55708u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55724u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55734u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55740u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5575Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55764u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55780u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55790u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5579Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55800u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55820u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55830u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55840u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5584Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5585Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55868u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55870u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55880u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5588Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A558C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5590Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55920u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55960u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5596Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5598Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55994u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5599Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A559B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A559C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A559D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A559E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A559F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A0Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A20u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55ABCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55ACCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55AD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55AE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55AF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B74u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BBCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BFCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55CA0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55CC0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55CDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55CF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D0Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D28u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D40u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D64u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DD0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DD8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E38u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E48u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E74u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E8Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55EA0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55EA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55EC0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55ED4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55EE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55EF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F0Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F40u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F80u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FC0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FD0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56010u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56018u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56034u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5603Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56044u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56054u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56068u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56078u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56084u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56094u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56130u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56140u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5614Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56154u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56164u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56174u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56188u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A561A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A561ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A561BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A561C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A561D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A561E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A561ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A561F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56210u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5622Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5623Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5624Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5625Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56264u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5626Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56280u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56290u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5629Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A562ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A562B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A562C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A562FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56304u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56320u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56330u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5633Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5634Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56358u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56360u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56380u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56388u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5639Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A563ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A563B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A563C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A563D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A563DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56400u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56418u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56438u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56454u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56460u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5646Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56478u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56484u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5648Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5651Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5652Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56538u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56540u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56550u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56558u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5656Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56574u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5657Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56584u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56590u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56598u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56610u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56654u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56664u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56674u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56678u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5667Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5668Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56694u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5669Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56714u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5672Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56738u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5674Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56758u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5678Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A567A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A567A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A567BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A567FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56820u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56828u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56840u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5684Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56864u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56870u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56888u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56894u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A568A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A568B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A568C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A568D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A568E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A568ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A568F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56900u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56924u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56934u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5693Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56950u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56958u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56960u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56974u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56984u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56994u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56998u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5699Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A0Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A74u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56AA0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56AACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56AC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56AD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56AE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56AE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56AF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B28u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B38u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BA0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BD8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C38u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C64u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CBCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D34u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D64u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56DA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56DB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56DC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E74u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56EDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56EE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56EF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F20u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F28u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FA0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57000u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5700Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57030u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5704Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57054u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5705Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57068u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57074u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57088u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57090u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5709Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57104u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5710Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57114u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57200u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57210u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57268u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57270u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57278u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57294u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57300u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57340u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5735Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57374u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57394u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57400u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57418u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57430u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57448u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57454u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5746Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57474u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57480u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5748Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57490u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5749Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57504u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57510u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57564u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57570u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5760Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5762Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57638u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57648u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57668u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57670u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57680u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57690u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57694u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5769Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5770Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57720u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57730u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5774Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57760u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57770u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57780u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57790u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57814u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57824u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57830u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57844u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57854u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57860u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5789Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A578BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A578CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A578E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A578E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57904u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57910u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5791Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57930u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5794Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57954u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57960u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5796Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57970u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57988u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57994u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A38u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A40u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A48u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A64u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C10u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C20u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C34u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C80u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C8Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CA0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CD0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CFCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D20u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D40u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57DB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57DC0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57DDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57DECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E34u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E74u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57EBCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57EDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F20u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F34u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F4Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F64u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F80u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57FBCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57FD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57FDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57FE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57FFCu, &recomp_unit_0148, "recomp_unit_0148");
}
} // namespace psprecomp
