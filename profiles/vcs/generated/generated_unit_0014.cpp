#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0014[4093] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9,
    0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0,
    0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0,
    0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 37, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 39, 0, 0, 40, 0, 41, 0, 0, 42, 0, 43, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0,
    0, 0, 0, 47, 0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 55,
    0, 56, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0, 0,
    0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    69, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0,
    76, 0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0,
    0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 89, 0, 0, 90, 0, 91, 0,
    0, 0, 92, 0, 0, 0, 93, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 0, 99, 0, 100, 0, 101, 0,
    0, 0, 102, 0, 103, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 113, 0, 0, 0, 114, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0,
    0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122,
    0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 131, 132, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0,
    0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 137, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 150, 0,
    0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161,
    0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0,
    0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 178,
    0, 0, 179, 0, 0, 0, 0, 180, 0, 0, 181, 182, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0,
    0, 188, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198,
    0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 203, 0,
    204, 0, 205, 0, 0, 206, 0, 207, 0, 208, 0, 209, 0, 0, 0, 210, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 214, 0, 215, 0, 216, 0,
    0, 0, 217, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220,
    0, 0, 0, 0, 221, 0, 0, 222, 0, 223, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0,
    0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 235, 0, 0, 0, 0, 0,
    236, 0, 237, 0, 238, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0,
    0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 248, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 260,
    0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0,
    0, 269, 270, 0, 271, 272, 0, 273, 0, 0, 274, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 0, 0, 281,
    0, 0, 0, 0, 0, 282, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 290,
    0, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0,
    0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0,
    0, 301, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0,
    0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 319, 0, 320, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0,
    0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 328, 0,
    0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333,
    0, 0, 0, 334, 0, 335, 0, 336, 0, 0, 337, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0,
    0, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 345, 0, 0, 346, 0, 347, 0, 0, 0, 348, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0,
    351, 0, 0, 352, 0, 0, 0, 353, 0, 0, 354, 0, 355, 0, 0, 0, 356, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 360,
    0, 0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 0, 364, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 369,
    0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 379, 0, 380, 0,
    0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 383, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 388, 0, 0,
    0, 0, 0, 389, 0, 390, 0, 391, 0, 392, 0, 393, 0, 394, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403,
    0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0,
    0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420,
    0, 421, 0, 0, 422, 0, 423, 0, 424, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0,
    0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0,
    434, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 441, 0, 0, 0,
    0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0,
    448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 0,
    454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0,
    0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0,
    475, 0, 0, 476, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0, 480, 0, 0, 481, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0,
    0, 485, 0, 0, 486, 0, 0, 487, 0, 0, 488, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 492, 0, 493, 0, 0, 494, 0,
    495, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 502, 0, 503, 0, 0,
    0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 510, 0, 0, 511, 0, 0,
    0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 516, 0, 0,
    0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 521,
    0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0,
    0, 0, 538, 0, 539, 0, 0, 540, 0, 0, 0, 541, 0, 542, 0, 543, 0, 544, 0, 545, 0, 546, 0, 0, 0, 547, 0, 0, 548, 0, 0, 0,
    0, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0,
    554, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 557, 0, 558, 0, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0, 0, 0, 562, 0, 0,
    563, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568,
    0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 571, 0, 0, 0, 572, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 0,
    0, 577, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 587, 0, 588, 0, 0, 589, 0, 0, 0, 0, 0, 0, 590,
    0, 0, 0, 0, 0, 591, 0, 592, 0, 0, 593, 0, 0, 0, 594, 0, 595, 0, 596, 0, 597, 0, 598, 0, 599, 0, 0, 0, 600, 0, 0, 601,
    0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0,
    0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 609, 0, 0, 0, 610, 0, 611, 0, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0, 614, 0, 0, 0,
    615, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 624, 0, 0, 0, 625, 0, 626, 0, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0,
    629, 0, 0, 0, 630, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 639, 0, 0, 0, 640, 0, 641, 0, 0, 642, 0, 0, 0, 0,
    0, 0, 643, 0, 644, 0, 645, 0, 646, 0, 647, 0, 0, 648, 0, 649, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 651, 0, 652,
    0, 653, 0, 654, 0, 655, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0,
    659, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 669, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 672, 0, 673, 0, 0, 0, 674, 0, 0, 675, 0, 676, 0, 0, 0, 0, 0, 0,
    677, 0, 678, 0, 679, 0, 0, 0, 680, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 683, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685,
    0, 686, 0, 0, 687, 0, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 691, 0, 692, 0,
    0, 0, 693, 0, 694, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 697, 0, 698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0,
    701, 0, 0, 702, 0, 0, 0, 0, 703, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706,
    0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 710, 0, 0, 0, 0, 711, 0, 0, 0, 712, 0, 713, 0, 0, 714, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 716, 0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 720, 0, 721,
    0, 0, 0, 722, 0, 0, 723, 0, 724, 0, 725, 0, 726, 0, 727, 0, 728, 0, 729, 0, 730, 0, 731, 0, 732, 0, 733, 0, 734, 0, 735, 0,
    0, 0, 736, 0, 737, 0, 0, 0, 738, 0, 739, 0, 740, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 743,
    0, 0, 0, 0, 0, 0, 744, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0,
    0, 748, 0, 0, 0, 0, 0, 0, 749, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 752, 0, 0, 753, 0, 0, 0, 0, 0, 0, 754, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 757, 0, 0, 758, 0, 0, 0, 0, 0, 0, 759, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 761, 0, 762, 0, 0, 0, 763,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0,
    767, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0,
    0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 774, 0, 0, 0, 0, 775, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 777, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0,
    0, 781, 0, 782, 0, 0, 783, 0, 784, 0, 0, 0, 785, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 787, 0, 788, 0, 0, 0, 789, 0, 0,
    0, 0, 790, 0, 0, 0, 0, 791, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793,
    0, 0, 0, 0, 0, 794, 0, 0, 795, 0, 0, 0, 0, 796, 0, 0, 797, 0, 0, 0, 0, 798, 799, 0, 800, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 804, 0, 0, 805, 0, 0, 0, 806, 0,
    807, 0, 808, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 811, 0, 0,
    0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 814, 0, 0, 0,
    0, 0, 0, 815, 0, 0, 0, 0, 816, 0, 817, 0, 0, 0, 818, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 821, 0, 0,
    0, 822, 0, 0, 0, 0, 0, 823, 0, 0, 0, 824, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 826, 0, 0, 827, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 830, 0,
    0, 0, 831, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 834, 0, 0, 0, 835, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0,
    0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 839, 0, 0, 840, 0, 0, 0, 0, 0,
    841, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 842, 0, 843, 0, 0, 0, 844, 0, 0, 0, 845, 0, 0, 0, 0, 0, 0, 846, 0,
    0, 0, 847, 0, 0, 0, 848, 0, 0, 0, 0, 0, 849, 0, 0, 0, 850, 0, 0, 0, 851, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 853, 0, 0, 0, 0, 0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 855, 0, 856, 0, 0, 0, 857, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 858, 0, 0, 0, 859, 0, 0, 860, 0, 861, 0, 0, 862,
    0, 863, 0, 0, 0, 864, 0, 0, 0, 865, 0, 0, 0, 866, 0, 0, 867, 0, 0, 0, 0, 868, 0, 869, 0, 0, 870, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 871, 0, 872, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 873, 0, 874, 0, 0, 0, 0, 0, 875, 0, 876, 0, 0, 0, 877, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 878,
    0, 0, 0, 879, 0, 0, 880, 0, 881, 0, 0, 882, 0, 883, 0, 0, 0, 884, 0, 0, 0, 885, 0, 0, 0, 886, 0, 0, 887,
};
void recomp_unit_0014_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0883C004u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0014[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0883C004;
    case 2u: goto L_0883C00C;
    case 3u: goto L_0883C01C;
    case 4u: goto L_0883C028;
    case 5u: goto L_0883C030;
    case 6u: goto L_0883C050;
    case 7u: goto L_0883C058;
    case 8u: goto L_0883C064;
    case 9u: goto L_0883C080;
    case 10u: goto L_0883C090;
    case 11u: goto L_0883C0A0;
    case 12u: goto L_0883C0B8;
    case 13u: goto L_0883C0C4;
    case 14u: goto L_0883C0E4;
    case 15u: goto L_0883C0F8;
    case 16u: goto L_0883C104;
    case 17u: goto L_0883C120;
    case 18u: goto L_0883C130;
    case 19u: goto L_0883C140;
    case 20u: goto L_0883C150;
    case 21u: goto L_0883C158;
    case 22u: goto L_0883C160;
    case 23u: goto L_0883C168;
    case 24u: goto L_0883C170;
    case 25u: goto L_0883C190;
    case 26u: goto L_0883C198;
    case 27u: goto L_0883C1BC;
    case 28u: goto L_0883C1F4;
    case 29u: goto L_0883C208;
    case 30u: goto L_0883C238;
    case 31u: goto L_0883C24C;
    case 32u: goto L_0883C254;
    case 33u: goto L_0883C28C;
    case 34u: goto L_0883C2A0;
    case 35u: goto L_0883C2D0;
    case 36u: goto L_0883C2E4;
    case 37u: goto L_0883C2E8;
    case 38u: goto L_0883C314;
    case 39u: goto L_0883C31C;
    case 40u: goto L_0883C328;
    case 41u: goto L_0883C330;
    case 42u: goto L_0883C33C;
    case 43u: goto L_0883C344;
    case 44u: goto L_0883C34C;
    case 45u: goto L_0883C35C;
    case 46u: goto L_0883C37C;
    case 47u: goto L_0883C390;
    case 48u: goto L_0883C398;
    case 49u: goto L_0883C3A0;
    case 50u: goto L_0883C3B4;
    case 51u: goto L_0883C3C0;
    case 52u: goto L_0883C3C8;
    case 53u: goto L_0883C3E4;
    case 54u: goto L_0883C3F8;
    case 55u: goto L_0883C400;
    case 56u: goto L_0883C408;
    case 57u: goto L_0883C41C;
    case 58u: goto L_0883C428;
    case 59u: goto L_0883C448;
    case 60u: goto L_0883C468;
    case 61u: goto L_0883C470;
    case 62u: goto L_0883C478;
    case 63u: goto L_0883C48C;
    case 64u: goto L_0883C4A0;
    case 65u: goto L_0883C4B8;
    case 66u: goto L_0883C4C0;
    case 67u: goto L_0883C4DC;
    case 68u: goto L_0883C4EC;
    case 69u: goto L_0883C504;
    case 70u: goto L_0883C50C;
    case 71u: goto L_0883C528;
    case 72u: goto L_0883C548;
    case 73u: goto L_0883C550;
    case 74u: goto L_0883C558;
    case 75u: goto L_0883C56C;
    case 76u: goto L_0883C584;
    case 77u: goto L_0883C58C;
    case 78u: goto L_0883C5A8;
    case 79u: goto L_0883C5C0;
    case 80u: goto L_0883C5CC;
    case 81u: goto L_0883C5DC;
    case 82u: goto L_0883C5F0;
    case 83u: goto L_0883C60C;
    case 84u: goto L_0883C618;
    case 85u: goto L_0883C630;
    case 86u: goto L_0883C63C;
    case 87u: goto L_0883C654;
    case 88u: goto L_0883C660;
    case 89u: goto L_0883C668;
    case 90u: goto L_0883C674;
    case 91u: goto L_0883C67C;
    case 92u: goto L_0883C68C;
    case 93u: goto L_0883C69C;
    case 94u: goto L_0883C6A4;
    case 95u: goto L_0883C6B0;
    case 96u: goto L_0883C6B8;
    case 97u: goto L_0883C6D4;
    case 98u: goto L_0883C6DC;
    case 99u: goto L_0883C6EC;
    case 100u: goto L_0883C6F4;
    case 101u: goto L_0883C6FC;
    case 102u: goto L_0883C70C;
    case 103u: goto L_0883C714;
    case 104u: goto L_0883C728;
    case 105u: goto L_0883C730;
    case 106u: goto L_0883C738;
    case 107u: goto L_0883C740;
    case 108u: goto L_0883C758;
    case 109u: goto L_0883C76C;
    case 110u: goto L_0883C780;
    case 111u: goto L_0883C794;
    case 112u: goto L_0883C7A8;
    case 113u: goto L_0883C7AC;
    case 114u: goto L_0883C7BC;
    case 115u: goto L_0883C7C4;
    case 116u: goto L_0883C7D4;
    case 117u: goto L_0883C7E8;
    case 118u: goto L_0883C7F0;
    case 119u: goto L_0883C80C;
    case 120u: goto L_0883C814;
    case 121u: goto L_0883C834;
    case 122u: goto L_0883C880;
    case 123u: goto L_0883C890;
    case 124u: goto L_0883C8A8;
    case 125u: goto L_0883C8E0;
    case 126u: goto L_0883C8E8;
    case 127u: goto L_0883C8F4;
    case 128u: goto L_0883C928;
    case 129u: goto L_0883C930;
    case 130u: goto L_0883C938;
    case 131u: goto L_0883C954;
    case 132u: goto L_0883C958;
    case 133u: goto L_0883C964;
    case 134u: goto L_0883C96C;
    case 135u: goto L_0883C990;
    case 136u: goto L_0883C99C;
    case 137u: goto L_0883C9AC;
    case 138u: goto L_0883C9B4;
    case 139u: goto L_0883C9BC;
    case 140u: goto L_0883C9E0;
    case 141u: goto L_0883C9EC;
    case 142u: goto L_0883CA14;
    case 143u: goto L_0883CA1C;
    case 144u: goto L_0883CA24;
    case 145u: goto L_0883CA30;
    case 146u: goto L_0883CA3C;
    case 147u: goto L_0883CA50;
    case 148u: goto L_0883CA64;
    case 149u: goto L_0883CA6C;
    case 150u: goto L_0883CA7C;
    case 151u: goto L_0883CA88;
    case 152u: goto L_0883CA90;
    case 153u: goto L_0883CA98;
    case 154u: goto L_0883CAA0;
    case 155u: goto L_0883CAAC;
    case 156u: goto L_0883CAB8;
    case 157u: goto L_0883CAC4;
    case 158u: goto L_0883CAD0;
    case 159u: goto L_0883CAE4;
    case 160u: goto L_0883CAF4;
    case 161u: goto L_0883CB00;
    case 162u: goto L_0883CB10;
    case 163u: goto L_0883CB2C;
    case 164u: goto L_0883CB34;
    case 165u: goto L_0883CB3C;
    case 166u: goto L_0883CB44;
    case 167u: goto L_0883CB60;
    case 168u: goto L_0883CB70;
    case 169u: goto L_0883CB7C;
    case 170u: goto L_0883CB8C;
    case 171u: goto L_0883CB98;
    case 172u: goto L_0883CBAC;
    case 173u: goto L_0883CBB8;
    case 174u: goto L_0883CBC4;
    case 175u: goto L_0883CBD0;
    case 176u: goto L_0883CBDC;
    case 177u: goto L_0883CBF0;
    case 178u: goto L_0883CC00;
    case 179u: goto L_0883CC0C;
    case 180u: goto L_0883CC20;
    case 181u: goto L_0883CC2C;
    case 182u: goto L_0883CC30;
    case 183u: goto L_0883CC44;
    case 184u: goto L_0883CC54;
    case 185u: goto L_0883CC64;
    case 186u: goto L_0883CC74;
    case 187u: goto L_0883CC7C;
    case 188u: goto L_0883CC88;
    case 189u: goto L_0883CC94;
    case 190u: goto L_0883CC9C;
    case 191u: goto L_0883CCAC;
    case 192u: goto L_0883CCBC;
    case 193u: goto L_0883CCCC;
    case 194u: goto L_0883CCDC;
    case 195u: goto L_0883CCEC;
    case 196u: goto L_0883CCFC;
    case 197u: goto L_0883CD44;
    case 198u: goto L_0883CD80;
    case 199u: goto L_0883CD88;
    case 200u: goto L_0883CDB8;
    case 201u: goto L_0883CDDC;
    case 202u: goto L_0883CDE4;
    case 203u: goto L_0883CDFC;
    case 204u: goto L_0883CE04;
    case 205u: goto L_0883CE0C;
    case 206u: goto L_0883CE18;
    case 207u: goto L_0883CE20;
    case 208u: goto L_0883CE28;
    case 209u: goto L_0883CE30;
    case 210u: goto L_0883CE40;
    case 211u: goto L_0883CE48;
    case 212u: goto L_0883CE58;
    case 213u: goto L_0883CE64;
    case 214u: goto L_0883CE6C;
    case 215u: goto L_0883CE74;
    case 216u: goto L_0883CE7C;
    case 217u: goto L_0883CE8C;
    case 218u: goto L_0883CE98;
    case 219u: goto L_0883CEA0;
    case 220u: goto L_0883CF00;
    case 221u: goto L_0883CF14;
    case 222u: goto L_0883CF20;
    case 223u: goto L_0883CF28;
    case 224u: goto L_0883CF34;
    case 225u: goto L_0883CF3C;
    case 226u: goto L_0883CF5C;
    case 227u: goto L_0883CF6C;
    case 228u: goto L_0883CF7C;
    case 229u: goto L_0883CF90;
    case 230u: goto L_0883CFAC;
    case 231u: goto L_0883CFB4;
    case 232u: goto L_0883CFBC;
    case 233u: goto L_0883CFDC;
    case 234u: goto L_0883CFE4;
    case 235u: goto L_0883CFEC;
    case 236u: goto L_0883D004;
    case 237u: goto L_0883D00C;
    case 238u: goto L_0883D014;
    case 239u: goto L_0883D02C;
    case 240u: goto L_0883D034;
    case 241u: goto L_0883D050;
    case 242u: goto L_0883D05C;
    case 243u: goto L_0883D06C;
    case 244u: goto L_0883D07C;
    case 245u: goto L_0883D088;
    case 246u: goto L_0883D098;
    case 247u: goto L_0883D0A8;
    case 248u: goto L_0883D0B4;
    case 249u: goto L_0883D0BC;
    case 250u: goto L_0883D0D0;
    case 251u: goto L_0883D0E0;
    case 252u: goto L_0883D0F0;
    case 253u: goto L_0883D130;
    case 254u: goto L_0883D138;
    case 255u: goto L_0883D158;
    case 256u: goto L_0883D160;
    case 257u: goto L_0883D168;
    case 258u: goto L_0883D170;
    case 259u: goto L_0883D178;
    case 260u: goto L_0883D180;
    case 261u: goto L_0883D18C;
    case 262u: goto L_0883D198;
    case 263u: goto L_0883D1A4;
    case 264u: goto L_0883D1AC;
    case 265u: goto L_0883D1B4;
    case 266u: goto L_0883D1D8;
    case 267u: goto L_0883D1DC;
    case 268u: goto L_0883D1E4;
    case 269u: goto L_0883D208;
    case 270u: goto L_0883D20C;
    case 271u: goto L_0883D214;
    case 272u: goto L_0883D218;
    case 273u: goto L_0883D220;
    case 274u: goto L_0883D22C;
    case 275u: goto L_0883D234;
    case 276u: goto L_0883D240;
    case 277u: goto L_0883D24C;
    case 278u: goto L_0883D258;
    case 279u: goto L_0883D264;
    case 280u: goto L_0883D270;
    case 281u: goto L_0883D280;
    case 282u: goto L_0883D298;
    case 283u: goto L_0883D2A0;
    case 284u: goto L_0883D2A8;
    case 285u: goto L_0883D2CC;
    case 286u: goto L_0883D2F0;
    case 287u: goto L_0883D320;
    case 288u: goto L_0883D370;
    case 289u: goto L_0883D378;
    case 290u: goto L_0883D380;
    case 291u: goto L_0883D394;
    case 292u: goto L_0883D3A4;
    case 293u: goto L_0883D3BC;
    case 294u: goto L_0883D3C4;
    case 295u: goto L_0883D3FC;
    case 296u: goto L_0883D418;
    case 297u: goto L_0883D428;
    case 298u: goto L_0883D434;
    case 299u: goto L_0883D460;
    case 300u: goto L_0883D470;
    case 301u: goto L_0883D488;
    case 302u: goto L_0883D490;
    case 303u: goto L_0883D49C;
    case 304u: goto L_0883D4A8;
    case 305u: goto L_0883D4C4;
    case 306u: goto L_0883D4D0;
    case 307u: goto L_0883D4D8;
    case 308u: goto L_0883D4E8;
    case 309u: goto L_0883D4F8;
    case 310u: goto L_0883D510;
    case 311u: goto L_0883D518;
    case 312u: goto L_0883D52C;
    case 313u: goto L_0883D538;
    case 314u: goto L_0883D55C;
    case 315u: goto L_0883D56C;
    case 316u: goto L_0883D580;
    case 317u: goto L_0883D5B0;
    case 318u: goto L_0883D5B8;
    case 319u: goto L_0883D5C0;
    case 320u: goto L_0883D5C8;
    case 321u: goto L_0883D5DC;
    case 322u: goto L_0883D5E8;
    case 323u: goto L_0883D60C;
    case 324u: goto L_0883D61C;
    case 325u: goto L_0883D630;
    case 326u: goto L_0883D660;
    case 327u: goto L_0883D668;
    case 328u: goto L_0883D67C;
    case 329u: goto L_0883D688;
    case 330u: goto L_0883D6AC;
    case 331u: goto L_0883D6BC;
    case 332u: goto L_0883D6D0;
    case 333u: goto L_0883D700;
    case 334u: goto L_0883D710;
    case 335u: goto L_0883D718;
    case 336u: goto L_0883D720;
    case 337u: goto L_0883D72C;
    case 338u: goto L_0883D740;
    case 339u: goto L_0883D748;
    case 340u: goto L_0883D758;
    case 341u: goto L_0883D764;
    case 342u: goto L_0883D770;
    case 343u: goto L_0883D794;
    case 344u: goto L_0883D7A0;
    case 345u: goto L_0883D7B0;
    case 346u: goto L_0883D7BC;
    case 347u: goto L_0883D7C4;
    case 348u: goto L_0883D7D4;
    case 349u: goto L_0883D7DC;
    case 350u: goto L_0883D7E8;
    case 351u: goto L_0883D804;
    case 352u: goto L_0883D810;
    case 353u: goto L_0883D820;
    case 354u: goto L_0883D82C;
    case 355u: goto L_0883D834;
    case 356u: goto L_0883D844;
    case 357u: goto L_0883D84C;
    case 358u: goto L_0883D858;
    case 359u: goto L_0883D874;
    case 360u: goto L_0883D880;
    case 361u: goto L_0883D890;
    case 362u: goto L_0883D89C;
    case 363u: goto L_0883D8A4;
    case 364u: goto L_0883D8B4;
    case 365u: goto L_0883D8BC;
    case 366u: goto L_0883D8C8;
    case 367u: goto L_0883D8E4;
    case 368u: goto L_0883D8F0;
    case 369u: goto L_0883D900;
    case 370u: goto L_0883D90C;
    case 371u: goto L_0883D918;
    case 372u: goto L_0883D924;
    case 373u: goto L_0883D93C;
    case 374u: goto L_0883D944;
    case 375u: goto L_0883D950;
    case 376u: goto L_0883D958;
    case 377u: goto L_0883D960;
    case 378u: goto L_0883D968;
    case 379u: goto L_0883D974;
    case 380u: goto L_0883D97C;
    case 381u: goto L_0883D988;
    case 382u: goto L_0883D99C;
    case 383u: goto L_0883D9AC;
    case 384u: goto L_0883D9B0;
    case 385u: goto L_0883D9C0;
    case 386u: goto L_0883D9E0;
    case 387u: goto L_0883D9EC;
    case 388u: goto L_0883D9F8;
    case 389u: goto L_0883DA10;
    case 390u: goto L_0883DA18;
    case 391u: goto L_0883DA20;
    case 392u: goto L_0883DA28;
    case 393u: goto L_0883DA30;
    case 394u: goto L_0883DA38;
    case 395u: goto L_0883DA50;
    case 396u: goto L_0883DA58;
    case 397u: goto L_0883DA74;
    case 398u: goto L_0883DA80;
    case 399u: goto L_0883DAA8;
    case 400u: goto L_0883DAB8;
    case 401u: goto L_0883DAD0;
    case 402u: goto L_0883DAF8;
    case 403u: goto L_0883DB00;
    case 404u: goto L_0883DB0C;
    case 405u: goto L_0883DB24;
    case 406u: goto L_0883DB34;
    case 407u: goto L_0883DB50;
    case 408u: goto L_0883DB78;
    case 409u: goto L_0883DB8C;
    case 410u: goto L_0883DB98;
    case 411u: goto L_0883DBB8;
    case 412u: goto L_0883DBC8;
    case 413u: goto L_0883DBDC;
    case 414u: goto L_0883DC04;
    case 415u: goto L_0883DC20;
    case 416u: goto L_0883DC34;
    case 417u: goto L_0883DC40;
    case 418u: goto L_0883DC4C;
    case 419u: goto L_0883DC58;
    case 420u: goto L_0883DC80;
    case 421u: goto L_0883DC88;
    case 422u: goto L_0883DC94;
    case 423u: goto L_0883DC9C;
    case 424u: goto L_0883DCA4;
    case 425u: goto L_0883DCAC;
    case 426u: goto L_0883DCC4;
    case 427u: goto L_0883DCE0;
    case 428u: goto L_0883DCEC;
    case 429u: goto L_0883DCF8;
    case 430u: goto L_0883DD18;
    case 431u: goto L_0883DD28;
    case 432u: goto L_0883DD3C;
    case 433u: goto L_0883DD64;
    case 434u: goto L_0883DD84;
    case 435u: goto L_0883DD98;
    case 436u: goto L_0883DDA4;
    case 437u: goto L_0883DDB0;
    case 438u: goto L_0883DDBC;
    case 439u: goto L_0883DDE4;
    case 440u: goto L_0883DDEC;
    case 441u: goto L_0883DDF4;
    case 442u: goto L_0883DE0C;
    case 443u: goto L_0883DE28;
    case 444u: goto L_0883DE34;
    case 445u: goto L_0883DE40;
    case 446u: goto L_0883DE60;
    case 447u: goto L_0883DE70;
    case 448u: goto L_0883DE84;
    case 449u: goto L_0883DEAC;
    case 450u: goto L_0883DECC;
    case 451u: goto L_0883DEE0;
    case 452u: goto L_0883DEEC;
    case 453u: goto L_0883DEF8;
    case 454u: goto L_0883DF04;
    case 455u: goto L_0883DF2C;
    case 456u: goto L_0883DF34;
    case 457u: goto L_0883DF3C;
    case 458u: goto L_0883DF54;
    case 459u: goto L_0883DF6C;
    case 460u: goto L_0883DF7C;
    case 461u: goto L_0883DF88;
    case 462u: goto L_0883DFA8;
    case 463u: goto L_0883DFBC;
    case 464u: goto L_0883DFC8;
    case 465u: goto L_0883DFD4;
    case 466u: goto L_0883DFE0;
    case 467u: goto L_0883E008;
    case 468u: goto L_0883E014;
    case 469u: goto L_0883E020;
    case 470u: goto L_0883E03C;
    case 471u: goto L_0883E044;
    case 472u: goto L_0883E04C;
    case 473u: goto L_0883E068;
    case 474u: goto L_0883E078;
    case 475u: goto L_0883E084;
    case 476u: goto L_0883E090;
    case 477u: goto L_0883E09C;
    case 478u: goto L_0883E0A8;
    case 479u: goto L_0883E0B4;
    case 480u: goto L_0883E0C0;
    case 481u: goto L_0883E0CC;
    case 482u: goto L_0883E0D8;
    case 483u: goto L_0883E0E4;
    case 484u: goto L_0883E0FC;
    case 485u: goto L_0883E108;
    case 486u: goto L_0883E114;
    case 487u: goto L_0883E120;
    case 488u: goto L_0883E12C;
    case 489u: goto L_0883E13C;
    case 490u: goto L_0883E148;
    case 491u: goto L_0883E158;
    case 492u: goto L_0883E168;
    case 493u: goto L_0883E170;
    case 494u: goto L_0883E17C;
    case 495u: goto L_0883E184;
    case 496u: goto L_0883E18C;
    case 497u: goto L_0883E1A4;
    case 498u: goto L_0883E1B4;
    case 499u: goto L_0883E1C0;
    case 500u: goto L_0883E1D4;
    case 501u: goto L_0883E1E4;
    case 502u: goto L_0883E1F0;
    case 503u: goto L_0883E1F8;
    case 504u: goto L_0883E210;
    case 505u: goto L_0883E220;
    case 506u: goto L_0883E22C;
    case 507u: goto L_0883E240;
    case 508u: goto L_0883E250;
    case 509u: goto L_0883E25C;
    case 510u: goto L_0883E26C;
    case 511u: goto L_0883E278;
    case 512u: goto L_0883E294;
    case 513u: goto L_0883E2BC;
    case 514u: goto L_0883E2DC;
    case 515u: goto L_0883E2EC;
    case 516u: goto L_0883E2F8;
    case 517u: goto L_0883E314;
    case 518u: goto L_0883E33C;
    case 519u: goto L_0883E35C;
    case 520u: goto L_0883E374;
    case 521u: goto L_0883E380;
    case 522u: goto L_0883E3A4;
    case 523u: goto L_0883E3D0;
    case 524u: goto L_0883E3D8;
    case 525u: goto L_0883E3E4;
    case 526u: goto L_0883E3F8;
    case 527u: goto L_0883E420;
    case 528u: goto L_0883E430;
    case 529u: goto L_0883E43C;
    case 530u: goto L_0883E444;
    case 531u: goto L_0883E460;
    case 532u: goto L_0883E494;
    case 533u: goto L_0883E4BC;
    case 534u: goto L_0883E4C8;
    case 535u: goto L_0883E4D4;
    case 536u: goto L_0883E4E8;
    case 537u: goto L_0883E4F4;
    case 538u: goto L_0883E50C;
    case 539u: goto L_0883E514;
    case 540u: goto L_0883E520;
    case 541u: goto L_0883E530;
    case 542u: goto L_0883E538;
    case 543u: goto L_0883E540;
    case 544u: goto L_0883E548;
    case 545u: goto L_0883E550;
    case 546u: goto L_0883E558;
    case 547u: goto L_0883E568;
    case 548u: goto L_0883E574;
    case 549u: goto L_0883E594;
    case 550u: goto L_0883E5A4;
    case 551u: goto L_0883E5B4;
    case 552u: goto L_0883E5C8;
    case 553u: goto L_0883E5F0;
    case 554u: goto L_0883E604;
    case 555u: goto L_0883E614;
    case 556u: goto L_0883E620;
    case 557u: goto L_0883E630;
    case 558u: goto L_0883E638;
    case 559u: goto L_0883E644;
    case 560u: goto L_0883E660;
    case 561u: goto L_0883E668;
    case 562u: goto L_0883E678;
    case 563u: goto L_0883E684;
    case 564u: goto L_0883E6A4;
    case 565u: goto L_0883E6B4;
    case 566u: goto L_0883E6C4;
    case 567u: goto L_0883E6D8;
    case 568u: goto L_0883E700;
    case 569u: goto L_0883E714;
    case 570u: goto L_0883E724;
    case 571u: goto L_0883E730;
    case 572u: goto L_0883E740;
    case 573u: goto L_0883E748;
    case 574u: goto L_0883E754;
    case 575u: goto L_0883E770;
    case 576u: goto L_0883E778;
    case 577u: goto L_0883E788;
    case 578u: goto L_0883E794;
    case 579u: goto L_0883E7B4;
    case 580u: goto L_0883E7C4;
    case 581u: goto L_0883E7D4;
    case 582u: goto L_0883E7E8;
    case 583u: goto L_0883E810;
    case 584u: goto L_0883E824;
    case 585u: goto L_0883E834;
    case 586u: goto L_0883E840;
    case 587u: goto L_0883E850;
    case 588u: goto L_0883E858;
    case 589u: goto L_0883E864;
    case 590u: goto L_0883E880;
    case 591u: goto L_0883E898;
    case 592u: goto L_0883E8A0;
    case 593u: goto L_0883E8AC;
    case 594u: goto L_0883E8BC;
    case 595u: goto L_0883E8C4;
    case 596u: goto L_0883E8CC;
    case 597u: goto L_0883E8D4;
    case 598u: goto L_0883E8DC;
    case 599u: goto L_0883E8E4;
    case 600u: goto L_0883E8F4;
    case 601u: goto L_0883E900;
    case 602u: goto L_0883E920;
    case 603u: goto L_0883E930;
    case 604u: goto L_0883E940;
    case 605u: goto L_0883E954;
    case 606u: goto L_0883E97C;
    case 607u: goto L_0883E990;
    case 608u: goto L_0883E9A0;
    case 609u: goto L_0883E9AC;
    case 610u: goto L_0883E9BC;
    case 611u: goto L_0883E9C4;
    case 612u: goto L_0883E9D0;
    case 613u: goto L_0883E9EC;
    case 614u: goto L_0883E9F4;
    case 615u: goto L_0883EA04;
    case 616u: goto L_0883EA10;
    case 617u: goto L_0883EA30;
    case 618u: goto L_0883EA40;
    case 619u: goto L_0883EA50;
    case 620u: goto L_0883EA64;
    case 621u: goto L_0883EA8C;
    case 622u: goto L_0883EAA0;
    case 623u: goto L_0883EAB0;
    case 624u: goto L_0883EABC;
    case 625u: goto L_0883EACC;
    case 626u: goto L_0883EAD4;
    case 627u: goto L_0883EAE0;
    case 628u: goto L_0883EAFC;
    case 629u: goto L_0883EB04;
    case 630u: goto L_0883EB14;
    case 631u: goto L_0883EB20;
    case 632u: goto L_0883EB40;
    case 633u: goto L_0883EB50;
    case 634u: goto L_0883EB60;
    case 635u: goto L_0883EB74;
    case 636u: goto L_0883EB9C;
    case 637u: goto L_0883EBB0;
    case 638u: goto L_0883EBC0;
    case 639u: goto L_0883EBCC;
    case 640u: goto L_0883EBDC;
    case 641u: goto L_0883EBE4;
    case 642u: goto L_0883EBF0;
    case 643u: goto L_0883EC0C;
    case 644u: goto L_0883EC14;
    case 645u: goto L_0883EC1C;
    case 646u: goto L_0883EC24;
    case 647u: goto L_0883EC2C;
    case 648u: goto L_0883EC38;
    case 649u: goto L_0883EC40;
    case 650u: goto L_0883EC58;
    case 651u: goto L_0883EC78;
    case 652u: goto L_0883EC80;
    case 653u: goto L_0883EC88;
    case 654u: goto L_0883EC90;
    case 655u: goto L_0883EC98;
    case 656u: goto L_0883ECB0;
    case 657u: goto L_0883ECDC;
    case 658u: goto L_0883ECF0;
    case 659u: goto L_0883ED04;
    case 660u: goto L_0883ED18;
    case 661u: goto L_0883ED30;
    case 662u: goto L_0883ED40;
    case 663u: goto L_0883ED58;
    case 664u: goto L_0883ED90;
    case 665u: goto L_0883EDA0;
    case 666u: goto L_0883EDB0;
    case 667u: goto L_0883EDC8;
    case 668u: goto L_0883EDEC;
    case 669u: goto L_0883EDF4;
    case 670u: goto L_0883EE1C;
    case 671u: goto L_0883EE2C;
    case 672u: goto L_0883EE3C;
    case 673u: goto L_0883EE44;
    case 674u: goto L_0883EE54;
    case 675u: goto L_0883EE60;
    case 676u: goto L_0883EE68;
    case 677u: goto L_0883EE84;
    case 678u: goto L_0883EE8C;
    case 679u: goto L_0883EE94;
    case 680u: goto L_0883EEA4;
    case 681u: goto L_0883EEB0;
    case 682u: goto L_0883EEC4;
    case 683u: goto L_0883EED0;
    case 684u: goto L_0883EED8;
    case 685u: goto L_0883EF00;
    case 686u: goto L_0883EF08;
    case 687u: goto L_0883EF14;
    case 688u: goto L_0883EF28;
    case 689u: goto L_0883EF38;
    case 690u: goto L_0883EF54;
    case 691u: goto L_0883EF74;
    case 692u: goto L_0883EF7C;
    case 693u: goto L_0883EF8C;
    case 694u: goto L_0883EF94;
    case 695u: goto L_0883EFA8;
    case 696u: goto L_0883EFB4;
    case 697u: goto L_0883EFC0;
    case 698u: goto L_0883EFC8;
    case 699u: goto L_0883EFD8;
    case 700u: goto L_0883EFF8;
    case 701u: goto L_0883F004;
    case 702u: goto L_0883F010;
    case 703u: goto L_0883F024;
    case 704u: goto L_0883F030;
    case 705u: goto L_0883F058;
    case 706u: goto L_0883F080;
    case 707u: goto L_0883F08C;
    case 708u: goto L_0883F094;
    case 709u: goto L_0883F0BC;
    case 710u: goto L_0883F0C4;
    case 711u: goto L_0883F0D8;
    case 712u: goto L_0883F0E8;
    case 713u: goto L_0883F0F0;
    case 714u: goto L_0883F0FC;
    case 715u: goto L_0883F124;
    case 716u: goto L_0883F12C;
    case 717u: goto L_0883F138;
    case 718u: goto L_0883F140;
    case 719u: goto L_0883F168;
    case 720u: goto L_0883F178;
    case 721u: goto L_0883F180;
    case 722u: goto L_0883F190;
    case 723u: goto L_0883F19C;
    case 724u: goto L_0883F1A4;
    case 725u: goto L_0883F1AC;
    case 726u: goto L_0883F1B4;
    case 727u: goto L_0883F1BC;
    case 728u: goto L_0883F1C4;
    case 729u: goto L_0883F1CC;
    case 730u: goto L_0883F1D4;
    case 731u: goto L_0883F1DC;
    case 732u: goto L_0883F1E4;
    case 733u: goto L_0883F1EC;
    case 734u: goto L_0883F1F4;
    case 735u: goto L_0883F1FC;
    case 736u: goto L_0883F20C;
    case 737u: goto L_0883F214;
    case 738u: goto L_0883F224;
    case 739u: goto L_0883F22C;
    case 740u: goto L_0883F234;
    case 741u: goto L_0883F23C;
    case 742u: goto L_0883F274;
    case 743u: goto L_0883F280;
    case 744u: goto L_0883F29C;
    case 745u: goto L_0883F2A8;
    case 746u: goto L_0883F2C8;
    case 747u: goto L_0883F2FC;
    case 748u: goto L_0883F308;
    case 749u: goto L_0883F324;
    case 750u: goto L_0883F330;
    case 751u: goto L_0883F350;
    case 752u: goto L_0883F388;
    case 753u: goto L_0883F394;
    case 754u: goto L_0883F3B0;
    case 755u: goto L_0883F3BC;
    case 756u: goto L_0883F3DC;
    case 757u: goto L_0883F414;
    case 758u: goto L_0883F420;
    case 759u: goto L_0883F43C;
    case 760u: goto L_0883F448;
    case 761u: goto L_0883F468;
    case 762u: goto L_0883F470;
    case 763u: goto L_0883F480;
    case 764u: goto L_0883F4B8;
    case 765u: goto L_0883F4E8;
    case 766u: goto L_0883F4F8;
    case 767u: goto L_0883F504;
    case 768u: goto L_0883F510;
    case 769u: goto L_0883F540;
    case 770u: goto L_0883F54C;
    case 771u: goto L_0883F57C;
    case 772u: goto L_0883F588;
    case 773u: goto L_0883F5B0;
    case 774u: goto L_0883F5BC;
    case 775u: goto L_0883F5D0;
    case 776u: goto L_0883F5DC;
    case 777u: goto L_0883F614;
    case 778u: goto L_0883F620;
    case 779u: goto L_0883F658;
    case 780u: goto L_0883F664;
    case 781u: goto L_0883F688;
    case 782u: goto L_0883F690;
    case 783u: goto L_0883F69C;
    case 784u: goto L_0883F6A4;
    case 785u: goto L_0883F6B4;
    case 786u: goto L_0883F6C0;
    case 787u: goto L_0883F6E0;
    case 788u: goto L_0883F6E8;
    case 789u: goto L_0883F6F8;
    case 790u: goto L_0883F70C;
    case 791u: goto L_0883F720;
    case 792u: goto L_0883F734;
    case 793u: goto L_0883F780;
    case 794u: goto L_0883F798;
    case 795u: goto L_0883F7A4;
    case 796u: goto L_0883F7B8;
    case 797u: goto L_0883F7C4;
    case 798u: goto L_0883F7D8;
    case 799u: goto L_0883F7DC;
    case 800u: goto L_0883F7E4;
    case 801u: goto L_0883F814;
    case 802u: goto L_0883F830;
    case 803u: goto L_0883F844;
    case 804u: goto L_0883F860;
    case 805u: goto L_0883F86C;
    case 806u: goto L_0883F87C;
    case 807u: goto L_0883F884;
    case 808u: goto L_0883F88C;
    case 809u: goto L_0883F898;
    case 810u: goto L_0883F8F0;
    case 811u: goto L_0883F8F8;
    case 812u: goto L_0883F91C;
    case 813u: goto L_0883F96C;
    case 814u: goto L_0883F974;
    case 815u: goto L_0883F990;
    case 816u: goto L_0883F9A4;
    case 817u: goto L_0883F9AC;
    case 818u: goto L_0883F9BC;
    case 819u: goto L_0883F9CC;
    case 820u: goto L_0883F9E8;
    case 821u: goto L_0883F9F8;
    case 822u: goto L_0883FA08;
    case 823u: goto L_0883FA20;
    case 824u: goto L_0883FA30;
    case 825u: goto L_0883FA40;
    case 826u: goto L_0883FA9C;
    case 827u: goto L_0883FAA8;
    case 828u: goto L_0883FAC0;
    case 829u: goto L_0883FAF4;
    case 830u: goto L_0883FAFC;
    case 831u: goto L_0883FB0C;
    case 832u: goto L_0883FB1C;
    case 833u: goto L_0883FB38;
    case 834u: goto L_0883FB48;
    case 835u: goto L_0883FB58;
    case 836u: goto L_0883FB68;
    case 837u: goto L_0883FB78;
    case 838u: goto L_0883FB88;
    case 839u: goto L_0883FBE0;
    case 840u: goto L_0883FBEC;
    case 841u: goto L_0883FC04;
    case 842u: goto L_0883FC38;
    case 843u: goto L_0883FC40;
    case 844u: goto L_0883FC50;
    case 845u: goto L_0883FC60;
    case 846u: goto L_0883FC7C;
    case 847u: goto L_0883FC8C;
    case 848u: goto L_0883FC9C;
    case 849u: goto L_0883FCB4;
    case 850u: goto L_0883FCC4;
    case 851u: goto L_0883FCD4;
    case 852u: goto L_0883FD30;
    case 853u: goto L_0883FD3C;
    case 854u: goto L_0883FD54;
    case 855u: goto L_0883FD88;
    case 856u: goto L_0883FD90;
    case 857u: goto L_0883FDA0;
    case 858u: goto L_0883FDD0;
    case 859u: goto L_0883FDE0;
    case 860u: goto L_0883FDEC;
    case 861u: goto L_0883FDF4;
    case 862u: goto L_0883FE00;
    case 863u: goto L_0883FE08;
    case 864u: goto L_0883FE18;
    case 865u: goto L_0883FE28;
    case 866u: goto L_0883FE38;
    case 867u: goto L_0883FE44;
    case 868u: goto L_0883FE58;
    case 869u: goto L_0883FE60;
    case 870u: goto L_0883FE6C;
    case 871u: goto L_0883FEC0;
    case 872u: goto L_0883FEC8;
    case 873u: goto L_0883FF1C;
    case 874u: goto L_0883FF24;
    case 875u: goto L_0883FF3C;
    case 876u: goto L_0883FF44;
    case 877u: goto L_0883FF54;
    case 878u: goto L_0883FF80;
    case 879u: goto L_0883FF90;
    case 880u: goto L_0883FF9C;
    case 881u: goto L_0883FFA4;
    case 882u: goto L_0883FFB0;
    case 883u: goto L_0883FFB8;
    case 884u: goto L_0883FFC8;
    case 885u: goto L_0883FFD8;
    case 886u: goto L_0883FFE8;
    case 887u: goto L_0883FFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0883C004:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C01C;
      }
      goto L_0883C00C;
    }
L_0883C00C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1760)));
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[24];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1520)));
      if (branch_taken) {
          goto L_0883C030;
      }
      goto L_0883C01C;
    }
L_0883C01C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1892)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1520)));
      if (branch_taken) {
          goto L_0883C030;
      }
      goto L_0883C028;
    }
L_0883C028:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1756)));
    ctx.fpr[24] = ctx.fpr[13] + ctx.fpr[24];
    goto L_0883C030;
L_0883C030:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 1146u, 0x0883BDF0u>(ctx, &aot_mem); return;
      }
      goto L_0883C050;
    }
L_0883C050:
    ctx.gpr[31] = (0x0883C058u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 161u, 0x08830CA4u>(ctx, &aot_mem) && ctx.pc == 0x0883C058u) goto L_0883C058;
    return;
L_0883C058:
    ctx.gpr[4] = (0u | 52u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(628)));
      if (branch_taken) {
          goto L_0883C080;
      }
      goto L_0883C064;
    }
L_0883C064:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0883C090;
      }
      goto L_0883C080;
    }
L_0883C080:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[20] = std::bit_cast<float>(0u);
    goto L_0883C090;
L_0883C090:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1852), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_0883C0E4;
    }
    goto L_0883C0A0;
L_0883C0A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1852), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1840), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0883C0B8u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1768)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem) && ctx.pc == 0x0883C0B8u) goto L_0883C0B8;
    return;
L_0883C0B8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0883C0C4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 74u, 0x08830574u>(ctx, &aot_mem) && ctx.pc == 0x0883C0C4u) goto L_0883C0C4;
    return;
L_0883C0C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(628)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[0];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[24];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1840)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1852)));
      if (branch_taken) {
          goto L_0883C120;
      }
      goto L_0883C0E4;
    }
L_0883C0E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1840), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0883C0F8u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1764)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem) && ctx.pc == 0x0883C0F8u) goto L_0883C0F8;
    return;
L_0883C0F8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0883C104u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 74u, 0x08830574u>(ctx, &aot_mem) && ctx.pc == 0x0883C104u) goto L_0883C104;
    return;
L_0883C104:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(628)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[0];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[24];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1840)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1852)));
    goto L_0883C120;
L_0883C120:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(628), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1813)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
      if (branch_taken) {
          goto L_0883C2E8;
      }
      goto L_0883C130;
    }
L_0883C130:
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C150;
      }
      goto L_0883C140;
    }
L_0883C140:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
      if (branch_taken) {
          goto L_0883C2E8;
      }
      goto L_0883C150;
    }
L_0883C150:
    ctx.gpr[31] = (0x0883C158u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x0883C158u) goto L_0883C158;
    return;
L_0883C158:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
      if (branch_taken) {
          goto L_0883C2E8;
      }
      goto L_0883C160;
    }
L_0883C160:
    ctx.gpr[31] = (0x0883C168u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x0883C168u) goto L_0883C168;
    return;
L_0883C168:
    ctx.gpr[31] = (0x0883C170u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 83u, 0x08830650u>(ctx, &aot_mem) && ctx.pc == 0x0883C170u) goto L_0883C170;
    return;
L_0883C170:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
      if (branch_taken) {
          goto L_0883C2E8;
      }
      goto L_0883C190;
    }
L_0883C190:
    ctx.gpr[31] = (0x0883C198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 72u, 0x0883053Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C198u) goto L_0883C198;
    return;
L_0883C198:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (17658u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17224u << 16u);
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0883C254;
      }
      goto L_0883C1BC;
    }
L_0883C1BC:
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1632), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1632));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1636), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0883C1F4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1636));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 47u, 0x08830368u>(ctx, &aot_mem) && ctx.pc == 0x0883C1F4u) goto L_0883C1F4;
    return;
L_0883C1F4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x0883C208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem) && ctx.pc == 0x0883C208u) goto L_0883C208;
    return;
L_0883C208:
    ctx.gpr[4] = (18076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] & 65535u);
    ctx.gpr[31] = (0x0883C238u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0883C238u) goto L_0883C238;
    return;
L_0883C238:
    ctx.gpr[5] = (ctx.gpr[17] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883C24Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 954u, 0x0898BB3Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C24Cu) goto L_0883C24C;
    return;
L_0883C24C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
      if (branch_taken) {
          goto L_0883C2E8;
      }
      goto L_0883C254;
    }
L_0883C254:
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1640));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1644), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0883C28Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1644));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 47u, 0x08830368u>(ctx, &aot_mem) && ctx.pc == 0x0883C28Cu) goto L_0883C28C;
    return;
L_0883C28C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x0883C2A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem) && ctx.pc == 0x0883C2A0u) goto L_0883C2A0;
    return;
L_0883C2A0:
    ctx.gpr[4] = (17820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] & 65535u);
    ctx.gpr[31] = (0x0883C2D0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0883C2D0u) goto L_0883C2D0;
    return;
L_0883C2D0:
    ctx.gpr[5] = (ctx.gpr[17] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883C2E4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 954u, 0x0898BB3Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C2E4u) goto L_0883C2E4;
    return;
L_0883C2E4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
    goto L_0883C2E8;
L_0883C2E8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(616))))));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883C344;
      }
      goto L_0883C314;
    }
L_0883C314:
    ctx.gpr[31] = (0x0883C31Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x0883C31Cu) goto L_0883C31C;
    return;
L_0883C31C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883C344;
      }
      goto L_0883C328;
    }
L_0883C328:
    ctx.gpr[31] = (0x0883C330u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x0883C330u) goto L_0883C330;
    return;
L_0883C330:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883C344;
      }
      goto L_0883C33C;
    }
L_0883C33C:
    ctx.gpr[31] = (0x0883C344u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 484u, 0x08B4652Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C344u) goto L_0883C344;
    return;
L_0883C344:
    ctx.gpr[31] = (0x0883C34Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x0883C34Cu) goto L_0883C34C;
    return;
L_0883C34C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883C35Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem) && ctx.pc == 0x0883C35Cu) goto L_0883C35C;
    return;
L_0883C35C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (17601u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C3C8;
      }
      goto L_0883C37C;
    }
L_0883C37C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C398;
      }
      goto L_0883C390;
    }
L_0883C390:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0883C398;
L_0883C398:
    ctx.gpr[31] = (0x0883C3A0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 109u, 0x088307E8u>(ctx, &aot_mem) && ctx.pc == 0x0883C3A0u) goto L_0883C3A0;
    return;
L_0883C3A0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C428;
      }
      goto L_0883C3B4;
    }
L_0883C3B4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x0883C3C0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem) && ctx.pc == 0x0883C3C0u) goto L_0883C3C0;
    return;
L_0883C3C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C428;
      }
      goto L_0883C3C8;
    }
L_0883C3C8:
    ctx.gpr[4] = (50435u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C428;
      }
      goto L_0883C3E4;
    }
L_0883C3E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C400;
      }
      goto L_0883C3F8;
    }
L_0883C3F8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0883C400;
L_0883C400:
    ctx.gpr[31] = (0x0883C408u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 109u, 0x088307E8u>(ctx, &aot_mem) && ctx.pc == 0x0883C408u) goto L_0883C408;
    return;
L_0883C408:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C428;
      }
      goto L_0883C41C;
    }
L_0883C41C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x0883C428u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem) && ctx.pc == 0x0883C428u) goto L_0883C428;
    return;
L_0883C428:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (17645u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C50C;
      }
      goto L_0883C448;
    }
L_0883C448:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0883C470;
      }
      goto L_0883C468;
    }
L_0883C468:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0883C470;
L_0883C470:
    ctx.gpr[31] = (0x0883C478u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 109u, 0x088307E8u>(ctx, &aot_mem) && ctx.pc == 0x0883C478u) goto L_0883C478;
    return;
L_0883C478:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C4C0;
      }
      goto L_0883C48C;
    }
L_0883C48C:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C4C0;
      }
      goto L_0883C4A0;
    }
L_0883C4A0:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[31] = (0x0883C4B8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem) && ctx.pc == 0x0883C4B8u) goto L_0883C4B8;
    return;
L_0883C4B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C5C0;
      }
      goto L_0883C4C0;
    }
L_0883C4C0:
    ctx.gpr[4] = (49097u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0883C5C0;
      }
      goto L_0883C4DC;
    }
L_0883C4DC:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C5C0;
      }
      goto L_0883C4EC;
    }
L_0883C4EC:
    ctx.gpr[4] = (49225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[31] = (0x0883C504u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem) && ctx.pc == 0x0883C504u) goto L_0883C504;
    return;
L_0883C504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C5C0;
      }
      goto L_0883C50C;
    }
L_0883C50C:
    ctx.gpr[4] = (50413u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C5C0;
      }
      goto L_0883C528;
    }
L_0883C528:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0883C550;
      }
      goto L_0883C548;
    }
L_0883C548:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0883C550;
L_0883C550:
    ctx.gpr[31] = (0x0883C558u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 109u, 0x088307E8u>(ctx, &aot_mem) && ctx.pc == 0x0883C558u) goto L_0883C558;
    return;
L_0883C558:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C58C;
      }
      goto L_0883C56C;
    }
L_0883C56C:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[31] = (0x0883C584u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem) && ctx.pc == 0x0883C584u) goto L_0883C584;
    return;
L_0883C584:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0883C5C0;
      }
      goto L_0883C58C;
    }
L_0883C58C:
    ctx.gpr[4] = (49097u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0883C5C0;
      }
      goto L_0883C5A8;
    }
L_0883C5A8:
    ctx.gpr[4] = (49225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[31] = (0x0883C5C0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem) && ctx.pc == 0x0883C5C0u) goto L_0883C5C0;
    return;
L_0883C5C0:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883C5CCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x0883C5CCu) goto L_0883C5CC;
    return;
L_0883C5CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C668;
      }
      goto L_0883C5DC;
    }
L_0883C5DC:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883C5F0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C5F0u) goto L_0883C5F0;
    return;
L_0883C5F0:
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(112));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1648));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883C60Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883C60Cu) goto L_0883C60C;
    return;
L_0883C60C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883C618u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883C618u) goto L_0883C618;
    return;
L_0883C618:
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883C630u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883C630u) goto L_0883C630;
    return;
L_0883C630:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883C63Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883C63Cu) goto L_0883C63C;
    return;
L_0883C63C:
    ctx.gpr[16] = (ctx.gpr[30] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883C654u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883C654u) goto L_0883C654;
    return;
L_0883C654:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883C660u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883C660u) goto L_0883C660;
    return;
L_0883C660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C7AC;
      }
      goto L_0883C668;
    }
L_0883C668:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1812)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883C7AC;
      }
      goto L_0883C674;
    }
L_0883C674:
    ctx.gpr[31] = (0x0883C67Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 191u, 0x08830E04u>(ctx, &aot_mem) && ctx.pc == 0x0883C67Cu) goto L_0883C67C;
    return;
L_0883C67C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[20])) && ctx.fpr[0] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C69C;
      }
      goto L_0883C68C;
    }
L_0883C68C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[30]) || std::isnan(ctx.fpr[20])) && ctx.fpr[30] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C6B0;
      }
      goto L_0883C69C;
    }
L_0883C69C:
    ctx.gpr[31] = (0x0883C6A4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x0883C6A4u) goto L_0883C6A4;
    return;
L_0883C6A4:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883C7AC;
      }
      goto L_0883C6B0;
    }
L_0883C6B0:
    ctx.gpr[31] = (0x0883C6B8u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 76u, 0x088305B0u>(ctx, &aot_mem) && ctx.pc == 0x0883C6B8u) goto L_0883C6B8;
    return;
L_0883C6B8:
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C7AC;
      }
      goto L_0883C6D4;
    }
L_0883C6D4:
    ctx.gpr[31] = (0x0883C6DCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 76u, 0x088305B0u>(ctx, &aot_mem) && ctx.pc == 0x0883C6DCu) goto L_0883C6DC;
    return;
L_0883C6DC:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C7AC;
      }
      goto L_0883C6EC;
    }
L_0883C6EC:
    ctx.gpr[31] = (0x0883C6F4u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x0883C6F4u) goto L_0883C6F4;
    return;
L_0883C6F4:
    ctx.gpr[31] = (0x0883C6FCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 76u, 0x088305B0u>(ctx, &aot_mem) && ctx.pc == 0x0883C6FCu) goto L_0883C6FC;
    return;
L_0883C6FC:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C7AC;
      }
      goto L_0883C70C;
    }
L_0883C70C:
    ctx.gpr[31] = (0x0883C714u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 151u, 0x08830B34u>(ctx, &aot_mem) && ctx.pc == 0x0883C714u) goto L_0883C714;
    return;
L_0883C714:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C740;
      }
      goto L_0883C728;
    }
L_0883C728:
    ctx.gpr[31] = (0x0883C730u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 152u, 0x08830B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C730u) goto L_0883C730;
    return;
L_0883C730:
    ctx.gpr[31] = (0x0883C738u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0883C738u) goto L_0883C738;
    return;
L_0883C738:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0883C7AC;
      }
      goto L_0883C740;
    }
L_0883C740:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1536)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C794;
      }
      goto L_0883C758;
    }
L_0883C758:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1540)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C794;
      }
      goto L_0883C76C;
    }
L_0883C76C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1544)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C794;
      }
      goto L_0883C780;
    }
L_0883C780:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1548)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C7AC;
      }
      goto L_0883C794;
    }
L_0883C794:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883C7A8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C7A8u) goto L_0883C7A8;
    return;
L_0883C7A8:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0883C7AC;
L_0883C7AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    ctx.gpr[17] = (512u << 16u);
    ctx.gpr[31] = (0x0883C7BCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem) && ctx.pc == 0x0883C7BCu) goto L_0883C7BC;
    return;
L_0883C7BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0883C99C;
      }
      goto L_0883C7C4;
    }
L_0883C7C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1654))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883C99C;
      }
      goto L_0883C7D4;
    }
L_0883C7D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883C99C;
      }
      goto L_0883C7E8;
    }
L_0883C7E8:
    ctx.gpr[31] = (0x0883C7F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem) && ctx.pc == 0x0883C7F0u) goto L_0883C7F0;
    return;
L_0883C7F0:
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883C80Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x0883C80Cu) goto L_0883C80C;
    return;
L_0883C80C:
    ctx.gpr[31] = (0x0883C814u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(120)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem) && ctx.pc == 0x0883C814u) goto L_0883C814;
    return;
L_0883C814:
    ctx.gpr[4] = (47875u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0883C834u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem) && ctx.pc == 0x0883C834u) goto L_0883C834;
    return;
L_0883C834:
    ctx.gpr[4] = (47441u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 84u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1712), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1713), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1714), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1715), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1664));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1680));
    ctx.gpr[5] = (49440u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883C880u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883C880u) goto L_0883C880;
    return;
L_0883C880:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883C890u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem) && ctx.pc == 0x0883C890u) goto L_0883C890;
    return;
L_0883C890:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1696));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883C8A8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883C8A8u) goto L_0883C8A8;
    return;
L_0883C8A8:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(1712));
    ctx.gpr[3] = (0u | 3000u);
    ctx.gpr[4] = (0u | 55u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0883C8E0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C8E0u) goto L_0883C8E0;
    return;
L_0883C8E0:
    ctx.gpr[31] = (0x0883C8E8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem) && ctx.pc == 0x0883C8E8u) goto L_0883C8E8;
    return;
L_0883C8E8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883C8F4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem) && ctx.pc == 0x0883C8F4u) goto L_0883C8F4;
    return;
L_0883C8F4:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0883C928u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem) && ctx.pc == 0x0883C928u) goto L_0883C928;
    return;
L_0883C928:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(72)));
        goto L_0883C958;
    }
    goto L_0883C930;
L_0883C930:
    ctx.gpr[31] = (0x0883C938u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem) && ctx.pc == 0x0883C938u) goto L_0883C938;
    return;
L_0883C938:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883C99C;
      }
      goto L_0883C954;
    }
L_0883C954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(72)));
    goto L_0883C958;
L_0883C958:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883C99C;
      }
      goto L_0883C964;
    }
L_0883C964:
    ctx.gpr[31] = (0x0883C96Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem) && ctx.pc == 0x0883C96Cu) goto L_0883C96C;
    return;
L_0883C96C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x0883C990u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 287u, 0x089E974Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C990u) goto L_0883C990;
    return;
L_0883C990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_0883C99C;
L_0883C99C:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x0883C9ACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem) && ctx.pc == 0x0883C9ACu) goto L_0883C9AC;
    return;
L_0883C9AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CA1C;
      }
      goto L_0883C9B4;
    }
L_0883C9B4:
    ctx.gpr[31] = (0x0883C9BCu);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1608)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem) && ctx.pc == 0x0883C9BCu) goto L_0883C9BC;
    return;
L_0883C9BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1640)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0883C9E0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 33u, 0x0883021Cu>(ctx, &aot_mem) && ctx.pc == 0x0883C9E0u) goto L_0883C9E0;
    return;
L_0883C9E0:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0883C9ECu);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1616)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem) && ctx.pc == 0x0883C9ECu) goto L_0883C9EC;
    return;
L_0883C9EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1640)));
    ctx.gpr[4] = (49171u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0883CA14u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 33u, 0x0883021Cu>(ctx, &aot_mem) && ctx.pc == 0x0883CA14u) goto L_0883CA14;
    return;
L_0883CA14:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(1616), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[23] = (0u | 1u);
    goto L_0883CA1C;
L_0883CA1C:
    ctx.gpr[31] = (0x0883CA24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(86))))));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 114u, 0x08830840u>(ctx, &aot_mem) && ctx.pc == 0x0883CA24u) goto L_0883CA24;
    return;
L_0883CA24:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883CA30u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem) && ctx.pc == 0x0883CA30u) goto L_0883CA30;
    return;
L_0883CA30:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0883CA3Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 68u, 0x088304BCu>(ctx, &aot_mem) && ctx.pc == 0x0883CA3Cu) goto L_0883CA3C;
    return;
L_0883CA3C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0883CA50u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883CA50u) goto L_0883CA50;
    return;
L_0883CA50:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883CA64u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 38u, 0x08830268u>(ctx, &aot_mem) && ctx.pc == 0x0883CA64u) goto L_0883CA64;
    return;
L_0883CA64:
    ctx.gpr[31] = (0x0883CA6Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883CA6Cu) goto L_0883CA6C;
    return;
L_0883CA6C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883CA7Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem) && ctx.pc == 0x0883CA7Cu) goto L_0883CA7C;
    return;
L_0883CA7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x0883CA88u);
    ctx.gpr[5] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem) && ctx.pc == 0x0883CA88u) goto L_0883CA88;
    return;
L_0883CA88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CB00;
      }
      goto L_0883CA90;
    }
L_0883CA90:
    ctx.gpr[31] = (0x0883CA98u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 107u, 0x088307D8u>(ctx, &aot_mem) && ctx.pc == 0x0883CA98u) goto L_0883CA98;
    return;
L_0883CA98:
    ctx.gpr[31] = (0x0883CAA0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883CAA0u) goto L_0883CAA0;
    return;
L_0883CAA0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883CAACu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883CAACu) goto L_0883CAAC;
    return;
L_0883CAAC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1728));
    ctx.gpr[31] = (0x0883CAB8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 107u, 0x088307D8u>(ctx, &aot_mem) && ctx.pc == 0x0883CAB8u) goto L_0883CAB8;
    return;
L_0883CAB8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883CAC4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem) && ctx.pc == 0x0883CAC4u) goto L_0883CAC4;
    return;
L_0883CAC4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0883CAD0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 68u, 0x088304BCu>(ctx, &aot_mem) && ctx.pc == 0x0883CAD0u) goto L_0883CAD0;
    return;
L_0883CAD0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1744));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0883CAE4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883CAE4u) goto L_0883CAE4;
    return;
L_0883CAE4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883CAF4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 38u, 0x08830268u>(ctx, &aot_mem) && ctx.pc == 0x0883CAF4u) goto L_0883CAF4;
    return;
L_0883CAF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883CB00u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883CB00u) goto L_0883CB00;
    return;
L_0883CB00:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1760));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1776));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    goto L_0883CB10;
L_0883CB10:
    ctx.gpr[18] = (ctx.gpr[17] << 2u);
    ctx.gpr[18] = (ctx.gpr[30] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1552)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883CC30;
      }
      goto L_0883CB2C;
    }
L_0883CB2C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CB44;
      }
      goto L_0883CB34;
    }
L_0883CB34:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_0883CB44;
      }
      goto L_0883CB3C;
    }
L_0883CB3C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883CC30;
      }
      goto L_0883CB44;
    }
L_0883CB44:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[16] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0883CB60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883CB60u) goto L_0883CB60;
    return;
L_0883CB60:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1844), ctx.gpr[22]);
    ctx.gpr[31] = (0x0883CB70u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883CB70u) goto L_0883CB70;
    return;
L_0883CB70:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883CB7Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem) && ctx.pc == 0x0883CB7Cu) goto L_0883CB7C;
    return;
L_0883CB7C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0883CB8Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem) && ctx.pc == 0x0883CB8Cu) goto L_0883CB8C;
    return;
L_0883CB8C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883CB98u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883CB98u) goto L_0883CB98;
    return;
L_0883CB98:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0883CBACu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 158u, 0x08830C0Cu>(ctx, &aot_mem) && ctx.pc == 0x0883CBACu) goto L_0883CBAC;
    return;
L_0883CBAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883CBB8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883CBB8u) goto L_0883CBB8;
    return;
L_0883CBB8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1892)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1844)));
      if (branch_taken) {
          goto L_0883CBD0;
      }
      goto L_0883CBC4;
    }
L_0883CBC4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883CC00;
      }
      goto L_0883CBD0;
    }
L_0883CBD0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0883CBDCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem) && ctx.pc == 0x0883CBDCu) goto L_0883CBDC;
    return;
L_0883CBDC:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883CBF0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 209u, 0x08B00C34u>(ctx, &aot_mem) && ctx.pc == 0x0883CBF0u) goto L_0883CBF0;
    return;
L_0883CBF0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1636), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1604)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
      if (branch_taken) {
          goto L_0883CC2C;
      }
      goto L_0883CC00;
    }
L_0883CC00:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0883CC0Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem) && ctx.pc == 0x0883CC0Cu) goto L_0883CC0C;
    return;
L_0883CC0C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883CC20u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 209u, 0x08B00C34u>(ctx, &aot_mem) && ctx.pc == 0x0883CC20u) goto L_0883CC20;
    return;
L_0883CC20:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1636), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1604)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    goto L_0883CC2C;
L_0883CC2C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1604), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0883CC30;
L_0883CC30:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883CB10;
      }
      goto L_0883CC44;
    }
L_0883CC44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-950));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883CC7C;
      }
      goto L_0883CC54;
    }
L_0883CC54:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x0883CC64u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 246u, 0x088455CCu>(ctx, &aot_mem) && ctx.pc == 0x0883CC64u) goto L_0883CC64;
    return;
L_0883CC64:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x0883CC74u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 246u, 0x088455CCu>(ctx, &aot_mem) && ctx.pc == 0x0883CC74u) goto L_0883CC74;
    return;
L_0883CC74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CCFC;
      }
      goto L_0883CC7C;
    }
L_0883CC7C:
    ctx.gpr[5] = (0u | 246u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883CCFC;
      }
      goto L_0883CC88;
    }
L_0883CC88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x0883CC94u);
    ctx.gpr[5] = (512u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem) && ctx.pc == 0x0883CC94u) goto L_0883CC94;
    return;
L_0883CC94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883CCFC;
      }
      goto L_0883CC9C;
    }
L_0883CC9C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x0883CCACu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 246u, 0x088455CCu>(ctx, &aot_mem) && ctx.pc == 0x0883CCACu) goto L_0883CCAC;
    return;
L_0883CCAC:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x0883CCBCu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 246u, 0x088455CCu>(ctx, &aot_mem) && ctx.pc == 0x0883CCBCu) goto L_0883CCBC;
    return;
L_0883CCBC:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[31] = (0x0883CCCCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 246u, 0x088455CCu>(ctx, &aot_mem) && ctx.pc == 0x0883CCCCu) goto L_0883CCCC;
    return;
L_0883CCCC:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x0883CCDCu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 246u, 0x088455CCu>(ctx, &aot_mem) && ctx.pc == 0x0883CCDCu) goto L_0883CCDC;
    return;
L_0883CCDC:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x0883CCECu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 246u, 0x088455CCu>(ctx, &aot_mem) && ctx.pc == 0x0883CCECu) goto L_0883CCEC;
    return;
L_0883CCEC:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[31] = (0x0883CCFCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 246u, 0x088455CCu>(ctx, &aot_mem) && ctx.pc == 0x0883CCFCu) goto L_0883CCFC;
    return;
L_0883CCFC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1856)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1860)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1864)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1868)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1872)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1876)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1880)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1884)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1888)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1892)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1896)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1900)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1904)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1908)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1916)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1920));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883CD44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x0883CD80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0883CD80u) goto L_0883CD80;
    return;
L_0883CD80:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0883CDB8;
      }
      goto L_0883CD88;
    }
L_0883CD88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883CE04;
      }
      goto L_0883CDB8;
    }
L_0883CDB8:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0883CDDCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0883CDDCu) goto L_0883CDDC;
    return;
L_0883CDDC:
    ctx.gpr[31] = (0x0883CDE4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 392u, 0x0898D168u>(ctx, &aot_mem) && ctx.pc == 0x0883CDE4u) goto L_0883CDE4;
    return;
L_0883CDE4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[28] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0883CE0C;
      }
      goto L_0883CDFC;
    }
L_0883CDFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CE6C;
      }
      goto L_0883CE04;
    }
L_0883CE04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D2F0;
      }
      goto L_0883CE0C;
    }
L_0883CE0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CE58;
      }
      goto L_0883CE18;
    }
L_0883CE18:
    ctx.gpr[31] = (0x0883CE20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0883CE20u) goto L_0883CE20;
    return;
L_0883CE20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CE58;
      }
      goto L_0883CE28;
    }
L_0883CE28:
    ctx.gpr[31] = (0x0883CE30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0883CE30u) goto L_0883CE30;
    return;
L_0883CE30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 130u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883CE6C;
      }
      goto L_0883CE40;
    }
L_0883CE40:
    ctx.gpr[31] = (0x0883CE48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0883CE48u) goto L_0883CE48;
    return;
L_0883CE48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 131u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883CE6C;
      }
      goto L_0883CE58;
    }
L_0883CE58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883CE64u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x0883CE64u) goto L_0883CE64;
    return;
L_0883CE64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883CE8C;
      }
      goto L_0883CE6C;
    }
L_0883CE6C:
    ctx.gpr[31] = (0x0883CE74u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0883CE74u) goto L_0883CE74;
    return;
L_0883CE74:
    ctx.gpr[31] = (0x0883CE7Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 367u, 0x0898D050u>(ctx, &aot_mem) && ctx.pc == 0x0883CE7Cu) goto L_0883CE7C;
    return;
L_0883CE7C:
    ctx.gpr[5] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x0883CE8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x0883CE8Cu) goto L_0883CE8C;
    return;
L_0883CE8C:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.gpr[31] = (0x0883CE98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0883CE98u) goto L_0883CE98;
    return;
L_0883CE98:
    ctx.gpr[31] = (0x0883CEA0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem) && ctx.pc == 0x0883CEA0u) goto L_0883CEA0;
    return;
L_0883CEA0:
    ctx.gpr[4] = (0u - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-29796), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
        goto L_0883CF00;
    }
    goto L_0883CF00;
L_0883CF00:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0883CF14;
    }
    goto L_0883CF14;
L_0883CF14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0883CF20u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0883CF20u) goto L_0883CF20;
    return;
L_0883CF20:
    ctx.gpr[31] = (0x0883CF28u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem) && ctx.pc == 0x0883CF28u) goto L_0883CF28;
    return;
L_0883CF28:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883CF34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0883CF34u) goto L_0883CF34;
    return;
L_0883CF34:
    ctx.gpr[31] = (0x0883CF3Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem) && ctx.pc == 0x0883CF3Cu) goto L_0883CF3C;
    return;
L_0883CF3C:
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[26] = ctx.fpr[26] / ctx.fpr[24];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-950));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883CF7C;
      }
      goto L_0883CF5C;
    }
L_0883CF5C:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883CF7C;
      }
      goto L_0883CF6C;
    }
L_0883CF6C:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    goto L_0883CF7C;
L_0883CF7C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
        goto L_0883CF90;
    }
    goto L_0883CF90;
L_0883CF90:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883D05C;
      }
      goto L_0883CFAC;
    }
L_0883CFAC:
    ctx.gpr[31] = (0x0883CFB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0883CFB4u) goto L_0883CFB4;
    return;
L_0883CFB4:
    ctx.gpr[31] = (0x0883CFBCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem) && ctx.pc == 0x0883CFBCu) goto L_0883CFBC;
    return;
L_0883CFBC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883D050;
      }
      goto L_0883CFDC;
    }
L_0883CFDC:
    ctx.gpr[31] = (0x0883CFE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0883CFE4u) goto L_0883CFE4;
    return;
L_0883CFE4:
    ctx.gpr[31] = (0x0883CFECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem) && ctx.pc == 0x0883CFECu) goto L_0883CFEC;
    return;
L_0883CFEC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883D050;
      }
      goto L_0883D004;
    }
L_0883D004:
    ctx.gpr[31] = (0x0883D00Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0883D00Cu) goto L_0883D00C;
    return;
L_0883D00C:
    ctx.gpr[31] = (0x0883D014u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem) && ctx.pc == 0x0883D014u) goto L_0883D014;
    return;
L_0883D014:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0883D02Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0883D02Cu) goto L_0883D02C;
    return;
L_0883D02C:
    ctx.gpr[31] = (0x0883D034u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem) && ctx.pc == 0x0883D034u) goto L_0883D034;
    return;
L_0883D034:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1660), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0883D0BC;
      }
      goto L_0883D050;
    }
L_0883D050:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_0883D0BC;
      }
      goto L_0883D05C;
    }
L_0883D05C:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883D098;
      }
      goto L_0883D06C;
    }
L_0883D06C:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883D088;
      }
      goto L_0883D07C;
    }
L_0883D07C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_0883D0BC;
      }
      goto L_0883D088;
    }
L_0883D088:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0883D0BC;
      }
      goto L_0883D098;
    }
L_0883D098:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883D0B4;
      }
      goto L_0883D0A8;
    }
L_0883D0A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_0883D0BC;
      }
      goto L_0883D0B4;
    }
L_0883D0B4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_0883D0BC;
L_0883D0BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883D0E0;
      }
      goto L_0883D0D0;
    }
L_0883D0D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5984), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0883D0F0;
      }
      goto L_0883D0E0;
    }
L_0883D0E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5984), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0883D0F0;
L_0883D0F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5984)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D214;
      }
      goto L_0883D130;
    }
L_0883D130:
    ctx.gpr[31] = (0x0883D138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0883D138u) goto L_0883D138;
    return;
L_0883D138:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (0u | 10u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(707)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883D168;
      }
      goto L_0883D158;
    }
L_0883D158:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_0883D20C;
      }
      goto L_0883D160;
    }
L_0883D160:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D180;
      }
      goto L_0883D168;
    }
L_0883D168:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883D1B4;
      }
      goto L_0883D170;
    }
L_0883D170:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883D1E4;
      }
      goto L_0883D178;
    }
L_0883D178:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D20C;
      }
      goto L_0883D180;
    }
L_0883D180:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D198;
      }
      goto L_0883D18C;
    }
L_0883D18C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(707), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0883D1AC;
      }
      goto L_0883D198;
    }
L_0883D198:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D1AC;
      }
      goto L_0883D1A4;
    }
L_0883D1A4:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(707), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0883D1AC;
L_0883D1AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D20C;
      }
      goto L_0883D1B4;
    }
L_0883D1B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D1DC;
      }
      goto L_0883D1D8;
    }
L_0883D1D8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(707), static_cast<std::uint8_t>(0u));
    goto L_0883D1DC;
L_0883D1DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D20C;
      }
      goto L_0883D1E4;
    }
L_0883D1E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D20C;
      }
      goto L_0883D208;
    }
L_0883D208:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(707), static_cast<std::uint8_t>(0u));
    goto L_0883D20C;
L_0883D20C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D218;
      }
      goto L_0883D214;
    }
L_0883D214:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(707), static_cast<std::uint8_t>(0u));
    goto L_0883D218;
L_0883D218:
    ctx.gpr[31] = (0x0883D220u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0883D220u) goto L_0883D220;
    return;
L_0883D220:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883D24C;
      }
      goto L_0883D22C;
    }
L_0883D22C:
    ctx.gpr[31] = (0x0883D234u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0883D234u) goto L_0883D234;
    return;
L_0883D234:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883D24C;
      }
      goto L_0883D240;
    }
L_0883D240:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D2F0;
      }
      goto L_0883D24C;
    }
L_0883D24C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D270;
      }
      goto L_0883D258;
    }
L_0883D258:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4209)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883D270;
      }
      goto L_0883D264;
    }
L_0883D264:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D2F0;
      }
      goto L_0883D270;
    }
L_0883D270:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883D280u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x0883D280u) goto L_0883D280;
    return;
L_0883D280:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    ctx.gpr[5] = (16015u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 23593u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0883D2A8;
      }
      goto L_0883D298;
    }
L_0883D298:
    ctx.gpr[31] = (0x0883D2A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0883D2A0u) goto L_0883D2A0;
    return;
L_0883D2A0:
    ctx.gpr[31] = (0x0883D2A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 221u, 0x0894CE40u>(ctx, &aot_mem) && ctx.pc == 0x0883D2A8u) goto L_0883D2A8;
    return;
L_0883D2A8:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883D2F0;
      }
      goto L_0883D2CC;
    }
L_0883D2CC:
    ctx.fpr[12] = ctx.fpr[22] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0883D2F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x0883D2F0u) goto L_0883D2F0;
    return;
L_0883D2F0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0883D320:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-3984));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3916), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3920), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3924), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3928), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3932), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3936), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3940), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3944), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3948), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3952), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3956), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3960), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3964), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3968), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3972), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (0u | 194u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0883D378;
      }
      goto L_0883D370;
    }
L_0883D370:
    ctx.gpr[31] = (0x0883D378u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 414u, 0x08A86D04u>(ctx, &aot_mem) && ctx.pc == 0x0883D378u) goto L_0883D378;
    return;
L_0883D378:
    ctx.gpr[31] = (0x0883D380u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 662u, 0x08AFEF74u>(ctx, &aot_mem) && ctx.pc == 0x0883D380u) goto L_0883D380;
    return;
L_0883D380:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0883D3A4;
      }
      goto L_0883D394;
    }
L_0883D394:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0883D3A4;
L_0883D3A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(636)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D418;
      }
      goto L_0883D3BC;
    }
L_0883D3BC:
    ctx.gpr[31] = (0x0883D3C4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x0883D3C4u) goto L_0883D3C4;
    return;
L_0883D3C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0883D3FC;
    }
    goto L_0883D3FC;
L_0883D3FC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0883D418u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 371u, 0x08B09D30u>(ctx, &aot_mem) && ctx.pc == 0x0883D418u) goto L_0883D418;
    return;
L_0883D418:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883D488;
      }
      goto L_0883D428;
    }
L_0883D428:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[31] = (0x0883D434u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem) && ctx.pc == 0x0883D434u) goto L_0883D434;
    return;
L_0883D434:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[5] = (15967u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 15204u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (48793u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0883D460u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883D460u) goto L_0883D460;
    return;
L_0883D460:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883D470u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem) && ctx.pc == 0x0883D470u) goto L_0883D470;
    return;
L_0883D470:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883D488u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 583u, 0x089CF3B0u>(ctx, &aot_mem) && ctx.pc == 0x0883D488u) goto L_0883D488;
    return;
L_0883D488:
    ctx.gpr[31] = (0x0883D490u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x0883D490u) goto L_0883D490;
    return;
L_0883D490:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883D49Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D49Cu) goto L_0883D49C;
    return;
L_0883D49C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883D4A8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem) && ctx.pc == 0x0883D4A8u) goto L_0883D4A8;
    return;
L_0883D4A8:
    ctx.gpr[4] = (15286u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2922u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0883D4C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 202u, 0x08830E6Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D4C4u) goto L_0883D4C4;
    return;
L_0883D4C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883D4D0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 185u, 0x08830DC4u>(ctx, &aot_mem) && ctx.pc == 0x0883D4D0u) goto L_0883D4D0;
    return;
L_0883D4D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883E430;
      }
      goto L_0883D4D8;
    }
L_0883D4D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883D718;
      }
      goto L_0883D4E8;
    }
L_0883D4E8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D710;
      }
      goto L_0883D4F8;
    }
L_0883D4F8:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1892)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883D5B8;
      }
      goto L_0883D510;
    }
L_0883D510:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0883D700;
      }
      goto L_0883D518;
    }
L_0883D518:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0883D52Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883D52Cu) goto L_0883D52C;
    return;
L_0883D52C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[31] = (0x0883D538u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883D538u) goto L_0883D538;
    return;
L_0883D538:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883D55Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883D55Cu) goto L_0883D55C;
    return;
L_0883D55C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883D56Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883D56Cu) goto L_0883D56C;
    return;
L_0883D56C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883D580u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883D580u) goto L_0883D580;
    return;
L_0883D580:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883D5B0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883D5B0u) goto L_0883D5B0;
    return;
L_0883D5B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D700;
      }
      goto L_0883D5B8;
    }
L_0883D5B8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883D668;
      }
      goto L_0883D5C0;
    }
L_0883D5C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D700;
      }
      goto L_0883D5C8;
    }
L_0883D5C8:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0883D5DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883D5DCu) goto L_0883D5DC;
    return;
L_0883D5DC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[31] = (0x0883D5E8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883D5E8u) goto L_0883D5E8;
    return;
L_0883D5E8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883D60Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883D60Cu) goto L_0883D60C;
    return;
L_0883D60C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883D61Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883D61Cu) goto L_0883D61C;
    return;
L_0883D61C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883D630u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883D630u) goto L_0883D630;
    return;
L_0883D630:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883D660u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883D660u) goto L_0883D660;
    return;
L_0883D660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D700;
      }
      goto L_0883D668;
    }
L_0883D668:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0883D67Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883D67Cu) goto L_0883D67C;
    return;
L_0883D67C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[31] = (0x0883D688u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883D688u) goto L_0883D688;
    return;
L_0883D688:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883D6ACu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883D6ACu) goto L_0883D6AC;
    return;
L_0883D6AC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883D6BCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883D6BCu) goto L_0883D6BC;
    return;
L_0883D6BC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883D6D0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883D6D0u) goto L_0883D6D0;
    return;
L_0883D6D0:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883D700u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883D700u) goto L_0883D700;
    return;
L_0883D700:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883D4F8;
      }
      goto L_0883D710;
    }
L_0883D710:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883E430;
      }
      goto L_0883D718;
    }
L_0883D718:
    ctx.gpr[31] = (0x0883D720u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x0883D720u) goto L_0883D720;
    return;
L_0883D720:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883D918;
      }
      goto L_0883D72C;
    }
L_0883D72C:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.gpr[31] = (0x0883D740u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 86u, 0x08830694u>(ctx, &aot_mem) && ctx.pc == 0x0883D740u) goto L_0883D740;
    return;
L_0883D740:
    ctx.gpr[31] = (0x0883D748u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1280)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem) && ctx.pc == 0x0883D748u) goto L_0883D748;
    return;
L_0883D748:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883D758u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem) && ctx.pc == 0x0883D758u) goto L_0883D758;
    return;
L_0883D758:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[31] = (0x0883D764u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem) && ctx.pc == 0x0883D764u) goto L_0883D764;
    return;
L_0883D764:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883D770u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883D770u) goto L_0883D770;
    return;
L_0883D770:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1632)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883D794u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem) && ctx.pc == 0x0883D794u) goto L_0883D794;
    return;
L_0883D794:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883D7A0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883D7A0u) goto L_0883D7A0;
    return;
L_0883D7A0:
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(1488));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0883D7B0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 137u, 0x08830A28u>(ctx, &aot_mem) && ctx.pc == 0x0883D7B0u) goto L_0883D7B0;
    return;
L_0883D7B0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0883D7BCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 141u, 0x08830A68u>(ctx, &aot_mem) && ctx.pc == 0x0883D7BCu) goto L_0883D7BC;
    return;
L_0883D7BC:
    ctx.gpr[31] = (0x0883D7C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1292)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem) && ctx.pc == 0x0883D7C4u) goto L_0883D7C4;
    return;
L_0883D7C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883D7D4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem) && ctx.pc == 0x0883D7D4u) goto L_0883D7D4;
    return;
L_0883D7D4:
    ctx.gpr[31] = (0x0883D7DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem) && ctx.pc == 0x0883D7DCu) goto L_0883D7DC;
    return;
L_0883D7DC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883D7E8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883D7E8u) goto L_0883D7E8;
    return;
L_0883D7E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1624)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883D804u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem) && ctx.pc == 0x0883D804u) goto L_0883D804;
    return;
L_0883D804:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883D810u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883D810u) goto L_0883D810;
    return;
L_0883D810:
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(1424));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0883D820u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 137u, 0x08830A28u>(ctx, &aot_mem) && ctx.pc == 0x0883D820u) goto L_0883D820;
    return;
L_0883D820:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0883D82Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 141u, 0x08830A68u>(ctx, &aot_mem) && ctx.pc == 0x0883D82Cu) goto L_0883D82C;
    return;
L_0883D82C:
    ctx.gpr[31] = (0x0883D834u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1272)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem) && ctx.pc == 0x0883D834u) goto L_0883D834;
    return;
L_0883D834:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883D844u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem) && ctx.pc == 0x0883D844u) goto L_0883D844;
    return;
L_0883D844:
    ctx.gpr[31] = (0x0883D84Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem) && ctx.pc == 0x0883D84Cu) goto L_0883D84C;
    return;
L_0883D84C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883D858u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883D858u) goto L_0883D858;
    return;
L_0883D858:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1628)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883D874u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem) && ctx.pc == 0x0883D874u) goto L_0883D874;
    return;
L_0883D874:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883D880u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883D880u) goto L_0883D880;
    return;
L_0883D880:
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(1456));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0883D890u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 137u, 0x08830A28u>(ctx, &aot_mem) && ctx.pc == 0x0883D890u) goto L_0883D890;
    return;
L_0883D890:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0883D89Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 141u, 0x08830A68u>(ctx, &aot_mem) && ctx.pc == 0x0883D89Cu) goto L_0883D89C;
    return;
L_0883D89C:
    ctx.gpr[31] = (0x0883D8A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1284)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem) && ctx.pc == 0x0883D8A4u) goto L_0883D8A4;
    return;
L_0883D8A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883D8B4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem) && ctx.pc == 0x0883D8B4u) goto L_0883D8B4;
    return;
L_0883D8B4:
    ctx.gpr[31] = (0x0883D8BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem) && ctx.pc == 0x0883D8BCu) goto L_0883D8BC;
    return;
L_0883D8BC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883D8C8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883D8C8u) goto L_0883D8C8;
    return;
L_0883D8C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1620)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883D8E4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem) && ctx.pc == 0x0883D8E4u) goto L_0883D8E4;
    return;
L_0883D8E4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883D8F0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883D8F0u) goto L_0883D8F0;
    return;
L_0883D8F0:
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(1392));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883D900u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 137u, 0x08830A28u>(ctx, &aot_mem) && ctx.pc == 0x0883D900u) goto L_0883D900;
    return;
L_0883D900:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883D90Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 141u, 0x08830A68u>(ctx, &aot_mem) && ctx.pc == 0x0883D90Cu) goto L_0883D90C;
    return;
L_0883D90C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883D918u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 93u, 0x0883072Cu>(ctx, &aot_mem) && ctx.pc == 0x0883D918u) goto L_0883D918;
    return;
L_0883D918:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0883D924u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 35u, 0x08830240u>(ctx, &aot_mem) && ctx.pc == 0x0883D924u) goto L_0883D924;
    return;
L_0883D924:
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[16] = (0u | 1u);
        goto L_0883D93C;
    }
    goto L_0883D93C;
L_0883D93C:
    ctx.gpr[31] = (0x0883D944u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x0883D944u) goto L_0883D944;
    return;
L_0883D944:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883D988;
      }
      goto L_0883D950;
    }
L_0883D950:
    ctx.gpr[31] = (0x0883D958u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x0883D958u) goto L_0883D958;
    return;
L_0883D958:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883D988;
      }
      goto L_0883D960;
    }
L_0883D960:
    ctx.gpr[31] = (0x0883D968u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x0883D968u) goto L_0883D968;
    return;
L_0883D968:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883D988;
      }
      goto L_0883D974;
    }
L_0883D974:
    ctx.gpr[31] = (0x0883D97Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem) && ctx.pc == 0x0883D97Cu) goto L_0883D97C;
    return;
L_0883D97C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883E430;
      }
      goto L_0883D988;
    }
L_0883D988:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1896)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883D9AC;
      }
      goto L_0883D99C;
    }
L_0883D99C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1904)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883D9B0;
      }
      goto L_0883D9AC;
    }
L_0883D9AC:
    ctx.gpr[18] = (0u | 1u);
    goto L_0883D9B0;
L_0883D9B0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883E430;
      }
      goto L_0883D9C0;
    }
L_0883D9C0:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1536)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_0883E008;
      }
      goto L_0883D9E0;
    }
L_0883D9E0:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0883D9ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x0883D9ECu) goto L_0883D9EC;
    return;
L_0883D9EC:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883E008;
      }
      goto L_0883D9F8;
    }
L_0883D9F8:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1892)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883DA20;
      }
      goto L_0883DA10;
    }
L_0883DA10:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0883DF34;
      }
      goto L_0883DA18;
    }
L_0883DA18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883DA38;
      }
      goto L_0883DA20;
    }
L_0883DA20:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883DC88;
      }
      goto L_0883DA28;
    }
L_0883DA28:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883DDEC;
      }
      goto L_0883DA30;
    }
L_0883DA30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883DF34;
      }
      goto L_0883DA38;
    }
L_0883DA38:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1392));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883DA50u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 861u, 0x08833F7Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DA50u) goto L_0883DA50;
    return;
L_0883DA50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883DB78;
      }
      goto L_0883DA58;
    }
L_0883DA58:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    ctx.gpr[31] = (0x0883DA74u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883DA74u) goto L_0883DA74;
    return;
L_0883DA74:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0883DA80u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883DA80u) goto L_0883DA80;
    return;
L_0883DA80:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883DAA8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883DAA8u) goto L_0883DAA8;
    return;
L_0883DAA8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0883DAB8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883DAB8u) goto L_0883DAB8;
    return;
L_0883DAB8:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883DAD0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883DAD0u) goto L_0883DAD0;
    return;
L_0883DAD0:
    ctx.gpr[4] = (0u | 67u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883DAF8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883DAF8u) goto L_0883DAF8;
    return;
L_0883DAF8:
    ctx.gpr[31] = (0x0883DB00u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883DB00u) goto L_0883DB00;
    return;
L_0883DB00:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0883DB0Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883DB0Cu) goto L_0883DB0C;
    return;
L_0883DB0C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883DB24u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883DB24u) goto L_0883DB24;
    return;
L_0883DB24:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0883DB34u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883DB34u) goto L_0883DB34;
    return;
L_0883DB34:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883DB50u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883DB50u) goto L_0883DB50;
    return;
L_0883DB50:
    ctx.gpr[4] = (0u | 67u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883DB78u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883DB78u) goto L_0883DB78;
    return;
L_0883DB78:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0883DB8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883DB8Cu) goto L_0883DB8C;
    return;
L_0883DB8C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[31] = (0x0883DB98u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883DB98u) goto L_0883DB98;
    return;
L_0883DB98:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883DBB8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883DBB8u) goto L_0883DBB8;
    return;
L_0883DBB8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0883DBC8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883DBC8u) goto L_0883DBC8;
    return;
L_0883DBC8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883DBDCu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883DBDCu) goto L_0883DBDC;
    return;
L_0883DBDC:
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883DC04u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883DC04u) goto L_0883DC04;
    return;
L_0883DC04:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1552)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883DC80;
      }
      goto L_0883DC20;
    }
L_0883DC20:
    ctx.gpr[20] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0883DC34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883DC34u) goto L_0883DC34;
    return;
L_0883DC34:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[31] = (0x0883DC40u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883DC40u) goto L_0883DC40;
    return;
L_0883DC40:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883DC4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DC4Cu) goto L_0883DC4C;
    return;
L_0883DC4C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0883DC58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DC58u) goto L_0883DC58;
    return;
L_0883DC58:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1580)));
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1596));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0883DC80u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem) && ctx.pc == 0x0883DC80u) goto L_0883DC80;
    return;
L_0883DC80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883E008;
      }
      goto L_0883DC88;
    }
L_0883DC88:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0883DCA4;
      }
      goto L_0883DC94;
    }
L_0883DC94:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883DCA4;
      }
      goto L_0883DC9C;
    }
L_0883DC9C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883DDE4;
      }
      goto L_0883DCA4;
    }
L_0883DCA4:
    ctx.gpr[31] = (0x0883DCACu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 76u, 0x088305B0u>(ctx, &aot_mem) && ctx.pc == 0x0883DCACu) goto L_0883DCAC;
    return;
L_0883DCAC:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883DD64;
      }
      goto L_0883DCC4;
    }
L_0883DCC4:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0883DCE0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 861u, 0x08833F7Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DCE0u) goto L_0883DCE0;
    return;
L_0883DCE0:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[31] = (0x0883DCECu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883DCECu) goto L_0883DCEC;
    return;
L_0883DCEC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[31] = (0x0883DCF8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883DCF8u) goto L_0883DCF8;
    return;
L_0883DCF8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883DD18u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883DD18u) goto L_0883DD18;
    return;
L_0883DD18:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0883DD28u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883DD28u) goto L_0883DD28;
    return;
L_0883DD28:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883DD3Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883DD3Cu) goto L_0883DD3C;
    return;
L_0883DD3C:
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883DD64u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883DD64u) goto L_0883DD64;
    return;
L_0883DD64:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1552)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883DDE4;
      }
      goto L_0883DD84;
    }
L_0883DD84:
    ctx.gpr[20] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0883DD98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883DD98u) goto L_0883DD98;
    return;
L_0883DD98:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[31] = (0x0883DDA4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883DDA4u) goto L_0883DDA4;
    return;
L_0883DDA4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883DDB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DDB0u) goto L_0883DDB0;
    return;
L_0883DDB0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0883DDBCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DDBCu) goto L_0883DDBC;
    return;
L_0883DDBC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1580)));
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1596));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0883DDE4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem) && ctx.pc == 0x0883DDE4u) goto L_0883DDE4;
    return;
L_0883DDE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883E008;
      }
      goto L_0883DDEC;
    }
L_0883DDEC:
    ctx.gpr[31] = (0x0883DDF4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 76u, 0x088305B0u>(ctx, &aot_mem) && ctx.pc == 0x0883DDF4u) goto L_0883DDF4;
    return;
L_0883DDF4:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883DEAC;
      }
      goto L_0883DE0C;
    }
L_0883DE0C:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0883DE28u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 861u, 0x08833F7Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DE28u) goto L_0883DE28;
    return;
L_0883DE28:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[31] = (0x0883DE34u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883DE34u) goto L_0883DE34;
    return;
L_0883DE34:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[31] = (0x0883DE40u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883DE40u) goto L_0883DE40;
    return;
L_0883DE40:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883DE60u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883DE60u) goto L_0883DE60;
    return;
L_0883DE60:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0883DE70u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883DE70u) goto L_0883DE70;
    return;
L_0883DE70:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883DE84u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883DE84u) goto L_0883DE84;
    return;
L_0883DE84:
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883DEACu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883DEACu) goto L_0883DEAC;
    return;
L_0883DEAC:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1552)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883DF2C;
      }
      goto L_0883DECC;
    }
L_0883DECC:
    ctx.gpr[20] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0883DEE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883DEE0u) goto L_0883DEE0;
    return;
L_0883DEE0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    ctx.gpr[31] = (0x0883DEECu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883DEECu) goto L_0883DEEC;
    return;
L_0883DEEC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883DEF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DEF8u) goto L_0883DEF8;
    return;
L_0883DEF8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0883DF04u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DF04u) goto L_0883DF04;
    return;
L_0883DF04:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1580)));
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1596));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0883DF2Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem) && ctx.pc == 0x0883DF2Cu) goto L_0883DF2C;
    return;
L_0883DF2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883E008;
      }
      goto L_0883DF34;
    }
L_0883DF34:
    ctx.gpr[31] = (0x0883DF3Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 35u, 0x08830240u>(ctx, &aot_mem) && ctx.pc == 0x0883DF3Cu) goto L_0883DF3C;
    return;
L_0883DF3C:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883DF6C;
      }
      goto L_0883DF54;
    }
L_0883DF54:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1392));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883DF6Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 861u, 0x08833F7Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DF6Cu) goto L_0883DF6C;
    return;
L_0883DF6C:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1596)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0883DF88;
      }
      goto L_0883DF7C;
    }
L_0883DF7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883E008;
      }
      goto L_0883DF88;
    }
L_0883DF88:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1552)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883E008;
      }
      goto L_0883DFA8;
    }
L_0883DFA8:
    ctx.gpr[20] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0883DFBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883DFBCu) goto L_0883DFBC;
    return;
L_0883DFBC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    ctx.gpr[31] = (0x0883DFC8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883DFC8u) goto L_0883DFC8;
    return;
L_0883DFC8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883DFD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DFD4u) goto L_0883DFD4;
    return;
L_0883DFD4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0883DFE0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883DFE0u) goto L_0883DFE0;
    return;
L_0883DFE0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1580)));
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1596));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0883E008u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem) && ctx.pc == 0x0883E008u) goto L_0883E008;
    return;
L_0883E008:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(944));
    ctx.gpr[31] = (0x0883E014u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem) && ctx.pc == 0x0883E014u) goto L_0883E014;
    return;
L_0883E014:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
      if (branch_taken) {
          goto L_0883E420;
      }
      goto L_0883E020;
    }
L_0883E020:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1536)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883E420;
      }
      goto L_0883E03C;
    }
L_0883E03C:
    ctx.gpr[31] = (0x0883E044u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x0883E044u) goto L_0883E044;
    return;
L_0883E044:
    ctx.gpr[31] = (0x0883E04Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 83u, 0x08830650u>(ctx, &aot_mem) && ctx.pc == 0x0883E04Cu) goto L_0883E04C;
    return;
L_0883E04C:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5988), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0883E420;
      }
      goto L_0883E068;
    }
L_0883E068:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0883E078u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x0883E078u) goto L_0883E078;
    return;
L_0883E078:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_0883E420;
      }
      goto L_0883E084;
    }
L_0883E084:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0883E090u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x0883E090u) goto L_0883E090;
    return;
L_0883E090:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_0883E420;
      }
      goto L_0883E09C;
    }
L_0883E09C:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0883E0A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x0883E0A8u) goto L_0883E0A8;
    return;
L_0883E0A8:
    ctx.gpr[4] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_0883E420;
      }
      goto L_0883E0B4;
    }
L_0883E0B4:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0883E0C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x0883E0C0u) goto L_0883E0C0;
    return;
L_0883E0C0:
    ctx.gpr[4] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_0883E420;
      }
      goto L_0883E0CC;
    }
L_0883E0CC:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0883E0D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x0883E0D8u) goto L_0883E0D8;
    return;
L_0883E0D8:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883E420;
      }
      goto L_0883E0E4;
    }
L_0883E0E4:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    ctx.gpr[31] = (0x0883E0FCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 139u, 0x08830A58u>(ctx, &aot_mem) && ctx.pc == 0x0883E0FCu) goto L_0883E0FC;
    return;
L_0883E0FC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0883E108u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883E108u) goto L_0883E108;
    return;
L_0883E108:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883E114u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x0883E114u) goto L_0883E114;
    return;
L_0883E114:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0883E120u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem) && ctx.pc == 0x0883E120u) goto L_0883E120;
    return;
L_0883E120:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0883E12Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x0883E12Cu) goto L_0883E12C;
    return;
L_0883E12C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.gpr[31] = (0x0883E13Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 139u, 0x08830A58u>(ctx, &aot_mem) && ctx.pc == 0x0883E13Cu) goto L_0883E13C;
    return;
L_0883E13C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0883E148u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883E148u) goto L_0883E148;
    return;
L_0883E148:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883E158u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883E158u) goto L_0883E158;
    return;
L_0883E158:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0883E168u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem) && ctx.pc == 0x0883E168u) goto L_0883E168;
    return;
L_0883E168:
    ctx.gpr[31] = (0x0883E170u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883E170u) goto L_0883E170;
    return;
L_0883E170:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.gpr[31] = (0x0883E17Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883E17Cu) goto L_0883E17C;
    return;
L_0883E17C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0883E18C;
      }
      goto L_0883E184;
    }
L_0883E184:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883E1F8;
      }
      goto L_0883E18C;
    }
L_0883E18C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0883E1A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem) && ctx.pc == 0x0883E1A4u) goto L_0883E1A4;
    return;
L_0883E1A4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883E1B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883E1B4u) goto L_0883E1B4;
    return;
L_0883E1B4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[31] = (0x0883E1C0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem) && ctx.pc == 0x0883E1C0u) goto L_0883E1C0;
    return;
L_0883E1C0:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0883E1D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem) && ctx.pc == 0x0883E1D4u) goto L_0883E1D4;
    return;
L_0883E1D4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883E1E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883E1E4u) goto L_0883E1E4;
    return;
L_0883E1E4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.gpr[31] = (0x0883E1F0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem) && ctx.pc == 0x0883E1F0u) goto L_0883E1F0;
    return;
L_0883E1F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883E25C;
      }
      goto L_0883E1F8;
    }
L_0883E1F8:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0883E210u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem) && ctx.pc == 0x0883E210u) goto L_0883E210;
    return;
L_0883E210:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883E220u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883E220u) goto L_0883E220;
    return;
L_0883E220:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[31] = (0x0883E22Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0883E22Cu) goto L_0883E22C;
    return;
L_0883E22C:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0883E240u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem) && ctx.pc == 0x0883E240u) goto L_0883E240;
    return;
L_0883E240:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883E250u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883E250u) goto L_0883E250;
    return;
L_0883E250:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.gpr[31] = (0x0883E25Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0883E25Cu) goto L_0883E25C;
    return;
L_0883E25C:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0883E26Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883E26Cu) goto L_0883E26C;
    return;
L_0883E26C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    ctx.gpr[31] = (0x0883E278u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883E278u) goto L_0883E278;
    return;
L_0883E278:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[31] = (0x0883E294u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883E294u) goto L_0883E294;
    return;
L_0883E294:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883E2BCu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883E2BCu) goto L_0883E2BC;
    return;
L_0883E2BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5988)));
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883E33C;
      }
      goto L_0883E2DC;
    }
L_0883E2DC:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0883E2ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883E2ECu) goto L_0883E2EC;
    return;
L_0883E2EC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    ctx.gpr[31] = (0x0883E2F8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883E2F8u) goto L_0883E2F8;
    return;
L_0883E2F8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[31] = (0x0883E314u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883E314u) goto L_0883E314;
    return;
L_0883E314:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883E33Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883E33Cu) goto L_0883E33C;
    return;
L_0883E33C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5988)));
    ctx.gpr[4] = (15907u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883E420;
      }
      goto L_0883E35C;
    }
L_0883E35C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(1392));
    ctx.gpr[31] = (0x0883E374u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883E374u) goto L_0883E374;
    return;
L_0883E374:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0883E380u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883E380u) goto L_0883E380;
    return;
L_0883E380:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883E3A4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883E3A4u) goto L_0883E3A4;
    return;
L_0883E3A4:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883E3D0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883E3D0u) goto L_0883E3D0;
    return;
L_0883E3D0:
    ctx.gpr[31] = (0x0883E3D8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883E3D8u) goto L_0883E3D8;
    return;
L_0883E3D8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0883E3E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883E3E4u) goto L_0883E3E4;
    return;
L_0883E3E4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883E3F8u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883E3F8u) goto L_0883E3F8;
    return;
L_0883E3F8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883E420u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883E420u) goto L_0883E420;
    return;
L_0883E420:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883D9C0;
      }
      goto L_0883E430;
    }
L_0883E430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x0883E43Cu);
    ctx.gpr[5] = (128u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem) && ctx.pc == 0x0883E43Cu) goto L_0883E43C;
    return;
L_0883E43C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883E4BC;
      }
      goto L_0883E444;
    }
L_0883E444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 160u);
    ctx.gpr[31] = (0x0883E460u);
    ctx.gpr[6] = (0u | 196u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 325u, 0x088DDFD8u>(ctx, &aot_mem) && ctx.pc == 0x0883E460u) goto L_0883E460;
    return;
L_0883E460:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3904), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3904)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(944), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.gpr[5] = (16230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16217u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[31] = (0x0883E494u);
    ctx.gpr[6] = (0u | 228u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 325u, 0x088DDFD8u>(ctx, &aot_mem) && ctx.pc == 0x0883E494u) goto L_0883E494;
    return;
L_0883E494:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3908), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3908)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(948), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(948));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0883E4BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 656u, 0x08B0B7F4u>(ctx, &aot_mem) && ctx.pc == 0x0883E4BCu) goto L_0883E4BC;
    return;
L_0883E4BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883EC0C;
      }
      goto L_0883E4C8;
    }
L_0883E4C8:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    ctx.gpr[31] = (0x0883E4D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883E4D4u) goto L_0883E4D4;
    return;
L_0883E4D4:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883E4E8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 45u, 0x0883032Cu>(ctx, &aot_mem) && ctx.pc == 0x0883E4E8u) goto L_0883E4E8;
    return;
L_0883E4E8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[31] = (0x0883E4F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883E4F4u) goto L_0883E4F4;
    return;
L_0883E4F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1540)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883E880;
      }
      goto L_0883E50C;
    }
L_0883E50C:
    ctx.gpr[31] = (0x0883E514u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1424));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x0883E514u) goto L_0883E514;
    return;
L_0883E514:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883E880;
      }
      goto L_0883E520;
    }
L_0883E520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1896)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883E540;
      }
      goto L_0883E530;
    }
L_0883E530:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0883E880;
      }
      goto L_0883E538;
    }
L_0883E538:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883E558;
      }
      goto L_0883E540;
    }
L_0883E540:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883E668;
      }
      goto L_0883E548;
    }
L_0883E548:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883E778;
      }
      goto L_0883E550;
    }
L_0883E550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883E880;
      }
      goto L_0883E558;
    }
L_0883E558:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x0883E568u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1424));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883E568u) goto L_0883E568;
    return;
L_0883E568:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x0883E574u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883E574u) goto L_0883E574;
    return;
L_0883E574:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883E594u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883E594u) goto L_0883E594;
    return;
L_0883E594:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883E5A4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883E5A4u) goto L_0883E5A4;
    return;
L_0883E5A4:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883E5B4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883E5B4u) goto L_0883E5B4;
    return;
L_0883E5B4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883E5C8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883E5C8u) goto L_0883E5C8;
    return;
L_0883E5C8:
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883E5F0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883E5F0u) goto L_0883E5F0;
    return;
L_0883E5F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1556)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883E660;
      }
      goto L_0883E604;
    }
L_0883E604:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[31] = (0x0883E614u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1424));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883E614u) goto L_0883E614;
    return;
L_0883E614:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    ctx.gpr[31] = (0x0883E620u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883E620u) goto L_0883E620;
    return;
L_0883E620:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883E630u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883E630u) goto L_0883E630;
    return;
L_0883E630:
    ctx.gpr[31] = (0x0883E638u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883E638u) goto L_0883E638;
    return;
L_0883E638:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0883E644u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883E644u) goto L_0883E644;
    return;
L_0883E644:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1584)));
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(1597));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883E660u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem) && ctx.pc == 0x0883E660u) goto L_0883E660;
    return;
L_0883E660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883E880;
      }
      goto L_0883E668;
    }
L_0883E668:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x0883E678u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1424));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883E678u) goto L_0883E678;
    return;
L_0883E678:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x0883E684u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883E684u) goto L_0883E684;
    return;
L_0883E684:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883E6A4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883E6A4u) goto L_0883E6A4;
    return;
L_0883E6A4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883E6B4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883E6B4u) goto L_0883E6B4;
    return;
L_0883E6B4:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883E6C4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883E6C4u) goto L_0883E6C4;
    return;
L_0883E6C4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883E6D8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883E6D8u) goto L_0883E6D8;
    return;
L_0883E6D8:
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883E700u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883E700u) goto L_0883E700;
    return;
L_0883E700:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1556)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883E770;
      }
      goto L_0883E714;
    }
L_0883E714:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.gpr[31] = (0x0883E724u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1424));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883E724u) goto L_0883E724;
    return;
L_0883E724:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[31] = (0x0883E730u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883E730u) goto L_0883E730;
    return;
L_0883E730:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883E740u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883E740u) goto L_0883E740;
    return;
L_0883E740:
    ctx.gpr[31] = (0x0883E748u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883E748u) goto L_0883E748;
    return;
L_0883E748:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0883E754u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883E754u) goto L_0883E754;
    return;
L_0883E754:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1584)));
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(1597));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883E770u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem) && ctx.pc == 0x0883E770u) goto L_0883E770;
    return;
L_0883E770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883E880;
      }
      goto L_0883E778;
    }
L_0883E778:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x0883E788u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1424));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883E788u) goto L_0883E788;
    return;
L_0883E788:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x0883E794u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883E794u) goto L_0883E794;
    return;
L_0883E794:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883E7B4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883E7B4u) goto L_0883E7B4;
    return;
L_0883E7B4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883E7C4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883E7C4u) goto L_0883E7C4;
    return;
L_0883E7C4:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883E7D4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883E7D4u) goto L_0883E7D4;
    return;
L_0883E7D4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883E7E8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883E7E8u) goto L_0883E7E8;
    return;
L_0883E7E8:
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883E810u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883E810u) goto L_0883E810;
    return;
L_0883E810:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1556)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883E880;
      }
      goto L_0883E824;
    }
L_0883E824:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[31] = (0x0883E834u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1424));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883E834u) goto L_0883E834;
    return;
L_0883E834:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[31] = (0x0883E840u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883E840u) goto L_0883E840;
    return;
L_0883E840:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883E850u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883E850u) goto L_0883E850;
    return;
L_0883E850:
    ctx.gpr[31] = (0x0883E858u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883E858u) goto L_0883E858;
    return;
L_0883E858:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0883E864u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883E864u) goto L_0883E864;
    return;
L_0883E864:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1584)));
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(1597));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883E880u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem) && ctx.pc == 0x0883E880u) goto L_0883E880;
    return;
L_0883E880:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1548)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883EC0C;
      }
      goto L_0883E898;
    }
L_0883E898:
    ctx.gpr[31] = (0x0883E8A0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1488));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem) && ctx.pc == 0x0883E8A0u) goto L_0883E8A0;
    return;
L_0883E8A0:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883EC0C;
      }
      goto L_0883E8AC;
    }
L_0883E8AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1904)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883E8CC;
      }
      goto L_0883E8BC;
    }
L_0883E8BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0883EC0C;
      }
      goto L_0883E8C4;
    }
L_0883E8C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883E8E4;
      }
      goto L_0883E8CC;
    }
L_0883E8CC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0883E9F4;
      }
      goto L_0883E8D4;
    }
L_0883E8D4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883EB04;
      }
      goto L_0883E8DC;
    }
L_0883E8DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883EC0C;
      }
      goto L_0883E8E4;
    }
L_0883E8E4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.gpr[31] = (0x0883E8F4u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1488));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883E8F4u) goto L_0883E8F4;
    return;
L_0883E8F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    ctx.gpr[31] = (0x0883E900u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883E900u) goto L_0883E900;
    return;
L_0883E900:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883E920u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883E920u) goto L_0883E920;
    return;
L_0883E920:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883E930u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883E930u) goto L_0883E930;
    return;
L_0883E930:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883E940u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883E940u) goto L_0883E940;
    return;
L_0883E940:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1232));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883E954u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883E954u) goto L_0883E954;
    return;
L_0883E954:
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883E97Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883E97Cu) goto L_0883E97C;
    return;
L_0883E97C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1564)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883E9EC;
      }
      goto L_0883E990;
    }
L_0883E990:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1248));
    ctx.gpr[31] = (0x0883E9A0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1488));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883E9A0u) goto L_0883E9A0;
    return;
L_0883E9A0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1264));
    ctx.gpr[31] = (0x0883E9ACu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883E9ACu) goto L_0883E9AC;
    return;
L_0883E9AC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883E9BCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883E9BCu) goto L_0883E9BC;
    return;
L_0883E9BC:
    ctx.gpr[31] = (0x0883E9C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883E9C4u) goto L_0883E9C4;
    return;
L_0883E9C4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0883E9D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883E9D0u) goto L_0883E9D0;
    return;
L_0883E9D0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1592)));
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(1599));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883E9ECu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem) && ctx.pc == 0x0883E9ECu) goto L_0883E9EC;
    return;
L_0883E9EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883EC0C;
      }
      goto L_0883E9F4;
    }
L_0883E9F4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1232));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.gpr[31] = (0x0883EA04u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1488));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883EA04u) goto L_0883EA04;
    return;
L_0883EA04:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    ctx.gpr[31] = (0x0883EA10u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883EA10u) goto L_0883EA10;
    return;
L_0883EA10:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883EA30u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883EA30u) goto L_0883EA30;
    return;
L_0883EA30:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883EA40u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883EA40u) goto L_0883EA40;
    return;
L_0883EA40:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883EA50u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883EA50u) goto L_0883EA50;
    return;
L_0883EA50:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883EA64u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883EA64u) goto L_0883EA64;
    return;
L_0883EA64:
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883EA8Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883EA8Cu) goto L_0883EA8C;
    return;
L_0883EA8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1564)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883EAFC;
      }
      goto L_0883EAA0;
    }
L_0883EAA0:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1280));
    ctx.gpr[31] = (0x0883EAB0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1488));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883EAB0u) goto L_0883EAB0;
    return;
L_0883EAB0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1296));
    ctx.gpr[31] = (0x0883EABCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883EABCu) goto L_0883EABC;
    return;
L_0883EABC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883EACCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883EACCu) goto L_0883EACC;
    return;
L_0883EACC:
    ctx.gpr[31] = (0x0883EAD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883EAD4u) goto L_0883EAD4;
    return;
L_0883EAD4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0883EAE0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883EAE0u) goto L_0883EAE0;
    return;
L_0883EAE0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1592)));
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(1599));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883EAFCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem) && ctx.pc == 0x0883EAFCu) goto L_0883EAFC;
    return;
L_0883EAFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883EC0C;
      }
      goto L_0883EB04;
    }
L_0883EB04:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1232));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.gpr[31] = (0x0883EB14u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1488));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883EB14u) goto L_0883EB14;
    return;
L_0883EB14:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    ctx.gpr[31] = (0x0883EB20u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883EB20u) goto L_0883EB20;
    return;
L_0883EB20:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883EB40u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883EB40u) goto L_0883EB40;
    return;
L_0883EB40:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883EB50u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883EB50u) goto L_0883EB50;
    return;
L_0883EB50:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883EB60u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883EB60u) goto L_0883EB60;
    return;
L_0883EB60:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883EB74u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883EB74u) goto L_0883EB74;
    return;
L_0883EB74:
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883EB9Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883EB9Cu) goto L_0883EB9C;
    return;
L_0883EB9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1564)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883EC0C;
      }
      goto L_0883EBB0;
    }
L_0883EBB0:
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1312));
    ctx.gpr[31] = (0x0883EBC0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1488));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem) && ctx.pc == 0x0883EBC0u) goto L_0883EBC0;
    return;
L_0883EBC0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1328));
    ctx.gpr[31] = (0x0883EBCCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem) && ctx.pc == 0x0883EBCCu) goto L_0883EBCC;
    return;
L_0883EBCC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883EBDCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883EBDCu) goto L_0883EBDC;
    return;
L_0883EBDC:
    ctx.gpr[31] = (0x0883EBE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883EBE4u) goto L_0883EBE4;
    return;
L_0883EBE4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0883EBF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883EBF0u) goto L_0883EBF0;
    return;
L_0883EBF0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1592)));
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(1599));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883EC0Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem) && ctx.pc == 0x0883EC0Cu) goto L_0883EC0C;
    return;
L_0883EC0C:
    ctx.gpr[31] = (0x0883EC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem) && ctx.pc == 0x0883EC14u) goto L_0883EC14;
    return;
L_0883EC14:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883EE3C;
      }
      goto L_0883EC1C;
    }
L_0883EC1C:
    ctx.gpr[31] = (0x0883EC24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem) && ctx.pc == 0x0883EC24u) goto L_0883EC24;
    return;
L_0883EC24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883EE3C;
      }
      goto L_0883EC2C;
    }
L_0883EC2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883EE3C;
      }
      goto L_0883EC38;
    }
L_0883EC38:
    ctx.gpr[31] = (0x0883EC40u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 76u, 0x088305B0u>(ctx, &aot_mem) && ctx.pc == 0x0883EC40u) goto L_0883EC40;
    return;
L_0883EC40:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883EE3C;
      }
      goto L_0883EC58;
    }
L_0883EC58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883EE3C;
      }
      goto L_0883EC78;
    }
L_0883EC78:
    ctx.gpr[31] = (0x0883EC80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x0883EC80u) goto L_0883EC80;
    return;
L_0883EC80:
    ctx.gpr[31] = (0x0883EC88u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 114u, 0x08830840u>(ctx, &aot_mem) && ctx.pc == 0x0883EC88u) goto L_0883EC88;
    return;
L_0883EC88:
    ctx.gpr[31] = (0x0883EC90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x0883EC90u) goto L_0883EC90;
    return;
L_0883EC90:
    ctx.gpr[31] = (0x0883EC98u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 117u, 0x08830868u>(ctx, &aot_mem) && ctx.pc == 0x0883EC98u) goto L_0883EC98;
    return;
L_0883EC98:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883EE3C;
      }
      goto L_0883ECB0;
    }
L_0883ECB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1376));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1392));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1408));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0883ECDCu);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 44u, 0x08A9061Cu>(ctx, &aot_mem) && ctx.pc == 0x0883ECDCu) goto L_0883ECDC;
    return;
L_0883ECDC:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(1424));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883ECF0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem) && ctx.pc == 0x0883ECF0u) goto L_0883ECF0;
    return;
L_0883ECF0:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1440));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883ED04u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem) && ctx.pc == 0x0883ED04u) goto L_0883ED04;
    return;
L_0883ED04:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1456));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883ED18u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem) && ctx.pc == 0x0883ED18u) goto L_0883ED18;
    return;
L_0883ED18:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1344));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(1360));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0883ED30u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883ED30u) goto L_0883ED30;
    return;
L_0883ED30:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0883ED40u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883ED40u) goto L_0883ED40;
    return;
L_0883ED40:
    ctx.gpr[4] = (16042u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 42572u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1472));
    ctx.gpr[31] = (0x0883ED58u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 45u, 0x0883032Cu>(ctx, &aot_mem) && ctx.pc == 0x0883ED58u) goto L_0883ED58;
    return;
L_0883ED58:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    ctx.gpr[4] = (16528u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883EE2C;
      }
      goto L_0883ED90;
    }
L_0883ED90:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1504));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1472));
    ctx.gpr[31] = (0x0883EDA0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem) && ctx.pc == 0x0883EDA0u) goto L_0883EDA0;
    return;
L_0883EDA0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0883EDB0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem) && ctx.pc == 0x0883EDB0u) goto L_0883EDB0;
    return;
L_0883EDB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1504)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1504), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0883EDC8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem) && ctx.pc == 0x0883EDC8u) goto L_0883EDC8;
    return;
L_0883EDC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1508)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1508), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1488));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0883EDECu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883EDECu) goto L_0883EDEC;
    return;
L_0883EDEC:
    ctx.gpr[31] = (0x0883EDF4u);
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 143u, 0x08830A78u>(ctx, &aot_mem) && ctx.pc == 0x0883EDF4u) goto L_0883EDF4;
    return;
L_0883EDF4:
    ctx.gpr[10] = (ctx.gpr[2] & 1u);
    ctx.gpr[4] = (0u | 38u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x0883EE1Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883EE1Cu) goto L_0883EE1C;
    return;
L_0883EE1C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883ED90;
      }
      goto L_0883EE2C;
    }
L_0883EE2C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883ECB0;
      }
      goto L_0883EE3C;
    }
L_0883EE3C:
    ctx.gpr[31] = (0x0883EE44u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 130u, 0x0884477Cu>(ctx, &aot_mem) && ctx.pc == 0x0883EE44u) goto L_0883EE44;
    return;
L_0883EE44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883F178;
      }
      goto L_0883EE54;
    }
L_0883EE54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x0883EE60u);
    ctx.gpr[5] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem) && ctx.pc == 0x0883EE60u) goto L_0883EE60;
    return;
L_0883EE60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883F178;
      }
      goto L_0883EE68;
    }
L_0883EE68:
    ctx.gpr[4] = (17154u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883F178;
      }
      goto L_0883EE84;
    }
L_0883EE84:
    ctx.gpr[31] = (0x0883EE8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x0883EE8Cu) goto L_0883EE8C;
    return;
L_0883EE8C:
    ctx.gpr[31] = (0x0883EE94u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 114u, 0x08830840u>(ctx, &aot_mem) && ctx.pc == 0x0883EE94u) goto L_0883EE94;
    return;
L_0883EE94:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1536));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0883EEA4u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 184u, 0x08830DB4u>(ctx, &aot_mem) && ctx.pc == 0x0883EEA4u) goto L_0883EEA4;
    return;
L_0883EEA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883EEB0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem) && ctx.pc == 0x0883EEB0u) goto L_0883EEB0;
    return;
L_0883EEB0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1520));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0883EEC4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883EEC4u) goto L_0883EEC4;
    return;
L_0883EEC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883EED0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 461u, 0x08A93198u>(ctx, &aot_mem) && ctx.pc == 0x0883EED0u) goto L_0883EED0;
    return;
L_0883EED0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883F178;
      }
      goto L_0883EED8;
    }
L_0883EED8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1576), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883EF74;
      }
      goto L_0883EF00;
    }
L_0883EF00:
    ctx.gpr[31] = (0x0883EF08u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem) && ctx.pc == 0x0883EF08u) goto L_0883EF08;
    return;
L_0883EF08:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0883EF14u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 68u, 0x088304BCu>(ctx, &aot_mem) && ctx.pc == 0x0883EF14u) goto L_0883EF14;
    return;
L_0883EF14:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1632));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x0883EF28u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883EF28u) goto L_0883EF28;
    return;
L_0883EF28:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1648));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883EF38u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 38u, 0x08830268u>(ctx, &aot_mem) && ctx.pc == 0x0883EF38u) goto L_0883EF38;
    return;
L_0883EF38:
    ctx.gpr[4] = (48501u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48373u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.gpr[31] = (0x0883EF54u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem) && ctx.pc == 0x0883EF54u) goto L_0883EF54;
    return;
L_0883EF54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1648)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1568), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1652)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1572), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883EF94;
      }
      goto L_0883EF74;
    }
L_0883EF74:
    ctx.gpr[31] = (0x0883EF7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x0883EF7Cu) goto L_0883EF7C;
    return;
L_0883EF7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1568), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0883EF8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem) && ctx.pc == 0x0883EF8Cu) goto L_0883EF8C;
    return;
L_0883EF8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1572), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0883EF94;
L_0883EF94:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1552));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1536));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883EFA8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem) && ctx.pc == 0x0883EFA8u) goto L_0883EFA8;
    return;
L_0883EFA8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1600));
    ctx.gpr[31] = (0x0883EFB4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883EFB4u) goto L_0883EFB4;
    return;
L_0883EFB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x0883EFC0u);
    ctx.gpr[5] = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem) && ctx.pc == 0x0883EFC0u) goto L_0883EFC0;
    return;
L_0883EFC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883F010;
      }
      goto L_0883EFC8;
    }
L_0883EFC8:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1680));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1536));
    ctx.gpr[31] = (0x0883EFD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem) && ctx.pc == 0x0883EFD8u) goto L_0883EFD8;
    return;
L_0883EFD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1680)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1680), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1664));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883EFF8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem) && ctx.pc == 0x0883EFF8u) goto L_0883EFF8;
    return;
L_0883EFF8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1616));
    ctx.gpr[31] = (0x0883F004u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883F004u) goto L_0883F004;
    return;
L_0883F004:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1584));
    ctx.gpr[31] = (0x0883F010u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1568));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883F010u) goto L_0883F010;
    return;
L_0883F010:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.gpr[31] = (0x0883F024u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem) && ctx.pc == 0x0883F024u) goto L_0883F024;
    return;
L_0883F024:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0883F030u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 191u, 0x08830E04u>(ctx, &aot_mem) && ctx.pc == 0x0883F030u) goto L_0883F030;
    return;
L_0883F030:
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29668)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883F178;
      }
      goto L_0883F058;
    }
L_0883F058:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1600));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1568));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 65u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883F080u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883F080u) goto L_0883F080;
    return;
L_0883F080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x0883F08Cu);
    ctx.gpr[5] = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem) && ctx.pc == 0x0883F08Cu) goto L_0883F08C;
    return;
L_0883F08C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883F0BC;
      }
      goto L_0883F094;
    }
L_0883F094:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1616));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1584));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 65u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883F0BCu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883F0BCu) goto L_0883F0BC;
    return;
L_0883F0BC:
    ctx.gpr[31] = (0x0883F0C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 191u, 0x08830E04u>(ctx, &aot_mem) && ctx.pc == 0x0883F0C4u) goto L_0883F0C4;
    return;
L_0883F0C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29664)));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883F168;
      }
      goto L_0883F0D8;
    }
L_0883F0D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(644)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883F168;
      }
      goto L_0883F0E8;
    }
L_0883F0E8:
    ctx.gpr[31] = (0x0883F0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 143u, 0x08830A78u>(ctx, &aot_mem) && ctx.pc == 0x0883F0F0u) goto L_0883F0F0;
    return;
L_0883F0F0:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883F12C;
      }
      goto L_0883F0FC;
    }
L_0883F0FC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1600));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1568));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 65u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883F124u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883F124u) goto L_0883F124;
    return;
L_0883F124:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883F168;
      }
      goto L_0883F12C;
    }
L_0883F12C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x0883F138u);
    ctx.gpr[5] = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem) && ctx.pc == 0x0883F138u) goto L_0883F138;
    return;
L_0883F138:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883F168;
      }
      goto L_0883F140;
    }
L_0883F140:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1616));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1584));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 65u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0883F168u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x0883F168u) goto L_0883F168;
    return;
L_0883F168:
    ctx.gpr[4] = (0u | 99u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883F058;
      }
      goto L_0883F178;
    }
L_0883F178:
    ctx.gpr[31] = (0x0883F180u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x0883F180u) goto L_0883F180;
    return;
L_0883F180:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 193 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 268u);
      if (branch_taken) {
          goto L_0883F1B4;
      }
      goto L_0883F190;
    }
L_0883F190:
    ctx.gpr[5] = (0u | 183u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-937));
      if (branch_taken) {
          goto L_0883FAFC;
      }
      goto L_0883F19C;
    }
L_0883F19C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-959));
      if (branch_taken) {
          goto L_0883FC40;
      }
      goto L_0883F1A4;
    }
L_0883F1A4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883FC40;
      }
      goto L_0883F1AC;
    }
L_0883F1AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 5u, 0x0884007Cu>(ctx, &aot_mem); return;
      }
      goto L_0883F1B4;
    }
L_0883F1B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 234u);
      if (branch_taken) {
          goto L_0883FF44;
      }
      goto L_0883F1BC;
    }
L_0883F1BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 227u);
      if (branch_taken) {
          goto L_0883F1FC;
      }
      goto L_0883F1C4;
    }
L_0883F1C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 226u);
      if (branch_taken) {
          goto L_0883F1FC;
      }
      goto L_0883F1CC;
    }
L_0883F1CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 207u);
      if (branch_taken) {
          goto L_0883F9AC;
      }
      goto L_0883F1D4;
    }
L_0883F1D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 204u);
      if (branch_taken) {
          goto L_0883F1FC;
      }
      goto L_0883F1DC;
    }
L_0883F1DC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 194u);
      if (branch_taken) {
          goto L_0883FD90;
      }
      goto L_0883F1E4;
    }
L_0883F1E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 193u);
      if (branch_taken) {
          goto L_0883F1FC;
      }
      goto L_0883F1EC;
    }
L_0883F1EC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883FD90;
      }
      goto L_0883F1F4;
    }
L_0883F1F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 5u, 0x0884007Cu>(ctx, &aot_mem); return;
      }
      goto L_0883F1FC;
    }
L_0883F1FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883F9A4;
      }
      goto L_0883F20C;
    }
L_0883F20C:
    ctx.gpr[31] = (0x0883F214u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x0883F214u) goto L_0883F214;
    return;
L_0883F214:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 234u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 227u);
      if (branch_taken) {
          goto L_0883F350;
      }
      goto L_0883F224;
    }
L_0883F224:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 207u);
      if (branch_taken) {
          goto L_0883F3DC;
      }
      goto L_0883F22C;
    }
L_0883F22C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 194u);
      if (branch_taken) {
          goto L_0883F2C8;
      }
      goto L_0883F234;
    }
L_0883F234:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883F468;
      }
      goto L_0883F23C;
    }
L_0883F23C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1760));
    ctx.gpr[4] = (16232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16345u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16366u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 5243u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883F274u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883F274u) goto L_0883F274;
    return;
L_0883F274:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0883F280u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883F280u) goto L_0883F280;
    return;
L_0883F280:
    ctx.gpr[4] = (49000u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883F29Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883F29Cu) goto L_0883F29C;
    return;
L_0883F29C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0883F2A8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883F2A8u) goto L_0883F2A8;
    return;
L_0883F2A8:
    ctx.gpr[22] = (0u | 255u);
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3912), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    ctx.gpr[20] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883F468;
      }
      goto L_0883F2C8;
    }
L_0883F2C8:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1760));
    ctx.gpr[4] = (16112u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 41943u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48844u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883F2FCu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883F2FCu) goto L_0883F2FC;
    return;
L_0883F2FC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0883F308u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883F308u) goto L_0883F308;
    return;
L_0883F308:
    ctx.gpr[4] = (48880u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 41943u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883F324u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883F324u) goto L_0883F324;
    return;
L_0883F324:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0883F330u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883F330u) goto L_0883F330;
    return;
L_0883F330:
    ctx.gpr[20] = (0u | 255u);
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3912), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883F468;
      }
      goto L_0883F350;
    }
L_0883F350:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1760));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16250u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 57672u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16326u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883F388u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883F388u) goto L_0883F388;
    return;
L_0883F388:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0883F394u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883F394u) goto L_0883F394;
    return;
L_0883F394:
    ctx.gpr[4] = (48947u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883F3B0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883F3B0u) goto L_0883F3B0;
    return;
L_0883F3B0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0883F3BCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883F3BCu) goto L_0883F3BC;
    return;
L_0883F3BC:
    ctx.gpr[20] = (0u | 255u);
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3912), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883F468;
      }
      goto L_0883F3DC;
    }
L_0883F3DC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1760));
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16163u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16332u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883F414u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883F414u) goto L_0883F414;
    return;
L_0883F414:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0883F420u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883F420u) goto L_0883F420;
    return;
L_0883F420:
    ctx.gpr[4] = (49011u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883F43Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883F43Cu) goto L_0883F43C;
    return;
L_0883F43C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0883F448u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883F448u) goto L_0883F448;
    return;
L_0883F448:
    ctx.gpr[22] = (0u | 255u);
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3912), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883F468;
      }
      goto L_0883F468;
    }
L_0883F468:
    ctx.gpr[31] = (0x0883F470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 120u, 0x08830890u>(ctx, &aot_mem) && ctx.pc == 0x0883F470u) goto L_0883F470;
    return;
L_0883F470:
    ctx.gpr[4] = (ctx.gpr[2] & 1023u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(512) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883F4B8;
      }
      goto L_0883F480;
    }
L_0883F480:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3912)));
    ctx.gpr[6] = (0u | 6u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (ctx.lo);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[30]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[23]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[16] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_0883F4E8;
      }
      goto L_0883F4B8;
    }
L_0883F4B8:
    ctx.gpr[5] = (0u | 6u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[22]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (ctx.lo);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[21]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[20]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[16] = (ctx.lo);
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    goto L_0883F4E8;
L_0883F4E8:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883F5B0;
      }
      goto L_0883F4F8;
    }
L_0883F4F8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0883F510;
      }
      goto L_0883F504;
    }
L_0883F504:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0883F510;
L_0883F510:
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0883F54C;
      }
      goto L_0883F540;
    }
L_0883F540:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0883F54C;
L_0883F54C:
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0883F588;
      }
      goto L_0883F57C;
    }
L_0883F57C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0883F588;
L_0883F588:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_0883F688;
      }
      goto L_0883F5B0;
    }
L_0883F5B0:
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(413) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0883F688;
      }
      goto L_0883F5BC;
    }
L_0883F5BC:
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0883F5DC;
      }
      goto L_0883F5D0;
    }
L_0883F5D0:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0883F5DC;
L_0883F5DC:
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0883F620;
      }
      goto L_0883F614;
    }
L_0883F614:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0883F620;
L_0883F620:
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0883F664;
      }
      goto L_0883F658;
    }
L_0883F658:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0883F664;
L_0883F664:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    goto L_0883F688;
L_0883F688:
    ctx.gpr[31] = (0x0883F690u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem) && ctx.pc == 0x0883F690u) goto L_0883F690;
    return;
L_0883F690:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1744));
    ctx.gpr[31] = (0x0883F69Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem) && ctx.pc == 0x0883F69Cu) goto L_0883F69C;
    return;
L_0883F69C:
    ctx.gpr[31] = (0x0883F6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 120u, 0x08830890u>(ctx, &aot_mem) && ctx.pc == 0x0883F6A4u) goto L_0883F6A4;
    return;
L_0883F6A4:
    ctx.gpr[4] = (ctx.gpr[2] & 1023u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0883F6C0;
      }
      goto L_0883F6B4;
    }
L_0883F6B4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0883F6C0;
L_0883F6C0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3914), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3913), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (15304u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x0883F6E0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem) && ctx.pc == 0x0883F6E0u) goto L_0883F6E0;
    return;
L_0883F6E0:
    ctx.gpr[31] = (0x0883F6E8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 68u, 0x088304BCu>(ctx, &aot_mem) && ctx.pc == 0x0883F6E8u) goto L_0883F6E8;
    return;
L_0883F6E8:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0883F6F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem) && ctx.pc == 0x0883F6F8u) goto L_0883F6F8;
    return;
L_0883F6F8:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1712));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0883F70Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883F70Cu) goto L_0883F70C;
    return;
L_0883F70C:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1696));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1744));
    ctx.gpr[31] = (0x0883F720u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883F720u) goto L_0883F720;
    return;
L_0883F720:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1728));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0883F734u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883F734u) goto L_0883F734;
    return;
L_0883F734:
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0883F780u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem) && ctx.pc == 0x0883F780u) goto L_0883F780;
    return;
L_0883F780:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1776));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883F798u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem) && ctx.pc == 0x0883F798u) goto L_0883F798;
    return;
L_0883F798:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883F7A4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883F7A4u) goto L_0883F7A4;
    return;
L_0883F7A4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883F7B8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem) && ctx.pc == 0x0883F7B8u) goto L_0883F7B8;
    return;
L_0883F7B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883F7C4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883F7C4u) goto L_0883F7C4;
    return;
L_0883F7C4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3913)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3914)));
      if (branch_taken) {
          goto L_0883F9A4;
      }
      goto L_0883F7D8;
    }
L_0883F7D8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3913), static_cast<std::uint8_t>(ctx.gpr[20]));
    goto L_0883F7DC;
L_0883F7DC:
    ctx.gpr[31] = (0x0883F7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 120u, 0x08830890u>(ctx, &aot_mem) && ctx.pc == 0x0883F7E4u) goto L_0883F7E4;
    return;
L_0883F7E4:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[18] = (ctx.gpr[4] & 3u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3915), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1824));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883F814u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 45u, 0x0883032Cu>(ctx, &aot_mem) && ctx.pc == 0x0883F814u) goto L_0883F814;
    return;
L_0883F814:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1840));
    ctx.gpr[31] = (0x0883F830u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 45u, 0x0883032Cu>(ctx, &aot_mem) && ctx.pc == 0x0883F830u) goto L_0883F830;
    return;
L_0883F830:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1808));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883F844u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883F844u) goto L_0883F844;
    return;
L_0883F844:
    ctx.gpr[4] = (16042u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 43691u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1792));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883F860u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 45u, 0x0883032Cu>(ctx, &aot_mem) && ctx.pc == 0x0883F860u) goto L_0883F860;
    return;
L_0883F860:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0883F86Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883F86Cu) goto L_0883F86C;
    return;
L_0883F86C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3915)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3913)));
      if (branch_taken) {
          goto L_0883F88C;
      }
      goto L_0883F87C;
    }
L_0883F87C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0883F974;
      }
      goto L_0883F884;
    }
L_0883F884:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883F8F8;
      }
      goto L_0883F88C;
    }
L_0883F88C:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0883F974;
      }
      goto L_0883F898;
    }
L_0883F898:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x0883F8F0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem) && ctx.pc == 0x0883F8F0u) goto L_0883F8F0;
    return;
L_0883F8F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883F990;
      }
      goto L_0883F8F8;
    }
L_0883F8F8:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    if (ctx.gpr[16] == ctx.gpr[7]) {
    ctx.gpr[6] = (0u | 2u);
        goto L_0883F91C;
    }
    goto L_0883F91C;
L_0883F91C:
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3912)));
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x0883F96Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem) && ctx.pc == 0x0883F96Cu) goto L_0883F96C;
    return;
L_0883F96C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883F990;
      }
      goto L_0883F974;
    }
L_0883F974:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0883F990u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem) && ctx.pc == 0x0883F990u) goto L_0883F990;
    return;
L_0883F990:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3913), static_cast<std::uint8_t>(ctx.gpr[20]));
        goto L_0883F7DC;
    }
    goto L_0883F9A4;
L_0883F9A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 5u, 0x0884007Cu>(ctx, &aot_mem); return;
      }
      goto L_0883F9AC;
    }
L_0883F9AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1653))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883FAF4;
      }
      goto L_0883F9BC;
    }
L_0883F9BC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1904));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1856));
    ctx.gpr[31] = (0x0883F9CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem) && ctx.pc == 0x0883F9CCu) goto L_0883F9CC;
    return;
L_0883F9CC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1872));
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0883F9E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem) && ctx.pc == 0x0883F9E8u) goto L_0883F9E8;
    return;
L_0883F9E8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883F9F8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883F9F8u) goto L_0883F9F8;
    return;
L_0883F9F8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883FA08u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883FA08u) goto L_0883FA08;
    return;
L_0883FA08:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1888));
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0883FA20u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883FA20u) goto L_0883FA20;
    return;
L_0883FA20:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883FA30u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883FA30u) goto L_0883FA30;
    return;
L_0883FA30:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883FA40u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883FA40u) goto L_0883FA40;
    return;
L_0883FA40:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(17));
    ctx.gpr[5] = (16204u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883FA9Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem) && ctx.pc == 0x0883FA9Cu) goto L_0883FA9C;
    return;
L_0883FA9C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883FAA8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem) && ctx.pc == 0x0883FAA8u) goto L_0883FAA8;
    return;
L_0883FAA8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883FAC0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883FAC0u) goto L_0883FAC0;
    return;
L_0883FAC0:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0883FAF4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem) && ctx.pc == 0x0883FAF4u) goto L_0883FAF4;
    return;
L_0883FAF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 5u, 0x0884007Cu>(ctx, &aot_mem); return;
      }
      goto L_0883FAFC;
    }
L_0883FAFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1653))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883FC38;
      }
      goto L_0883FB0C;
    }
L_0883FB0C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1968));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1920));
    ctx.gpr[31] = (0x0883FB1Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem) && ctx.pc == 0x0883FB1Cu) goto L_0883FB1C;
    return;
L_0883FB1C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1936));
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0883FB38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem) && ctx.pc == 0x0883FB38u) goto L_0883FB38;
    return;
L_0883FB38:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883FB48u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883FB48u) goto L_0883FB48;
    return;
L_0883FB48:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883FB58u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883FB58u) goto L_0883FB58;
    return;
L_0883FB58:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1952));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x0883FB68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883FB68u) goto L_0883FB68;
    return;
L_0883FB68:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0883FB78u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883FB78u) goto L_0883FB78;
    return;
L_0883FB78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883FB88u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883FB88u) goto L_0883FB88;
    return;
L_0883FB88:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(17));
    ctx.gpr[5] = (16204u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0883FBE0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem) && ctx.pc == 0x0883FBE0u) goto L_0883FBE0;
    return;
L_0883FBE0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883FBECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem) && ctx.pc == 0x0883FBECu) goto L_0883FBEC;
    return;
L_0883FBEC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0883FC04u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883FC04u) goto L_0883FC04;
    return;
L_0883FC04:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0883FC38u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem) && ctx.pc == 0x0883FC38u) goto L_0883FC38;
    return;
L_0883FC38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 5u, 0x0884007Cu>(ctx, &aot_mem); return;
      }
      goto L_0883FC40;
    }
L_0883FC40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1653))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883FD88;
      }
      goto L_0883FC50;
    }
L_0883FC50:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(2032));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1984));
    ctx.gpr[31] = (0x0883FC60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem) && ctx.pc == 0x0883FC60u) goto L_0883FC60;
    return;
L_0883FC60:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(2000));
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0883FC7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem) && ctx.pc == 0x0883FC7Cu) goto L_0883FC7C;
    return;
L_0883FC7C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883FC8Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883FC8Cu) goto L_0883FC8C;
    return;
L_0883FC8C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883FC9Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883FC9Cu) goto L_0883FC9C;
    return;
L_0883FC9C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(2016));
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0883FCB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883FCB4u) goto L_0883FCB4;
    return;
L_0883FCB4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883FCC4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem) && ctx.pc == 0x0883FCC4u) goto L_0883FCC4;
    return;
L_0883FCC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0883FCD4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem) && ctx.pc == 0x0883FCD4u) goto L_0883FCD4;
    return;
L_0883FCD4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(17));
    ctx.gpr[5] = (16204u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883FD30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem) && ctx.pc == 0x0883FD30u) goto L_0883FD30;
    return;
L_0883FD30:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883FD3Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem) && ctx.pc == 0x0883FD3Cu) goto L_0883FD3C;
    return;
L_0883FD3C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0883FD54u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883FD54u) goto L_0883FD54;
    return;
L_0883FD54:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0883FD88u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem) && ctx.pc == 0x0883FD88u) goto L_0883FD88;
    return;
L_0883FD88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 5u, 0x0884007Cu>(ctx, &aot_mem); return;
      }
      goto L_0883FD90;
    }
L_0883FD90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883FF3C;
      }
      goto L_0883FDA0;
    }
L_0883FDA0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(2048));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2064));
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16025u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[31] = (0x0883FDD0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883FDD0u) goto L_0883FDD0;
    return;
L_0883FDD0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883FDE0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem) && ctx.pc == 0x0883FDE0u) goto L_0883FDE0;
    return;
L_0883FDE0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0883FDECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883FDECu) goto L_0883FDEC;
    return;
L_0883FDEC:
    ctx.gpr[31] = (0x0883FDF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 120u, 0x08830890u>(ctx, &aot_mem) && ctx.pc == 0x0883FDF4u) goto L_0883FDF4;
    return;
L_0883FDF4:
    ctx.gpr[4] = (ctx.gpr[2] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0883FF24;
      }
      goto L_0883FE00;
    }
L_0883FE00:
    ctx.gpr[31] = (0x0883FE08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883FE08u) goto L_0883FE08;
    return;
L_0883FE08:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(2064));
    ctx.gpr[31] = (0x0883FE18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem) && ctx.pc == 0x0883FE18u) goto L_0883FE18;
    return;
L_0883FE18:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x0883FE28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem) && ctx.pc == 0x0883FE28u) goto L_0883FE28;
    return;
L_0883FE28:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883FE38u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem) && ctx.pc == 0x0883FE38u) goto L_0883FE38;
    return;
L_0883FE38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883FE44u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem) && ctx.pc == 0x0883FE44u) goto L_0883FE44;
    return;
L_0883FE44:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0883FF24;
      }
      goto L_0883FE58;
    }
L_0883FE58:
    ctx.gpr[31] = (0x0883FE60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem) && ctx.pc == 0x0883FE60u) goto L_0883FE60;
    return;
L_0883FE60:
    ctx.gpr[4] = (0u | 204u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0883FEC8;
      }
      goto L_0883FE6C;
    }
L_0883FE6C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(21));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 70u);
    ctx.gpr[7] = (0u | 70u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x0883FEC0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem) && ctx.pc == 0x0883FEC0u) goto L_0883FEC0;
    return;
L_0883FEC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883FF3C;
      }
      goto L_0883FEC8;
    }
L_0883FEC8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(21));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x0883FF1Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem) && ctx.pc == 0x0883FF1Cu) goto L_0883FF1C;
    return;
L_0883FF1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0883FF3C;
      }
      goto L_0883FF24;
    }
L_0883FF24:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(21));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0883FF3Cu);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem) && ctx.pc == 0x0883FF3Cu) goto L_0883FF3C;
    return;
L_0883FF3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 5u, 0x0884007Cu>(ctx, &aot_mem); return;
      }
      goto L_0883FF44;
    }
L_0883FF44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 5u, 0x0884007Cu>(ctx, &aot_mem); return;
      }
      goto L_0883FF54;
    }
L_0883FF54:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(2080));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2096));
    ctx.gpr[5] = (16102u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16140u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[31] = (0x0883FF80u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem) && ctx.pc == 0x0883FF80u) goto L_0883FF80;
    return;
L_0883FF80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0883FF90u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem) && ctx.pc == 0x0883FF90u) goto L_0883FF90;
    return;
L_0883FF90:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0883FF9Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem) && ctx.pc == 0x0883FF9Cu) goto L_0883FF9C;
    return;
L_0883FF9C:
    ctx.gpr[31] = (0x0883FFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 120u, 0x08830890u>(ctx, &aot_mem) && ctx.pc == 0x0883FFA4u) goto L_0883FFA4;
    return;
L_0883FFA4:
    ctx.gpr[4] = (ctx.gpr[2] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 4u, 0x08840064u>(ctx, &aot_mem); return;
      }
      goto L_0883FFB0;
    }
L_0883FFB0:
    ctx.gpr[31] = (0x0883FFB8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem) && ctx.pc == 0x0883FFB8u) goto L_0883FFB8;
    return;
L_0883FFB8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(2096));
    ctx.gpr[31] = (0x0883FFC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem) && ctx.pc == 0x0883FFC8u) goto L_0883FFC8;
    return;
L_0883FFC8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x0883FFD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem) && ctx.pc == 0x0883FFD8u) goto L_0883FFD8;
    return;
L_0883FFD8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0883FFE8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem) && ctx.pc == 0x0883FFE8u) goto L_0883FFE8;
    return;
L_0883FFE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0883FFF4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem) && ctx.pc == 0x0883FFF4u) goto L_0883FFF4;
    return;
L_0883FFF4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    ctx.pc = 0x08840000u; return;
}

void recomp_unit_0014(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0014_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_14(Runtime &runtime) {
    runtime.register_generated_unit(14u, 0x0883C000u, 16384u, &recomp_unit_0014, &recomp_unit_0014_entry);
    runtime.register_function(0x0883C004u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C00Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C01Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C028u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C030u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C050u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C058u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C064u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C080u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C090u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C0A0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C0B8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C0C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C0E4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C0F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C104u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C120u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C130u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C140u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C150u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C158u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C160u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C168u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C170u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C190u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C198u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C1BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C1F4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C208u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C238u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C24Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C254u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C28Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C2A0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C2D0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C2E4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C2E8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C314u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C31Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C328u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C330u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C33Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C344u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C34Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C35Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C37Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C390u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C398u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C3A0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C3B4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C3C0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C3C8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C3E4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C3F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C400u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C408u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C41Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C428u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C448u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C468u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C470u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C478u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C48Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C4A0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C4B8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C4C0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C4DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C4ECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C504u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C50Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C528u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C548u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C550u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C558u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C56Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C584u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C58Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C5A8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C5C0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C5CCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C5DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C5F0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C60Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C618u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C630u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C63Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C654u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C660u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C668u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C674u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C67Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C68Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C69Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C6A4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C6B0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C6B8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C6D4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C6DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C6ECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C6F4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C6FCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C70Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C714u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C728u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C730u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C738u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C740u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C758u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C76Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C780u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C794u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C7A8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C7ACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C7BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C7C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C7D4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C7E8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C7F0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C80Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C814u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C834u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C880u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C890u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C8A8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C8E0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C8E8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C8F4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C928u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C930u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C938u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C954u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C958u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C964u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C96Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C990u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C99Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C9ACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C9B4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C9BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C9E0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883C9ECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CA14u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CA1Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CA24u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CA30u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CA3Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CA50u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CA64u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CA6Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CA7Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CA88u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CA90u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CA98u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CAA0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CAACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CAB8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CAC4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CAD0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CAE4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CAF4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB00u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB10u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB2Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB34u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB3Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB44u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB60u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB70u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB7Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB8Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CB98u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CBACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CBB8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CBC4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CBD0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CBDCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CBF0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC00u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC0Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC20u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC2Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC30u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC44u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC54u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC64u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC74u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC7Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC88u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC94u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CC9Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CCACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CCBCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CCCCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CCDCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CCECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CCFCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CD44u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CD80u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CD88u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CDB8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CDDCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CDE4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CDFCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE04u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE0Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE18u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE20u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE28u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE30u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE40u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE48u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE58u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE64u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE6Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE74u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE7Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE8Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CE98u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CEA0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF00u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF14u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF20u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF28u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF34u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF3Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF5Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF6Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF7Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CF90u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CFACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CFB4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CFBCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CFDCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CFE4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883CFECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D004u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D00Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D014u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D02Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D034u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D050u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D05Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D06Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D07Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D088u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D098u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D0A8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D0B4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D0BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D0D0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D0E0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D0F0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D130u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D138u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D158u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D160u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D168u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D170u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D178u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D180u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D18Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D198u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D1A4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D1ACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D1B4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D1D8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D1DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D1E4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D208u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D20Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D214u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D218u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D220u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D22Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D234u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D240u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D24Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D258u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D264u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D270u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D280u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D298u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D2A0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D2A8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D2CCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D2F0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D320u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D370u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D378u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D380u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D394u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D3A4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D3BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D3C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D3FCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D418u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D428u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D434u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D460u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D470u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D488u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D490u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D49Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D4A8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D4C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D4D0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D4D8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D4E8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D4F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D510u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D518u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D52Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D538u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D55Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D56Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D580u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D5B0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D5B8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D5C0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D5C8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D5DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D5E8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D60Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D61Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D630u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D660u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D668u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D67Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D688u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D6ACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D6BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D6D0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D700u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D710u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D718u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D720u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D72Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D740u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D748u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D758u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D764u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D770u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D794u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D7A0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D7B0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D7BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D7C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D7D4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D7DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D7E8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D804u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D810u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D820u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D82Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D834u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D844u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D84Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D858u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D874u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D880u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D890u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D89Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D8A4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D8B4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D8BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D8C8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D8E4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D8F0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D900u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D90Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D918u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D924u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D93Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D944u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D950u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D958u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D960u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D968u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D974u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D97Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D988u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D99Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D9ACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D9B0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D9C0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D9E0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D9ECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883D9F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DA10u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DA18u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DA20u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DA28u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DA30u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DA38u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DA50u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DA58u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DA74u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DA80u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DAA8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DAB8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DAD0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DAF8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DB00u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DB0Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DB24u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DB34u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DB50u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DB78u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DB8Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DB98u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DBB8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DBC8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DBDCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC04u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC20u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC34u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC40u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC4Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC58u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC80u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC88u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC94u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DC9Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DCA4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DCACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DCC4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DCE0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DCECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DCF8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DD18u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DD28u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DD3Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DD64u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DD84u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DD98u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DDA4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DDB0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DDBCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DDE4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DDECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DDF4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DE0Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DE28u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DE34u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DE40u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DE60u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DE70u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DE84u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DEACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DECCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DEE0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DEECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DEF8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DF04u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DF2Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DF34u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DF3Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DF54u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DF6Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DF7Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DF88u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DFA8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DFBCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DFC8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DFD4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883DFE0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E008u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E014u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E020u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E03Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E044u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E04Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E068u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E078u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E084u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E090u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E09Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E0A8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E0B4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E0C0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E0CCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E0D8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E0E4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E0FCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E108u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E114u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E120u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E12Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E13Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E148u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E158u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E168u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E170u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E17Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E184u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E18Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E1A4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E1B4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E1C0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E1D4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E1E4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E1F0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E1F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E210u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E220u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E22Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E240u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E250u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E25Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E26Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E278u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E294u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E2BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E2DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E2ECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E2F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E314u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E33Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E35Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E374u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E380u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E3A4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E3D0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E3D8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E3E4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E3F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E420u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E430u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E43Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E444u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E460u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E494u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E4BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E4C8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E4D4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E4E8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E4F4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E50Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E514u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E520u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E530u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E538u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E540u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E548u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E550u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E558u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E568u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E574u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E594u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E5A4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E5B4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E5C8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E5F0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E604u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E614u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E620u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E630u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E638u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E644u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E660u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E668u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E678u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E684u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E6A4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E6B4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E6C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E6D8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E700u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E714u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E724u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E730u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E740u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E748u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E754u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E770u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E778u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E788u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E794u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E7B4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E7C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E7D4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E7E8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E810u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E824u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E834u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E840u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E850u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E858u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E864u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E880u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E898u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E8A0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E8ACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E8BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E8C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E8CCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E8D4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E8DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E8E4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E8F4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E900u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E920u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E930u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E940u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E954u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E97Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E990u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E9A0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E9ACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E9BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E9C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E9D0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E9ECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883E9F4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EA04u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EA10u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EA30u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EA40u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EA50u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EA64u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EA8Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EAA0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EAB0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EABCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EACCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EAD4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EAE0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EAFCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EB04u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EB14u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EB20u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EB40u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EB50u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EB60u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EB74u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EB9Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EBB0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EBC0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EBCCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EBDCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EBE4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EBF0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC0Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC14u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC1Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC24u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC2Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC38u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC40u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC58u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC78u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC80u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC88u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC90u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EC98u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ECB0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ECDCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ECF0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ED04u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ED18u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ED30u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ED40u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ED58u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883ED90u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EDA0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EDB0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EDC8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EDECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EDF4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EE1Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EE2Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EE3Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EE44u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EE54u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EE60u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EE68u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EE84u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EE8Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EE94u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EEA4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EEB0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EEC4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EED0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EED8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EF00u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EF08u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EF14u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EF28u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EF38u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EF54u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EF74u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EF7Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EF8Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EF94u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EFA8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EFB4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EFC0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EFC8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EFD8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883EFF8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F004u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F010u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F024u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F030u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F058u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F080u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F08Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F094u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F0BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F0C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F0D8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F0E8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F0F0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F0FCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F124u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F12Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F138u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F140u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F168u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F178u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F180u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F190u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F19Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F1A4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F1ACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F1B4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F1BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F1C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F1CCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F1D4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F1DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F1E4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F1ECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F1F4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F1FCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F20Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F214u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F224u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F22Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F234u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F23Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F274u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F280u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F29Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F2A8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F2C8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F2FCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F308u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F324u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F330u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F350u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F388u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F394u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F3B0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F3BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F3DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F414u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F420u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F43Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F448u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F468u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F470u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F480u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F4B8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F4E8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F4F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F504u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F510u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F540u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F54Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F57Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F588u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F5B0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F5BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F5D0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F5DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F614u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F620u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F658u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F664u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F688u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F690u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F69Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F6A4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F6B4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F6C0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F6E0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F6E8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F6F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F70Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F720u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F734u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F780u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F798u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F7A4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F7B8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F7C4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F7D8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F7DCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F7E4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F814u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F830u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F844u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F860u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F86Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F87Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F884u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F88Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F898u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F8F0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F8F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F91Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F96Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F974u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F990u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F9A4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F9ACu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F9BCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F9CCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F9E8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883F9F8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FA08u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FA20u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FA30u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FA40u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FA9Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FAA8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FAC0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FAF4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FAFCu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FB0Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FB1Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FB38u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FB48u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FB58u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FB68u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FB78u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FB88u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FBE0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FBECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FC04u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FC38u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FC40u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FC50u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FC60u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FC7Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FC8Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FC9Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FCB4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FCC4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FCD4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FD30u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FD3Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FD54u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FD88u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FD90u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FDA0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FDD0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FDE0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FDECu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FDF4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FE00u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FE08u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FE18u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FE28u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FE38u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FE44u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FE58u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FE60u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FE6Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FEC0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FEC8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FF1Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FF24u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FF3Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FF44u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FF54u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FF80u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FF90u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FF9Cu, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FFA4u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FFB0u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FFB8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FFC8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FFD8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FFE8u, &recomp_unit_0014, "recomp_unit_0014");
    runtime.register_function(0x0883FFF4u, &recomp_unit_0014, "recomp_unit_0014");
}
} // namespace psprecomp
