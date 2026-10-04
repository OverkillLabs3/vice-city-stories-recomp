#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0039[4095] = {
    1, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 18,
    0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0,
    0, 27, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 0, 36, 0, 0, 37,
    0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 43,
    0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 49, 0, 0, 0, 0, 0,
    0, 50, 0, 51, 0, 52, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61,
    0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0,
    0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94,
    0, 95, 0, 0, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 103,
    0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0,
    112, 0, 0, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 119, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 122, 123, 0, 0, 124, 0, 125, 0, 126, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0,
    132, 0, 133, 0, 134, 0, 0, 0, 135, 136, 0, 0, 137, 0, 138, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0,
    0, 0, 0, 142, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0,
    148, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 152, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 157,
    0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 163, 0, 164, 0, 165, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0,
    0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0,
    0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 191, 0, 0, 0, 0, 192, 193,
    0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 208, 0, 209, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214,
    0, 0, 0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 220, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 224, 0, 0, 0, 225, 0, 226, 0, 0, 0, 227, 0, 228, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0,
    0, 0, 0, 0, 233, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 239, 0, 0, 0, 240, 0,
    0, 241, 0, 0, 0, 242, 0, 243, 0, 0, 0, 244, 0, 245, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 249, 0,
    250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 253, 0, 254, 0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0, 259, 0, 260,
    0, 0, 0, 261, 0, 0, 0, 262, 0, 263, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 269, 270,
    0, 0, 0, 271, 0, 272, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 278, 0, 279, 0,
    0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 287, 0,
    288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 0,
    293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    299, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 304, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0,
    0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0,
    0, 0, 0, 317, 0, 0, 318, 0, 319, 0, 0, 320, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324,
    0, 0, 325, 0, 326, 0, 327, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 0, 331, 0, 332, 0, 333, 0, 334, 0, 335, 0, 0, 336, 0, 0,
    0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 339, 340, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 344, 0, 345, 0, 346,
    0, 0, 347, 0, 348, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0,
    0, 355, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362,
    0, 0, 363, 0, 0, 0, 364, 0, 365, 0, 0, 366, 0, 0, 0, 367, 0, 368, 0, 0, 369, 0, 0, 0, 370, 0, 371, 0, 372, 0, 0, 0,
    0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 381, 0, 382, 0, 0, 383, 0, 0, 384, 0, 385, 0, 386, 0,
    0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 389, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 394, 0,
    0, 395, 0, 396, 0, 397, 0, 398, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 404, 0, 405, 0, 0, 0, 0,
    406, 0, 0, 407, 408, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0,
    0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422,
    0, 423, 424, 0, 0, 0, 0, 425, 0, 0, 426, 0, 427, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 431, 0, 432, 0, 0,
    0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 437, 438, 0, 0, 0, 0,
    0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 443, 444, 0, 0, 0, 0, 0, 0, 445,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 450, 0, 0, 451,
    0, 0, 0, 452, 0, 453, 0, 0, 454, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 462, 0, 463, 0, 0, 464, 0, 465, 0, 466, 0, 0, 0, 467, 0, 468,
    0, 469, 0, 470, 0, 471, 0, 472, 473, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 477, 0,
    0, 0, 0, 0, 478, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 0,
    483, 0, 0, 484, 0, 485, 0, 486, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0,
    0, 0, 491, 0, 492, 0, 493, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 497, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 0, 502, 0, 503, 0, 504, 505, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0,
    0, 0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 510, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 513, 0, 0, 514, 0, 515, 0, 516, 0, 517, 0, 0, 518, 0, 0, 519, 0, 0, 0, 520, 0, 0, 521, 0, 0, 522, 0, 523, 0, 0, 0,
    524, 0, 0, 0, 525, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 530, 0, 531, 0, 532, 0,
    533, 0, 0, 534, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 539, 0, 540, 0,
    0, 0, 0, 541, 0, 542, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 545, 546, 0, 0, 0, 0, 547, 0, 0, 0,
    0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0,
    0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0,
    0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 559, 0, 560, 0, 0, 0, 561, 562, 0, 563, 0, 0, 0, 0, 0, 564, 0, 565, 0, 566, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 572,
    0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 580,
    0, 581, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 584, 0, 585, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0,
    0, 0, 0, 589, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0,
    594, 0, 0, 595, 0, 596, 0, 597, 0, 598, 0, 599, 0, 600, 0, 601, 0, 602, 0, 603, 0, 604, 0, 605, 0, 606, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 607, 0, 608, 0, 609, 0, 610, 0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 0,
    616, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0,
    0, 0, 625, 0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 0, 0, 628, 0, 629, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 632, 0,
    0, 633, 0, 0, 0, 634, 0, 635, 0, 0, 0, 636, 0, 0, 637, 0, 638, 0, 639, 0, 640, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 0,
    0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 646, 0, 0, 647, 0, 0,
    0, 0, 648, 0, 0, 0, 0, 0, 649, 0, 0, 650, 0, 651, 0, 0, 652, 0, 0, 653, 0, 0, 654, 655, 0, 0, 656, 0, 657, 0, 658, 0,
    0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 662, 0, 663, 0, 664, 0, 665, 0, 666, 0, 0, 0, 0,
    667, 0, 668, 0, 0, 0, 669, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 672, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 676, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0,
    0, 0, 0, 0, 679, 0, 680, 0, 0, 681, 0, 682, 0, 0, 0, 683, 0, 684, 0, 0, 685, 0, 686, 0, 687, 0, 688, 0, 0, 0, 0, 0,
    0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0, 692, 0, 0, 0, 0, 0, 0, 0, 693, 0,
    0, 0, 694, 0, 0, 695, 0, 0, 696, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 699, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0,
    0, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 705, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 710, 0, 0, 711, 0, 712, 713, 0, 0,
    0, 714, 0, 0, 715, 0, 716, 717, 0, 0, 0, 0, 0, 718, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 722, 0, 723, 0, 724, 0, 0, 725, 0, 726, 0, 727, 0, 0, 728, 0, 729, 0,
    0, 730, 0, 731, 0, 0, 732, 0, 733, 0, 734, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 736, 737, 0, 738, 0, 0, 739, 0,
    0, 0, 740, 0, 741, 0, 0, 742, 0, 743, 0, 0, 744, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 0,
    0, 0, 0, 748, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    752, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 754, 0, 755, 0, 0, 0, 0, 0, 756, 0, 0, 757, 0, 758, 0,
    759, 0, 760, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 763, 0, 764, 0, 0, 0, 0, 0, 0, 765, 0, 0,
    0, 766, 0, 767, 0, 0, 0, 768, 0, 769, 0, 770, 0, 771, 0, 772, 0, 0, 0, 773, 0, 774, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 776, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 780, 0, 781, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 784,
    0, 0, 0, 0, 785, 0, 0, 0, 0, 786, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 793, 0, 0, 0, 0, 794, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 797, 0, 0, 798,
    0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 800, 0, 801, 0, 802, 803, 0, 0, 0, 0, 804, 0, 0, 805, 0, 806, 0, 0, 0, 0, 0,
    0, 0, 807, 0, 0, 0, 0, 0, 808, 0, 0, 809, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 811, 0, 812, 0, 813, 814, 0, 0, 0,
    0, 815, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 818, 0, 0, 819, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0,
    0, 821, 0, 822, 0, 823, 824, 0, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 827, 0, 828, 0, 0, 0, 0, 0,
    0, 829, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 831, 0, 832, 0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 834, 0, 0, 835,
    0, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 837, 0, 838, 0, 839, 840, 0, 0, 0, 0, 0, 0, 841, 0, 0, 0, 0, 0, 842, 0, 843,
    0, 0, 0, 0, 0, 0, 844, 0, 0, 0, 0, 0, 845, 0, 0, 846, 847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0,
    849, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 850, 0, 0, 0, 0, 851, 0, 0, 0, 0,
    0, 0, 0, 852, 0, 0, 0, 0, 0, 0, 0, 0, 853, 0, 0, 0, 0, 0, 0, 0, 854, 0, 0, 0, 0, 855, 0, 856, 0, 0, 0, 857,
    0, 0, 0, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0,
    860, 0, 0, 0, 0, 861, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 862, 0, 863, 0, 0, 0, 0, 864, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 865, 0, 0, 0, 866, 0, 867, 0, 868, 0, 0, 0, 0, 0, 869, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 870, 0, 0, 871, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 872, 0, 0, 0, 0, 0, 873, 0, 0, 0, 0, 874, 0, 875, 0, 0, 0, 0, 876, 0, 877, 0, 0, 878, 0, 879,
};
void recomp_unit_0039_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088A0000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0039[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A0000;
    case 2u: goto L_088A0004;
    case 3u: goto L_088A000C;
    case 4u: goto L_088A0028;
    case 5u: goto L_088A0034;
    case 6u: goto L_088A0040;
    case 7u: goto L_088A0048;
    case 8u: goto L_088A0054;
    case 9u: goto L_088A0068;
    case 10u: goto L_088A008C;
    case 11u: goto L_088A00A8;
    case 12u: goto L_088A00AC;
    case 13u: goto L_088A00B8;
    case 14u: goto L_088A00C8;
    case 15u: goto L_088A00D4;
    case 16u: goto L_088A00DC;
    case 17u: goto L_088A00F4;
    case 18u: goto L_088A00FC;
    case 19u: goto L_088A010C;
    case 20u: goto L_088A011C;
    case 21u: goto L_088A0128;
    case 22u: goto L_088A013C;
    case 23u: goto L_088A0144;
    case 24u: goto L_088A0154;
    case 25u: goto L_088A0160;
    case 26u: goto L_088A0170;
    case 27u: goto L_088A0184;
    case 28u: goto L_088A018C;
    case 29u: goto L_088A019C;
    case 30u: goto L_088A01A4;
    case 31u: goto L_088A01B4;
    case 32u: goto L_088A01C0;
    case 33u: goto L_088A01C8;
    case 34u: goto L_088A01D4;
    case 35u: goto L_088A01DC;
    case 36u: goto L_088A01F0;
    case 37u: goto L_088A01FC;
    case 38u: goto L_088A0218;
    case 39u: goto L_088A0228;
    case 40u: goto L_088A0238;
    case 41u: goto L_088A024C;
    case 42u: goto L_088A0278;
    case 43u: goto L_088A027C;
    case 44u: goto L_088A0284;
    case 45u: goto L_088A029C;
    case 46u: goto L_088A02B4;
    case 47u: goto L_088A02CC;
    case 48u: goto L_088A02E4;
    case 49u: goto L_088A02E8;
    case 50u: goto L_088A0304;
    case 51u: goto L_088A030C;
    case 52u: goto L_088A0314;
    case 53u: goto L_088A031C;
    case 54u: goto L_088A0328;
    case 55u: goto L_088A0344;
    case 56u: goto L_088A0354;
    case 57u: goto L_088A035C;
    case 58u: goto L_088A0364;
    case 59u: goto L_088A036C;
    case 60u: goto L_088A0374;
    case 61u: goto L_088A037C;
    case 62u: goto L_088A0384;
    case 63u: goto L_088A0394;
    case 64u: goto L_088A03AC;
    case 65u: goto L_088A03C0;
    case 66u: goto L_088A03D0;
    case 67u: goto L_088A03E4;
    case 68u: goto L_088A03F4;
    case 69u: goto L_088A0414;
    case 70u: goto L_088A041C;
    case 71u: goto L_088A0430;
    case 72u: goto L_088A0468;
    case 73u: goto L_088A04E4;
    case 74u: goto L_088A0570;
    case 75u: goto L_088A0578;
    case 76u: goto L_088A05AC;
    case 77u: goto L_088A05D0;
    case 78u: goto L_088A05D8;
    case 79u: goto L_088A060C;
    case 80u: goto L_088A0644;
    case 81u: goto L_088A064C;
    case 82u: goto L_088A0660;
    case 83u: goto L_088A0698;
    case 84u: goto L_088A06A4;
    case 85u: goto L_088A06AC;
    case 86u: goto L_088A06C0;
    case 87u: goto L_088A06C8;
    case 88u: goto L_088A06DC;
    case 89u: goto L_088A0714;
    case 90u: goto L_088A071C;
    case 91u: goto L_088A0724;
    case 92u: goto L_088A0738;
    case 93u: goto L_088A0770;
    case 94u: goto L_088A077C;
    case 95u: goto L_088A0784;
    case 96u: goto L_088A0794;
    case 97u: goto L_088A07A4;
    case 98u: goto L_088A07AC;
    case 99u: goto L_088A07BC;
    case 100u: goto L_088A07CC;
    case 101u: goto L_088A07E4;
    case 102u: goto L_088A07F4;
    case 103u: goto L_088A07FC;
    case 104u: goto L_088A0814;
    case 105u: goto L_088A082C;
    case 106u: goto L_088A0838;
    case 107u: goto L_088A0848;
    case 108u: goto L_088A0850;
    case 109u: goto L_088A085C;
    case 110u: goto L_088A086C;
    case 111u: goto L_088A0874;
    case 112u: goto L_088A0880;
    case 113u: goto L_088A0890;
    case 114u: goto L_088A0898;
    case 115u: goto L_088A08A0;
    case 116u: goto L_088A08BC;
    case 117u: goto L_088A08DC;
    case 118u: goto L_088A08E8;
    case 119u: goto L_088A08EC;
    case 120u: goto L_088A0920;
    case 121u: goto L_088A0980;
    case 122u: goto L_088A0988;
    case 123u: goto L_088A098C;
    case 124u: goto L_088A0998;
    case 125u: goto L_088A09A0;
    case 126u: goto L_088A09A8;
    case 127u: goto L_088A09B0;
    case 128u: goto L_088A09C0;
    case 129u: goto L_088A09D4;
    case 130u: goto L_088A09E8;
    case 131u: goto L_088A09F0;
    case 132u: goto L_088A0A00;
    case 133u: goto L_088A0A08;
    case 134u: goto L_088A0A10;
    case 135u: goto L_088A0A20;
    case 136u: goto L_088A0A24;
    case 137u: goto L_088A0A30;
    case 138u: goto L_088A0A38;
    case 139u: goto L_088A0A4C;
    case 140u: goto L_088A0A58;
    case 141u: goto L_088A0A68;
    case 142u: goto L_088A0A8C;
    case 143u: goto L_088A0A90;
    case 144u: goto L_088A0AD0;
    case 145u: goto L_088A0AE0;
    case 146u: goto L_088A0AE8;
    case 147u: goto L_088A0AF0;
    case 148u: goto L_088A0B00;
    case 149u: goto L_088A0B08;
    case 150u: goto L_088A0B18;
    case 151u: goto L_088A0B28;
    case 152u: goto L_088A0B2C;
    case 153u: goto L_088A0B38;
    case 154u: goto L_088A0B4C;
    case 155u: goto L_088A0B64;
    case 156u: goto L_088A0B74;
    case 157u: goto L_088A0B7C;
    case 158u: goto L_088A0B84;
    case 159u: goto L_088A0B8C;
    case 160u: goto L_088A0B94;
    case 161u: goto L_088A0BD8;
    case 162u: goto L_088A0BF4;
    case 163u: goto L_088A0C04;
    case 164u: goto L_088A0C0C;
    case 165u: goto L_088A0C14;
    case 166u: goto L_088A0C1C;
    case 167u: goto L_088A0C28;
    case 168u: goto L_088A0C34;
    case 169u: goto L_088A0C50;
    case 170u: goto L_088A0C68;
    case 171u: goto L_088A0C74;
    case 172u: goto L_088A0C84;
    case 173u: goto L_088A0C8C;
    case 174u: goto L_088A0CA8;
    case 175u: goto L_088A0CB8;
    case 176u: goto L_088A0D0C;
    case 177u: goto L_088A0D18;
    case 178u: goto L_088A0D34;
    case 179u: goto L_088A0D3C;
    case 180u: goto L_088A0D44;
    case 181u: goto L_088A0D54;
    case 182u: goto L_088A0D64;
    case 183u: goto L_088A0D70;
    case 184u: goto L_088A0D84;
    case 185u: goto L_088A0DA0;
    case 186u: goto L_088A0DC8;
    case 187u: goto L_088A0E18;
    case 188u: goto L_088A0E20;
    case 189u: goto L_088A0E50;
    case 190u: goto L_088A0E5C;
    case 191u: goto L_088A0E64;
    case 192u: goto L_088A0E78;
    case 193u: goto L_088A0E7C;
    case 194u: goto L_088A0E90;
    case 195u: goto L_088A0EA0;
    case 196u: goto L_088A0EB8;
    case 197u: goto L_088A0EDC;
    case 198u: goto L_088A0F04;
    case 199u: goto L_088A0F2C;
    case 200u: goto L_088A0F54;
    case 201u: goto L_088A0F7C;
    case 202u: goto L_088A0FA4;
    case 203u: goto L_088A0FCC;
    case 204u: goto L_088A0FF4;
    case 205u: goto L_088A101C;
    case 206u: goto L_088A1044;
    case 207u: goto L_088A1054;
    case 208u: goto L_088A1084;
    case 209u: goto L_088A108C;
    case 210u: goto L_088A10A4;
    case 211u: goto L_088A10AC;
    case 212u: goto L_088A10BC;
    case 213u: goto L_088A10CC;
    case 214u: goto L_088A10FC;
    case 215u: goto L_088A1110;
    case 216u: goto L_088A1118;
    case 217u: goto L_088A1120;
    case 218u: goto L_088A1138;
    case 219u: goto L_088A1148;
    case 220u: goto L_088A1154;
    case 221u: goto L_088A115C;
    case 222u: goto L_088A1164;
    case 223u: goto L_088A117C;
    case 224u: goto L_088A118C;
    case 225u: goto L_088A119C;
    case 226u: goto L_088A11A4;
    case 227u: goto L_088A11B4;
    case 228u: goto L_088A11BC;
    case 229u: goto L_088A11C4;
    case 230u: goto L_088A11D4;
    case 231u: goto L_088A11EC;
    case 232u: goto L_088A11F8;
    case 233u: goto L_088A1210;
    case 234u: goto L_088A1214;
    case 235u: goto L_088A1224;
    case 236u: goto L_088A123C;
    case 237u: goto L_088A1254;
    case 238u: goto L_088A1260;
    case 239u: goto L_088A1268;
    case 240u: goto L_088A1278;
    case 241u: goto L_088A1284;
    case 242u: goto L_088A1294;
    case 243u: goto L_088A129C;
    case 244u: goto L_088A12AC;
    case 245u: goto L_088A12B4;
    case 246u: goto L_088A12C4;
    case 247u: goto L_088A12D8;
    case 248u: goto L_088A12E0;
    case 249u: goto L_088A12F8;
    case 250u: goto L_088A1300;
    case 251u: goto L_088A1310;
    case 252u: goto L_088A1320;
    case 253u: goto L_088A1328;
    case 254u: goto L_088A1330;
    case 255u: goto L_088A1340;
    case 256u: goto L_088A134C;
    case 257u: goto L_088A135C;
    case 258u: goto L_088A136C;
    case 259u: goto L_088A1374;
    case 260u: goto L_088A137C;
    case 261u: goto L_088A138C;
    case 262u: goto L_088A139C;
    case 263u: goto L_088A13A4;
    case 264u: goto L_088A13B4;
    case 265u: goto L_088A13BC;
    case 266u: goto L_088A13D0;
    case 267u: goto L_088A13E0;
    case 268u: goto L_088A13F0;
    case 269u: goto L_088A13F8;
    case 270u: goto L_088A13FC;
    case 271u: goto L_088A140C;
    case 272u: goto L_088A1414;
    case 273u: goto L_088A1418;
    case 274u: goto L_088A142C;
    case 275u: goto L_088A1444;
    case 276u: goto L_088A1454;
    case 277u: goto L_088A1464;
    case 278u: goto L_088A1470;
    case 279u: goto L_088A1478;
    case 280u: goto L_088A1488;
    case 281u: goto L_088A1498;
    case 282u: goto L_088A14A8;
    case 283u: goto L_088A14AC;
    case 284u: goto L_088A14C0;
    case 285u: goto L_088A14D8;
    case 286u: goto L_088A14F0;
    case 287u: goto L_088A14F8;
    case 288u: goto L_088A1500;
    case 289u: goto L_088A1518;
    case 290u: goto L_088A1530;
    case 291u: goto L_088A1558;
    case 292u: goto L_088A1564;
    case 293u: goto L_088A1580;
    case 294u: goto L_088A158C;
    case 295u: goto L_088A15B8;
    case 296u: goto L_088A15C0;
    case 297u: goto L_088A15D4;
    case 298u: goto L_088A15F0;
    case 299u: goto L_088A1600;
    case 300u: goto L_088A160C;
    case 301u: goto L_088A1620;
    case 302u: goto L_088A165C;
    case 303u: goto L_088A1664;
    case 304u: goto L_088A166C;
    case 305u: goto L_088A1680;
    case 306u: goto L_088A16B8;
    case 307u: goto L_088A16CC;
    case 308u: goto L_088A16D4;
    case 309u: goto L_088A16E4;
    case 310u: goto L_088A16F8;
    case 311u: goto L_088A1708;
    case 312u: goto L_088A172C;
    case 313u: goto L_088A173C;
    case 314u: goto L_088A174C;
    case 315u: goto L_088A175C;
    case 316u: goto L_088A1768;
    case 317u: goto L_088A178C;
    case 318u: goto L_088A1798;
    case 319u: goto L_088A17A0;
    case 320u: goto L_088A17AC;
    case 321u: goto L_088A17B4;
    case 322u: goto L_088A17C4;
    case 323u: goto L_088A17DC;
    case 324u: goto L_088A17FC;
    case 325u: goto L_088A1808;
    case 326u: goto L_088A1810;
    case 327u: goto L_088A1818;
    case 328u: goto L_088A1820;
    case 329u: goto L_088A182C;
    case 330u: goto L_088A1838;
    case 331u: goto L_088A1848;
    case 332u: goto L_088A1850;
    case 333u: goto L_088A1858;
    case 334u: goto L_088A1860;
    case 335u: goto L_088A1868;
    case 336u: goto L_088A1874;
    case 337u: goto L_088A188C;
    case 338u: goto L_088A189C;
    case 339u: goto L_088A18AC;
    case 340u: goto L_088A18B0;
    case 341u: goto L_088A18B8;
    case 342u: goto L_088A18C4;
    case 343u: goto L_088A18DC;
    case 344u: goto L_088A18EC;
    case 345u: goto L_088A18F4;
    case 346u: goto L_088A18FC;
    case 347u: goto L_088A1908;
    case 348u: goto L_088A1910;
    case 349u: goto L_088A1918;
    case 350u: goto L_088A1920;
    case 351u: goto L_088A193C;
    case 352u: goto L_088A194C;
    case 353u: goto L_088A1964;
    case 354u: goto L_088A1974;
    case 355u: goto L_088A1984;
    case 356u: goto L_088A198C;
    case 357u: goto L_088A199C;
    case 358u: goto L_088A19B4;
    case 359u: goto L_088A19C4;
    case 360u: goto L_088A19CC;
    case 361u: goto L_088A19E4;
    case 362u: goto L_088A19FC;
    case 363u: goto L_088A1A08;
    case 364u: goto L_088A1A18;
    case 365u: goto L_088A1A20;
    case 366u: goto L_088A1A2C;
    case 367u: goto L_088A1A3C;
    case 368u: goto L_088A1A44;
    case 369u: goto L_088A1A50;
    case 370u: goto L_088A1A60;
    case 371u: goto L_088A1A68;
    case 372u: goto L_088A1A70;
    case 373u: goto L_088A1A8C;
    case 374u: goto L_088A1AAC;
    case 375u: goto L_088A1AB8;
    case 376u: goto L_088A1ABC;
    case 377u: goto L_088A1AF4;
    case 378u: goto L_088A1B20;
    case 379u: goto L_088A1B30;
    case 380u: goto L_088A1B40;
    case 381u: goto L_088A1B48;
    case 382u: goto L_088A1B50;
    case 383u: goto L_088A1B5C;
    case 384u: goto L_088A1B68;
    case 385u: goto L_088A1B70;
    case 386u: goto L_088A1B78;
    case 387u: goto L_088A1B98;
    case 388u: goto L_088A1BA0;
    case 389u: goto L_088A1BB0;
    case 390u: goto L_088A1BB8;
    case 391u: goto L_088A1BC0;
    case 392u: goto L_088A1BE0;
    case 393u: goto L_088A1BE8;
    case 394u: goto L_088A1BF8;
    case 395u: goto L_088A1C04;
    case 396u: goto L_088A1C0C;
    case 397u: goto L_088A1C14;
    case 398u: goto L_088A1C1C;
    case 399u: goto L_088A1C24;
    case 400u: goto L_088A1C34;
    case 401u: goto L_088A1C44;
    case 402u: goto L_088A1C50;
    case 403u: goto L_088A1C5C;
    case 404u: goto L_088A1C64;
    case 405u: goto L_088A1C6C;
    case 406u: goto L_088A1C80;
    case 407u: goto L_088A1C8C;
    case 408u: goto L_088A1C90;
    case 409u: goto L_088A1C9C;
    case 410u: goto L_088A1CB4;
    case 411u: goto L_088A1CBC;
    case 412u: goto L_088A1CD8;
    case 413u: goto L_088A1D14;
    case 414u: goto L_088A1D1C;
    case 415u: goto L_088A1D30;
    case 416u: goto L_088A1D60;
    case 417u: goto L_088A1D68;
    case 418u: goto L_088A1D84;
    case 419u: goto L_088A1DA0;
    case 420u: goto L_088A1DD0;
    case 421u: goto L_088A1DF0;
    case 422u: goto L_088A1DFC;
    case 423u: goto L_088A1E04;
    case 424u: goto L_088A1E08;
    case 425u: goto L_088A1E1C;
    case 426u: goto L_088A1E28;
    case 427u: goto L_088A1E30;
    case 428u: goto L_088A1E38;
    case 429u: goto L_088A1E50;
    case 430u: goto L_088A1E5C;
    case 431u: goto L_088A1E6C;
    case 432u: goto L_088A1E74;
    case 433u: goto L_088A1E84;
    case 434u: goto L_088A1EA0;
    case 435u: goto L_088A1ECC;
    case 436u: goto L_088A1EE0;
    case 437u: goto L_088A1EE8;
    case 438u: goto L_088A1EEC;
    case 439u: goto L_088A1F10;
    case 440u: goto L_088A1F18;
    case 441u: goto L_088A1F38;
    case 442u: goto L_088A1F44;
    case 443u: goto L_088A1F5C;
    case 444u: goto L_088A1F60;
    case 445u: goto L_088A1F7C;
    case 446u: goto L_088A1FA8;
    case 447u: goto L_088A1FB4;
    case 448u: goto L_088A1FD4;
    case 449u: goto L_088A1FE0;
    case 450u: goto L_088A1FF0;
    case 451u: goto L_088A1FFC;
    case 452u: goto L_088A200C;
    case 453u: goto L_088A2014;
    case 454u: goto L_088A2020;
    case 455u: goto L_088A202C;
    case 456u: goto L_088A203C;
    case 457u: goto L_088A2058;
    case 458u: goto L_088A2084;
    case 459u: goto L_088A2090;
    case 460u: goto L_088A20AC;
    case 461u: goto L_088A20B8;
    case 462u: goto L_088A20C0;
    case 463u: goto L_088A20C8;
    case 464u: goto L_088A20D4;
    case 465u: goto L_088A20DC;
    case 466u: goto L_088A20E4;
    case 467u: goto L_088A20F4;
    case 468u: goto L_088A20FC;
    case 469u: goto L_088A2104;
    case 470u: goto L_088A210C;
    case 471u: goto L_088A2114;
    case 472u: goto L_088A211C;
    case 473u: goto L_088A2120;
    case 474u: goto L_088A2144;
    case 475u: goto L_088A214C;
    case 476u: goto L_088A216C;
    case 477u: goto L_088A2178;
    case 478u: goto L_088A2190;
    case 479u: goto L_088A2194;
    case 480u: goto L_088A21B0;
    case 481u: goto L_088A21D8;
    case 482u: goto L_088A21E4;
    case 483u: goto L_088A2200;
    case 484u: goto L_088A220C;
    case 485u: goto L_088A2214;
    case 486u: goto L_088A221C;
    case 487u: goto L_088A2224;
    case 488u: goto L_088A2230;
    case 489u: goto L_088A2248;
    case 490u: goto L_088A2270;
    case 491u: goto L_088A2288;
    case 492u: goto L_088A2290;
    case 493u: goto L_088A2298;
    case 494u: goto L_088A22A0;
    case 495u: goto L_088A22B8;
    case 496u: goto L_088A22C8;
    case 497u: goto L_088A22D0;
    case 498u: goto L_088A22D8;
    case 499u: goto L_088A22E8;
    case 500u: goto L_088A2310;
    case 501u: goto L_088A2324;
    case 502u: goto L_088A2334;
    case 503u: goto L_088A233C;
    case 504u: goto L_088A2344;
    case 505u: goto L_088A2348;
    case 506u: goto L_088A2364;
    case 507u: goto L_088A236C;
    case 508u: goto L_088A238C;
    case 509u: goto L_088A2398;
    case 510u: goto L_088A23B0;
    case 511u: goto L_088A23B4;
    case 512u: goto L_088A23CC;
    case 513u: goto L_088A2404;
    case 514u: goto L_088A2410;
    case 515u: goto L_088A2418;
    case 516u: goto L_088A2420;
    case 517u: goto L_088A2428;
    case 518u: goto L_088A2434;
    case 519u: goto L_088A2440;
    case 520u: goto L_088A2450;
    case 521u: goto L_088A245C;
    case 522u: goto L_088A2468;
    case 523u: goto L_088A2470;
    case 524u: goto L_088A2480;
    case 525u: goto L_088A2490;
    case 526u: goto L_088A2494;
    case 527u: goto L_088A24AC;
    case 528u: goto L_088A24C8;
    case 529u: goto L_088A24E0;
    case 530u: goto L_088A24E8;
    case 531u: goto L_088A24F0;
    case 532u: goto L_088A24F8;
    case 533u: goto L_088A2500;
    case 534u: goto L_088A250C;
    case 535u: goto L_088A2524;
    case 536u: goto L_088A252C;
    case 537u: goto L_088A254C;
    case 538u: goto L_088A2558;
    case 539u: goto L_088A2570;
    case 540u: goto L_088A2578;
    case 541u: goto L_088A258C;
    case 542u: goto L_088A2594;
    case 543u: goto L_088A25B4;
    case 544u: goto L_088A25C0;
    case 545u: goto L_088A25D8;
    case 546u: goto L_088A25DC;
    case 547u: goto L_088A25F0;
    case 548u: goto L_088A2608;
    case 549u: goto L_088A2628;
    case 550u: goto L_088A2648;
    case 551u: goto L_088A2670;
    case 552u: goto L_088A268C;
    case 553u: goto L_088A26A0;
    case 554u: goto L_088A26B8;
    case 555u: goto L_088A26D0;
    case 556u: goto L_088A26EC;
    case 557u: goto L_088A2708;
    case 558u: goto L_088A2720;
    case 559u: goto L_088A2728;
    case 560u: goto L_088A2730;
    case 561u: goto L_088A2740;
    case 562u: goto L_088A2744;
    case 563u: goto L_088A274C;
    case 564u: goto L_088A2764;
    case 565u: goto L_088A276C;
    case 566u: goto L_088A2774;
    case 567u: goto L_088A27A0;
    case 568u: goto L_088A27AC;
    case 569u: goto L_088A27C0;
    case 570u: goto L_088A27D0;
    case 571u: goto L_088A27EC;
    case 572u: goto L_088A27FC;
    case 573u: goto L_088A2818;
    case 574u: goto L_088A2820;
    case 575u: goto L_088A2828;
    case 576u: goto L_088A2830;
    case 577u: goto L_088A2838;
    case 578u: goto L_088A285C;
    case 579u: goto L_088A286C;
    case 580u: goto L_088A287C;
    case 581u: goto L_088A2884;
    case 582u: goto L_088A2890;
    case 583u: goto L_088A28A8;
    case 584u: goto L_088A28B0;
    case 585u: goto L_088A28B8;
    case 586u: goto L_088A28C8;
    case 587u: goto L_088A28D0;
    case 588u: goto L_088A28EC;
    case 589u: goto L_088A290C;
    case 590u: goto L_088A2914;
    case 591u: goto L_088A2938;
    case 592u: goto L_088A2950;
    case 593u: goto L_088A295C;
    case 594u: goto L_088A2980;
    case 595u: goto L_088A298C;
    case 596u: goto L_088A2994;
    case 597u: goto L_088A299C;
    case 598u: goto L_088A29A4;
    case 599u: goto L_088A29AC;
    case 600u: goto L_088A29B4;
    case 601u: goto L_088A29BC;
    case 602u: goto L_088A29C4;
    case 603u: goto L_088A29CC;
    case 604u: goto L_088A29D4;
    case 605u: goto L_088A29DC;
    case 606u: goto L_088A29E4;
    case 607u: goto L_088A2A0C;
    case 608u: goto L_088A2A14;
    case 609u: goto L_088A2A1C;
    case 610u: goto L_088A2A24;
    case 611u: goto L_088A2A2C;
    case 612u: goto L_088A2A34;
    case 613u: goto L_088A2A50;
    case 614u: goto L_088A2A68;
    case 615u: goto L_088A2A74;
    case 616u: goto L_088A2A80;
    case 617u: goto L_088A2A88;
    case 618u: goto L_088A2A9C;
    case 619u: goto L_088A2AC0;
    case 620u: goto L_088A2B00;
    case 621u: goto L_088A2B14;
    case 622u: goto L_088A2B28;
    case 623u: goto L_088A2B4C;
    case 624u: goto L_088A2B64;
    case 625u: goto L_088A2B88;
    case 626u: goto L_088A2B98;
    case 627u: goto L_088A2BA4;
    case 628u: goto L_088A2BBC;
    case 629u: goto L_088A2BC4;
    case 630u: goto L_088A2BD4;
    case 631u: goto L_088A2BF0;
    case 632u: goto L_088A2BF8;
    case 633u: goto L_088A2C04;
    case 634u: goto L_088A2C14;
    case 635u: goto L_088A2C1C;
    case 636u: goto L_088A2C2C;
    case 637u: goto L_088A2C38;
    case 638u: goto L_088A2C40;
    case 639u: goto L_088A2C48;
    case 640u: goto L_088A2C50;
    case 641u: goto L_088A2C5C;
    case 642u: goto L_088A2C6C;
    case 643u: goto L_088A2C90;
    case 644u: goto L_088A2CA8;
    case 645u: goto L_088A2CDC;
    case 646u: goto L_088A2CE8;
    case 647u: goto L_088A2CF4;
    case 648u: goto L_088A2D08;
    case 649u: goto L_088A2D20;
    case 650u: goto L_088A2D2C;
    case 651u: goto L_088A2D34;
    case 652u: goto L_088A2D40;
    case 653u: goto L_088A2D4C;
    case 654u: goto L_088A2D58;
    case 655u: goto L_088A2D5C;
    case 656u: goto L_088A2D68;
    case 657u: goto L_088A2D70;
    case 658u: goto L_088A2D78;
    case 659u: goto L_088A2D88;
    case 660u: goto L_088A2D98;
    case 661u: goto L_088A2DB0;
    case 662u: goto L_088A2DCC;
    case 663u: goto L_088A2DD4;
    case 664u: goto L_088A2DDC;
    case 665u: goto L_088A2DE4;
    case 666u: goto L_088A2DEC;
    case 667u: goto L_088A2E00;
    case 668u: goto L_088A2E08;
    case 669u: goto L_088A2E18;
    case 670u: goto L_088A2E28;
    case 671u: goto L_088A2E3C;
    case 672u: goto L_088A2E48;
    case 673u: goto L_088A2E54;
    case 674u: goto L_088A2E7C;
    case 675u: goto L_088A2EB4;
    case 676u: goto L_088A2EBC;
    case 677u: goto L_088A2EC4;
    case 678u: goto L_088A2EF4;
    case 679u: goto L_088A2F10;
    case 680u: goto L_088A2F18;
    case 681u: goto L_088A2F24;
    case 682u: goto L_088A2F2C;
    case 683u: goto L_088A2F3C;
    case 684u: goto L_088A2F44;
    case 685u: goto L_088A2F50;
    case 686u: goto L_088A2F58;
    case 687u: goto L_088A2F60;
    case 688u: goto L_088A2F68;
    case 689u: goto L_088A2F88;
    case 690u: goto L_088A2FB4;
    case 691u: goto L_088A2FD0;
    case 692u: goto L_088A2FD8;
    case 693u: goto L_088A2FF8;
    case 694u: goto L_088A3008;
    case 695u: goto L_088A3014;
    case 696u: goto L_088A3020;
    case 697u: goto L_088A3024;
    case 698u: goto L_088A3074;
    case 699u: goto L_088A309C;
    case 700u: goto L_088A30A4;
    case 701u: goto L_088A30F0;
    case 702u: goto L_088A3110;
    case 703u: goto L_088A311C;
    case 704u: goto L_088A31C0;
    case 705u: goto L_088A31CC;
    case 706u: goto L_088A31D4;
    case 707u: goto L_088A31F0;
    case 708u: goto L_088A3224;
    case 709u: goto L_088A3250;
    case 710u: goto L_088A325C;
    case 711u: goto L_088A3268;
    case 712u: goto L_088A3270;
    case 713u: goto L_088A3274;
    case 714u: goto L_088A3284;
    case 715u: goto L_088A3290;
    case 716u: goto L_088A3298;
    case 717u: goto L_088A329C;
    case 718u: goto L_088A32B4;
    case 719u: goto L_088A32C0;
    case 720u: goto L_088A32E4;
    case 721u: goto L_088A332C;
    case 722u: goto L_088A3338;
    case 723u: goto L_088A3340;
    case 724u: goto L_088A3348;
    case 725u: goto L_088A3354;
    case 726u: goto L_088A335C;
    case 727u: goto L_088A3364;
    case 728u: goto L_088A3370;
    case 729u: goto L_088A3378;
    case 730u: goto L_088A3384;
    case 731u: goto L_088A338C;
    case 732u: goto L_088A3398;
    case 733u: goto L_088A33A0;
    case 734u: goto L_088A33A8;
    case 735u: goto L_088A33C0;
    case 736u: goto L_088A33E0;
    case 737u: goto L_088A33E4;
    case 738u: goto L_088A33EC;
    case 739u: goto L_088A33F8;
    case 740u: goto L_088A3408;
    case 741u: goto L_088A3410;
    case 742u: goto L_088A341C;
    case 743u: goto L_088A3424;
    case 744u: goto L_088A3430;
    case 745u: goto L_088A3444;
    case 746u: goto L_088A345C;
    case 747u: goto L_088A3470;
    case 748u: goto L_088A348C;
    case 749u: goto L_088A3494;
    case 750u: goto L_088A34A8;
    case 751u: goto L_088A34C8;
    case 752u: goto L_088A3500;
    case 753u: goto L_088A3530;
    case 754u: goto L_088A3544;
    case 755u: goto L_088A354C;
    case 756u: goto L_088A3564;
    case 757u: goto L_088A3570;
    case 758u: goto L_088A3578;
    case 759u: goto L_088A3580;
    case 760u: goto L_088A3588;
    case 761u: goto L_088A3590;
    case 762u: goto L_088A35BC;
    case 763u: goto L_088A35D0;
    case 764u: goto L_088A35D8;
    case 765u: goto L_088A35F4;
    case 766u: goto L_088A3604;
    case 767u: goto L_088A360C;
    case 768u: goto L_088A361C;
    case 769u: goto L_088A3624;
    case 770u: goto L_088A362C;
    case 771u: goto L_088A3634;
    case 772u: goto L_088A363C;
    case 773u: goto L_088A364C;
    case 774u: goto L_088A3654;
    case 775u: goto L_088A365C;
    case 776u: goto L_088A3684;
    case 777u: goto L_088A368C;
    case 778u: goto L_088A36B8;
    case 779u: goto L_088A36E0;
    case 780u: goto L_088A36E8;
    case 781u: goto L_088A36F0;
    case 782u: goto L_088A3728;
    case 783u: goto L_088A375C;
    case 784u: goto L_088A377C;
    case 785u: goto L_088A3790;
    case 786u: goto L_088A37A4;
    case 787u: goto L_088A37B8;
    case 788u: goto L_088A37E4;
    case 789u: goto L_088A3810;
    case 790u: goto L_088A3828;
    case 791u: goto L_088A384C;
    case 792u: goto L_088A3854;
    case 793u: goto L_088A3884;
    case 794u: goto L_088A3898;
    case 795u: goto L_088A38A8;
    case 796u: goto L_088A38D8;
    case 797u: goto L_088A38F0;
    case 798u: goto L_088A38FC;
    case 799u: goto L_088A3918;
    case 800u: goto L_088A392C;
    case 801u: goto L_088A3934;
    case 802u: goto L_088A393C;
    case 803u: goto L_088A3940;
    case 804u: goto L_088A3954;
    case 805u: goto L_088A3960;
    case 806u: goto L_088A3968;
    case 807u: goto L_088A3988;
    case 808u: goto L_088A39A0;
    case 809u: goto L_088A39AC;
    case 810u: goto L_088A39C8;
    case 811u: goto L_088A39DC;
    case 812u: goto L_088A39E4;
    case 813u: goto L_088A39EC;
    case 814u: goto L_088A39F0;
    case 815u: goto L_088A3A04;
    case 816u: goto L_088A3A10;
    case 817u: goto L_088A3A30;
    case 818u: goto L_088A3A48;
    case 819u: goto L_088A3A54;
    case 820u: goto L_088A3A70;
    case 821u: goto L_088A3A84;
    case 822u: goto L_088A3A8C;
    case 823u: goto L_088A3A94;
    case 824u: goto L_088A3A98;
    case 825u: goto L_088A3AB4;
    case 826u: goto L_088A3AC8;
    case 827u: goto L_088A3AE0;
    case 828u: goto L_088A3AE8;
    case 829u: goto L_088A3B04;
    case 830u: goto L_088A3B18;
    case 831u: goto L_088A3B30;
    case 832u: goto L_088A3B38;
    case 833u: goto L_088A3B58;
    case 834u: goto L_088A3B70;
    case 835u: goto L_088A3B7C;
    case 836u: goto L_088A3B98;
    case 837u: goto L_088A3BAC;
    case 838u: goto L_088A3BB4;
    case 839u: goto L_088A3BBC;
    case 840u: goto L_088A3BC0;
    case 841u: goto L_088A3BDC;
    case 842u: goto L_088A3BF4;
    case 843u: goto L_088A3BFC;
    case 844u: goto L_088A3C18;
    case 845u: goto L_088A3C30;
    case 846u: goto L_088A3C3C;
    case 847u: goto L_088A3C40;
    case 848u: goto L_088A3C78;
    case 849u: goto L_088A3C80;
    case 850u: goto L_088A3CD8;
    case 851u: goto L_088A3CEC;
    case 852u: goto L_088A3D0C;
    case 853u: goto L_088A3D30;
    case 854u: goto L_088A3D50;
    case 855u: goto L_088A3D64;
    case 856u: goto L_088A3D6C;
    case 857u: goto L_088A3D7C;
    case 858u: goto L_088A3D94;
    case 859u: goto L_088A3DF8;
    case 860u: goto L_088A3E00;
    case 861u: goto L_088A3E14;
    case 862u: goto L_088A3E4C;
    case 863u: goto L_088A3E54;
    case 864u: goto L_088A3E68;
    case 865u: goto L_088A3E94;
    case 866u: goto L_088A3EA4;
    case 867u: goto L_088A3EAC;
    case 868u: goto L_088A3EB4;
    case 869u: goto L_088A3ECC;
    case 870u: goto L_088A3F58;
    case 871u: goto L_088A3F64;
    case 872u: goto L_088A3F94;
    case 873u: goto L_088A3FAC;
    case 874u: goto L_088A3FC0;
    case 875u: goto L_088A3FC8;
    case 876u: goto L_088A3FDC;
    case 877u: goto L_088A3FE4;
    case 878u: goto L_088A3FF0;
    case 879u: goto L_088A3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088A0000:
    // nop
    goto L_088A0004;
L_088A0004:
    ctx.gpr[31] = (0x088A000Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem) && ctx.pc == 0x088A000Cu) goto L_088A000C;
    return;
L_088A000C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0034;
      }
      goto L_088A0028;
    }
L_088A0028:
    ctx.gpr[4] = (16512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088A0048;
      }
      goto L_088A0034;
    }
L_088A0034:
    ctx.gpr[4] = (16384u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088A0048;
      }
      goto L_088A0040;
    }
L_088A0040:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088A0048;
L_088A0048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
        goto L_088A0068;
    }
    goto L_088A0054;
L_088A0054:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_088A00B8;
      }
      goto L_088A0068;
    }
L_088A0068:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A00AC;
      }
      goto L_088A008C;
    }
L_088A008C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_088A00A8;
    }
    goto L_088A00A8;
L_088A00A8:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A00AC;
L_088A00AC:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_088A00B8;
L_088A00B8:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A00FC;
      }
      goto L_088A00C8;
    }
L_088A00C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[31] = (0x088A00D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 763u, 0x0890F4BCu>(ctx, &aot_mem) && ctx.pc == 0x088A00D4u) goto L_088A00D4;
    return;
L_088A00D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A00FC;
      }
      goto L_088A00DC;
    }
L_088A00DC:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A00F4u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 715u, 0x0890AC58u>(ctx, &aot_mem) && ctx.pc == 0x088A00F4u) goto L_088A00F4;
    return;
L_088A00F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0238;
      }
      goto L_088A00FC;
    }
L_088A00FC:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A01DC;
      }
      goto L_088A010C;
    }
L_088A010C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A0238;
      }
      goto L_088A011C;
    }
L_088A011C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088A0238;
      }
      goto L_088A0128;
    }
L_088A0128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A0238;
      }
      goto L_088A013C;
    }
L_088A013C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A0238;
      }
      goto L_088A0144;
    }
L_088A0144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A0238;
      }
      goto L_088A0154;
    }
L_088A0154:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A0160u);
    ctx.gpr[5] = (0u | 137u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x088A0160u) goto L_088A0160;
    return;
L_088A0160:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088A0170u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 751u, 0x0890AED8u>(ctx, &aot_mem) && ctx.pc == 0x088A0170u) goto L_088A0170;
    return;
L_088A0170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088A0238;
      }
      goto L_088A0184;
    }
L_088A0184:
    ctx.gpr[31] = (0x088A018Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088A018Cu) goto L_088A018C;
    return;
L_088A018C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2312)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A0238;
      }
      goto L_088A019C;
    }
L_088A019C:
    ctx.gpr[31] = (0x088A01A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088A01A4u) goto L_088A01A4;
    return;
L_088A01A4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A01C8;
      }
      goto L_088A01B4;
    }
L_088A01B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A01C0u);
    ctx.gpr[5] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x088A01C0u) goto L_088A01C0;
    return;
L_088A01C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0238;
      }
      goto L_088A01C8;
    }
L_088A01C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A01D4u);
    ctx.gpr[5] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x088A01D4u) goto L_088A01D4;
    return;
L_088A01D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0238;
      }
      goto L_088A01DC;
    }
L_088A01DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[17] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A0238;
      }
      goto L_088A01F0;
    }
L_088A01F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A01FCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x088A01FCu) goto L_088A01FC;
    return;
L_088A01FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A0238;
      }
      goto L_088A0218;
    }
L_088A0218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A0238;
      }
      goto L_088A0228;
    }
L_088A0228:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A0238u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0238u) goto L_088A0238;
    return;
L_088A0238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A027C;
      }
      goto L_088A024C;
    }
L_088A024C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x088A0278u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x088A0278u) goto L_088A0278;
    return;
L_088A0278:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088A027C;
L_088A027C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A08E8;
      }
      goto L_088A0284;
    }
L_088A0284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
        goto L_088A02E8;
    }
    goto L_088A029C;
L_088A029C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
        goto L_088A02E8;
    }
    goto L_088A02B4;
L_088A02B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
        goto L_088A02E8;
    }
    goto L_088A02CC;
L_088A02CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 170u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A035C;
      }
      goto L_088A02E4;
    }
L_088A02E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    goto L_088A02E8;
L_088A02E8:
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A035C;
      }
      goto L_088A0304;
    }
L_088A0304:
    ctx.gpr[31] = (0x088A030Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088A030Cu) goto L_088A030C;
    return;
L_088A030C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0328;
      }
      goto L_088A0314;
    }
L_088A0314:
    ctx.gpr[31] = (0x088A031Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088A031Cu) goto L_088A031C;
    return;
L_088A031C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A035C;
      }
      goto L_088A0328;
    }
L_088A0328:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088A0344u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x088A0344u) goto L_088A0344;
    return;
L_088A0344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A036C;
      }
      goto L_088A0354;
    }
L_088A0354:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0384;
      }
      goto L_088A035C;
    }
L_088A035C:
    ctx.gpr[31] = (0x088A0364u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0364u) goto L_088A0364;
    return;
L_088A0364:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_088A08EC;
      }
      goto L_088A036C;
    }
L_088A036C:
    ctx.gpr[31] = (0x088A0374u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x088A0374u) goto L_088A0374;
    return;
L_088A0374:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0384;
      }
      goto L_088A037C;
    }
L_088A037C:
    ctx.gpr[31] = (0x088A0384u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 332u, 0x0890932Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0384u) goto L_088A0384;
    return;
L_088A0384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A08E8;
      }
      goto L_088A0394;
    }
L_088A0394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 65u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A08E8;
      }
      goto L_088A03AC;
    }
L_088A03AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0784;
      }
      goto L_088A03C0;
    }
L_088A03C0:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16448u << 16u);
      if (branch_taken) {
          goto L_088A0784;
      }
      goto L_088A03D0;
    }
L_088A03D0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A0784;
      }
      goto L_088A03E4;
    }
L_088A03E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A03F4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 716u, 0x088E76D4u>(ctx, &aot_mem) && ctx.pc == 0x088A03F4u) goto L_088A03F4;
    return;
L_088A03F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A0414u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A0414u) goto L_088A0414;
    return;
L_088A0414:
    ctx.gpr[31] = (0x088A041Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088A041Cu) goto L_088A041C;
    return;
L_088A041C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25252)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25256)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A0430u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0430u) goto L_088A0430;
    return;
L_088A0430:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25260)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25264)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[6] = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088A0468u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 613u, 0x0890A5BCu>(ctx, &aot_mem) && ctx.pc == 0x088A0468u) goto L_088A0468;
    return;
L_088A0468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[17];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A06AC;
      }
      goto L_088A04E4;
    }
L_088A04E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088A0578;
      }
      goto L_088A0570;
    }
L_088A0570:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088A05AC;
      }
      goto L_088A0578;
    }
L_088A0578:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A05AC;
L_088A05AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A05D8;
      }
      goto L_088A05D0;
    }
L_088A05D0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088A060C;
      }
      goto L_088A05D8;
    }
L_088A05D8:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A060C;
L_088A060C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16204u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A06A4;
      }
      goto L_088A0644;
    }
L_088A0644:
    ctx.gpr[31] = (0x088A064Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088A064Cu) goto L_088A064C;
    return;
L_088A064C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25196)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25200)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A0660u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0660u) goto L_088A0660;
    return;
L_088A0660:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25268)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25272)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[6] = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088A0698u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem) && ctx.pc == 0x088A0698u) goto L_088A0698;
    return;
L_088A0698:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A06A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x088A06A4u) goto L_088A06A4;
    return;
L_088A06A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A077C;
      }
      goto L_088A06AC;
    }
L_088A06AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2060)));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A071C;
      }
      goto L_088A06C0;
    }
L_088A06C0:
    ctx.gpr[31] = (0x088A06C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088A06C8u) goto L_088A06C8;
    return;
L_088A06C8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25188)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25192)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A06DCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088A06DCu) goto L_088A06DC;
    return;
L_088A06DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25180)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25184)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[6] = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088A0714u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem) && ctx.pc == 0x088A0714u) goto L_088A0714;
    return;
L_088A0714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A077C;
      }
      goto L_088A071C;
    }
L_088A071C:
    ctx.gpr[31] = (0x088A0724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088A0724u) goto L_088A0724;
    return;
L_088A0724:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25196)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25200)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A0738u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0738u) goto L_088A0738;
    return;
L_088A0738:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25268)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25272)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[6] = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088A0770u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem) && ctx.pc == 0x088A0770u) goto L_088A0770;
    return;
L_088A0770:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A077Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x088A077Cu) goto L_088A077C;
    return;
L_088A077C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A08E8;
      }
      goto L_088A0784;
    }
L_088A0784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A08E8;
      }
      goto L_088A0794;
    }
L_088A0794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A08E8;
      }
      goto L_088A07A4;
    }
L_088A07A4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A08E8;
      }
      goto L_088A07AC;
    }
L_088A07AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A08E8;
      }
      goto L_088A07BC;
    }
L_088A07BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A07E4;
      }
      goto L_088A07CC;
    }
L_088A07CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088A07FC;
      }
      goto L_088A07E4;
    }
L_088A07E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A07F4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 321u, 0x089A9A84u>(ctx, &aot_mem) && ctx.pc == 0x088A07F4u) goto L_088A07F4;
    return;
L_088A07F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A08E8;
      }
      goto L_088A07FC;
    }
L_088A07FC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A082C;
      }
      goto L_088A0814;
    }
L_088A0814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0838;
      }
      goto L_088A082C;
    }
L_088A082C:
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A08A0;
      }
      goto L_088A0838;
    }
L_088A0838:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088A0848u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0848u) goto L_088A0848;
    return;
L_088A0848:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088A085C;
      }
      goto L_088A0850;
    }
L_088A0850:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A08A0;
      }
      goto L_088A085C;
    }
L_088A085C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088A086Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A086Cu) goto L_088A086C;
    return;
L_088A086C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088A0880;
      }
      goto L_088A0874;
    }
L_088A0874:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A08A0;
      }
      goto L_088A0880;
    }
L_088A0880:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x088A0890u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0890u) goto L_088A0890;
    return;
L_088A0890:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088A08A0;
      }
      goto L_088A0898;
    }
L_088A0898:
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088A08A0;
L_088A08A0:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A08BCu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem) && ctx.pc == 0x088A08BCu) goto L_088A08BC;
    return;
L_088A08BC:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[31] = (0x088A08DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 103u, 0x0890C604u>(ctx, &aot_mem) && ctx.pc == 0x088A08DCu) goto L_088A08DC;
    return;
L_088A08DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A08E8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x088A08E8u) goto L_088A08E8;
    return;
L_088A08E8:
    ctx.gpr[2] = (0u | 0u);
    goto L_088A08EC;
L_088A08EC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
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
L_088A0920:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x088A0980u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0980u) goto L_088A0980;
    return;
L_088A0980:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A098C;
      }
      goto L_088A0988;
    }
L_088A0988:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    goto L_088A098C;
L_088A098C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[31] = (0x088A0998u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 514u, 0x08906558u>(ctx, &aot_mem) && ctx.pc == 0x088A0998u) goto L_088A0998;
    return;
L_088A0998:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088A0A8C;
      }
      goto L_088A09A0;
    }
L_088A09A0:
    ctx.gpr[31] = (0x088A09A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 526u, 0x08AAE958u>(ctx, &aot_mem) && ctx.pc == 0x088A09A8u) goto L_088A09A8;
    return;
L_088A09A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A09E8;
      }
      goto L_088A09B0;
    }
L_088A09B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1300)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
        goto L_088A0A90;
    }
    goto L_088A09C0;
L_088A09C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_088A0A8C;
      }
      goto L_088A09D4;
    }
L_088A09D4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
        goto L_088A0A90;
    }
    goto L_088A09E8;
L_088A09E8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0A30;
      }
      goto L_088A09F0;
    }
L_088A09F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3261))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0A30;
      }
      goto L_088A0A00;
    }
L_088A0A00:
    ctx.gpr[31] = (0x088A0A08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0A08u) goto L_088A0A08;
    return;
L_088A0A08:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
        goto L_088A0A24;
    }
    goto L_088A0A10;
L_088A0A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A0A30;
      }
      goto L_088A0A20;
    }
L_088A0A20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    goto L_088A0A24;
L_088A0A24:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A0A38;
      }
      goto L_088A0A30;
    }
L_088A0A30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088A0A8C;
      }
      goto L_088A0A38;
    }
L_088A0A38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[6] = (0u | 1000u);
    ctx.gpr[31] = (0x088A0A4Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x088A0A4Cu) goto L_088A0A4C;
    return;
L_088A0A4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A0A58u);
    ctx.gpr[5] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0A58u) goto L_088A0A58;
    return;
L_088A0A58:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A0A68u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x088A0A68u) goto L_088A0A68;
    return;
L_088A0A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088A1ABC;
      }
      goto L_088A0A8C;
    }
L_088A0A8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    goto L_088A0A90;
L_088A0A90:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (61440u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1728)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0AE0;
      }
      goto L_088A0AD0;
    }
L_088A0AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0AF0;
      }
      goto L_088A0AE0;
    }
L_088A0AE0:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A0B08;
      }
      goto L_088A0AE8;
    }
L_088A0AE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0B84;
      }
      goto L_088A0AF0;
    }
L_088A0AF0:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A0B00u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x088A0B00u) goto L_088A0B00;
    return;
L_088A0B00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088A1ABC;
      }
      goto L_088A0B08;
    }
L_088A0B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2318))))));
        goto L_088A0B2C;
    }
    goto L_088A0B18;
L_088A0B18:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2318))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A0B64;
      }
      goto L_088A0B28;
    }
L_088A0B28:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2318))))));
    goto L_088A0B2C;
L_088A0B2C:
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A0B64;
      }
      goto L_088A0B38;
    }
L_088A0B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A0B64;
      }
      goto L_088A0B4C;
    }
L_088A0B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 65u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A0B84;
      }
      goto L_088A0B64;
    }
L_088A0B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A0B7C;
      }
      goto L_088A0B74;
    }
L_088A0B74:
    ctx.gpr[31] = (0x088A0B7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x088A0B7Cu) goto L_088A0B7C;
    return;
L_088A0B7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088A1ABC;
      }
      goto L_088A0B84;
    }
L_088A0B84:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A0D3C;
      }
      goto L_088A0B8C;
    }
L_088A0B8C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0D3C;
      }
      goto L_088A0B94;
    }
L_088A0B94:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A0C8C;
      }
      goto L_088A0BD8;
    }
L_088A0BD8:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A0C0C;
      }
      goto L_088A0BF4;
    }
L_088A0BF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x088A0C04u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 751u, 0x0890AED8u>(ctx, &aot_mem) && ctx.pc == 0x088A0C04u) goto L_088A0C04;
    return;
L_088A0C04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088A0D3C;
      }
      goto L_088A0C0C;
    }
L_088A0C0C:
    ctx.gpr[31] = (0x088A0C14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 777u, 0x0890B078u>(ctx, &aot_mem) && ctx.pc == 0x088A0C14u) goto L_088A0C14;
    return;
L_088A0C14:
    ctx.gpr[31] = (0x088A0C1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 827u, 0x0890B448u>(ctx, &aot_mem) && ctx.pc == 0x088A0C1Cu) goto L_088A0C1C;
    return;
L_088A0C1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A0C28u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x088A0C28u) goto L_088A0C28;
    return;
L_088A0C28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A0C34u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x088A0C34u) goto L_088A0C34;
    return;
L_088A0C34:
    ctx.gpr[8] = (17530u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088A0C50u);
    ctx.gpr[7] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x088A0C50u) goto L_088A0C50;
    return;
L_088A0C50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x088A0C68u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x088A0C68u) goto L_088A0C68;
    return;
L_088A0C68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A0C74u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 405u, 0x08909804u>(ctx, &aot_mem) && ctx.pc == 0x088A0C74u) goto L_088A0C74;
    return;
L_088A0C74:
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A0C84u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x088A0C84u) goto L_088A0C84;
    return;
L_088A0C84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088A0D3C;
      }
      goto L_088A0C8C;
    }
L_088A0C8C:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A0D3C;
      }
      goto L_088A0CA8;
    }
L_088A0CA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A0D3C;
      }
      goto L_088A0CB8;
    }
L_088A0CB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2072), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A0D0Cu);
    ctx.gpr[6] = (0u | 3000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 779u, 0x0890B0A8u>(ctx, &aot_mem) && ctx.pc == 0x088A0D0Cu) goto L_088A0D0C;
    return;
L_088A0D0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A0D18u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x088A0D18u) goto L_088A0D18;
    return;
L_088A0D18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x088A0D34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x088A0D34u) goto L_088A0D34;
    return;
L_088A0D34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088A1ABC;
      }
      goto L_088A0D3C;
    }
L_088A0D3C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0D84;
      }
      goto L_088A0D44;
    }
L_088A0D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A0D84;
      }
      goto L_088A0D54;
    }
L_088A0D54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A0D84;
      }
      goto L_088A0D64;
    }
L_088A0D64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2312)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088A0D84;
      }
      goto L_088A0D70;
    }
L_088A0D70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A0E50;
      }
      goto L_088A0D84;
    }
L_088A0D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088A0E20;
      }
      goto L_088A0DA0;
    }
L_088A0DA0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x088A0DC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x088A0DC8u) goto L_088A0DC8;
    return;
L_088A0DC8:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_088A0E7C;
      }
      goto L_088A0E18;
    }
L_088A0E18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
      if (branch_taken) {
          goto L_088A0E64;
      }
      goto L_088A0E20;
    }
L_088A0E20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A1ABC;
      }
      goto L_088A0E50;
    }
L_088A0E50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A0E5Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x088A0E5Cu) goto L_088A0E5C;
    return;
L_088A0E5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088A1ABC;
      }
      goto L_088A0E64;
    }
L_088A0E64:
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
        goto L_088A0EB8;
    }
    goto L_088A0E78;
L_088A0E78:
    ctx.gpr[4] = (16384u << 16u);
    goto L_088A0E7C;
L_088A0E7C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
        goto L_088A0EB8;
    }
    goto L_088A0E90;
L_088A0E90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A0EA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem) && ctx.pc == 0x088A0EA0u) goto L_088A0EA0;
    return;
L_088A0EA0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088A1110;
      }
      goto L_088A0EB8;
    }
L_088A0EB8:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A1044;
      }
      goto L_088A0EDC;
    }
L_088A0EDC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A1044;
      }
      goto L_088A0F04;
    }
L_088A0F04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A1044;
      }
      goto L_088A0F2C;
    }
L_088A0F2C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A1044;
      }
      goto L_088A0F54;
    }
L_088A0F54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A1044;
      }
      goto L_088A0F7C;
    }
L_088A0F7C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A1044;
      }
      goto L_088A0FA4;
    }
L_088A0FA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A1044;
      }
      goto L_088A0FCC;
    }
L_088A0FCC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A1044;
      }
      goto L_088A0FF4;
    }
L_088A0FF4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A1044;
      }
      goto L_088A101C;
    }
L_088A101C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A108C;
      }
      goto L_088A1044;
    }
L_088A1044:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A1054u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem) && ctx.pc == 0x088A1054u) goto L_088A1054;
    return;
L_088A1054:
    ctx.gpr[4] = (16076u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088A1084;
    }
    goto L_088A1084;
L_088A1084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1110;
      }
      goto L_088A108C;
    }
L_088A108C:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A10BC;
      }
      goto L_088A10A4;
    }
L_088A10A4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A10BC;
      }
      goto L_088A10AC;
    }
L_088A10AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3261))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1110;
      }
      goto L_088A10BC;
    }
L_088A10BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A10CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem) && ctx.pc == 0x088A10CCu) goto L_088A10CC;
    return;
L_088A10CC:
    ctx.gpr[4] = (16230u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088A10FC;
    }
    goto L_088A10FC;
L_088A10FC:
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
      if (branch_taken) {
          goto L_088A1110;
      }
      goto L_088A1110;
    }
L_088A1110:
    ctx.gpr[31] = (0x088A1118u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x088A1118u) goto L_088A1118;
    return;
L_088A1118:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1138;
      }
      goto L_088A1120;
    }
L_088A1120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A17B4;
      }
      goto L_088A1138;
    }
L_088A1138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A1154;
      }
      goto L_088A1148;
    }
L_088A1148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A11A4;
      }
      goto L_088A1154;
    }
L_088A1154:
    ctx.gpr[31] = (0x088A115Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x088A115Cu) goto L_088A115C;
    return;
L_088A115C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A11A4;
      }
      goto L_088A1164;
    }
L_088A1164:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088A117Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x088A117Cu) goto L_088A117C;
    return;
L_088A117C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A119C;
      }
      goto L_088A118C;
    }
L_088A118C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A11A4;
      }
      goto L_088A119C;
    }
L_088A119C:
    ctx.gpr[31] = (0x088A11A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 332u, 0x0890932Cu>(ctx, &aot_mem) && ctx.pc == 0x088A11A4u) goto L_088A11A4;
    return;
L_088A11A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A1268;
      }
      goto L_088A11B4;
    }
L_088A11B4:
    ctx.gpr[31] = (0x088A11BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088A11BCu) goto L_088A11BC;
    return;
L_088A11BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1268;
      }
      goto L_088A11C4;
    }
L_088A11C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2301)));
    ctx.gpr[5] = (16320u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088A1214;
      }
      goto L_088A11D4;
    }
L_088A11D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 45u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A11F8;
      }
      goto L_088A11EC;
    }
L_088A11EC:
    ctx.gpr[4] = (16480u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088A1214;
      }
      goto L_088A11F8;
    }
L_088A11F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A1214;
      }
      goto L_088A1210;
    }
L_088A1210:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2301), static_cast<std::uint8_t>(0u));
    goto L_088A1214;
L_088A1214:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A1268;
      }
      goto L_088A1224;
    }
L_088A1224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1732)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A1254;
      }
      goto L_088A123C;
    }
L_088A123C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A1268;
      }
      goto L_088A1254;
    }
L_088A1254:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[31] = (0x088A1260u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 108u, 0x08A346B4u>(ctx, &aot_mem) && ctx.pc == 0x088A1260u) goto L_088A1260;
    return;
L_088A1260:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_088A1ABC;
      }
      goto L_088A1268;
    }
L_088A1268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A1284;
      }
      goto L_088A1278;
    }
L_088A1278:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_088A1284;
L_088A1284:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A13BC;
      }
      goto L_088A1294;
    }
L_088A1294:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A13BC;
      }
      goto L_088A129C;
    }
L_088A129C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A13BC;
      }
      goto L_088A12AC;
    }
L_088A12AC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A13BC;
      }
      goto L_088A12B4;
    }
L_088A12B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A13BC;
      }
      goto L_088A12C4;
    }
L_088A12C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1374;
      }
      goto L_088A12D8;
    }
L_088A12D8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A1374;
      }
      goto L_088A12E0;
    }
L_088A12E0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088A12F8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 843u, 0x0890FCD8u>(ctx, &aot_mem) && ctx.pc == 0x088A12F8u) goto L_088A12F8;
    return;
L_088A12F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A1320;
      }
      goto L_088A1300;
    }
L_088A1300:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A1310u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x088A1310u) goto L_088A1310;
    return;
L_088A1310:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A1320u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 358u, 0x089B5A20u>(ctx, &aot_mem) && ctx.pc == 0x088A1320u) goto L_088A1320;
    return;
L_088A1320:
    ctx.gpr[31] = (0x088A1328u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 843u, 0x0890FCD8u>(ctx, &aot_mem) && ctx.pc == 0x088A1328u) goto L_088A1328;
    return;
L_088A1328:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A134C;
      }
      goto L_088A1330;
    }
L_088A1330:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A1340u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 94u, 0x089105E8u>(ctx, &aot_mem) && ctx.pc == 0x088A1340u) goto L_088A1340;
    return;
L_088A1340:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A134Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem) && ctx.pc == 0x088A134Cu) goto L_088A134C;
    return;
L_088A134C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A135Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x088A135Cu) goto L_088A135C;
    return;
L_088A135C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2060)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A136Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 686u, 0x0890AA84u>(ctx, &aot_mem) && ctx.pc == 0x088A136Cu) goto L_088A136C;
    return;
L_088A136C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1AB8;
      }
      goto L_088A1374;
    }
L_088A1374:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A13A4;
      }
      goto L_088A137C;
    }
L_088A137C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A138Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x088A138Cu) goto L_088A138C;
    return;
L_088A138C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088A139Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 686u, 0x0890AA84u>(ctx, &aot_mem) && ctx.pc == 0x088A139Cu) goto L_088A139C;
    return;
L_088A139C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1AB8;
      }
      goto L_088A13A4;
    }
L_088A13A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088A13B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 751u, 0x0890AED8u>(ctx, &aot_mem) && ctx.pc == 0x088A13B4u) goto L_088A13B4;
    return;
L_088A13B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1AB8;
      }
      goto L_088A13BC;
    }
L_088A13BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A13F8;
      }
      goto L_088A13D0;
    }
L_088A13D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A13F8;
      }
      goto L_088A13E0;
    }
L_088A13E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A13F8;
      }
      goto L_088A13F0;
    }
L_088A13F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088A13FC;
      }
      goto L_088A13F8;
    }
L_088A13F8:
    ctx.gpr[4] = (0u | 0u);
    goto L_088A13FC;
L_088A13FC:
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
        goto L_088A1418;
    }
    goto L_088A140C;
L_088A140C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A16D4;
      }
      goto L_088A1414;
    }
L_088A1414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    goto L_088A1418;
L_088A1418:
    ctx.gpr[5] = (0u | 46u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A16D4;
      }
      goto L_088A142C;
    }
L_088A142C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A16D4;
      }
      goto L_088A1444;
    }
L_088A1444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A16D4;
      }
      goto L_088A1454;
    }
L_088A1454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1478;
      }
      goto L_088A1464;
    }
L_088A1464:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A1470u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 696u, 0x089AB4FCu>(ctx, &aot_mem) && ctx.pc == 0x088A1470u) goto L_088A1470;
    return;
L_088A1470:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088A1ABC;
      }
      goto L_088A1478;
    }
L_088A1478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
        goto L_088A14AC;
    }
    goto L_088A1488;
L_088A1488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 22u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
        goto L_088A14AC;
    }
    goto L_088A1498;
L_088A1498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A1558;
      }
      goto L_088A14A8;
    }
L_088A14A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    goto L_088A14AC;
L_088A14AC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A14C0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A14C0u) goto L_088A14C0;
    return;
L_088A14C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A16CC;
      }
      goto L_088A14D8;
    }
L_088A14D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A14F0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A14F0u) goto L_088A14F0;
    return;
L_088A14F0:
    ctx.gpr[31] = (0x088A14F8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 563u, 0x0881F274u>(ctx, &aot_mem) && ctx.pc == 0x088A14F8u) goto L_088A14F8;
    return;
L_088A14F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A16CC;
      }
      goto L_088A1500;
    }
L_088A1500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A1518u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A1518u) goto L_088A1518;
    return;
L_088A1518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088A1530u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A1530u) goto L_088A1530;
    return;
L_088A1530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    ctx.gpr[5] = (ctx.gpr[2] << 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A16CC;
      }
      goto L_088A1558;
    }
L_088A1558:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A1564u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x088A1564u) goto L_088A1564;
    return;
L_088A1564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088A1580u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A1580u) goto L_088A1580;
    return;
L_088A1580:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[31] = (0x088A158Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 716u, 0x088E76D4u>(ctx, &aot_mem) && ctx.pc == 0x088A158Cu) goto L_088A158C;
    return;
L_088A158C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x088A15B8u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x088A15B8u) goto L_088A15B8;
    return;
L_088A15B8:
    ctx.gpr[31] = (0x088A15C0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088A15C0u) goto L_088A15C0;
    return;
L_088A15C0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25260)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25264)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A15D4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088A15D4u) goto L_088A15D4;
    return;
L_088A15D4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088A15F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 613u, 0x0890A5BCu>(ctx, &aot_mem) && ctx.pc == 0x088A15F0u) goto L_088A15F0;
    return;
L_088A15F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1664;
      }
      goto L_088A1600;
    }
L_088A1600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[31] = (0x088A160Cu);
    ctx.gpr[17] = (ctx.gpr[21] - ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088A160Cu) goto L_088A160C;
    return;
L_088A160C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25172)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25176)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A1620u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088A1620u) goto L_088A1620;
    return;
L_088A1620:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25228)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25232)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[6] = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088A165Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem) && ctx.pc == 0x088A165Cu) goto L_088A165C;
    return;
L_088A165C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A16B8;
      }
      goto L_088A1664;
    }
L_088A1664:
    ctx.gpr[31] = (0x088A166Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088A166Cu) goto L_088A166C;
    return;
L_088A166C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25164)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25168)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A1680u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088A1680u) goto L_088A1680;
    return;
L_088A1680:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25220)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25224)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[6] = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088A16B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem) && ctx.pc == 0x088A16B8u) goto L_088A16B8;
    return;
L_088A16B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (65472u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    goto L_088A16CC;
L_088A16CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A17AC;
      }
      goto L_088A16D4;
    }
L_088A16D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A172C;
      }
      goto L_088A16E4;
    }
L_088A16E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A172C;
      }
      goto L_088A16F8;
    }
L_088A16F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A172C;
      }
      goto L_088A1708;
    }
L_088A1708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    goto L_088A172C;
L_088A172C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A17AC;
      }
      goto L_088A173C;
    }
L_088A173C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A17AC;
      }
      goto L_088A174C;
    }
L_088A174C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A17AC;
      }
      goto L_088A175C;
    }
L_088A175C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A1768u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x088A1768u) goto L_088A1768;
    return;
L_088A1768:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A17AC;
      }
      goto L_088A178C;
    }
L_088A178C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A17AC;
      }
      goto L_088A1798;
    }
L_088A1798:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A17AC;
      }
      goto L_088A17A0;
    }
L_088A17A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[31] = (0x088A17ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 384u, 0x088E3180u>(ctx, &aot_mem) && ctx.pc == 0x088A17ACu) goto L_088A17AC;
    return;
L_088A17AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1AB8;
      }
      goto L_088A17B4;
    }
L_088A17B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1AB8;
      }
      goto L_088A17C4;
    }
L_088A17C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A182C;
      }
      goto L_088A17DC;
    }
L_088A17DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A182C;
      }
      goto L_088A17FC;
    }
L_088A17FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A182C;
      }
      goto L_088A1808;
    }
L_088A1808:
    ctx.gpr[31] = (0x088A1810u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088A1810u) goto L_088A1810;
    return;
L_088A1810:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1920;
      }
      goto L_088A1818;
    }
L_088A1818:
    ctx.gpr[31] = (0x088A1820u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088A1820u) goto L_088A1820;
    return;
L_088A1820:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1920;
      }
      goto L_088A182C;
    }
L_088A182C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A1850;
      }
      goto L_088A1838;
    }
L_088A1838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A1868;
      }
      goto L_088A1848;
    }
L_088A1848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1910;
      }
      goto L_088A1850;
    }
L_088A1850:
    ctx.gpr[31] = (0x088A1858u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x088A1858u) goto L_088A1858;
    return;
L_088A1858:
    ctx.gpr[31] = (0x088A1860u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x088A1860u) goto L_088A1860;
    return;
L_088A1860:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_088A1ABC;
      }
      goto L_088A1868;
    }
L_088A1868:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088A18B0;
      }
      goto L_088A1874;
    }
L_088A1874:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1300)));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (ctx.gpr[7] & 14u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088A18B0;
      }
      goto L_088A188C;
    }
L_088A188C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088A18AC;
      }
      goto L_088A189C;
    }
L_088A189C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    ctx.gpr[7] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088A18B0;
      }
      goto L_088A18AC;
    }
L_088A18AC:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_088A18B0;
L_088A18B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1910;
      }
      goto L_088A18B8;
    }
L_088A18B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1910;
      }
      goto L_088A18C4;
    }
L_088A18C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[6] = (0u | 55u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2228));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088A1910;
      }
      goto L_088A18DC;
    }
L_088A18DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A1910;
      }
      goto L_088A18EC;
    }
L_088A18EC:
    ctx.gpr[31] = (0x088A18F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088A18F4u) goto L_088A18F4;
    return;
L_088A18F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1910;
      }
      goto L_088A18FC;
    }
L_088A18FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[31] = (0x088A1908u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 108u, 0x08A346B4u>(ctx, &aot_mem) && ctx.pc == 0x088A1908u) goto L_088A1908;
    return;
L_088A1908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088A1ABC;
      }
      goto L_088A1910;
    }
L_088A1910:
    ctx.gpr[31] = (0x088A1918u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x088A1918u) goto L_088A1918;
    return;
L_088A1918:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_088A1ABC;
      }
      goto L_088A1920;
    }
L_088A1920:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088A193Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x088A193Cu) goto L_088A193C;
    return;
L_088A193C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A1AB8;
      }
      goto L_088A194C;
    }
L_088A194C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 65u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A1AB8;
      }
      goto L_088A1964;
    }
L_088A1964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A1AB8;
      }
      goto L_088A1974;
    }
L_088A1974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A1AB8;
      }
      goto L_088A1984;
    }
L_088A1984:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A1AB8;
      }
      goto L_088A198C;
    }
L_088A198C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A19B4;
      }
      goto L_088A199C;
    }
L_088A199C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088A19CC;
      }
      goto L_088A19B4;
    }
L_088A19B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A19C4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 321u, 0x089A9A84u>(ctx, &aot_mem) && ctx.pc == 0x088A19C4u) goto L_088A19C4;
    return;
L_088A19C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1AB8;
      }
      goto L_088A19CC;
    }
L_088A19CC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A19FC;
      }
      goto L_088A19E4;
    }
L_088A19E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1A08;
      }
      goto L_088A19FC;
    }
L_088A19FC:
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A1A70;
      }
      goto L_088A1A08;
    }
L_088A1A08:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088A1A18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A1A18u) goto L_088A1A18;
    return;
L_088A1A18:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088A1A2C;
      }
      goto L_088A1A20;
    }
L_088A1A20:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A1A70;
      }
      goto L_088A1A2C;
    }
L_088A1A2C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088A1A3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A1A3Cu) goto L_088A1A3C;
    return;
L_088A1A3C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088A1A50;
      }
      goto L_088A1A44;
    }
L_088A1A44:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A1A70;
      }
      goto L_088A1A50;
    }
L_088A1A50:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x088A1A60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A1A60u) goto L_088A1A60;
    return;
L_088A1A60:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088A1A70;
      }
      goto L_088A1A68;
    }
L_088A1A68:
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088A1A70;
L_088A1A70:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A1A8Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem) && ctx.pc == 0x088A1A8Cu) goto L_088A1A8C;
    return;
L_088A1A8C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[31] = (0x088A1AACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 103u, 0x0890C604u>(ctx, &aot_mem) && ctx.pc == 0x088A1AACu) goto L_088A1AAC;
    return;
L_088A1AAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A1AB8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x088A1AB8u) goto L_088A1AB8;
    return;
L_088A1AB8:
    ctx.gpr[2] = (0u | 0u);
    goto L_088A1ABC;
L_088A1ABC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A1AF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088A1BB0;
      }
      goto L_088A1B20;
    }
L_088A1B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(476)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A1BB0;
      }
      goto L_088A1B30;
    }
L_088A1B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
      if (branch_taken) {
          goto L_088A1B78;
      }
      goto L_088A1B40;
    }
L_088A1B40:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_088A1D84;
      }
      goto L_088A1B48;
    }
L_088A1B48:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1D84;
      }
      goto L_088A1B50;
    }
L_088A1B50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x088A1B5Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem) && ctx.pc == 0x088A1B5Cu) goto L_088A1B5C;
    return;
L_088A1B5C:
    ctx.gpr[4] = (ctx.gpr[2] & 3u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A1D84;
      }
      goto L_088A1B68;
    }
L_088A1B68:
    ctx.gpr[31] = (0x088A1B70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088A1B70u) goto L_088A1B70;
    return;
L_088A1B70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1D84;
      }
      goto L_088A1B78;
    }
L_088A1B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088A1B98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem) && ctx.pc == 0x088A1B98u) goto L_088A1B98;
    return;
L_088A1B98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A1D84;
      }
      goto L_088A1BA0;
    }
L_088A1BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088A1D84;
      }
      goto L_088A1BB0;
    }
L_088A1BB0:
    ctx.gpr[31] = (0x088A1BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 273u, 0x088954ACu>(ctx, &aot_mem) && ctx.pc == 0x088A1BB8u) goto L_088A1BB8;
    return;
L_088A1BB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A1D68;
      }
      goto L_088A1BC0;
    }
L_088A1BC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088A1BE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem) && ctx.pc == 0x088A1BE0u) goto L_088A1BE0;
    return;
L_088A1BE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A1D84;
      }
      goto L_088A1BE8;
    }
L_088A1BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 19u);
      if (branch_taken) {
          goto L_088A1C14;
      }
      goto L_088A1BF8;
    }
L_088A1BF8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_088A1C34;
      }
      goto L_088A1C04;
    }
L_088A1C04:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1C24;
      }
      goto L_088A1C0C;
    }
L_088A1C0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1D84;
      }
      goto L_088A1C14;
    }
L_088A1C14:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A1C0C;
      }
      goto L_088A1C1C;
    }
L_088A1C1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1C34;
      }
      goto L_088A1C24;
    }
L_088A1C24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088A1D84;
      }
      goto L_088A1C34;
    }
L_088A1C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A1D60;
      }
      goto L_088A1C44;
    }
L_088A1C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x088A1C50u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem) && ctx.pc == 0x088A1C50u) goto L_088A1C50;
    return;
L_088A1C50:
    ctx.gpr[4] = (ctx.gpr[2] & 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1D60;
      }
      goto L_088A1C5C;
    }
L_088A1C5C:
    ctx.gpr[31] = (0x088A1C64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088A1C64u) goto L_088A1C64;
    return;
L_088A1C64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1D60;
      }
      goto L_088A1C6C;
    }
L_088A1C6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[17] = (65408u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088A1C90;
      }
      goto L_088A1C80;
    }
L_088A1C80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A1C8Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 696u, 0x089AB4FCu>(ctx, &aot_mem) && ctx.pc == 0x088A1C8Cu) goto L_088A1C8C;
    return;
L_088A1C8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    goto L_088A1C90;
L_088A1C90:
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088A1CB4;
      }
      goto L_088A1C9C;
    }
L_088A1C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1764), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[5] & ctx.gpr[17]);
      if (branch_taken) {
          goto L_088A1D14;
      }
      goto L_088A1CB4;
    }
L_088A1CB4:
    ctx.gpr[31] = (0x088A1CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088A1CBCu) goto L_088A1CBC;
    return;
L_088A1CBC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25156)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25160)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A1CD8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088A1CD8u) goto L_088A1CD8;
    return;
L_088A1CD8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1764), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] & ctx.gpr[17]);
    goto L_088A1D14;
L_088A1D14:
    ctx.gpr[31] = (0x088A1D1Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088A1D1Cu) goto L_088A1D1C;
    return;
L_088A1D1C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25220)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25224)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A1D30u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088A1D30u) goto L_088A1D30;
    return;
L_088A1D30:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 15 ? 1u : 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 12u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    goto L_088A1D60;
L_088A1D60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1D84;
      }
      goto L_088A1D68;
    }
L_088A1D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    goto L_088A1D84;
L_088A1D84:
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
L_088A1DA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A1DD0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088A1DD0u) goto L_088A1DD0;
    return;
L_088A1DD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088A1DF0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088A1DF0u) goto L_088A1DF0;
    return;
L_088A1DF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_088A1E04;
    }
    goto L_088A1DFC;
L_088A1DFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088A1E08;
      }
      goto L_088A1E04;
    }
L_088A1E04:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_088A1E08;
L_088A1E08:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_088A1E50;
      }
      goto L_088A1E1C;
    }
L_088A1E1C:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < 91 ? 1u : 0u);
      if (branch_taken) {
          goto L_088A1E38;
      }
      goto L_088A1E28;
    }
L_088A1E28:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1E38;
      }
      goto L_088A1E30;
    }
L_088A1E30:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_088A1E38;
L_088A1E38:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A1E1C;
      }
      goto L_088A1E50;
    }
L_088A1E50:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
      if (branch_taken) {
          goto L_088A1E74;
      }
      goto L_088A1E5C;
    }
L_088A1E5C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A1E6Cu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 554u, 0x08AD3300u>(ctx, &aot_mem) && ctx.pc == 0x088A1E6Cu) goto L_088A1E6C;
    return;
L_088A1E6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1E84;
      }
      goto L_088A1E74;
    }
L_088A1E74:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A1E84u);
    ctx.gpr[6] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 554u, 0x08AD3300u>(ctx, &aot_mem) && ctx.pc == 0x088A1E84u) goto L_088A1E84;
    return;
L_088A1E84:
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
L_088A1EA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A1ECCu);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088A1ECCu) goto L_088A1ECC;
    return;
L_088A1ECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x088A1EE0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 612u, 0x08AD36E8u>(ctx, &aot_mem) && ctx.pc == 0x088A1EE0u) goto L_088A1EE0;
    return;
L_088A1EE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1EEC;
      }
      goto L_088A1EE8;
    }
L_088A1EE8:
    ctx.gpr[17] = (0u | 1u);
    goto L_088A1EEC;
L_088A1EEC:
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
          goto L_088A1F18;
      }
      goto L_088A1F10;
    }
L_088A1F10:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088A1F60;
      }
      goto L_088A1F18;
    }
L_088A1F18:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088A1F44;
      }
      goto L_088A1F38;
    }
L_088A1F38:
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A1F60;
      }
      goto L_088A1F44;
    }
L_088A1F44:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1F60;
      }
      goto L_088A1F5C;
    }
L_088A1F5C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_088A1F60;
L_088A1F60:
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
L_088A1F7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A1FA8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088A1FA8u) goto L_088A1FA8;
    return;
L_088A1FA8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(527));
      if (branch_taken) {
          goto L_088A1FD4;
      }
      goto L_088A1FB4;
    }
L_088A1FB4:
    ctx.gpr[4] = (0u - ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2239u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23008));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_088A1FD4;
L_088A1FD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A1FFC;
      }
      goto L_088A1FE0;
    }
L_088A1FE0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[31] = (0x088A1FF0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x088A1FF0u) goto L_088A1FF0;
    return;
L_088A1FF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          goto L_088A2014;
      }
      goto L_088A1FFC;
    }
L_088A1FFC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 148u);
    ctx.gpr[31] = (0x088A200Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x088A200Cu) goto L_088A200C;
    return;
L_088A200C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    goto L_088A2014;
L_088A2014:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A2020u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 550u, 0x08AD32A8u>(ctx, &aot_mem) && ctx.pc == 0x088A2020u) goto L_088A2020;
    return;
L_088A2020:
    ctx.gpr[4] = (0u | 362u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A203C;
      }
      goto L_088A202C;
    }
L_088A202C:
    ctx.gpr[4] = (0u | 366u);
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[31] = (0x088A203Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x088A203Cu) goto L_088A203C;
    return;
L_088A203C:
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
L_088A2058:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A2084u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2084u) goto L_088A2084;
    return;
L_088A2084:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.gpr[4] = (0u - ctx.gpr[18]);
      if (branch_taken) {
          goto L_088A20AC;
      }
      goto L_088A2090;
    }
L_088A2090:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2239u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23008));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_088A20AC;
L_088A20AC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088A20B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x088A20B8u) goto L_088A20B8;
    return;
L_088A20B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A20C8;
      }
      goto L_088A20C0;
    }
L_088A20C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088A2120;
      }
      goto L_088A20C8;
    }
L_088A20C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
        goto L_088A20E4;
    }
    goto L_088A20D4;
L_088A20D4:
    ctx.gpr[31] = (0x088A20DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x088A20DCu) goto L_088A20DC;
    return;
L_088A20DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_088A20E4;
L_088A20E4:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2120;
      }
      goto L_088A20F4;
    }
L_088A20F4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088A210C;
      }
      goto L_088A20FC;
    }
L_088A20FC:
    ctx.gpr[31] = (0x088A2104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2104u) goto L_088A2104;
    return;
L_088A2104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_088A210C;
L_088A210C:
    ctx.gpr[31] = (0x088A2114u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 174u, 0x08954B84u>(ctx, &aot_mem) && ctx.pc == 0x088A2114u) goto L_088A2114;
    return;
L_088A2114:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2120;
      }
      goto L_088A211C;
    }
L_088A211C:
    ctx.gpr[17] = (0u | 1u);
    goto L_088A2120;
L_088A2120:
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
          goto L_088A214C;
      }
      goto L_088A2144;
    }
L_088A2144:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088A2194;
      }
      goto L_088A214C;
    }
L_088A214C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088A2178;
      }
      goto L_088A216C;
    }
L_088A216C:
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A2194;
      }
      goto L_088A2178;
    }
L_088A2178:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2194;
      }
      goto L_088A2190;
    }
L_088A2190:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_088A2194;
L_088A2194:
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
L_088A21B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A21D8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088A21D8u) goto L_088A21D8;
    return;
L_088A21D8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[4] = (0u - ctx.gpr[17]);
      if (branch_taken) {
          goto L_088A2200;
      }
      goto L_088A21E4;
    }
L_088A21E4:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2239u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23008));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_088A2200;
L_088A2200:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A221C;
      }
      goto L_088A220C;
    }
L_088A220C:
    ctx.gpr[31] = (0x088A2214u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 625u, 0x08AD37C0u>(ctx, &aot_mem) && ctx.pc == 0x088A2214u) goto L_088A2214;
    return;
L_088A2214:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2224;
      }
      goto L_088A221C;
    }
L_088A221C:
    ctx.gpr[31] = (0x088A2224u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 627u, 0x08AD37E0u>(ctx, &aot_mem) && ctx.pc == 0x088A2224u) goto L_088A2224;
    return;
L_088A2224:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A2230u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 550u, 0x08AD32A8u>(ctx, &aot_mem) && ctx.pc == 0x088A2230u) goto L_088A2230;
    return;
L_088A2230:
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
L_088A2248:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A2270u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2270u) goto L_088A2270;
    return;
L_088A2270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2298;
      }
      goto L_088A2288;
    }
L_088A2288:
    ctx.gpr[31] = (0x088A2290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 635u, 0x08AD3860u>(ctx, &aot_mem) && ctx.pc == 0x088A2290u) goto L_088A2290;
    return;
L_088A2290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A22A0;
      }
      goto L_088A2298;
    }
L_088A2298:
    ctx.gpr[31] = (0x088A22A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 637u, 0x08AD3880u>(ctx, &aot_mem) && ctx.pc == 0x088A22A0u) goto L_088A22A0;
    return;
L_088A22A0:
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
L_088A22B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A22C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 127u, 0x08A11208u>(ctx, &aot_mem) && ctx.pc == 0x088A22C8u) goto L_088A22C8;
    return;
L_088A22C8:
    ctx.gpr[31] = (0x088A22D0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x088A22D0u) goto L_088A22D0;
    return;
L_088A22D0:
    ctx.gpr[31] = (0x088A22D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 128u, 0x08A11214u>(ctx, &aot_mem) && ctx.pc == 0x088A22D8u) goto L_088A22D8;
    return;
L_088A22D8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A22E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A2310u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2310u) goto L_088A2310;
    return;
L_088A2310:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088A2334;
      }
      goto L_088A2324;
    }
L_088A2324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088A2334;
L_088A2334:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2344;
      }
      goto L_088A233C;
    }
L_088A233C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088A2348;
      }
      goto L_088A2344;
    }
L_088A2344:
    ctx.gpr[4] = (0u | 0u);
    goto L_088A2348;
L_088A2348:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088A236C;
      }
      goto L_088A2364;
    }
L_088A2364:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A23B4;
      }
      goto L_088A236C;
    }
L_088A236C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_088A2398;
      }
      goto L_088A238C;
    }
L_088A238C:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A23B4;
      }
      goto L_088A2398;
    }
L_088A2398:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A23B4;
      }
      goto L_088A23B0;
    }
L_088A23B0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_088A23B4;
L_088A23B4:
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
L_088A23CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A2404u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2404u) goto L_088A2404;
    return;
L_088A2404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(527));
      if (branch_taken) {
          goto L_088A2418;
      }
      goto L_088A2410;
    }
L_088A2410:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088A2420;
      }
      goto L_088A2418;
    }
L_088A2418:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088A2420;
L_088A2420:
    ctx.gpr[31] = (0x088A2428u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 146u, 0x08AEC930u>(ctx, &aot_mem) && ctx.pc == 0x088A2428u) goto L_088A2428;
    return;
L_088A2428:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088A2450;
      }
      goto L_088A2434;
    }
L_088A2434:
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[31] = (0x088A2440u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x088A2440u) goto L_088A2440;
    return;
L_088A2440:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_088A2468;
      }
      goto L_088A2450;
    }
L_088A2450:
    ctx.gpr[5] = (0u | 148u);
    ctx.gpr[31] = (0x088A245Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x088A245Cu) goto L_088A245C;
    return;
L_088A245C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    goto L_088A2468;
L_088A2468:
    ctx.gpr[31] = (0x088A2470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 550u, 0x08AD32A8u>(ctx, &aot_mem) && ctx.pc == 0x088A2470u) goto L_088A2470;
    return;
L_088A2470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 362u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A2494;
      }
      goto L_088A2480;
    }
L_088A2480:
    ctx.gpr[4] = (0u | 366u);
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[31] = (0x088A2490u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x088A2490u) goto L_088A2490;
    return;
L_088A2490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088A2494;
L_088A2494:
    ctx.gpr[5] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A24ACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x088A24ACu) goto L_088A24AC;
    return;
L_088A24AC:
    ctx.gpr[2] = (0u | 0u);
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
L_088A24C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088A24E8;
      }
      goto L_088A24E0;
    }
L_088A24E0:
    ctx.gpr[31] = (0x088A24E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x088A24E8u) goto L_088A24E8;
    return;
L_088A24E8:
    ctx.gpr[31] = (0x088A24F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 121u, 0x08954778u>(ctx, &aot_mem) && ctx.pc == 0x088A24F0u) goto L_088A24F0;
    return;
L_088A24F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A250C;
      }
      goto L_088A24F8;
    }
L_088A24F8:
    ctx.gpr[31] = (0x088A2500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 573u, 0x08AD349Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2500u) goto L_088A2500;
    return;
L_088A2500:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A2578;
      }
      goto L_088A250C;
    }
L_088A250C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ 1u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_088A252C;
      }
      goto L_088A2524;
    }
L_088A2524:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088A25DC;
      }
      goto L_088A252C;
    }
L_088A252C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088A2558;
      }
      goto L_088A254C;
    }
L_088A254C:
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A25DC;
      }
      goto L_088A2558;
    }
L_088A2558:
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A25DC;
      }
      goto L_088A2570;
    }
L_088A2570:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_088A25DC;
      }
      goto L_088A2578;
    }
L_088A2578:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[5] = (0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_088A2594;
      }
      goto L_088A258C;
    }
L_088A258C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088A25DC;
      }
      goto L_088A2594;
    }
L_088A2594:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088A25C0;
      }
      goto L_088A25B4;
    }
L_088A25B4:
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A25DC;
      }
      goto L_088A25C0;
    }
L_088A25C0:
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A25DC;
      }
      goto L_088A25D8;
    }
L_088A25D8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_088A25DC;
L_088A25DC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A25F0:
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
L_088A2608:
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
L_088A2628:
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
L_088A2648:
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
L_088A2670:
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
L_088A268C:
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
L_088A26A0:
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
L_088A26B8:
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
L_088A26D0:
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
L_088A26EC:
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
L_088A2708:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A2728;
      }
      goto L_088A2720;
    }
L_088A2720:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A2728;
      }
      goto L_088A2728;
    }
L_088A2728:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2730:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2744;
      }
      goto L_088A2740;
    }
L_088A2740:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088A2744;
L_088A2744:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A274C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A276C;
      }
      goto L_088A2764;
    }
L_088A2764:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A276C;
      }
      goto L_088A276C;
    }
L_088A276C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2774:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A27A0:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A27AC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A27C0:
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
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A27D0:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A27EC:
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
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A27FC:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[5]);
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
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2818:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2820:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2828:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2830:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2838:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[0])) && ctx.fpr[13] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088A286C;
      }
      goto L_088A285C;
    }
L_088A285C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[0])) && ctx.fpr[12] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A2884;
      }
      goto L_088A286C;
    }
L_088A286C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x088A287Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x088A287Cu) goto L_088A287C;
    return;
L_088A287C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2884;
      }
      goto L_088A2884;
    }
L_088A2884:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2890:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A28A8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A28B0:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A28B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[2] = (ctx.gpr[4] & 496u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] >> 4u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A28C8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A28D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A28ECu);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x088A28ECu) goto L_088A28EC;
    return;
L_088A28EC:
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A290C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2914:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2938:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A2950u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x088A2950u) goto L_088A2950;
    return;
L_088A2950:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A295C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A2980u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x088A2980u) goto L_088A2980;
    return;
L_088A2980:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A298C:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2994:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A299C:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A29A4:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A29AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A29B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A29BC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A29C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A29CC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A29D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A29DC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A29E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2A0C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2A14:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2A1C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2A24:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2A2C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2A34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088A2A88;
      }
      goto L_088A2A50;
    }
L_088A2A50:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21936));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1120));
    ctx.gpr[31] = (0x088A2A68u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 658u, 0x08AFEF48u>(ctx, &aot_mem) && ctx.pc == 0x088A2A68u) goto L_088A2A68;
    return;
L_088A2A68:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088A2A74u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 736u, 0x08AFF300u>(ctx, &aot_mem) && ctx.pc == 0x088A2A74u) goto L_088A2A74;
    return;
L_088A2A74:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2A88;
      }
      goto L_088A2A80;
    }
L_088A2A80:
    ctx.gpr[31] = (0x088A2A88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 734u, 0x08AFF2E0u>(ctx, &aot_mem) && ctx.pc == 0x088A2A88u) goto L_088A2A88;
    return;
L_088A2A88:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2A9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088A2AC0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2AC0u) goto L_088A2AC0;
    return;
L_088A2AC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088A2B00u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x088A2B00u) goto L_088A2B00;
    return;
L_088A2B00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088A2B14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x088A2B14u) goto L_088A2B14;
    return;
L_088A2B14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088A2B28u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2B28u) goto L_088A2B28;
    return;
L_088A2B28:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088A2B4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2B4Cu) goto L_088A2B4C;
    return;
L_088A2B4C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2B64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088A2B98;
      }
      goto L_088A2B88;
    }
L_088A2B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088A2B98;
L_088A2B98:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(548));
    ctx.gpr[31] = (0x088A2BA4u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(552));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 434u, 0x08AA1BA4u>(ctx, &aot_mem) && ctx.pc == 0x088A2BA4u) goto L_088A2BA4;
    return;
L_088A2BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(652), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1776)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A2BC4;
      }
      goto L_088A2BBC;
    }
L_088A2BBC:
    ctx.gpr[31] = (0x088A2BC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 129u, 0x08AD0934u>(ctx, &aot_mem) && ctx.pc == 0x088A2BC4u) goto L_088A2BC4;
    return;
L_088A2BC4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2BD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(988)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2C5C;
      }
      goto L_088A2BF0;
    }
L_088A2BF0:
    ctx.gpr[31] = (0x088A2BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 598u, 0x0889E930u>(ctx, &aot_mem) && ctx.pc == 0x088A2BF8u) goto L_088A2BF8;
    return;
L_088A2BF8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2C5C;
      }
      goto L_088A2C04;
    }
L_088A2C04:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x088A2C14u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x088A2C14u) goto L_088A2C14;
    return;
L_088A2C14:
    ctx.gpr[31] = (0x088A2C1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(988)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 598u, 0x0889E930u>(ctx, &aot_mem) && ctx.pc == 0x088A2C1Cu) goto L_088A2C1C;
    return;
L_088A2C1C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[5] = (43691u << 16u);
      if (branch_taken) {
          goto L_088A2C48;
      }
      goto L_088A2C2C;
    }
L_088A2C2C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21846));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A2C48;
      }
      goto L_088A2C38;
    }
L_088A2C38:
    jump_target = ctx.gpr[16];
    ctx.gpr[31] = (0x088A2C40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A2C40u) goto L_088A2C40;
    return;
L_088A2C40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2C50;
      }
      goto L_088A2C48;
    }
L_088A2C48:
    ctx.gpr[31] = (0x088A2C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x088A2C50u) goto L_088A2C50;
    return;
L_088A2C50:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x088A2C5Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x088A2C5Cu) goto L_088A2C5C;
    return;
L_088A2C5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2C6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088A2DB0;
      }
      goto L_088A2C90;
    }
L_088A2C90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.gpr[19] = (0u | 55u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088A2DB0;
      }
      goto L_088A2CA8;
    }
L_088A2CA8:
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-10));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2D20;
      }
      goto L_088A2CDC;
    }
L_088A2CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.gpr[31] = (0x088A2CE8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 618u, 0x08906DC4u>(ctx, &aot_mem) && ctx.pc == 0x088A2CE8u) goto L_088A2CE8;
    return;
L_088A2CE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088A2D20;
      }
      goto L_088A2CF4;
    }
L_088A2CF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088A2D20;
      }
      goto L_088A2D08;
    }
L_088A2D08:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.gpr[6] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 42u);
    ctx.gpr[31] = (0x088A2D20u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 212u, 0x08B04D14u>(ctx, &aot_mem) && ctx.pc == 0x088A2D20u) goto L_088A2D20;
    return;
L_088A2D20:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A2D2Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2D2Cu) goto L_088A2D2C;
    return;
L_088A2D2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2DB0;
      }
      goto L_088A2D34;
    }
L_088A2D34:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-10));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A2D5C;
      }
      goto L_088A2D40;
    }
L_088A2D40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A2D4Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2D4Cu) goto L_088A2D4C;
    return;
L_088A2D4C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A2D58u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 618u, 0x08906DC4u>(ctx, &aot_mem) && ctx.pc == 0x088A2D58u) goto L_088A2D58;
    return;
L_088A2D58:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_088A2D5C;
L_088A2D5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A2D68u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2D68u) goto L_088A2D68;
    return;
L_088A2D68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088A2DB0;
      }
      goto L_088A2D70;
    }
L_088A2D70:
    ctx.gpr[31] = (0x088A2D78u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2D78u) goto L_088A2D78;
    return;
L_088A2D78:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088A2DB0;
      }
      goto L_088A2D88;
    }
L_088A2D88:
    ctx.gpr[17] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A2D98u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2D98u) goto L_088A2D98;
    return;
L_088A2D98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 42u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A2DB0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 212u, 0x08B04D14u>(ctx, &aot_mem) && ctx.pc == 0x088A2DB0u) goto L_088A2DB0;
    return;
L_088A2DB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2DCC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2DD4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2DDC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2DE4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2DEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A2E00u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 769u, 0x08AFF4B4u>(ctx, &aot_mem) && ctx.pc == 0x088A2E00u) goto L_088A2E00;
    return;
L_088A2E00:
    ctx.gpr[31] = (0x088A2E08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088A2E18;
L_088A2E08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2E18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_088A2E28;
L_088A2E28:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(956), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A2E28;
      }
      goto L_088A2E3C;
    }
L_088A2E3C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(956));
    ctx.gpr[31] = (0x088A2E48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 888u, 0x0885F668u>(ctx, &aot_mem) && ctx.pc == 0x088A2E48u) goto L_088A2E48;
    return;
L_088A2E48:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2E54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(956)));
    ctx.gpr[31] = (0x088A2E7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem) && ctx.pc == 0x088A2E7Cu) goto L_088A2E7C;
    return;
L_088A2E7C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2EB4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2EBC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1120)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A2EC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A2EF4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x088A2EF4u) goto L_088A2EF4;
    return;
L_088A2EF4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A2F10u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2F10u) goto L_088A2F10;
    return;
L_088A2F10:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_088A2F2C;
    }
    goto L_088A2F18;
L_088A2F18:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088A2F24u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x088A2F24u) goto L_088A2F24;
    return;
L_088A2F24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A2F68;
      }
      goto L_088A2F2C;
    }
L_088A2F2C:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A2F50;
      }
      goto L_088A2F3C;
    }
L_088A2F3C:
    ctx.gpr[31] = (0x088A2F44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x088A2F44u) goto L_088A2F44;
    return;
L_088A2F44:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088A2F60;
      }
      goto L_088A2F50;
    }
L_088A2F50:
    ctx.gpr[31] = (0x088A2F58u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x088A2F58u) goto L_088A2F58;
    return;
L_088A2F58:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088A2F60;
L_088A2F60:
    ctx.gpr[31] = (0x088A2F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x088A2F68u) goto L_088A2F68;
    return;
L_088A2F68:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
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
L_088A2F88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088A2FB4u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 959u, 0x08B03834u>(ctx, &aot_mem) && ctx.pc == 0x088A2FB4u) goto L_088A2FB4;
    return;
L_088A2FB4:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21936));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1008));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088A2FD0u);
    ctx.gpr[6] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x088A2FD0u) goto L_088A2FD0;
    return;
L_088A2FD0:
    ctx.gpr[31] = (0x088A2FD8u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1120));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 657u, 0x08AFEF20u>(ctx, &aot_mem) && ctx.pc == 0x088A2FD8u) goto L_088A2FD8;
    return;
L_088A2FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088A3008;
      }
      goto L_088A2FF8;
    }
L_088A2FF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088A3008;
L_088A3008:
    ctx.gpr[5] = (0u | 233u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A3020;
      }
      goto L_088A3014;
    }
L_088A3014:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088A3024;
      }
      goto L_088A3020;
    }
L_088A3020:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
    goto L_088A3024;
L_088A3024:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(856), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1092), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1096), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1156), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(944), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(948), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1088), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1072), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1108), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1112), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1120), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A3074u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088A2DEC;
L_088A3074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(352), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(356), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(360), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1056), ctx.gpr[4]);
    ctx.gpr[31] = (0x088A309Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 933u, 0x08AFFDDCu>(ctx, &aot_mem) && ctx.pc == 0x088A309Cu) goto L_088A309C;
    return;
L_088A309C:
    ctx.gpr[31] = (0x088A30A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 565u, 0x08B021F0u>(ctx, &aot_mem) && ctx.pc == 0x088A30A4u) goto L_088A30A4;
    return;
L_088A30A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A3110;
      }
      goto L_088A30F0;
    }
L_088A30F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A311C;
      }
      goto L_088A3110;
    }
L_088A3110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A311C;
L_088A311C:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1060), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16608u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1060), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1061), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1064), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1076), 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1060), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (50716u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16374u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (1024u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1068), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1080), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1084), 0u);
    ctx.gpr[31] = (0x088A31C0u);
    ctx.gpr[4] = (0u | 388u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x088A31C0u) goto L_088A31C0;
    return;
L_088A31C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A31D4;
      }
      goto L_088A31CC;
    }
L_088A31CC:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_088A31D4;
L_088A31D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(716), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(625), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 248u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (48928u << 16u);
      if (branch_taken) {
          goto L_088A3224;
      }
      goto L_088A31F0;
    }
L_088A31F0:
    ctx.gpr[6] = (48800u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 55676u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (16032u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 55676u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1044), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1040), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1048), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1049), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088A3250;
      }
      goto L_088A3224;
    }
L_088A3224:
    ctx.gpr[6] = (ctx.gpr[6] | 55676u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (16160u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 55676u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1044), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1040), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1048), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1049), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088A3250;
L_088A3250:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088A325Cu);
    ctx.gpr[4] = (0u | 1888u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x088A325Cu) goto L_088A325C;
    return;
L_088A325C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3274;
      }
      goto L_088A3268;
    }
L_088A3268:
    ctx.gpr[31] = (0x088A3270u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 577u, 0x08A0B7C8u>(ctx, &aot_mem) && ctx.pc == 0x088A3270u) goto L_088A3270;
    return;
L_088A3270:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_088A3274;
L_088A3274:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(368), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088A3284u);
    ctx.gpr[4] = (0u | 1888u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x088A3284u) goto L_088A3284;
    return;
L_088A3284:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A329C;
      }
      goto L_088A3290;
    }
L_088A3290:
    ctx.gpr[31] = (0x088A3298u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 577u, 0x08A0B7C8u>(ctx, &aot_mem) && ctx.pc == 0x088A3298u) goto L_088A3298;
    return;
L_088A3298:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_088A329C;
L_088A329C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(372), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 219u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A32C0;
      }
      goto L_088A32B4;
    }
L_088A32B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(619))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(619), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088A32C0;
L_088A32C0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
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
L_088A32E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2320));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2264), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2268), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2272), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2276), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2280), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2284), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2288), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2292), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2296), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2300), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2304), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2308), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088A3378;
      }
      goto L_088A332C;
    }
L_088A332C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3378;
      }
      goto L_088A3338;
    }
L_088A3338:
    ctx.gpr[31] = (0x088A3340u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x088A3340u) goto L_088A3340;
    return;
L_088A3340:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3378;
      }
      goto L_088A3348;
    }
L_088A3348:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4203)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3378;
      }
      goto L_088A3354;
    }
L_088A3354:
    ctx.gpr[31] = (0x088A335Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088A335Cu) goto L_088A335C;
    return;
L_088A335C:
    ctx.gpr[31] = (0x088A3364u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 519u, 0x08946B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088A3364u) goto L_088A3364;
    return;
L_088A3364:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3378;
      }
      goto L_088A3370;
    }
L_088A3370:
    ctx.gpr[31] = (0x088A3378u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 941u, 0x0898BA34u>(ctx, &aot_mem) && ctx.pc == 0x088A3378u) goto L_088A3378;
    return;
L_088A3378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A338C;
      }
      goto L_088A3384;
    }
L_088A3384:
    ctx.gpr[31] = (0x088A338Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 672u, 0x08912A70u>(ctx, &aot_mem) && ctx.pc == 0x088A338Cu) goto L_088A338C;
    return;
L_088A338C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A33A8;
      }
      goto L_088A3398;
    }
L_088A3398:
    ctx.gpr[31] = (0x088A33A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(368)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 595u, 0x08A0BA78u>(ctx, &aot_mem) && ctx.pc == 0x088A33A0u) goto L_088A33A0;
    return;
L_088A33A0:
    ctx.gpr[31] = (0x088A33A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(372)));
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 595u, 0x08A0BA78u>(ctx, &aot_mem) && ctx.pc == 0x088A33A8u) goto L_088A33A8;
    return;
L_088A33A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(268)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088A33E4;
      }
      goto L_088A33C0;
    }
L_088A33C0:
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(296)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A33E4;
      }
      goto L_088A33E0;
    }
L_088A33E0:
    ctx.gpr[17] = (0u | 1u);
    goto L_088A33E4;
L_088A33E4:
    ctx.gpr[31] = (0x088A33ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x088A33ECu) goto L_088A33EC;
    return;
L_088A33EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088A34A8;
      }
      goto L_088A33F8;
    }
L_088A33F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 219u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A34A8;
      }
      goto L_088A3408;
    }
L_088A3408:
    ctx.gpr[31] = (0x088A3410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x088A3410u) goto L_088A3410;
    return;
L_088A3410:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A34A8;
      }
      goto L_088A341C;
    }
L_088A341C:
    ctx.gpr[31] = (0x088A3424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x088A3424u) goto L_088A3424;
    return;
L_088A3424:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088A34A8;
      }
      goto L_088A3430;
    }
L_088A3430:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(533))))));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_088A34A8;
      }
      goto L_088A3444;
    }
L_088A3444:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-22688)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088A345C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A34A8;
      }
      goto L_088A3470;
    }
L_088A3470:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x088A348Cu);
    ctx.gpr[6] = (0u | 114u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x088A348Cu) goto L_088A348C;
    return;
L_088A348C:
    ctx.gpr[31] = (0x088A3494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x088A3494u) goto L_088A3494;
    return;
L_088A3494:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 4095u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1072), ctx.gpr[4]);
    goto L_088A34A8;
L_088A34A8:
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 160u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088A34C8u);
    ctx.gpr[6] = (0u | 196u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 325u, 0x088DDFD8u>(ctx, &aot_mem) && ctx.pc == 0x088A34C8u) goto L_088A34C8;
    return;
L_088A34C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2240), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (16230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 228u);
    ctx.gpr[5] = (16217u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x088A3500u);
    ctx.gpr[5] = (0u | 196u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 325u, 0x088DDFD8u>(ctx, &aot_mem) && ctx.pc == 0x088A3500u) goto L_088A3500;
    return;
L_088A3500:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2244), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2244)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 228u);
    ctx.gpr[31] = (0x088A3530u);
    ctx.gpr[5] = (0u | 196u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 325u, 0x088DDFD8u>(ctx, &aot_mem) && ctx.pc == 0x088A3530u) goto L_088A3530;
    return;
L_088A3530:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2248), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2248)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A3544u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 868u, 0x08AFFA50u>(ctx, &aot_mem) && ctx.pc == 0x088A3544u) goto L_088A3544;
    return;
L_088A3544:
    ctx.gpr[31] = (0x088A354Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 385u, 0x08B015F0u>(ctx, &aot_mem) && ctx.pc == 0x088A354Cu) goto L_088A354C;
    return;
L_088A354C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3854;
      }
      goto L_088A3564;
    }
L_088A3564:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088A3854;
      }
      goto L_088A3570;
    }
L_088A3570:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088A365C;
      }
      goto L_088A3578;
    }
L_088A3578:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088A36B8;
      }
      goto L_088A3580;
    }
L_088A3580:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_088A36F0;
      }
      goto L_088A3588;
    }
L_088A3588:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_088A36F0;
      }
      goto L_088A3590;
    }
L_088A3590:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1060), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (50716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16374u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1068), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088A35BCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x088A35BCu) goto L_088A35BC;
    return;
L_088A35BC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25076)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25080)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088A35D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x088A35D0u) goto L_088A35D0;
    return;
L_088A35D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_088A3654;
      }
      goto L_088A35D8;
    }
L_088A35D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088A35F4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A35F4u) goto L_088A35F4;
    return;
L_088A35F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(619))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A360C;
      }
      goto L_088A3604;
    }
L_088A3604:
    ctx.gpr[31] = (0x088A360Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 389u, 0x08A42134u>(ctx, &aot_mem) && ctx.pc == 0x088A360Cu) goto L_088A360C;
    return;
L_088A360C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A363C;
      }
      goto L_088A361C;
    }
L_088A361C:
    ctx.gpr[31] = (0x088A3624u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x088A3624u) goto L_088A3624;
    return;
L_088A3624:
    ctx.gpr[31] = (0x088A362Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 351u, 0x0898CFB8u>(ctx, &aot_mem) && ctx.pc == 0x088A362Cu) goto L_088A362C;
    return;
L_088A362C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A363C;
      }
      goto L_088A3634;
    }
L_088A3634:
    ctx.gpr[31] = (0x088A363Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 401u, 0x08A421ECu>(ctx, &aot_mem) && ctx.pc == 0x088A363Cu) goto L_088A363C;
    return;
L_088A363C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7892)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A3654;
      }
      goto L_088A364C;
    }
L_088A364C:
    ctx.gpr[31] = (0x088A3654u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 349u, 0x08A52328u>(ctx, &aot_mem) && ctx.pc == 0x088A3654u) goto L_088A3654;
    return;
L_088A3654:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3854;
      }
      goto L_088A365C;
    }
L_088A365C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1060), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (50716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16374u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A3684u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1068), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 658u, 0x08B0EBDCu>(ctx, &aot_mem) && ctx.pc == 0x088A3684u) goto L_088A3684;
    return;
L_088A3684:
    ctx.gpr[31] = (0x088A368Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 540u, 0x08A666DCu>(ctx, &aot_mem) && ctx.pc == 0x088A368Cu) goto L_088A368C;
    return;
L_088A368C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1060), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1061), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1060), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 380u, 0x088A6140u>(ctx, &aot_mem); return;
      }
      goto L_088A36B8;
    }
L_088A36B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1060), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (50716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16374u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A36E0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1068), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 658u, 0x08B0EBDCu>(ctx, &aot_mem) && ctx.pc == 0x088A36E0u) goto L_088A36E0;
    return;
L_088A36E0:
    ctx.gpr[31] = (0x088A36E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 442u, 0x08B461ACu>(ctx, &aot_mem) && ctx.pc == 0x088A36E8u) goto L_088A36E8;
    return;
L_088A36E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3854;
      }
      goto L_088A36F0;
    }
L_088A36F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1060), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1061), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1060), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A377C;
      }
      goto L_088A3728;
    }
L_088A3728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[5] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088A375Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x088A375Cu) goto L_088A375C;
    return;
L_088A375C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088A37A4;
      }
      goto L_088A377C;
    }
L_088A377C:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088A3790u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x088A3790u) goto L_088A3790;
    return;
L_088A3790:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A37A4;
L_088A37A4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088A37B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 58u, 0x089604E0u>(ctx, &aot_mem) && ctx.pc == 0x088A37B8u) goto L_088A37B8;
    return;
L_088A37B8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[5] = (0u | 64u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A384C;
      }
      goto L_088A37E4;
    }
L_088A37E4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25144)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A384C;
      }
      goto L_088A3810;
    }
L_088A3810:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088A3828u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x088A3828u) goto L_088A3828;
    return;
L_088A3828:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 380u, 0x088A6140u>(ctx, &aot_mem); return;
      }
      goto L_088A384C;
    }
L_088A384C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3854;
      }
      goto L_088A3854;
    }
L_088A3854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(416));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    jump_target = ctx.gpr[10];
    ctx.gpr[31] = (0x088A3884u);
    ctx.gpr[9] = (0u | 42u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088A3884u) goto L_088A3884;
    return;
L_088A3884:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] & 2u);
    ctx.gpr[31] = (0x088A3898u);
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 540u, 0x08A666DCu>(ctx, &aot_mem) && ctx.pc == 0x088A3898u) goto L_088A3898;
    return;
L_088A3898:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 278u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_088A3C40;
    }
    goto L_088A38A8;
L_088A38A8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (17601u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A3968;
      }
      goto L_088A38D8;
    }
L_088A38D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A38FC;
      }
      goto L_088A38F0;
    }
L_088A38F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A38FC;
L_088A38FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088A3934;
      }
      goto L_088A3918;
    }
L_088A3918:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A3934;
      }
      goto L_088A392C;
    }
L_088A392C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088A3940;
      }
      goto L_088A3934;
    }
L_088A3934:
    ctx.gpr[31] = (0x088A393Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x088A393Cu) goto L_088A393C;
    return;
L_088A393C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088A3940;
L_088A3940:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A3A10;
      }
      goto L_088A3954;
    }
L_088A3954:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x088A3960u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem) && ctx.pc == 0x088A3960u) goto L_088A3960;
    return;
L_088A3960:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3A10;
      }
      goto L_088A3968;
    }
L_088A3968:
    ctx.gpr[4] = (50435u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A3A10;
      }
      goto L_088A3988;
    }
L_088A3988:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A39AC;
      }
      goto L_088A39A0;
    }
L_088A39A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A39AC;
L_088A39AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088A39E4;
      }
      goto L_088A39C8;
    }
L_088A39C8:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A39E4;
      }
      goto L_088A39DC;
    }
L_088A39DC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088A39F0;
      }
      goto L_088A39E4;
    }
L_088A39E4:
    ctx.gpr[31] = (0x088A39ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x088A39ECu) goto L_088A39EC;
    return;
L_088A39EC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088A39F0;
L_088A39F0:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A3A10;
      }
      goto L_088A3A04;
    }
L_088A3A04:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x088A3A10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem) && ctx.pc == 0x088A3A10u) goto L_088A3A10;
    return;
L_088A3A10:
    ctx.gpr[4] = (17645u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A3B38;
      }
      goto L_088A3A30;
    }
L_088A3A30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A3A54;
      }
      goto L_088A3A48;
    }
L_088A3A48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A3A54;
L_088A3A54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088A3A8C;
      }
      goto L_088A3A70;
    }
L_088A3A70:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A3A8C;
      }
      goto L_088A3A84;
    }
L_088A3A84:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088A3A98;
      }
      goto L_088A3A8C;
    }
L_088A3A8C:
    ctx.gpr[31] = (0x088A3A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x088A3A94u) goto L_088A3A94;
    return;
L_088A3A94:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088A3A98;
L_088A3A98:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A3AE8;
      }
      goto L_088A3AB4;
    }
L_088A3AB4:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A3AE8;
      }
      goto L_088A3AC8;
    }
L_088A3AC8:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A3AE0u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem) && ctx.pc == 0x088A3AE0u) goto L_088A3AE0;
    return;
L_088A3AE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3C30;
      }
      goto L_088A3AE8;
    }
L_088A3AE8:
    ctx.gpr[4] = (49097u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A3C30;
      }
      goto L_088A3B04;
    }
L_088A3B04:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A3C30;
      }
      goto L_088A3B18;
    }
L_088A3B18:
    ctx.gpr[4] = (49225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A3B30u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem) && ctx.pc == 0x088A3B30u) goto L_088A3B30;
    return;
L_088A3B30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3C30;
      }
      goto L_088A3B38;
    }
L_088A3B38:
    ctx.gpr[4] = (50413u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A3C30;
      }
      goto L_088A3B58;
    }
L_088A3B58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A3B7C;
      }
      goto L_088A3B70;
    }
L_088A3B70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A3B7C;
L_088A3B7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088A3BB4;
      }
      goto L_088A3B98;
    }
L_088A3B98:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A3BB4;
      }
      goto L_088A3BAC;
    }
L_088A3BAC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088A3BC0;
      }
      goto L_088A3BB4;
    }
L_088A3BB4:
    ctx.gpr[31] = (0x088A3BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x088A3BBCu) goto L_088A3BBC;
    return;
L_088A3BBC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088A3BC0;
L_088A3BC0:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A3BFC;
      }
      goto L_088A3BDC;
    }
L_088A3BDC:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A3BF4u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem) && ctx.pc == 0x088A3BF4u) goto L_088A3BF4;
    return;
L_088A3BF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3C30;
      }
      goto L_088A3BFC;
    }
L_088A3BFC:
    ctx.gpr[4] = (49097u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A3C30;
      }
      goto L_088A3C18;
    }
L_088A3C18:
    ctx.gpr[4] = (49225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088A3C30u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem) && ctx.pc == 0x088A3C30u) goto L_088A3C30;
    return;
L_088A3C30:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x088A3C3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x088A3C3Cu) goto L_088A3C3C;
    return;
L_088A3C3C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_088A3C40;
L_088A3C40:
    ctx.gpr[4] = (2238u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(344)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088A3C78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14064));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 697u, 0x08A8FD04u>(ctx, &aot_mem) && ctx.pc == 0x088A3C78u) goto L_088A3C78;
    return;
L_088A3C78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 338u, 0x088A5EB0u>(ctx, &aot_mem); return;
      }
      goto L_088A3C80;
    }
L_088A3C80:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1061), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
        goto L_088A3E68;
    }
    goto L_088A3CD8;
L_088A3CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
        goto L_088A3D30;
    }
    goto L_088A3CEC;
L_088A3CEC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49520u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
        goto L_088A3D30;
    }
    goto L_088A3D0C;
L_088A3D0C:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1060))))));
    goto L_088A3D30;
L_088A3D30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1060), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088A3D50u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x088A3D50u) goto L_088A3D50;
    return;
L_088A3D50:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25076)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25080)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088A3D64u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x088A3D64u) goto L_088A3D64;
    return;
L_088A3D64:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088A3E54;
      }
      goto L_088A3D6C;
    }
L_088A3D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088A3E00;
      }
      goto L_088A3D7C;
    }
L_088A3D7C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x088A3D94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088A2C6C;
L_088A3D94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (0x088A3DF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x088A3DF8u) goto L_088A3DF8;
    return;
L_088A3DF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3E94;
      }
      goto L_088A3E00;
    }
L_088A3E00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A3E94;
      }
      goto L_088A3E14;
    }
L_088A3E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(236));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 46u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x088A3E4Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem) && ctx.pc == 0x088A3E4Cu) goto L_088A3E4C;
    return;
L_088A3E4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3E94;
      }
      goto L_088A3E54;
    }
L_088A3E54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088A3E94;
      }
      goto L_088A3E68;
    }
L_088A3E68:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1060), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(617))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088A3E94;
L_088A3E94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 19u, 0x088A41F0u>(ctx, &aot_mem); return;
      }
      goto L_088A3EA4;
    }
L_088A3EA4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A3EB4;
      }
      goto L_088A3EAC;
    }
L_088A3EAC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1064), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088A3EB4;
L_088A3EB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1064)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 7u, 0x088A4078u>(ctx, &aot_mem); return;
      }
      goto L_088A3ECC;
    }
L_088A3ECC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088A3F64;
    }
    goto L_088A3F58;
L_088A3F58:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_088A3F64;
      }
      goto L_088A3F64;
    }
L_088A3F64:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25120)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[14] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
        goto L_088A3F94;
    }
    goto L_088A3F94;
L_088A3F94:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25068)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25072)));
    ctx.gpr[31] = (0x088A3FACu);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x088A3FACu) goto L_088A3FAC;
    return;
L_088A3FAC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088A3FC0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x088A3FC0u) goto L_088A3FC0;
    return;
L_088A3FC0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
        goto L_088A3FF0;
    }
    goto L_088A3FC8;
L_088A3FC8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_088A3FDC;
    }
    goto L_088A3FDC;
L_088A3FDC:
    ctx.gpr[31] = (0x088A3FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x088A3FE4u) goto L_088A3FE4;
    return;
L_088A3FE4:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_088A3FF0;
L_088A3FF0:
    ctx.gpr[31] = (0x088A3FF8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x088A3FF8u) goto L_088A3FF8;
    return;
L_088A3FF8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.pc = 0x088A4000u; return;
}

void recomp_unit_0039(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0039_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_39(Runtime &runtime) {
    runtime.register_generated_unit(39u, 0x088A0000u, 16384u, &recomp_unit_0039, &recomp_unit_0039_entry);
    runtime.register_function(0x088A0000u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0004u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A000Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0028u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0034u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0040u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0048u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0054u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0068u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A008Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A00A8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A00ACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A00B8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A00C8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A00D4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A00DCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A00F4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A00FCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A010Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A011Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0128u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A013Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0144u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0154u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0160u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0170u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0184u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A018Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A019Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A01A4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A01B4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A01C0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A01C8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A01D4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A01DCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A01F0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A01FCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0218u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0228u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0238u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A024Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0278u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A027Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0284u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A029Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A02B4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A02CCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A02E4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A02E8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0304u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A030Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0314u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A031Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0328u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0344u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0354u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A035Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0364u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A036Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0374u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A037Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0384u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0394u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A03ACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A03C0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A03D0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A03E4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A03F4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0414u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A041Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0430u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0468u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A04E4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0570u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0578u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A05ACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A05D0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A05D8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A060Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0644u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A064Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0660u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0698u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A06A4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A06ACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A06C0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A06C8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A06DCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0714u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A071Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0724u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0738u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0770u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A077Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0784u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0794u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A07A4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A07ACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A07BCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A07CCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A07E4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A07F4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A07FCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0814u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A082Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0838u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0848u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0850u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A085Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A086Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0874u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0880u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0890u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0898u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A08A0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A08BCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A08DCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A08E8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A08ECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0920u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0980u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0988u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A098Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0998u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A09A0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A09A8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A09B0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A09C0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A09D4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A09E8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A09F0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A00u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A08u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A10u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A20u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A24u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A30u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A38u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A4Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A58u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A68u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A8Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0A90u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0AD0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0AE0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0AE8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0AF0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B00u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B08u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B18u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B28u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B2Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B38u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B4Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B64u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B74u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B7Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B84u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B8Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0B94u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0BD8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0BF4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C04u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C0Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C14u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C1Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C28u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C34u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C50u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C68u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C74u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C84u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0C8Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0CA8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0CB8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D0Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D18u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D34u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D3Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D44u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D54u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D64u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D70u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0D84u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0DA0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0DC8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0E18u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0E20u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0E50u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0E5Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0E64u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0E78u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0E7Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0E90u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0EA0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0EB8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0EDCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0F04u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0F2Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0F54u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0F7Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0FA4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0FCCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A0FF4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A101Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1044u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1054u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1084u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A108Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A10A4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A10ACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A10BCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A10CCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A10FCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1110u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1118u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1120u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1138u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1148u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1154u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A115Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1164u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A117Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A118Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A119Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A11A4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A11B4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A11BCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A11C4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A11D4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A11ECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A11F8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1210u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1214u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1224u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A123Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1254u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1260u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1268u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1278u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1284u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1294u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A129Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A12ACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A12B4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A12C4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A12D8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A12E0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A12F8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1300u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1310u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1320u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1328u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1330u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1340u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A134Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A135Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A136Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1374u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A137Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A138Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A139Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A13A4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A13B4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A13BCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A13D0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A13E0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A13F0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A13F8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A13FCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A140Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1414u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1418u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A142Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1444u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1454u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1464u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1470u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1478u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1488u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1498u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A14A8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A14ACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A14C0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A14D8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A14F0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A14F8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1500u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1518u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1530u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1558u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1564u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1580u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A158Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A15B8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A15C0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A15D4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A15F0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1600u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A160Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1620u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A165Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1664u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A166Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1680u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A16B8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A16CCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A16D4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A16E4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A16F8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1708u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A172Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A173Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A174Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A175Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1768u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A178Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1798u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A17A0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A17ACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A17B4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A17C4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A17DCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A17FCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1808u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1810u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1818u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1820u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A182Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1838u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1848u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1850u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1858u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1860u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1868u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1874u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A188Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A189Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A18ACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A18B0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A18B8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A18C4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A18DCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A18ECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A18F4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A18FCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1908u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1910u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1918u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1920u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A193Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A194Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1964u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1974u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1984u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A198Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A199Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A19B4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A19C4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A19CCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A19E4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A19FCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A08u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A18u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A20u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A2Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A3Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A44u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A50u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A60u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A68u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A70u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1A8Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1AACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1AB8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1ABCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1AF4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1B20u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1B30u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1B40u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1B48u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1B50u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1B5Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1B68u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1B70u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1B78u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1B98u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1BA0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1BB0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1BB8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1BC0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1BE0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1BE8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1BF8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C04u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C0Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C14u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C1Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C24u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C34u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C44u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C50u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C5Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C64u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C6Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C80u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C8Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C90u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1C9Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1CB4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1CBCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1CD8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1D14u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1D1Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1D30u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1D60u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1D68u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1D84u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1DA0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1DD0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1DF0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1DFCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1E04u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1E08u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1E1Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1E28u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1E30u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1E38u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1E50u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1E5Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1E6Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1E74u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1E84u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1EA0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1ECCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1EE0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1EE8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1EECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1F10u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1F18u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1F38u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1F44u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1F5Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1F60u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1F7Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1FA8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1FB4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1FD4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1FE0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1FF0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A1FFCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A200Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2014u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2020u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A202Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A203Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2058u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2084u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2090u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A20ACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A20B8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A20C0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A20C8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A20D4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A20DCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A20E4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A20F4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A20FCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2104u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A210Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2114u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A211Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2120u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2144u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A214Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A216Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2178u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2190u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2194u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A21B0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A21D8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A21E4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2200u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A220Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2214u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A221Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2224u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2230u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2248u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2270u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2288u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2290u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2298u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A22A0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A22B8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A22C8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A22D0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A22D8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A22E8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2310u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2324u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2334u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A233Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2344u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2348u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2364u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A236Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A238Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2398u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A23B0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A23B4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A23CCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2404u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2410u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2418u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2420u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2428u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2434u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2440u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2450u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A245Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2468u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2470u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2480u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2490u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2494u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A24ACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A24C8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A24E0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A24E8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A24F0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A24F8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2500u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A250Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2524u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A252Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A254Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2558u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2570u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2578u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A258Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2594u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A25B4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A25C0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A25D8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A25DCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A25F0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2608u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2628u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2648u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2670u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A268Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A26A0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A26B8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A26D0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A26ECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2708u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2720u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2728u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2730u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2740u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2744u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A274Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2764u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A276Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2774u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A27A0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A27ACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A27C0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A27D0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A27ECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A27FCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2818u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2820u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2828u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2830u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2838u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A285Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A286Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A287Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2884u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2890u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A28A8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A28B0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A28B8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A28C8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A28D0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A28ECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A290Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2914u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2938u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2950u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A295Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2980u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A298Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2994u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A299Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A29A4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A29ACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A29B4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A29BCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A29C4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A29CCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A29D4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A29DCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A29E4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2A0Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2A14u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2A1Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2A24u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2A2Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2A34u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2A50u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2A68u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2A74u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2A80u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2A88u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2A9Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2AC0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2B00u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2B14u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2B28u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2B4Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2B64u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2B88u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2B98u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2BA4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2BBCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2BC4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2BD4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2BF0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2BF8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C04u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C14u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C1Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C2Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C38u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C40u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C48u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C50u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C5Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C6Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2C90u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2CA8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2CDCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2CE8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2CF4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2D08u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2D20u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2D2Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2D34u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2D40u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2D4Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2D58u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2D5Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2D68u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2D70u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2D78u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2D88u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2D98u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2DB0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2DCCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2DD4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2DDCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2DE4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2DECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2E00u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2E08u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2E18u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2E28u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2E3Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2E48u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2E54u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2E7Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2EB4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2EBCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2EC4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2EF4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2F10u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2F18u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2F24u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2F2Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2F3Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2F44u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2F50u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2F58u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2F60u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2F68u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2F88u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2FB4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2FD0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2FD8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A2FF8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3008u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3014u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3020u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3024u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3074u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A309Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A30A4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A30F0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3110u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A311Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A31C0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A31CCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A31D4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A31F0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3224u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3250u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A325Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3268u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3270u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3274u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3284u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3290u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3298u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A329Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A32B4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A32C0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A32E4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A332Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3338u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3340u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3348u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3354u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A335Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3364u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3370u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3378u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3384u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A338Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3398u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A33A0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A33A8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A33C0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A33E0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A33E4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A33ECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A33F8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3408u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3410u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A341Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3424u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3430u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3444u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A345Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3470u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A348Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3494u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A34A8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A34C8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3500u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3530u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3544u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A354Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3564u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3570u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3578u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3580u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3588u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3590u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A35BCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A35D0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A35D8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A35F4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3604u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A360Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A361Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3624u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A362Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3634u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A363Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A364Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3654u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A365Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3684u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A368Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A36B8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A36E0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A36E8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A36F0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3728u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A375Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A377Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3790u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A37A4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A37B8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A37E4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3810u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3828u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A384Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3854u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3884u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3898u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A38A8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A38D8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A38F0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A38FCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3918u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A392Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3934u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A393Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3940u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3954u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3960u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3968u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3988u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A39A0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A39ACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A39C8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A39DCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A39E4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A39ECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A39F0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3A04u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3A10u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3A30u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3A48u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3A54u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3A70u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3A84u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3A8Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3A94u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3A98u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3AB4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3AC8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3AE0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3AE8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3B04u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3B18u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3B30u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3B38u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3B58u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3B70u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3B7Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3B98u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3BACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3BB4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3BBCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3BC0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3BDCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3BF4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3BFCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3C18u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3C30u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3C3Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3C40u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3C78u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3C80u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3CD8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3CECu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3D0Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3D30u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3D50u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3D64u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3D6Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3D7Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3D94u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3DF8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3E00u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3E14u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3E4Cu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3E54u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3E68u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3E94u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3EA4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3EACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3EB4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3ECCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3F58u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3F64u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3F94u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3FACu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3FC0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3FC8u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3FDCu, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3FE4u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3FF0u, &recomp_unit_0039, "recomp_unit_0039");
    runtime.register_function(0x088A3FF8u, &recomp_unit_0039, "recomp_unit_0039");
}
} // namespace psprecomp
