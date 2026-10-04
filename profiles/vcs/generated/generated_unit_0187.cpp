#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0187[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 8, 9, 10, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 13, 14, 0, 0, 15, 0, 0,
    0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 23, 24, 0, 25, 0, 0, 0, 0, 26, 0, 0,
    27, 0, 28, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    33, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41,
    0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0,
    0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0,
    59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 63, 0,
    0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0,
    0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 0,
    0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 78, 79, 80, 0, 0, 0, 0, 0, 81, 0, 0, 82,
    0, 83, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 92, 93, 94, 0, 0, 0, 0, 0, 95, 0,
    0, 96, 0, 97, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0,
    0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 106, 107, 108, 0, 0, 0, 0,
    109, 0, 0, 110, 0, 111, 112, 0, 0, 113, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 117, 118, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0,
    122, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 128, 0, 0, 129, 0, 0, 130, 0, 131, 132, 133, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 136, 137, 0, 0, 138, 0, 139,
    0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 144, 145, 146, 0, 0, 0, 0, 0, 147, 0,
    0, 148, 0, 149, 150, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 162,
    163, 164, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 167, 168, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 174, 0, 175, 176, 0, 177, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183,
    0, 0, 184, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 191, 0, 0, 0, 0, 192,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 197, 198, 199, 0,
    0, 0, 0, 0, 200, 0, 0, 201, 0, 202, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 205, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0,
    0, 214, 0, 215, 216, 217, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 220, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226,
    0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 232, 233, 234,
    0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 237, 238, 0, 0, 239, 0, 0, 240, 0, 241, 242, 0, 0, 0, 0, 243, 0, 0, 244, 0, 245, 246,
    0, 247, 0, 248, 0, 0, 249, 0, 250, 251, 0, 252, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 256, 0, 257,
    258, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 263, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0,
    267, 0, 268, 269, 0, 270, 0, 0, 0, 0, 271, 0, 0, 272, 0, 273, 274, 0, 0, 275, 0, 0, 276, 0, 277, 278, 0, 0, 0, 0, 279, 0,
    0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 283, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 288, 289,
    0, 290, 0, 0, 0, 0, 291, 0, 0, 292, 0, 293, 294, 0, 0, 295, 0, 0, 296, 0, 297, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0,
    0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 304, 305, 306, 0, 0, 0, 0, 0, 307,
    0, 0, 308, 0, 309, 310, 0, 0, 311, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 314, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 321, 0, 0, 322, 0, 0, 323, 0, 324, 325, 326, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 329, 330, 0, 0, 331, 0, 0, 0, 0, 0,
    332, 0, 0, 333, 0, 334, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 344, 345, 346, 0, 0, 0, 0, 0,
    347, 0, 0, 348, 0, 349, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0,
    0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 357, 0, 358, 359, 360, 0, 0, 0, 0, 0, 361, 0, 0, 362,
    0, 363, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0,
    0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 372, 373, 374, 0, 0, 0, 0, 0, 375, 0,
    0, 376, 0, 377, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0,
    0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 386, 387, 0, 388, 0, 0, 0, 389, 0, 0,
    390, 0, 391, 392, 0, 0, 393, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0,
    398, 0, 0, 399, 0, 0, 400, 0, 401, 402, 403, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 406, 407, 0, 0, 408, 0, 0, 409, 0, 410, 0,
    0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 414, 415, 0, 416, 0, 0, 417, 0, 0, 418,
    0, 0, 419, 0, 420, 421, 0, 422, 0, 0, 0, 0, 423, 0, 0, 424, 0, 425, 426, 0, 0, 427, 0, 0, 428, 0, 429, 430, 0, 0, 0, 0,
    431, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 435, 0, 436, 0, 0, 437, 0, 0, 438, 0, 0, 439, 0,
    440, 441, 0, 442, 0, 0, 0, 0, 443, 0, 0, 444, 0, 445, 446, 0, 0, 447, 0, 0, 448, 0, 449, 450, 0, 0, 0, 0, 451, 0, 0, 0,
    0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 455, 456, 0, 0, 0, 0, 0, 0, 0, 457, 0,
    0, 0, 0, 0, 0, 0, 458, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 464, 465, 0, 0, 0, 0, 466, 0, 0, 467, 0, 468, 469, 0, 0, 470, 0, 0, 0,
    0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 475, 476, 477, 0, 0, 0, 0, 0, 478,
    0, 0, 479, 0, 480, 481, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0,
    0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 489, 0, 490, 491, 492, 0, 0, 0, 0, 0, 493, 0, 0,
    494, 0, 495, 496, 0, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0, 499, 0, 500, 0, 501, 0, 502, 0, 503, 0, 504, 0, 0, 505, 0, 506,
    0, 507, 0, 508, 0, 509, 510, 0, 511, 0, 512, 0, 513, 0, 514, 0, 515, 0, 516, 0, 517, 0, 0, 518, 0, 519, 0, 520, 0, 521, 0, 522,
    0, 523, 0, 0, 524, 0, 0, 525, 0, 526, 0, 527, 0, 528, 0, 529, 530, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 535, 0, 0, 536, 0, 537, 538, 0, 539, 0, 0, 0, 0, 540, 0,
    0, 541, 0, 542, 543, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0,
    547, 0, 548, 0, 0, 0, 549, 0, 0, 550, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 554, 0, 0, 555,
    0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 560,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 563, 0, 564, 0,
    565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 568, 0, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 571,
    0, 572, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0,
    0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0,
    0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 585, 0, 0, 586, 587, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0,
    0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 594, 0,
    0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0, 598, 599, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 601,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 603, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 606, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 607, 0, 0, 608, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    612, 0, 0, 613, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 618, 0, 619,
    0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 623, 0, 624, 0, 0, 0, 0, 625, 0,
    0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 628, 0, 629, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 631, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 633, 0, 634, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 637, 0, 0, 638, 0, 639, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 643,
    0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 648, 0, 649, 0, 0, 0, 0,
    650, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 654,
    0, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 658, 0, 659, 660, 0, 661, 0, 0, 0, 0,
    0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0,
    665, 0, 666, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0,
    0, 670, 0, 671, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674, 0, 675, 0, 0, 0, 676, 0, 0,
    0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 678, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682,
    0, 0, 683, 0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 688, 0, 689, 0,
    0, 0, 0, 690, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 693, 0, 694, 0, 0, 0, 0, 695, 0, 0,
    0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 698, 0, 699, 0, 0, 0, 0, 0, 0, 0, 700,
    0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0,
    0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 0, 0,
    709, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 711, 0, 712, 0, 0, 0, 713, 0, 0, 0, 0, 714, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 717, 0, 0, 718, 719, 0, 0, 0, 0,
    0, 720, 0, 721, 0, 722, 0, 723, 0, 724, 725, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 728, 0, 0, 0, 0, 0, 0, 0,
    729, 0, 0, 0, 0, 0, 0, 0, 730, 0, 731, 0, 0, 732, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0,
    0, 735, 0, 736, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 739, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 741, 0, 0,
    0, 0, 0, 742, 743, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 746, 0, 747, 0, 0, 0, 748, 0,
    0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 751, 0, 752, 0, 0, 753, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 758, 0, 759, 0, 0,
    0, 0, 0, 0, 0, 760, 0, 0, 761, 0, 0, 0, 0, 0, 762, 763, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 767, 0, 768, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 770, 0, 0, 0,
    0, 0, 771, 772, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 0, 774, 0, 775, 0, 0, 776, 0, 0, 0, 0, 777, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 781, 0, 0, 0,
    0, 0, 0, 0, 782, 0, 783, 0, 784, 0, 785, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 788, 0, 0, 0, 0, 0, 0,
    0, 789, 0, 0, 790, 0, 0, 0, 0, 0, 791, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 794, 0, 0, 0, 795, 0, 0,
    0, 796, 0, 0, 0, 797, 0, 0, 0, 798, 0, 0, 0, 799, 0, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 802, 0, 0, 803, 0, 804, 0, 0, 0, 0, 0, 805, 0, 806, 0, 807, 808, 0, 0, 0, 0, 0, 0, 809, 0, 810, 0, 0, 0, 0, 0,
    0, 0, 811, 0, 0, 812, 0, 0, 0, 0, 0, 813, 814, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 816,
    0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0,
    821, 0, 0, 822, 0, 0, 0, 0, 0, 0, 823, 0, 824, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0, 826, 0, 0, 0, 0, 0, 827, 828, 0,
    0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 0, 0, 0, 830, 0, 831, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 833, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 835, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 837, 0, 0, 0, 838, 0, 0, 0,
    0, 0, 839, 0, 0, 0, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 0, 0, 841, 0, 0, 842, 0, 0, 0, 0, 0, 843, 0, 844,
    0, 0, 0, 0, 0, 845, 0, 846, 0, 0, 0, 0, 847, 0, 0, 0, 0, 848, 0, 0, 0, 0, 849, 0, 850, 0, 0, 851, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 852, 0, 0, 0, 0, 0, 0, 0, 853, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 854, 0, 855, 0, 0, 0, 0, 856,
    0, 0, 0, 0, 857, 0, 0, 0, 0, 858, 0, 859, 0, 0, 860, 0, 0, 0, 0, 0, 0, 0, 861, 0, 0, 0, 862, 0, 0, 0, 0, 0,
    0, 0, 863, 0, 0, 0, 864, 0, 0, 865, 866, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 868, 0, 0, 0, 0,
    0, 0, 0, 869, 0, 0, 870, 0, 871, 872, 0, 0, 0, 0, 0, 0, 873, 0, 0, 874, 0, 875, 876, 0, 0, 0, 0, 877, 0, 0, 0, 0,
    0, 0, 0, 878, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 879, 0, 0, 0, 0, 0, 0, 0, 880, 0, 0, 0, 0, 0, 0, 0,
    0, 881, 0, 0, 882, 0, 883, 884, 0, 0, 0, 0, 0, 0, 0, 0, 885, 0, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 887, 0, 0, 0, 0, 0, 0, 888, 0, 0, 0, 0, 0, 0, 0, 0, 889, 0, 0, 890, 0, 891, 892,
};
void recomp_unit_0187_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AF0000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0187[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AF0000;
    case 2u: goto L_08AF0010;
    case 3u: goto L_08AF0040;
    case 4u: goto L_08AF0064;
    case 5u: goto L_08AF0090;
    case 6u: goto L_08AF009C;
    case 7u: goto L_08AF00A8;
    case 8u: goto L_08AF00B0;
    case 9u: goto L_08AF00B4;
    case 10u: goto L_08AF00B8;
    case 11u: goto L_08AF00D0;
    case 12u: goto L_08AF00DC;
    case 13u: goto L_08AF00E4;
    case 14u: goto L_08AF00E8;
    case 15u: goto L_08AF00F4;
    case 16u: goto L_08AF0114;
    case 17u: goto L_08AF0144;
    case 18u: goto L_08AF0168;
    case 19u: goto L_08AF01A8;
    case 20u: goto L_08AF01B4;
    case 21u: goto L_08AF01C0;
    case 22u: goto L_08AF01CC;
    case 23u: goto L_08AF01D4;
    case 24u: goto L_08AF01D8;
    case 25u: goto L_08AF01E0;
    case 26u: goto L_08AF01F4;
    case 27u: goto L_08AF0200;
    case 28u: goto L_08AF0208;
    case 29u: goto L_08AF020C;
    case 30u: goto L_08AF0218;
    case 31u: goto L_08AF0228;
    case 32u: goto L_08AF0278;
    case 33u: goto L_08AF0280;
    case 34u: goto L_08AF0288;
    case 35u: goto L_08AF0298;
    case 36u: goto L_08AF02A4;
    case 37u: goto L_08AF02B0;
    case 38u: goto L_08AF02C0;
    case 39u: goto L_08AF02D4;
    case 40u: goto L_08AF02F0;
    case 41u: goto L_08AF02FC;
    case 42u: goto L_08AF0318;
    case 43u: goto L_08AF032C;
    case 44u: goto L_08AF0338;
    case 45u: goto L_08AF035C;
    case 46u: goto L_08AF0384;
    case 47u: goto L_08AF03D0;
    case 48u: goto L_08AF03F8;
    case 49u: goto L_08AF0420;
    case 50u: goto L_08AF049C;
    case 51u: goto L_08AF04BC;
    case 52u: goto L_08AF04EC;
    case 53u: goto L_08AF04F8;
    case 54u: goto L_08AF0504;
    case 55u: goto L_08AF0518;
    case 56u: goto L_08AF0538;
    case 57u: goto L_08AF0568;
    case 58u: goto L_08AF0574;
    case 59u: goto L_08AF0580;
    case 60u: goto L_08AF0594;
    case 61u: goto L_08AF05B4;
    case 62u: goto L_08AF05F4;
    case 63u: goto L_08AF05F8;
    case 64u: goto L_08AF060C;
    case 65u: goto L_08AF062C;
    case 66u: goto L_08AF065C;
    case 67u: goto L_08AF0668;
    case 68u: goto L_08AF0674;
    case 69u: goto L_08AF0688;
    case 70u: goto L_08AF06A8;
    case 71u: goto L_08AF06D8;
    case 72u: goto L_08AF06E4;
    case 73u: goto L_08AF06F0;
    case 74u: goto L_08AF0704;
    case 75u: goto L_08AF0730;
    case 76u: goto L_08AF073C;
    case 77u: goto L_08AF0748;
    case 78u: goto L_08AF0750;
    case 79u: goto L_08AF0754;
    case 80u: goto L_08AF0758;
    case 81u: goto L_08AF0770;
    case 82u: goto L_08AF077C;
    case 83u: goto L_08AF0784;
    case 84u: goto L_08AF0788;
    case 85u: goto L_08AF0794;
    case 86u: goto L_08AF07B4;
    case 87u: goto L_08AF07E8;
    case 88u: goto L_08AF080C;
    case 89u: goto L_08AF0838;
    case 90u: goto L_08AF0844;
    case 91u: goto L_08AF0850;
    case 92u: goto L_08AF0858;
    case 93u: goto L_08AF085C;
    case 94u: goto L_08AF0860;
    case 95u: goto L_08AF0878;
    case 96u: goto L_08AF0884;
    case 97u: goto L_08AF088C;
    case 98u: goto L_08AF0890;
    case 99u: goto L_08AF089C;
    case 100u: goto L_08AF08BC;
    case 101u: goto L_08AF08F0;
    case 102u: goto L_08AF0914;
    case 103u: goto L_08AF0944;
    case 104u: goto L_08AF0950;
    case 105u: goto L_08AF095C;
    case 106u: goto L_08AF0964;
    case 107u: goto L_08AF0968;
    case 108u: goto L_08AF096C;
    case 109u: goto L_08AF0980;
    case 110u: goto L_08AF098C;
    case 111u: goto L_08AF0994;
    case 112u: goto L_08AF0998;
    case 113u: goto L_08AF09A4;
    case 114u: goto L_08AF09B0;
    case 115u: goto L_08AF09BC;
    case 116u: goto L_08AF09C8;
    case 117u: goto L_08AF09D0;
    case 118u: goto L_08AF09D4;
    case 119u: goto L_08AF09D8;
    case 120u: goto L_08AF09EC;
    case 121u: goto L_08AF09F8;
    case 122u: goto L_08AF0A00;
    case 123u: goto L_08AF0A04;
    case 124u: goto L_08AF0A10;
    case 125u: goto L_08AF0A30;
    case 126u: goto L_08AF0A48;
    case 127u: goto L_08AF0A70;
    case 128u: goto L_08AF0A90;
    case 129u: goto L_08AF0A9C;
    case 130u: goto L_08AF0AA8;
    case 131u: goto L_08AF0AB0;
    case 132u: goto L_08AF0AB4;
    case 133u: goto L_08AF0AB8;
    case 134u: goto L_08AF0AD0;
    case 135u: goto L_08AF0ADC;
    case 136u: goto L_08AF0AE4;
    case 137u: goto L_08AF0AE8;
    case 138u: goto L_08AF0AF4;
    case 139u: goto L_08AF0AFC;
    case 140u: goto L_08AF0B18;
    case 141u: goto L_08AF0B38;
    case 142u: goto L_08AF0B44;
    case 143u: goto L_08AF0B50;
    case 144u: goto L_08AF0B58;
    case 145u: goto L_08AF0B5C;
    case 146u: goto L_08AF0B60;
    case 147u: goto L_08AF0B78;
    case 148u: goto L_08AF0B84;
    case 149u: goto L_08AF0B8C;
    case 150u: goto L_08AF0B90;
    case 151u: goto L_08AF0B9C;
    case 152u: goto L_08AF0BA4;
    case 153u: goto L_08AF0BC0;
    case 154u: goto L_08AF0BE0;
    case 155u: goto L_08AF0C10;
    case 156u: goto L_08AF0C1C;
    case 157u: goto L_08AF0C28;
    case 158u: goto L_08AF0C3C;
    case 159u: goto L_08AF0C5C;
    case 160u: goto L_08AF0C68;
    case 161u: goto L_08AF0C74;
    case 162u: goto L_08AF0C7C;
    case 163u: goto L_08AF0C80;
    case 164u: goto L_08AF0C84;
    case 165u: goto L_08AF0C9C;
    case 166u: goto L_08AF0CA8;
    case 167u: goto L_08AF0CB0;
    case 168u: goto L_08AF0CB4;
    case 169u: goto L_08AF0CC0;
    case 170u: goto L_08AF0CCC;
    case 171u: goto L_08AF0CD4;
    case 172u: goto L_08AF0CEC;
    case 173u: goto L_08AF0D08;
    case 174u: goto L_08AF0D1C;
    case 175u: goto L_08AF0D24;
    case 176u: goto L_08AF0D28;
    case 177u: goto L_08AF0D30;
    case 178u: goto L_08AF0D3C;
    case 179u: goto L_08AF0D44;
    case 180u: goto L_08AF0D4C;
    case 181u: goto L_08AF0D5C;
    case 182u: goto L_08AF0D6C;
    case 183u: goto L_08AF0D7C;
    case 184u: goto L_08AF0D88;
    case 185u: goto L_08AF0D90;
    case 186u: goto L_08AF0D98;
    case 187u: goto L_08AF0DA8;
    case 188u: goto L_08AF0DC8;
    case 189u: goto L_08AF0DD4;
    case 190u: goto L_08AF0DE0;
    case 191u: goto L_08AF0DE8;
    case 192u: goto L_08AF0DFC;
    case 193u: goto L_08AF0E40;
    case 194u: goto L_08AF0E50;
    case 195u: goto L_08AF0E5C;
    case 196u: goto L_08AF0E68;
    case 197u: goto L_08AF0E70;
    case 198u: goto L_08AF0E74;
    case 199u: goto L_08AF0E78;
    case 200u: goto L_08AF0E90;
    case 201u: goto L_08AF0E9C;
    case 202u: goto L_08AF0EA4;
    case 203u: goto L_08AF0EA8;
    case 204u: goto L_08AF0EB4;
    case 205u: goto L_08AF0F08;
    case 206u: goto L_08AF0F18;
    case 207u: goto L_08AF0F20;
    case 208u: goto L_08AF0F60;
    case 209u: goto L_08AF0F70;
    case 210u: goto L_08AF0F98;
    case 211u: goto L_08AF0FDC;
    case 212u: goto L_08AF0FEC;
    case 213u: goto L_08AF0FF8;
    case 214u: goto L_08AF1004;
    case 215u: goto L_08AF100C;
    case 216u: goto L_08AF1010;
    case 217u: goto L_08AF1014;
    case 218u: goto L_08AF102C;
    case 219u: goto L_08AF1038;
    case 220u: goto L_08AF1040;
    case 221u: goto L_08AF1044;
    case 222u: goto L_08AF1050;
    case 223u: goto L_08AF10A4;
    case 224u: goto L_08AF10B4;
    case 225u: goto L_08AF10BC;
    case 226u: goto L_08AF10FC;
    case 227u: goto L_08AF110C;
    case 228u: goto L_08AF1134;
    case 229u: goto L_08AF1154;
    case 230u: goto L_08AF1160;
    case 231u: goto L_08AF116C;
    case 232u: goto L_08AF1174;
    case 233u: goto L_08AF1178;
    case 234u: goto L_08AF117C;
    case 235u: goto L_08AF1194;
    case 236u: goto L_08AF11A0;
    case 237u: goto L_08AF11A8;
    case 238u: goto L_08AF11AC;
    case 239u: goto L_08AF11B8;
    case 240u: goto L_08AF11C4;
    case 241u: goto L_08AF11CC;
    case 242u: goto L_08AF11D0;
    case 243u: goto L_08AF11E4;
    case 244u: goto L_08AF11F0;
    case 245u: goto L_08AF11F8;
    case 246u: goto L_08AF11FC;
    case 247u: goto L_08AF1204;
    case 248u: goto L_08AF120C;
    case 249u: goto L_08AF1218;
    case 250u: goto L_08AF1220;
    case 251u: goto L_08AF1224;
    case 252u: goto L_08AF122C;
    case 253u: goto L_08AF123C;
    case 254u: goto L_08AF1258;
    case 255u: goto L_08AF1268;
    case 256u: goto L_08AF1274;
    case 257u: goto L_08AF127C;
    case 258u: goto L_08AF1280;
    case 259u: goto L_08AF128C;
    case 260u: goto L_08AF12A4;
    case 261u: goto L_08AF12C8;
    case 262u: goto L_08AF12D0;
    case 263u: goto L_08AF12D4;
    case 264u: goto L_08AF12DC;
    case 265u: goto L_08AF12E8;
    case 266u: goto L_08AF12F4;
    case 267u: goto L_08AF1300;
    case 268u: goto L_08AF1308;
    case 269u: goto L_08AF130C;
    case 270u: goto L_08AF1314;
    case 271u: goto L_08AF1328;
    case 272u: goto L_08AF1334;
    case 273u: goto L_08AF133C;
    case 274u: goto L_08AF1340;
    case 275u: goto L_08AF134C;
    case 276u: goto L_08AF1358;
    case 277u: goto L_08AF1360;
    case 278u: goto L_08AF1364;
    case 279u: goto L_08AF1378;
    case 280u: goto L_08AF1394;
    case 281u: goto L_08AF13B8;
    case 282u: goto L_08AF13C0;
    case 283u: goto L_08AF13C4;
    case 284u: goto L_08AF13CC;
    case 285u: goto L_08AF13D8;
    case 286u: goto L_08AF13E4;
    case 287u: goto L_08AF13F0;
    case 288u: goto L_08AF13F8;
    case 289u: goto L_08AF13FC;
    case 290u: goto L_08AF1404;
    case 291u: goto L_08AF1418;
    case 292u: goto L_08AF1424;
    case 293u: goto L_08AF142C;
    case 294u: goto L_08AF1430;
    case 295u: goto L_08AF143C;
    case 296u: goto L_08AF1448;
    case 297u: goto L_08AF1450;
    case 298u: goto L_08AF1454;
    case 299u: goto L_08AF1468;
    case 300u: goto L_08AF1484;
    case 301u: goto L_08AF14BC;
    case 302u: goto L_08AF14C8;
    case 303u: goto L_08AF14D4;
    case 304u: goto L_08AF14DC;
    case 305u: goto L_08AF14E0;
    case 306u: goto L_08AF14E4;
    case 307u: goto L_08AF14FC;
    case 308u: goto L_08AF1508;
    case 309u: goto L_08AF1510;
    case 310u: goto L_08AF1514;
    case 311u: goto L_08AF1520;
    case 312u: goto L_08AF1538;
    case 313u: goto L_08AF1544;
    case 314u: goto L_08AF154C;
    case 315u: goto L_08AF1554;
    case 316u: goto L_08AF155C;
    case 317u: goto L_08AF1578;
    case 318u: goto L_08AF1580;
    case 319u: goto L_08AF15A4;
    case 320u: goto L_08AF15CC;
    case 321u: goto L_08AF1604;
    case 322u: goto L_08AF1610;
    case 323u: goto L_08AF161C;
    case 324u: goto L_08AF1624;
    case 325u: goto L_08AF1628;
    case 326u: goto L_08AF162C;
    case 327u: goto L_08AF1644;
    case 328u: goto L_08AF1650;
    case 329u: goto L_08AF1658;
    case 330u: goto L_08AF165C;
    case 331u: goto L_08AF1668;
    case 332u: goto L_08AF1680;
    case 333u: goto L_08AF168C;
    case 334u: goto L_08AF1694;
    case 335u: goto L_08AF169C;
    case 336u: goto L_08AF16A4;
    case 337u: goto L_08AF16C0;
    case 338u: goto L_08AF16C8;
    case 339u: goto L_08AF16EC;
    case 340u: goto L_08AF1714;
    case 341u: goto L_08AF1740;
    case 342u: goto L_08AF174C;
    case 343u: goto L_08AF1758;
    case 344u: goto L_08AF1760;
    case 345u: goto L_08AF1764;
    case 346u: goto L_08AF1768;
    case 347u: goto L_08AF1780;
    case 348u: goto L_08AF178C;
    case 349u: goto L_08AF1794;
    case 350u: goto L_08AF1798;
    case 351u: goto L_08AF17A4;
    case 352u: goto L_08AF17C4;
    case 353u: goto L_08AF17E0;
    case 354u: goto L_08AF1804;
    case 355u: goto L_08AF1830;
    case 356u: goto L_08AF183C;
    case 357u: goto L_08AF1848;
    case 358u: goto L_08AF1850;
    case 359u: goto L_08AF1854;
    case 360u: goto L_08AF1858;
    case 361u: goto L_08AF1870;
    case 362u: goto L_08AF187C;
    case 363u: goto L_08AF1884;
    case 364u: goto L_08AF1888;
    case 365u: goto L_08AF1894;
    case 366u: goto L_08AF18B4;
    case 367u: goto L_08AF18E8;
    case 368u: goto L_08AF190C;
    case 369u: goto L_08AF1938;
    case 370u: goto L_08AF1944;
    case 371u: goto L_08AF1950;
    case 372u: goto L_08AF1958;
    case 373u: goto L_08AF195C;
    case 374u: goto L_08AF1960;
    case 375u: goto L_08AF1978;
    case 376u: goto L_08AF1984;
    case 377u: goto L_08AF198C;
    case 378u: goto L_08AF1990;
    case 379u: goto L_08AF199C;
    case 380u: goto L_08AF19BC;
    case 381u: goto L_08AF19F0;
    case 382u: goto L_08AF1A14;
    case 383u: goto L_08AF1A38;
    case 384u: goto L_08AF1A44;
    case 385u: goto L_08AF1A50;
    case 386u: goto L_08AF1A58;
    case 387u: goto L_08AF1A5C;
    case 388u: goto L_08AF1A64;
    case 389u: goto L_08AF1A74;
    case 390u: goto L_08AF1A80;
    case 391u: goto L_08AF1A88;
    case 392u: goto L_08AF1A8C;
    case 393u: goto L_08AF1A98;
    case 394u: goto L_08AF1AA4;
    case 395u: goto L_08AF1AAC;
    case 396u: goto L_08AF1AC4;
    case 397u: goto L_08AF1AE0;
    case 398u: goto L_08AF1B00;
    case 399u: goto L_08AF1B0C;
    case 400u: goto L_08AF1B18;
    case 401u: goto L_08AF1B20;
    case 402u: goto L_08AF1B24;
    case 403u: goto L_08AF1B28;
    case 404u: goto L_08AF1B40;
    case 405u: goto L_08AF1B4C;
    case 406u: goto L_08AF1B54;
    case 407u: goto L_08AF1B58;
    case 408u: goto L_08AF1B64;
    case 409u: goto L_08AF1B70;
    case 410u: goto L_08AF1B78;
    case 411u: goto L_08AF1B90;
    case 412u: goto L_08AF1BAC;
    case 413u: goto L_08AF1BD0;
    case 414u: goto L_08AF1BD8;
    case 415u: goto L_08AF1BDC;
    case 416u: goto L_08AF1BE4;
    case 417u: goto L_08AF1BF0;
    case 418u: goto L_08AF1BFC;
    case 419u: goto L_08AF1C08;
    case 420u: goto L_08AF1C10;
    case 421u: goto L_08AF1C14;
    case 422u: goto L_08AF1C1C;
    case 423u: goto L_08AF1C30;
    case 424u: goto L_08AF1C3C;
    case 425u: goto L_08AF1C44;
    case 426u: goto L_08AF1C48;
    case 427u: goto L_08AF1C54;
    case 428u: goto L_08AF1C60;
    case 429u: goto L_08AF1C68;
    case 430u: goto L_08AF1C6C;
    case 431u: goto L_08AF1C80;
    case 432u: goto L_08AF1C9C;
    case 433u: goto L_08AF1CC0;
    case 434u: goto L_08AF1CC8;
    case 435u: goto L_08AF1CCC;
    case 436u: goto L_08AF1CD4;
    case 437u: goto L_08AF1CE0;
    case 438u: goto L_08AF1CEC;
    case 439u: goto L_08AF1CF8;
    case 440u: goto L_08AF1D00;
    case 441u: goto L_08AF1D04;
    case 442u: goto L_08AF1D0C;
    case 443u: goto L_08AF1D20;
    case 444u: goto L_08AF1D2C;
    case 445u: goto L_08AF1D34;
    case 446u: goto L_08AF1D38;
    case 447u: goto L_08AF1D44;
    case 448u: goto L_08AF1D50;
    case 449u: goto L_08AF1D58;
    case 450u: goto L_08AF1D5C;
    case 451u: goto L_08AF1D70;
    case 452u: goto L_08AF1D8C;
    case 453u: goto L_08AF1DC0;
    case 454u: goto L_08AF1DCC;
    case 455u: goto L_08AF1DD4;
    case 456u: goto L_08AF1DD8;
    case 457u: goto L_08AF1DF8;
    case 458u: goto L_08AF1E18;
    case 459u: goto L_08AF1E1C;
    case 460u: goto L_08AF1E50;
    case 461u: goto L_08AF1E74;
    case 462u: goto L_08AF1EA0;
    case 463u: goto L_08AF1EAC;
    case 464u: goto L_08AF1EB4;
    case 465u: goto L_08AF1EB8;
    case 466u: goto L_08AF1ECC;
    case 467u: goto L_08AF1ED8;
    case 468u: goto L_08AF1EE0;
    case 469u: goto L_08AF1EE4;
    case 470u: goto L_08AF1EF0;
    case 471u: goto L_08AF1F0C;
    case 472u: goto L_08AF1F3C;
    case 473u: goto L_08AF1F48;
    case 474u: goto L_08AF1F54;
    case 475u: goto L_08AF1F5C;
    case 476u: goto L_08AF1F60;
    case 477u: goto L_08AF1F64;
    case 478u: goto L_08AF1F7C;
    case 479u: goto L_08AF1F88;
    case 480u: goto L_08AF1F90;
    case 481u: goto L_08AF1F94;
    case 482u: goto L_08AF1FA0;
    case 483u: goto L_08AF1FB4;
    case 484u: goto L_08AF1FD0;
    case 485u: goto L_08AF1FE0;
    case 486u: goto L_08AF2004;
    case 487u: goto L_08AF2034;
    case 488u: goto L_08AF2040;
    case 489u: goto L_08AF204C;
    case 490u: goto L_08AF2054;
    case 491u: goto L_08AF2058;
    case 492u: goto L_08AF205C;
    case 493u: goto L_08AF2074;
    case 494u: goto L_08AF2080;
    case 495u: goto L_08AF2088;
    case 496u: goto L_08AF208C;
    case 497u: goto L_08AF2098;
    case 498u: goto L_08AF20B4;
    case 499u: goto L_08AF20C0;
    case 500u: goto L_08AF20C8;
    case 501u: goto L_08AF20D0;
    case 502u: goto L_08AF20D8;
    case 503u: goto L_08AF20E0;
    case 504u: goto L_08AF20E8;
    case 505u: goto L_08AF20F4;
    case 506u: goto L_08AF20FC;
    case 507u: goto L_08AF2104;
    case 508u: goto L_08AF210C;
    case 509u: goto L_08AF2114;
    case 510u: goto L_08AF2118;
    case 511u: goto L_08AF2120;
    case 512u: goto L_08AF2128;
    case 513u: goto L_08AF2130;
    case 514u: goto L_08AF2138;
    case 515u: goto L_08AF2140;
    case 516u: goto L_08AF2148;
    case 517u: goto L_08AF2150;
    case 518u: goto L_08AF215C;
    case 519u: goto L_08AF2164;
    case 520u: goto L_08AF216C;
    case 521u: goto L_08AF2174;
    case 522u: goto L_08AF217C;
    case 523u: goto L_08AF2184;
    case 524u: goto L_08AF2190;
    case 525u: goto L_08AF219C;
    case 526u: goto L_08AF21A4;
    case 527u: goto L_08AF21AC;
    case 528u: goto L_08AF21B4;
    case 529u: goto L_08AF21BC;
    case 530u: goto L_08AF21C0;
    case 531u: goto L_08AF21C8;
    case 532u: goto L_08AF21EC;
    case 533u: goto L_08AF222C;
    case 534u: goto L_08AF2238;
    case 535u: goto L_08AF2244;
    case 536u: goto L_08AF2250;
    case 537u: goto L_08AF2258;
    case 538u: goto L_08AF225C;
    case 539u: goto L_08AF2264;
    case 540u: goto L_08AF2278;
    case 541u: goto L_08AF2284;
    case 542u: goto L_08AF228C;
    case 543u: goto L_08AF2290;
    case 544u: goto L_08AF229C;
    case 545u: goto L_08AF22AC;
    case 546u: goto L_08AF22F8;
    case 547u: goto L_08AF2300;
    case 548u: goto L_08AF2308;
    case 549u: goto L_08AF2318;
    case 550u: goto L_08AF2324;
    case 551u: goto L_08AF2330;
    case 552u: goto L_08AF2340;
    case 553u: goto L_08AF2354;
    case 554u: goto L_08AF2370;
    case 555u: goto L_08AF237C;
    case 556u: goto L_08AF2398;
    case 557u: goto L_08AF23AC;
    case 558u: goto L_08AF23B8;
    case 559u: goto L_08AF23DC;
    case 560u: goto L_08AF23FC;
    case 561u: goto L_08AF243C;
    case 562u: goto L_08AF2464;
    case 563u: goto L_08AF2470;
    case 564u: goto L_08AF2478;
    case 565u: goto L_08AF2480;
    case 566u: goto L_08AF2494;
    case 567u: goto L_08AF24AC;
    case 568u: goto L_08AF24B4;
    case 569u: goto L_08AF24C4;
    case 570u: goto L_08AF24DC;
    case 571u: goto L_08AF24FC;
    case 572u: goto L_08AF2504;
    case 573u: goto L_08AF2510;
    case 574u: goto L_08AF2524;
    case 575u: goto L_08AF2544;
    case 576u: goto L_08AF254C;
    case 577u: goto L_08AF255C;
    case 578u: goto L_08AF2570;
    case 579u: goto L_08AF2590;
    case 580u: goto L_08AF2598;
    case 581u: goto L_08AF25A8;
    case 582u: goto L_08AF25BC;
    case 583u: goto L_08AF25F0;
    case 584u: goto L_08AF2610;
    case 585u: goto L_08AF2628;
    case 586u: goto L_08AF2634;
    case 587u: goto L_08AF2638;
    case 588u: goto L_08AF2640;
    case 589u: goto L_08AF2660;
    case 590u: goto L_08AF2684;
    case 591u: goto L_08AF26BC;
    case 592u: goto L_08AF26E0;
    case 593u: goto L_08AF26E8;
    case 594u: goto L_08AF26F8;
    case 595u: goto L_08AF2704;
    case 596u: goto L_08AF272C;
    case 597u: goto L_08AF2744;
    case 598u: goto L_08AF274C;
    case 599u: goto L_08AF2750;
    case 600u: goto L_08AF2758;
    case 601u: goto L_08AF277C;
    case 602u: goto L_08AF27A4;
    case 603u: goto L_08AF27C4;
    case 604u: goto L_08AF27CC;
    case 605u: goto L_08AF27DC;
    case 606u: goto L_08AF27F0;
    case 607u: goto L_08AF2818;
    case 608u: goto L_08AF2824;
    case 609u: goto L_08AF282C;
    case 610u: goto L_08AF2840;
    case 611u: goto L_08AF2858;
    case 612u: goto L_08AF2880;
    case 613u: goto L_08AF288C;
    case 614u: goto L_08AF2894;
    case 615u: goto L_08AF28A8;
    case 616u: goto L_08AF28C0;
    case 617u: goto L_08AF28E8;
    case 618u: goto L_08AF28F4;
    case 619u: goto L_08AF28FC;
    case 620u: goto L_08AF2910;
    case 621u: goto L_08AF2928;
    case 622u: goto L_08AF2950;
    case 623u: goto L_08AF295C;
    case 624u: goto L_08AF2964;
    case 625u: goto L_08AF2978;
    case 626u: goto L_08AF2990;
    case 627u: goto L_08AF29B8;
    case 628u: goto L_08AF29C4;
    case 629u: goto L_08AF29CC;
    case 630u: goto L_08AF29E0;
    case 631u: goto L_08AF29F8;
    case 632u: goto L_08AF2A20;
    case 633u: goto L_08AF2A2C;
    case 634u: goto L_08AF2A34;
    case 635u: goto L_08AF2A48;
    case 636u: goto L_08AF2A60;
    case 637u: goto L_08AF2A88;
    case 638u: goto L_08AF2A94;
    case 639u: goto L_08AF2A9C;
    case 640u: goto L_08AF2AB0;
    case 641u: goto L_08AF2AC8;
    case 642u: goto L_08AF2AF0;
    case 643u: goto L_08AF2AFC;
    case 644u: goto L_08AF2B04;
    case 645u: goto L_08AF2B18;
    case 646u: goto L_08AF2B30;
    case 647u: goto L_08AF2B58;
    case 648u: goto L_08AF2B64;
    case 649u: goto L_08AF2B6C;
    case 650u: goto L_08AF2B80;
    case 651u: goto L_08AF2B98;
    case 652u: goto L_08AF2BD0;
    case 653u: goto L_08AF2BF4;
    case 654u: goto L_08AF2BFC;
    case 655u: goto L_08AF2C0C;
    case 656u: goto L_08AF2C18;
    case 657u: goto L_08AF2C40;
    case 658u: goto L_08AF2C58;
    case 659u: goto L_08AF2C60;
    case 660u: goto L_08AF2C64;
    case 661u: goto L_08AF2C6C;
    case 662u: goto L_08AF2C90;
    case 663u: goto L_08AF2CB8;
    case 664u: goto L_08AF2CEC;
    case 665u: goto L_08AF2D00;
    case 666u: goto L_08AF2D08;
    case 667u: goto L_08AF2D28;
    case 668u: goto L_08AF2D4C;
    case 669u: goto L_08AF2D78;
    case 670u: goto L_08AF2D84;
    case 671u: goto L_08AF2D8C;
    case 672u: goto L_08AF2DA0;
    case 673u: goto L_08AF2DBC;
    case 674u: goto L_08AF2DDC;
    case 675u: goto L_08AF2DE4;
    case 676u: goto L_08AF2DF4;
    case 677u: goto L_08AF2E08;
    case 678u: goto L_08AF2E28;
    case 679u: goto L_08AF2E30;
    case 680u: goto L_08AF2E40;
    case 681u: goto L_08AF2E54;
    case 682u: goto L_08AF2E7C;
    case 683u: goto L_08AF2E88;
    case 684u: goto L_08AF2E90;
    case 685u: goto L_08AF2EA4;
    case 686u: goto L_08AF2EBC;
    case 687u: goto L_08AF2EE4;
    case 688u: goto L_08AF2EF0;
    case 689u: goto L_08AF2EF8;
    case 690u: goto L_08AF2F0C;
    case 691u: goto L_08AF2F24;
    case 692u: goto L_08AF2F4C;
    case 693u: goto L_08AF2F58;
    case 694u: goto L_08AF2F60;
    case 695u: goto L_08AF2F74;
    case 696u: goto L_08AF2F8C;
    case 697u: goto L_08AF2FC0;
    case 698u: goto L_08AF2FD4;
    case 699u: goto L_08AF2FDC;
    case 700u: goto L_08AF2FFC;
    case 701u: goto L_08AF3020;
    case 702u: goto L_08AF3048;
    case 703u: goto L_08AF3050;
    case 704u: goto L_08AF3078;
    case 705u: goto L_08AF3090;
    case 706u: goto L_08AF30C4;
    case 707u: goto L_08AF30D8;
    case 708u: goto L_08AF30E0;
    case 709u: goto L_08AF3100;
    case 710u: goto L_08AF3124;
    case 711u: goto L_08AF3144;
    case 712u: goto L_08AF314C;
    case 713u: goto L_08AF315C;
    case 714u: goto L_08AF3170;
    case 715u: goto L_08AF31A4;
    case 716u: goto L_08AF31C4;
    case 717u: goto L_08AF31DC;
    case 718u: goto L_08AF31E8;
    case 719u: goto L_08AF31EC;
    case 720u: goto L_08AF3204;
    case 721u: goto L_08AF320C;
    case 722u: goto L_08AF3214;
    case 723u: goto L_08AF321C;
    case 724u: goto L_08AF3224;
    case 725u: goto L_08AF3228;
    case 726u: goto L_08AF3230;
    case 727u: goto L_08AF3258;
    case 728u: goto L_08AF3260;
    case 729u: goto L_08AF3280;
    case 730u: goto L_08AF32A0;
    case 731u: goto L_08AF32A8;
    case 732u: goto L_08AF32B4;
    case 733u: goto L_08AF32C8;
    case 734u: goto L_08AF32F8;
    case 735u: goto L_08AF3304;
    case 736u: goto L_08AF330C;
    case 737u: goto L_08AF331C;
    case 738u: goto L_08AF3340;
    case 739u: goto L_08AF3348;
    case 740u: goto L_08AF3368;
    case 741u: goto L_08AF3374;
    case 742u: goto L_08AF338C;
    case 743u: goto L_08AF3390;
    case 744u: goto L_08AF33AC;
    case 745u: goto L_08AF33D4;
    case 746u: goto L_08AF33E0;
    case 747u: goto L_08AF33E8;
    case 748u: goto L_08AF33F8;
    case 749u: goto L_08AF3410;
    case 750u: goto L_08AF3430;
    case 751u: goto L_08AF343C;
    case 752u: goto L_08AF3444;
    case 753u: goto L_08AF3450;
    case 754u: goto L_08AF3464;
    case 755u: goto L_08AF34A0;
    case 756u: goto L_08AF34B4;
    case 757u: goto L_08AF34D0;
    case 758u: goto L_08AF34EC;
    case 759u: goto L_08AF34F4;
    case 760u: goto L_08AF3514;
    case 761u: goto L_08AF3520;
    case 762u: goto L_08AF3538;
    case 763u: goto L_08AF353C;
    case 764u: goto L_08AF3560;
    case 765u: goto L_08AF3590;
    case 766u: goto L_08AF35A0;
    case 767u: goto L_08AF35BC;
    case 768u: goto L_08AF35C4;
    case 769u: goto L_08AF35E4;
    case 770u: goto L_08AF35F0;
    case 771u: goto L_08AF3608;
    case 772u: goto L_08AF360C;
    case 773u: goto L_08AF3628;
    case 774u: goto L_08AF3648;
    case 775u: goto L_08AF3650;
    case 776u: goto L_08AF365C;
    case 777u: goto L_08AF3670;
    case 778u: goto L_08AF36A8;
    case 779u: goto L_08AF36B0;
    case 780u: goto L_08AF36E0;
    case 781u: goto L_08AF36F0;
    case 782u: goto L_08AF3710;
    case 783u: goto L_08AF3718;
    case 784u: goto L_08AF3720;
    case 785u: goto L_08AF3728;
    case 786u: goto L_08AF3738;
    case 787u: goto L_08AF375C;
    case 788u: goto L_08AF3764;
    case 789u: goto L_08AF3784;
    case 790u: goto L_08AF3790;
    case 791u: goto L_08AF37A8;
    case 792u: goto L_08AF37AC;
    case 793u: goto L_08AF37D4;
    case 794u: goto L_08AF37E4;
    case 795u: goto L_08AF37F4;
    case 796u: goto L_08AF3804;
    case 797u: goto L_08AF3814;
    case 798u: goto L_08AF3824;
    case 799u: goto L_08AF3834;
    case 800u: goto L_08AF3844;
    case 801u: goto L_08AF3854;
    case 802u: goto L_08AF3884;
    case 803u: goto L_08AF3890;
    case 804u: goto L_08AF3898;
    case 805u: goto L_08AF38B0;
    case 806u: goto L_08AF38B8;
    case 807u: goto L_08AF38C0;
    case 808u: goto L_08AF38C4;
    case 809u: goto L_08AF38E0;
    case 810u: goto L_08AF38E8;
    case 811u: goto L_08AF3908;
    case 812u: goto L_08AF3914;
    case 813u: goto L_08AF392C;
    case 814u: goto L_08AF3930;
    case 815u: goto L_08AF394C;
    case 816u: goto L_08AF397C;
    case 817u: goto L_08AF3984;
    case 818u: goto L_08AF39B4;
    case 819u: goto L_08AF39D0;
    case 820u: goto L_08AF39F8;
    case 821u: goto L_08AF3A00;
    case 822u: goto L_08AF3A0C;
    case 823u: goto L_08AF3A28;
    case 824u: goto L_08AF3A30;
    case 825u: goto L_08AF3A50;
    case 826u: goto L_08AF3A5C;
    case 827u: goto L_08AF3A74;
    case 828u: goto L_08AF3A78;
    case 829u: goto L_08AF3A90;
    case 830u: goto L_08AF3AB8;
    case 831u: goto L_08AF3AC0;
    case 832u: goto L_08AF3AE0;
    case 833u: goto L_08AF3AF8;
    case 834u: goto L_08AF3B20;
    case 835u: goto L_08AF3B28;
    case 836u: goto L_08AF3B48;
    case 837u: goto L_08AF3B60;
    case 838u: goto L_08AF3B70;
    case 839u: goto L_08AF3B88;
    case 840u: goto L_08AF3BB0;
    case 841u: goto L_08AF3BD0;
    case 842u: goto L_08AF3BDC;
    case 843u: goto L_08AF3BF4;
    case 844u: goto L_08AF3BFC;
    case 845u: goto L_08AF3C14;
    case 846u: goto L_08AF3C1C;
    case 847u: goto L_08AF3C30;
    case 848u: goto L_08AF3C44;
    case 849u: goto L_08AF3C58;
    case 850u: goto L_08AF3C60;
    case 851u: goto L_08AF3C6C;
    case 852u: goto L_08AF3C94;
    case 853u: goto L_08AF3CB4;
    case 854u: goto L_08AF3CE0;
    case 855u: goto L_08AF3CE8;
    case 856u: goto L_08AF3CFC;
    case 857u: goto L_08AF3D10;
    case 858u: goto L_08AF3D24;
    case 859u: goto L_08AF3D2C;
    case 860u: goto L_08AF3D38;
    case 861u: goto L_08AF3D58;
    case 862u: goto L_08AF3D68;
    case 863u: goto L_08AF3D88;
    case 864u: goto L_08AF3D98;
    case 865u: goto L_08AF3DA4;
    case 866u: goto L_08AF3DA8;
    case 867u: goto L_08AF3DBC;
    case 868u: goto L_08AF3DEC;
    case 869u: goto L_08AF3E0C;
    case 870u: goto L_08AF3E18;
    case 871u: goto L_08AF3E20;
    case 872u: goto L_08AF3E24;
    case 873u: goto L_08AF3E40;
    case 874u: goto L_08AF3E4C;
    case 875u: goto L_08AF3E54;
    case 876u: goto L_08AF3E58;
    case 877u: goto L_08AF3E6C;
    case 878u: goto L_08AF3E8C;
    case 879u: goto L_08AF3EC0;
    case 880u: goto L_08AF3EE0;
    case 881u: goto L_08AF3F04;
    case 882u: goto L_08AF3F10;
    case 883u: goto L_08AF3F18;
    case 884u: goto L_08AF3F1C;
    case 885u: goto L_08AF3F40;
    case 886u: goto L_08AF3F60;
    case 887u: goto L_08AF3FA4;
    case 888u: goto L_08AF3FC0;
    case 889u: goto L_08AF3FE4;
    case 890u: goto L_08AF3FF0;
    case 891u: goto L_08AF3FF8;
    case 892u: goto L_08AF3FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AF0000:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08AF0010u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0010u) goto L_08AF0010;
    return;
L_08AF0010:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AF0040u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 351u, 0x08AB9C74u>(ctx, &aot_mem) && ctx.pc == 0x08AF0040u) goto L_08AF0040;
    return;
L_08AF0040:
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
L_08AF0064:
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
          goto L_08AF00B8;
      }
      goto L_08AF0090;
    }
L_08AF0090:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AF009Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF009Cu) goto L_08AF009C;
    return;
L_08AF009C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF00B4;
      }
      goto L_08AF00A8;
    }
L_08AF00A8:
    ctx.gpr[31] = (0x08AF00B0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF00B0u) goto L_08AF00B0;
    return;
L_08AF00B0:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AF00B4;
L_08AF00B4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AF00B8;
L_08AF00B8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF00D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF00D0u) goto L_08AF00D0;
    return;
L_08AF00D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF00E4;
    }
    goto L_08AF00DC;
L_08AF00DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF00E8;
      }
      goto L_08AF00E4;
    }
L_08AF00E4:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF00E8;
L_08AF00E8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF00F4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF00F4u) goto L_08AF00F4;
    return;
L_08AF00F4:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08AF0114u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0114u) goto L_08AF0114;
    return;
L_08AF0114:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AF0144u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 351u, 0x08AB9C74u>(ctx, &aot_mem) && ctx.pc == 0x08AF0144u) goto L_08AF0144;
    return;
L_08AF0144:
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
L_08AF0168:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF01A8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF01A8u) goto L_08AF01A8;
    return;
L_08AF01A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AF01E0;
      }
      goto L_08AF01B4;
    }
L_08AF01B4:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08AF01C0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF01C0u) goto L_08AF01C0;
    return;
L_08AF01C0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF01D8;
      }
      goto L_08AF01CC;
    }
L_08AF01CC:
    ctx.gpr[31] = (0x08AF01D4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF01D4u) goto L_08AF01D4;
    return;
L_08AF01D4:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08AF01D8;
L_08AF01D8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AF01E0;
L_08AF01E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF01F4u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF01F4u) goto L_08AF01F4;
    return;
L_08AF01F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF0208;
    }
    goto L_08AF0200;
L_08AF0200:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF020C;
      }
      goto L_08AF0208;
    }
L_08AF0208:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF020C;
L_08AF020C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF0218u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF0218u) goto L_08AF0218;
    return;
L_08AF0218:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7986)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF0280;
      }
      goto L_08AF0228;
    }
L_08AF0228:
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[18] = (2239u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32064));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-33));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF0288;
      }
      goto L_08AF0278;
    }
L_08AF0278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0298;
      }
      goto L_08AF0280;
    }
L_08AF0280:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF0338;
      }
      goto L_08AF0288;
    }
L_08AF0288:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF0288;
      }
      goto L_08AF0298;
    }
L_08AF0298:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF02B0;
      }
      goto L_08AF02A4;
    }
L_08AF02A4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(126), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7986)));
    goto L_08AF02B0;
L_08AF02B0:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] << 6u);
      if (branch_taken) {
          goto L_08AF02F0;
      }
      goto L_08AF02C0;
    }
L_08AF02C0:
    ctx.gpr[8] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
    goto L_08AF02D4;
L_08AF02D4:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF02D4;
      }
      goto L_08AF02F0;
    }
L_08AF02F0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
      if (branch_taken) {
          goto L_08AF032C;
      }
      goto L_08AF02FC;
    }
L_08AF02FC:
    ctx.gpr[7] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_08AF0318;
L_08AF0318:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF0318;
      }
      goto L_08AF032C;
    }
L_08AF032C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7986), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    goto L_08AF0338;
L_08AF0338:
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
L_08AF035C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF0384u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0384u) goto L_08AF0384;
    return;
L_08AF0384:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7986)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2239u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32064));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
L_08AF03D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF03F8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF03F8u) goto L_08AF03F8;
    return;
L_08AF03F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[31] = (0x08AF0420u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0420u) goto L_08AF0420;
    return;
L_08AF0420:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7986)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2239u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32064));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(5)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(7)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF049C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF04BCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF04BCu) goto L_08AF04BC;
    return;
L_08AF04BC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7986)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32064));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
      if (branch_taken) {
          goto L_08AF04F8;
      }
      goto L_08AF04EC;
    }
L_08AF04EC:
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF0504;
      }
      goto L_08AF04F8;
    }
L_08AF04F8:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AF0504;
L_08AF0504:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0518:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF0538u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0538u) goto L_08AF0538;
    return;
L_08AF0538:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7986)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32064));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
      if (branch_taken) {
          goto L_08AF0574;
      }
      goto L_08AF0568;
    }
L_08AF0568:
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF0580;
      }
      goto L_08AF0574;
    }
L_08AF0574:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AF0580;
L_08AF0580:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0594:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF05B4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF05B4u) goto L_08AF05B4;
    return;
L_08AF05B4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7986)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2239u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32064));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (17392u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AF05F8;
      }
      goto L_08AF05F4;
    }
L_08AF05F4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AF05F8;
L_08AF05F8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF060C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF062Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF062Cu) goto L_08AF062C;
    return;
L_08AF062C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7986)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32064));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
      if (branch_taken) {
          goto L_08AF0668;
      }
      goto L_08AF065C;
    }
L_08AF065C:
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF0674;
      }
      goto L_08AF0668;
    }
L_08AF0668:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AF0674;
L_08AF0674:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0688:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF06A8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF06A8u) goto L_08AF06A8;
    return;
L_08AF06A8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7986)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32064));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
      if (branch_taken) {
          goto L_08AF06E4;
      }
      goto L_08AF06D8;
    }
L_08AF06D8:
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF06F0;
      }
      goto L_08AF06E4;
    }
L_08AF06E4:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AF06F0;
L_08AF06F0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0704:
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
          goto L_08AF0758;
      }
      goto L_08AF0730;
    }
L_08AF0730:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AF073Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF073Cu) goto L_08AF073C;
    return;
L_08AF073C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0754;
      }
      goto L_08AF0748;
    }
L_08AF0748:
    ctx.gpr[31] = (0x08AF0750u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0750u) goto L_08AF0750;
    return;
L_08AF0750:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AF0754;
L_08AF0754:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AF0758;
L_08AF0758:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF0770u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0770u) goto L_08AF0770;
    return;
L_08AF0770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF0784;
    }
    goto L_08AF077C;
L_08AF077C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF0788;
      }
      goto L_08AF0784;
    }
L_08AF0784:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF0788;
L_08AF0788:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF0794u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF0794u) goto L_08AF0794;
    return;
L_08AF0794:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AF07B4u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF07B4u) goto L_08AF07B4;
    return;
L_08AF07B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AF07E8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 377u, 0x08ABA104u>(ctx, &aot_mem) && ctx.pc == 0x08AF07E8u) goto L_08AF07E8;
    return;
L_08AF07E8:
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
L_08AF080C:
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
          goto L_08AF0860;
      }
      goto L_08AF0838;
    }
L_08AF0838:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AF0844u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF0844u) goto L_08AF0844;
    return;
L_08AF0844:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF085C;
      }
      goto L_08AF0850;
    }
L_08AF0850:
    ctx.gpr[31] = (0x08AF0858u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0858u) goto L_08AF0858;
    return;
L_08AF0858:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AF085C;
L_08AF085C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AF0860;
L_08AF0860:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF0878u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0878u) goto L_08AF0878;
    return;
L_08AF0878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF088C;
    }
    goto L_08AF0884;
L_08AF0884:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF0890;
      }
      goto L_08AF088C;
    }
L_08AF088C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF0890;
L_08AF0890:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF089Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF089Cu) goto L_08AF089C;
    return;
L_08AF089C:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08AF08BCu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF08BCu) goto L_08AF08BC;
    return;
L_08AF08BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AF08F0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 377u, 0x08ABA104u>(ctx, &aot_mem) && ctx.pc == 0x08AF08F0u) goto L_08AF08F0;
    return;
L_08AF08F0:
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
L_08AF0914:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF096C;
      }
      goto L_08AF0944;
    }
L_08AF0944:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AF0950u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF0950u) goto L_08AF0950;
    return;
L_08AF0950:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0968;
      }
      goto L_08AF095C;
    }
L_08AF095C:
    ctx.gpr[31] = (0x08AF0964u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0964u) goto L_08AF0964;
    return;
L_08AF0964:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_08AF0968;
L_08AF0968:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08AF096C;
L_08AF096C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF0980u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0980u) goto L_08AF0980;
    return;
L_08AF0980:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF0994;
    }
    goto L_08AF098C;
L_08AF098C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF0998;
      }
      goto L_08AF0994;
    }
L_08AF0994:
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_08AF0998;
L_08AF0998:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF09A4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF09A4u) goto L_08AF09A4;
    return;
L_08AF09A4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF09D8;
      }
      goto L_08AF09B0;
    }
L_08AF09B0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AF09BCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF09BCu) goto L_08AF09BC;
    return;
L_08AF09BC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF09D4;
      }
      goto L_08AF09C8;
    }
L_08AF09C8:
    ctx.gpr[31] = (0x08AF09D0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF09D0u) goto L_08AF09D0;
    return;
L_08AF09D0:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    goto L_08AF09D4;
L_08AF09D4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08AF09D8;
L_08AF09D8:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AF09ECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF09ECu) goto L_08AF09EC;
    return;
L_08AF09EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF0A00;
    }
    goto L_08AF09F8;
L_08AF09F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF0A04;
      }
      goto L_08AF0A00;
    }
L_08AF0A00:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF0A04;
L_08AF0A04:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF0A10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF0A10u) goto L_08AF0A10;
    return;
L_08AF0A10:
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(29704));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AF0A30u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0A30u) goto L_08AF0A30;
    return;
L_08AF0A30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x08AF0A48u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 399u, 0x08ABA384u>(ctx, &aot_mem) && ctx.pc == 0x08AF0A48u) goto L_08AF0A48;
    return;
L_08AF0A48:
    ctx.gpr[2] = (0u | 0u);
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
L_08AF0A70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF0AB8;
      }
      goto L_08AF0A90;
    }
L_08AF0A90:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AF0A9Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF0A9Cu) goto L_08AF0A9C;
    return;
L_08AF0A9C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0AB4;
      }
      goto L_08AF0AA8;
    }
L_08AF0AA8:
    ctx.gpr[31] = (0x08AF0AB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0AB0u) goto L_08AF0AB0;
    return;
L_08AF0AB0:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08AF0AB4;
L_08AF0AB4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_08AF0AB8;
L_08AF0AB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AF0AD0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0AD0u) goto L_08AF0AD0;
    return;
L_08AF0AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF0AE4;
    }
    goto L_08AF0ADC;
L_08AF0ADC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF0AE8;
      }
      goto L_08AF0AE4;
    }
L_08AF0AE4:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF0AE8;
L_08AF0AE8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF0AF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF0AF4u) goto L_08AF0AF4;
    return;
L_08AF0AF4:
    ctx.gpr[31] = (0x08AF0AFCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 405u, 0x08ABA450u>(ctx, &aot_mem) && ctx.pc == 0x08AF0AFCu) goto L_08AF0AFC;
    return;
L_08AF0AFC:
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
L_08AF0B18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF0B60;
      }
      goto L_08AF0B38;
    }
L_08AF0B38:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AF0B44u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF0B44u) goto L_08AF0B44;
    return;
L_08AF0B44:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0B5C;
      }
      goto L_08AF0B50;
    }
L_08AF0B50:
    ctx.gpr[31] = (0x08AF0B58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0B58u) goto L_08AF0B58;
    return;
L_08AF0B58:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08AF0B5C;
L_08AF0B5C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_08AF0B60;
L_08AF0B60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AF0B78u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0B78u) goto L_08AF0B78;
    return;
L_08AF0B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF0B8C;
    }
    goto L_08AF0B84;
L_08AF0B84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF0B90;
      }
      goto L_08AF0B8C;
    }
L_08AF0B8C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF0B90;
L_08AF0B90:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF0B9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF0B9Cu) goto L_08AF0B9C;
    return;
L_08AF0B9C:
    ctx.gpr[31] = (0x08AF0BA4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 436u, 0x08ABA704u>(ctx, &aot_mem) && ctx.pc == 0x08AF0BA4u) goto L_08AF0BA4;
    return;
L_08AF0BA4:
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
L_08AF0BC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF0BE0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0BE0u) goto L_08AF0BE0;
    return;
L_08AF0BE0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7986)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32064));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
      if (branch_taken) {
          goto L_08AF0C1C;
      }
      goto L_08AF0C10;
    }
L_08AF0C10:
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF0C28;
      }
      goto L_08AF0C1C;
    }
L_08AF0C1C:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AF0C28;
L_08AF0C28:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0C3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF0C84;
      }
      goto L_08AF0C5C;
    }
L_08AF0C5C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AF0C68u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF0C68u) goto L_08AF0C68;
    return;
L_08AF0C68:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0C80;
      }
      goto L_08AF0C74;
    }
L_08AF0C74:
    ctx.gpr[31] = (0x08AF0C7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0C7Cu) goto L_08AF0C7C;
    return;
L_08AF0C7C:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08AF0C80;
L_08AF0C80:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_08AF0C84;
L_08AF0C84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AF0C9Cu);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0C9Cu) goto L_08AF0C9C;
    return;
L_08AF0C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF0CB0;
    }
    goto L_08AF0CA8;
L_08AF0CA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF0CB4;
      }
      goto L_08AF0CB0;
    }
L_08AF0CB0:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF0CB4;
L_08AF0CB4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF0CC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF0CC0u) goto L_08AF0CC0;
    return;
L_08AF0CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF0CD4;
      }
      goto L_08AF0CCC;
    }
L_08AF0CCC:
    ctx.gpr[31] = (0x08AF0CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0CD4u) goto L_08AF0CD4;
    return;
L_08AF0CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AF0CECu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08AF0CECu) goto L_08AF0CEC;
    return;
L_08AF0CEC:
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
L_08AF0D08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0D28;
      }
      goto L_08AF0D1C;
    }
L_08AF0D1C:
    ctx.gpr[31] = (0x08AF0D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0D24u) goto L_08AF0D24;
    return;
L_08AF0D24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AF0D28;
L_08AF0D28:
    ctx.gpr[31] = (0x08AF0D30u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 675u, 0x089BB200u>(ctx, &aot_mem) && ctx.pc == 0x08AF0D30u) goto L_08AF0D30;
    return;
L_08AF0D30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF0D4C;
      }
      goto L_08AF0D3C;
    }
L_08AF0D3C:
    ctx.gpr[31] = (0x08AF0D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0D44u) goto L_08AF0D44;
    return;
L_08AF0D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[5] = (0u | 0u);
    goto L_08AF0D4C;
L_08AF0D4C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AF0D5Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08AF0D5Cu) goto L_08AF0D5C;
    return;
L_08AF0D5C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0D6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF0D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 238u, 0x08AB9394u>(ctx, &aot_mem) && ctx.pc == 0x08AF0D7Cu) goto L_08AF0D7C;
    return;
L_08AF0D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0D90;
      }
      goto L_08AF0D88;
    }
L_08AF0D88:
    ctx.gpr[31] = (0x08AF0D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF0D90u) goto L_08AF0D90;
    return;
L_08AF0D90:
    ctx.gpr[31] = (0x08AF0D98u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 475u, 0x089BA65Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0D98u) goto L_08AF0D98;
    return;
L_08AF0D98:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0DA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF0DC8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0DC8u) goto L_08AF0DC8;
    return;
L_08AF0DC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0DE0;
      }
      goto L_08AF0DD4;
    }
L_08AF0DD4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7988), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF0DE8;
      }
      goto L_08AF0DE0;
    }
L_08AF0DE0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7988), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AF0DE8;
L_08AF0DE8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0DFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF0E40u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0E40u) goto L_08AF0E40;
    return;
L_08AF0E40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[22] = (2239u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(32064));
      if (branch_taken) {
          goto L_08AF0E78;
      }
      goto L_08AF0E50;
    }
L_08AF0E50:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08AF0E5Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF0E5Cu) goto L_08AF0E5C;
    return;
L_08AF0E5C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0E74;
      }
      goto L_08AF0E68;
    }
L_08AF0E68:
    ctx.gpr[31] = (0x08AF0E70u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0E70u) goto L_08AF0E70;
    return;
L_08AF0E70:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08AF0E74;
L_08AF0E74:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[20]);
    goto L_08AF0E78;
L_08AF0E78:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF0E90u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0E90u) goto L_08AF0E90;
    return;
L_08AF0E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF0EA4;
    }
    goto L_08AF0E9C;
L_08AF0E9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF0EA8;
      }
      goto L_08AF0EA4;
    }
L_08AF0EA4:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF0EA8;
L_08AF0EA8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF0EB4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF0EB4u) goto L_08AF0EB4;
    return;
L_08AF0EB4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7986)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF0F08u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0F08u) goto L_08AF0F08;
    return;
L_08AF0F08:
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7986)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF0F20;
      }
      goto L_08AF0F18;
    }
L_08AF0F18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF0F70;
      }
      goto L_08AF0F20;
    }
L_08AF0F20:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[11] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(38));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AF0F60u);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 515u, 0x08ABAD24u>(ctx, &aot_mem) && ctx.pc == 0x08AF0F60u) goto L_08AF0F60;
    return;
L_08AF0F60:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7986)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7986), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AF0F70;
L_08AF0F70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF0F98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF0FDCu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF0FDCu) goto L_08AF0FDC;
    return;
L_08AF0FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[22] = (2239u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(32064));
      if (branch_taken) {
          goto L_08AF1014;
      }
      goto L_08AF0FEC;
    }
L_08AF0FEC:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08AF0FF8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF0FF8u) goto L_08AF0FF8;
    return;
L_08AF0FF8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1010;
      }
      goto L_08AF1004;
    }
L_08AF1004:
    ctx.gpr[31] = (0x08AF100Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF100Cu) goto L_08AF100C;
    return;
L_08AF100C:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08AF1010;
L_08AF1010:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[20]);
    goto L_08AF1014;
L_08AF1014:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF102Cu);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF102Cu) goto L_08AF102C;
    return;
L_08AF102C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF1040;
    }
    goto L_08AF1038;
L_08AF1038:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF1044;
      }
      goto L_08AF1040;
    }
L_08AF1040:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF1044;
L_08AF1044:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF1050u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF1050u) goto L_08AF1050;
    return;
L_08AF1050:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7986)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AF10A4u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF10A4u) goto L_08AF10A4;
    return;
L_08AF10A4:
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7986)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF10BC;
      }
      goto L_08AF10B4;
    }
L_08AF10B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF110C;
      }
      goto L_08AF10BC;
    }
L_08AF10BC:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(38));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AF10FCu);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 515u, 0x08ABAD24u>(ctx, &aot_mem) && ctx.pc == 0x08AF10FCu) goto L_08AF10FC;
    return;
L_08AF10FC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7986)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7986), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AF110C;
L_08AF110C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF1134:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF117C;
      }
      goto L_08AF1154;
    }
L_08AF1154:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AF1160u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF1160u) goto L_08AF1160;
    return;
L_08AF1160:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1178;
      }
      goto L_08AF116C;
    }
L_08AF116C:
    ctx.gpr[31] = (0x08AF1174u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1174u) goto L_08AF1174;
    return;
L_08AF1174:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08AF1178;
L_08AF1178:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_08AF117C;
L_08AF117C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AF1194u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1194u) goto L_08AF1194;
    return;
L_08AF1194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF11A8;
    }
    goto L_08AF11A0;
L_08AF11A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF11AC;
      }
      goto L_08AF11A8;
    }
L_08AF11A8:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF11AC;
L_08AF11AC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF11B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF11B8u) goto L_08AF11B8;
    return;
L_08AF11B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF11D0;
      }
      goto L_08AF11C4;
    }
L_08AF11C4:
    ctx.gpr[31] = (0x08AF11CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF11CCu) goto L_08AF11CC;
    return;
L_08AF11CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AF11D0;
L_08AF11D0:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08AF11E4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08AF11E4u) goto L_08AF11E4;
    return;
L_08AF11E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF11FC;
      }
      goto L_08AF11F0;
    }
L_08AF11F0:
    ctx.gpr[31] = (0x08AF11F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF11F8u) goto L_08AF11F8;
    return;
L_08AF11F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AF11FC;
L_08AF11FC:
    ctx.gpr[31] = (0x08AF1204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 556u, 0x089BAA78u>(ctx, &aot_mem) && ctx.pc == 0x08AF1204u) goto L_08AF1204;
    return;
L_08AF1204:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08AF123C;
      }
      goto L_08AF120C;
    }
L_08AF120C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1224;
      }
      goto L_08AF1218;
    }
L_08AF1218:
    ctx.gpr[31] = (0x08AF1220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1220u) goto L_08AF1220;
    return;
L_08AF1220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AF1224;
L_08AF1224:
    ctx.gpr[31] = (0x08AF122Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 675u, 0x089BB200u>(ctx, &aot_mem) && ctx.pc == 0x08AF122Cu) goto L_08AF122C;
    return;
L_08AF122C:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[5] = (0u | 180u);
    ctx.gpr[31] = (0x08AF123Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x08AF123Cu) goto L_08AF123C;
    return;
L_08AF123C:
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
L_08AF1258:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF1268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 241u, 0x08AB93D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1268u) goto L_08AF1268;
    return;
L_08AF1268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_08AF1280;
    }
    goto L_08AF1274;
L_08AF1274:
    ctx.gpr[31] = (0x08AF127Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF127Cu) goto L_08AF127C;
    return;
L_08AF127C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AF1280;
L_08AF1280:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AF128Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 468u, 0x089BA604u>(ctx, &aot_mem) && ctx.pc == 0x08AF128Cu) goto L_08AF128C;
    return;
L_08AF128C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17340)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17336), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF12A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF12D4;
      }
      goto L_08AF12C8;
    }
L_08AF12C8:
    ctx.gpr[31] = (0x08AF12D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF12D0u) goto L_08AF12D0;
    return;
L_08AF12D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AF12D4;
L_08AF12D4:
    ctx.gpr[31] = (0x08AF12DCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 617u, 0x089BAEB0u>(ctx, &aot_mem) && ctx.pc == 0x08AF12DCu) goto L_08AF12DC;
    return;
L_08AF12DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AF1314;
      }
      goto L_08AF12E8;
    }
L_08AF12E8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AF12F4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF12F4u) goto L_08AF12F4;
    return;
L_08AF12F4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF130C;
      }
      goto L_08AF1300;
    }
L_08AF1300:
    ctx.gpr[31] = (0x08AF1308u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1308u) goto L_08AF1308;
    return;
L_08AF1308:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08AF130C;
L_08AF130C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AF1314;
L_08AF1314:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AF1328u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1328u) goto L_08AF1328;
    return;
L_08AF1328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF133C;
    }
    goto L_08AF1334;
L_08AF1334:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF1340;
      }
      goto L_08AF133C;
    }
L_08AF133C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF1340;
L_08AF1340:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF134Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF134Cu) goto L_08AF134C;
    return;
L_08AF134C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF1364;
      }
      goto L_08AF1358;
    }
L_08AF1358:
    ctx.gpr[31] = (0x08AF1360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1360u) goto L_08AF1360;
    return;
L_08AF1360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AF1364;
L_08AF1364:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AF1378u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08AF1378u) goto L_08AF1378;
    return;
L_08AF1378:
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
L_08AF1394:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF13C4;
      }
      goto L_08AF13B8;
    }
L_08AF13B8:
    ctx.gpr[31] = (0x08AF13C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF13C0u) goto L_08AF13C0;
    return;
L_08AF13C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AF13C4;
L_08AF13C4:
    ctx.gpr[31] = (0x08AF13CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 617u, 0x089BAEB0u>(ctx, &aot_mem) && ctx.pc == 0x08AF13CCu) goto L_08AF13CC;
    return;
L_08AF13CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AF1404;
      }
      goto L_08AF13D8;
    }
L_08AF13D8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AF13E4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF13E4u) goto L_08AF13E4;
    return;
L_08AF13E4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF13FC;
      }
      goto L_08AF13F0;
    }
L_08AF13F0:
    ctx.gpr[31] = (0x08AF13F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF13F8u) goto L_08AF13F8;
    return;
L_08AF13F8:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08AF13FC;
L_08AF13FC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AF1404;
L_08AF1404:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AF1418u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1418u) goto L_08AF1418;
    return;
L_08AF1418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF142C;
    }
    goto L_08AF1424;
L_08AF1424:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF1430;
      }
      goto L_08AF142C;
    }
L_08AF142C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF1430;
L_08AF1430:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF143Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF143Cu) goto L_08AF143C;
    return;
L_08AF143C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF1454;
      }
      goto L_08AF1448;
    }
L_08AF1448:
    ctx.gpr[31] = (0x08AF1450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1450u) goto L_08AF1450;
    return;
L_08AF1450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AF1454;
L_08AF1454:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08AF1468u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08AF1468u) goto L_08AF1468;
    return;
L_08AF1468:
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
L_08AF1484:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[20] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(29704));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF14E4;
      }
      goto L_08AF14BC;
    }
L_08AF14BC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AF14C8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF14C8u) goto L_08AF14C8;
    return;
L_08AF14C8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF14E0;
      }
      goto L_08AF14D4;
    }
L_08AF14D4:
    ctx.gpr[31] = (0x08AF14DCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF14DCu) goto L_08AF14DC;
    return;
L_08AF14DC:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08AF14E0;
L_08AF14E0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08AF14E4;
L_08AF14E4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF14FCu);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF14FCu) goto L_08AF14FC;
    return;
L_08AF14FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF1510;
    }
    goto L_08AF1508;
L_08AF1508:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF1514;
      }
      goto L_08AF1510;
    }
L_08AF1510:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF1514;
L_08AF1514:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF1520u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF1520u) goto L_08AF1520;
    return;
L_08AF1520:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AF1538u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1538u) goto L_08AF1538;
    return;
L_08AF1538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF154C;
      }
      goto L_08AF1544;
    }
L_08AF1544:
    ctx.gpr[31] = (0x08AF154Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AF154Cu) goto L_08AF154C;
    return;
L_08AF154C:
    ctx.gpr[31] = (0x08AF1554u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 629u, 0x089C6D68u>(ctx, &aot_mem) && ctx.pc == 0x08AF1554u) goto L_08AF1554;
    return;
L_08AF1554:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1580;
      }
      goto L_08AF155C;
    }
L_08AF155C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AF1578u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 216u, 0x08AB9068u>(ctx, &aot_mem) && ctx.pc == 0x08AF1578u) goto L_08AF1578;
    return;
L_08AF1578:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF15A4;
      }
      goto L_08AF1580;
    }
L_08AF1580:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AF15A4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 493u, 0x08ABAB74u>(ctx, &aot_mem) && ctx.pc == 0x08AF15A4u) goto L_08AF15A4;
    return;
L_08AF15A4:
    ctx.gpr[2] = (0u | 0u);
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
L_08AF15CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[20] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(29704));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF162C;
      }
      goto L_08AF1604;
    }
L_08AF1604:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AF1610u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF1610u) goto L_08AF1610;
    return;
L_08AF1610:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1628;
      }
      goto L_08AF161C;
    }
L_08AF161C:
    ctx.gpr[31] = (0x08AF1624u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1624u) goto L_08AF1624;
    return;
L_08AF1624:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08AF1628;
L_08AF1628:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08AF162C;
L_08AF162C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF1644u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1644u) goto L_08AF1644;
    return;
L_08AF1644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF1658;
    }
    goto L_08AF1650;
L_08AF1650:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF165C;
      }
      goto L_08AF1658;
    }
L_08AF1658:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF165C;
L_08AF165C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF1668u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF1668u) goto L_08AF1668;
    return;
L_08AF1668:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AF1680u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1680u) goto L_08AF1680;
    return;
L_08AF1680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1694;
      }
      goto L_08AF168C;
    }
L_08AF168C:
    ctx.gpr[31] = (0x08AF1694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AF1694u) goto L_08AF1694;
    return;
L_08AF1694:
    ctx.gpr[31] = (0x08AF169Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 629u, 0x089C6D68u>(ctx, &aot_mem) && ctx.pc == 0x08AF169Cu) goto L_08AF169C;
    return;
L_08AF169C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF16C8;
      }
      goto L_08AF16A4;
    }
L_08AF16A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08AF16C0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 216u, 0x08AB9068u>(ctx, &aot_mem) && ctx.pc == 0x08AF16C0u) goto L_08AF16C0;
    return;
L_08AF16C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF16EC;
      }
      goto L_08AF16C8;
    }
L_08AF16C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AF16ECu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 493u, 0x08ABAB74u>(ctx, &aot_mem) && ctx.pc == 0x08AF16ECu) goto L_08AF16EC;
    return;
L_08AF16EC:
    ctx.gpr[2] = (0u | 0u);
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
L_08AF1714:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF1768;
      }
      goto L_08AF1740;
    }
L_08AF1740:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AF174Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF174Cu) goto L_08AF174C;
    return;
L_08AF174C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1764;
      }
      goto L_08AF1758;
    }
L_08AF1758:
    ctx.gpr[31] = (0x08AF1760u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1760u) goto L_08AF1760;
    return;
L_08AF1760:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AF1764;
L_08AF1764:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AF1768;
L_08AF1768:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF1780u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1780u) goto L_08AF1780;
    return;
L_08AF1780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF1794;
    }
    goto L_08AF178C;
L_08AF178C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF1798;
      }
      goto L_08AF1794;
    }
L_08AF1794:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF1798;
L_08AF1798:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF17A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF17A4u) goto L_08AF17A4;
    return;
L_08AF17A4:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AF17C4u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF17C4u) goto L_08AF17C4;
    return;
L_08AF17C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AF17E0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 216u, 0x08AB9068u>(ctx, &aot_mem) && ctx.pc == 0x08AF17E0u) goto L_08AF17E0;
    return;
L_08AF17E0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF1804:
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
          goto L_08AF1858;
      }
      goto L_08AF1830;
    }
L_08AF1830:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AF183Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF183Cu) goto L_08AF183C;
    return;
L_08AF183C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1854;
      }
      goto L_08AF1848;
    }
L_08AF1848:
    ctx.gpr[31] = (0x08AF1850u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1850u) goto L_08AF1850;
    return;
L_08AF1850:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AF1854;
L_08AF1854:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AF1858;
L_08AF1858:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF1870u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1870u) goto L_08AF1870;
    return;
L_08AF1870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF1884;
    }
    goto L_08AF187C;
L_08AF187C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF1888;
      }
      goto L_08AF1884;
    }
L_08AF1884:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF1888;
L_08AF1888:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF1894u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF1894u) goto L_08AF1894;
    return;
L_08AF1894:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08AF18B4u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF18B4u) goto L_08AF18B4;
    return;
L_08AF18B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AF18E8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 362u, 0x08AB9DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AF18E8u) goto L_08AF18E8;
    return;
L_08AF18E8:
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
L_08AF190C:
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
          goto L_08AF1960;
      }
      goto L_08AF1938;
    }
L_08AF1938:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AF1944u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF1944u) goto L_08AF1944;
    return;
L_08AF1944:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF195C;
      }
      goto L_08AF1950;
    }
L_08AF1950:
    ctx.gpr[31] = (0x08AF1958u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1958u) goto L_08AF1958;
    return;
L_08AF1958:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08AF195C;
L_08AF195C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08AF1960;
L_08AF1960:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF1978u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1978u) goto L_08AF1978;
    return;
L_08AF1978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF198C;
    }
    goto L_08AF1984;
L_08AF1984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF1990;
      }
      goto L_08AF198C;
    }
L_08AF198C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF1990;
L_08AF1990:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF199Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF199Cu) goto L_08AF199C;
    return;
L_08AF199C:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AF19BCu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF19BCu) goto L_08AF19BC;
    return;
L_08AF19BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AF19F0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 362u, 0x08AB9DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AF19F0u) goto L_08AF19F0;
    return;
L_08AF19F0:
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
L_08AF1A14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AF1A64;
      }
      goto L_08AF1A38;
    }
L_08AF1A38:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AF1A44u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF1A44u) goto L_08AF1A44;
    return;
L_08AF1A44:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1A5C;
      }
      goto L_08AF1A50;
    }
L_08AF1A50:
    ctx.gpr[31] = (0x08AF1A58u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1A58u) goto L_08AF1A58;
    return;
L_08AF1A58:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_08AF1A5C;
L_08AF1A5C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_08AF1A64;
L_08AF1A64:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF1A74u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1A74u) goto L_08AF1A74;
    return;
L_08AF1A74:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF1A88;
    }
    goto L_08AF1A80;
L_08AF1A80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF1A8C;
      }
      goto L_08AF1A88;
    }
L_08AF1A88:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08AF1A8C;
L_08AF1A8C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF1A98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF1A98u) goto L_08AF1A98;
    return;
L_08AF1A98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF1AAC;
      }
      goto L_08AF1AA4;
    }
L_08AF1AA4:
    ctx.gpr[31] = (0x08AF1AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1AACu) goto L_08AF1AAC;
    return;
L_08AF1AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AF1AC4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08AF1AC4u) goto L_08AF1AC4;
    return;
L_08AF1AC4:
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
L_08AF1AE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF1B28;
      }
      goto L_08AF1B00;
    }
L_08AF1B00:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AF1B0Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF1B0Cu) goto L_08AF1B0C;
    return;
L_08AF1B0C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1B24;
      }
      goto L_08AF1B18;
    }
L_08AF1B18:
    ctx.gpr[31] = (0x08AF1B20u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1B20u) goto L_08AF1B20;
    return;
L_08AF1B20:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08AF1B24;
L_08AF1B24:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_08AF1B28;
L_08AF1B28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AF1B40u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1B40u) goto L_08AF1B40;
    return;
L_08AF1B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF1B54;
    }
    goto L_08AF1B4C;
L_08AF1B4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF1B58;
      }
      goto L_08AF1B54;
    }
L_08AF1B54:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF1B58;
L_08AF1B58:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF1B64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF1B64u) goto L_08AF1B64;
    return;
L_08AF1B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF1B78;
      }
      goto L_08AF1B70;
    }
L_08AF1B70:
    ctx.gpr[31] = (0x08AF1B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1B78u) goto L_08AF1B78;
    return;
L_08AF1B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08AF1B90u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08AF1B90u) goto L_08AF1B90;
    return;
L_08AF1B90:
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
L_08AF1BAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1BDC;
      }
      goto L_08AF1BD0;
    }
L_08AF1BD0:
    ctx.gpr[31] = (0x08AF1BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1BD8u) goto L_08AF1BD8;
    return;
L_08AF1BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AF1BDC;
L_08AF1BDC:
    ctx.gpr[31] = (0x08AF1BE4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 617u, 0x089BAEB0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1BE4u) goto L_08AF1BE4;
    return;
L_08AF1BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AF1C1C;
      }
      goto L_08AF1BF0;
    }
L_08AF1BF0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AF1BFCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF1BFCu) goto L_08AF1BFC;
    return;
L_08AF1BFC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1C14;
      }
      goto L_08AF1C08;
    }
L_08AF1C08:
    ctx.gpr[31] = (0x08AF1C10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1C10u) goto L_08AF1C10;
    return;
L_08AF1C10:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08AF1C14;
L_08AF1C14:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AF1C1C;
L_08AF1C1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AF1C30u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1C30u) goto L_08AF1C30;
    return;
L_08AF1C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF1C44;
    }
    goto L_08AF1C3C;
L_08AF1C3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF1C48;
      }
      goto L_08AF1C44;
    }
L_08AF1C44:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF1C48;
L_08AF1C48:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF1C54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF1C54u) goto L_08AF1C54;
    return;
L_08AF1C54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF1C6C;
      }
      goto L_08AF1C60;
    }
L_08AF1C60:
    ctx.gpr[31] = (0x08AF1C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1C68u) goto L_08AF1C68;
    return;
L_08AF1C68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AF1C6C;
L_08AF1C6C:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AF1C80u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08AF1C80u) goto L_08AF1C80;
    return;
L_08AF1C80:
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
L_08AF1C9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1CCC;
      }
      goto L_08AF1CC0;
    }
L_08AF1CC0:
    ctx.gpr[31] = (0x08AF1CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1CC8u) goto L_08AF1CC8;
    return;
L_08AF1CC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AF1CCC;
L_08AF1CCC:
    ctx.gpr[31] = (0x08AF1CD4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 617u, 0x089BAEB0u>(ctx, &aot_mem) && ctx.pc == 0x08AF1CD4u) goto L_08AF1CD4;
    return;
L_08AF1CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AF1D0C;
      }
      goto L_08AF1CE0;
    }
L_08AF1CE0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AF1CECu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF1CECu) goto L_08AF1CEC;
    return;
L_08AF1CEC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1D04;
      }
      goto L_08AF1CF8;
    }
L_08AF1CF8:
    ctx.gpr[31] = (0x08AF1D00u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1D00u) goto L_08AF1D00;
    return;
L_08AF1D00:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08AF1D04;
L_08AF1D04:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AF1D0C;
L_08AF1D0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AF1D20u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1D20u) goto L_08AF1D20;
    return;
L_08AF1D20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF1D34;
    }
    goto L_08AF1D2C;
L_08AF1D2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF1D38;
      }
      goto L_08AF1D34;
    }
L_08AF1D34:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF1D38;
L_08AF1D38:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF1D44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF1D44u) goto L_08AF1D44;
    return;
L_08AF1D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF1D5C;
      }
      goto L_08AF1D50;
    }
L_08AF1D50:
    ctx.gpr[31] = (0x08AF1D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF1D58u) goto L_08AF1D58;
    return;
L_08AF1D58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AF1D5C;
L_08AF1D5C:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08AF1D70u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08AF1D70u) goto L_08AF1D70;
    return;
L_08AF1D70:
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
L_08AF1D8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF1DC0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1DC0u) goto L_08AF1DC0;
    return;
L_08AF1DC0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF1DD4;
    }
    goto L_08AF1DCC;
L_08AF1DCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF1DD8;
      }
      goto L_08AF1DD4;
    }
L_08AF1DD4:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_08AF1DD8;
L_08AF1DD8:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08AF1DF8u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1DF8u) goto L_08AF1DF8;
    return;
L_08AF1DF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
      if (branch_taken) {
          goto L_08AF1E50;
      }
      goto L_08AF1E18;
    }
L_08AF1E18:
    ctx.gpr[7] = (0u | 10u);
    goto L_08AF1E1C;
L_08AF1E1C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[9] = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1E1C;
      }
      goto L_08AF1E50;
    }
L_08AF1E50:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF1E74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF1EA0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1EA0u) goto L_08AF1EA0;
    return;
L_08AF1EA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF1EB4;
    }
    goto L_08AF1EAC;
L_08AF1EAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF1EB8;
      }
      goto L_08AF1EB4;
    }
L_08AF1EB4:
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_08AF1EB8;
L_08AF1EB8:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AF1ECCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1ECCu) goto L_08AF1ECC;
    return;
L_08AF1ECC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF1EE0;
    }
    goto L_08AF1ED8;
L_08AF1ED8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF1EE4;
      }
      goto L_08AF1EE0;
    }
L_08AF1EE0:
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08AF1EE4;
L_08AF1EE4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF1EF0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1EF0u) goto L_08AF1EF0;
    return;
L_08AF1EF0:
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
L_08AF1F0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (2236u << 16u);
      if (branch_taken) {
          goto L_08AF1F64;
      }
      goto L_08AF1F3C;
    }
L_08AF1F3C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08AF1F48u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF1F48u) goto L_08AF1F48;
    return;
L_08AF1F48:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1F60;
      }
      goto L_08AF1F54;
    }
L_08AF1F54:
    ctx.gpr[31] = (0x08AF1F5Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1F5Cu) goto L_08AF1F5C;
    return;
L_08AF1F5C:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    goto L_08AF1F60;
L_08AF1F60:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[20]);
    goto L_08AF1F64;
L_08AF1F64:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF1F7Cu);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF1F7Cu) goto L_08AF1F7C;
    return;
L_08AF1F7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF1F90;
    }
    goto L_08AF1F88;
L_08AF1F88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF1F94;
      }
      goto L_08AF1F90;
    }
L_08AF1F90:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF1F94;
L_08AF1F94:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF1FA0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF1FA0u) goto L_08AF1FA0;
    return;
L_08AF1FA0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1FD0;
      }
      goto L_08AF1FB4;
    }
L_08AF1FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF1FB4;
      }
      goto L_08AF1FD0;
    }
L_08AF1FD0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AF1FE0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08AF1FE0u) goto L_08AF1FE0;
    return;
L_08AF1FE0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2004:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(8952));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF205C;
      }
      goto L_08AF2034;
    }
L_08AF2034:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AF2040u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF2040u) goto L_08AF2040;
    return;
L_08AF2040:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2058;
      }
      goto L_08AF204C;
    }
L_08AF204C:
    ctx.gpr[31] = (0x08AF2054u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2054u) goto L_08AF2054;
    return;
L_08AF2054:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    goto L_08AF2058;
L_08AF2058:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08AF205C;
L_08AF205C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF2074u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2074u) goto L_08AF2074;
    return;
L_08AF2074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF2088;
    }
    goto L_08AF2080;
L_08AF2080:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF208C;
      }
      goto L_08AF2088;
    }
L_08AF2088:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF208C;
L_08AF208C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF2098u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF2098u) goto L_08AF2098;
    return;
L_08AF2098:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF20B4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF20B4u) goto L_08AF20B4;
    return;
L_08AF20B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08AF2128;
      }
      goto L_08AF20C0;
    }
L_08AF20C0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AF20D8;
      }
      goto L_08AF20C8;
    }
L_08AF20C8:
    ctx.gpr[31] = (0x08AF20D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF20D0u) goto L_08AF20D0;
    return;
L_08AF20D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AF20D8;
L_08AF20D8:
    ctx.gpr[31] = (0x08AF20E0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 688u, 0x089BB290u>(ctx, &aot_mem) && ctx.pc == 0x08AF20E0u) goto L_08AF20E0;
    return;
L_08AF20E0:
    ctx.gpr[31] = (0x08AF20E8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 745u, 0x08953614u>(ctx, &aot_mem) && ctx.pc == 0x08AF20E8u) goto L_08AF20E8;
    return;
L_08AF20E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_08AF2104;
    }
    goto L_08AF20F4;
L_08AF20F4:
    ctx.gpr[31] = (0x08AF20FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF20FCu) goto L_08AF20FC;
    return;
L_08AF20FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AF2104;
L_08AF2104:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AF2118;
      }
      goto L_08AF210C;
    }
L_08AF210C:
    ctx.gpr[31] = (0x08AF2114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2114u) goto L_08AF2114;
    return;
L_08AF2114:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AF2118;
L_08AF2118:
    ctx.gpr[31] = (0x08AF2120u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 686u, 0x089BB280u>(ctx, &aot_mem) && ctx.pc == 0x08AF2120u) goto L_08AF2120;
    return;
L_08AF2120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF21C8;
      }
      goto L_08AF2128;
    }
L_08AF2128:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AF2140;
      }
      goto L_08AF2130;
    }
L_08AF2130:
    ctx.gpr[31] = (0x08AF2138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2138u) goto L_08AF2138;
    return;
L_08AF2138:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AF2140;
L_08AF2140:
    ctx.gpr[31] = (0x08AF2148u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 688u, 0x089BB290u>(ctx, &aot_mem) && ctx.pc == 0x08AF2148u) goto L_08AF2148;
    return;
L_08AF2148:
    ctx.gpr[31] = (0x08AF2150u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 745u, 0x08953614u>(ctx, &aot_mem) && ctx.pc == 0x08AF2150u) goto L_08AF2150;
    return;
L_08AF2150:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_08AF216C;
    }
    goto L_08AF215C;
L_08AF215C:
    ctx.gpr[31] = (0x08AF2164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2164u) goto L_08AF2164;
    return;
L_08AF2164:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AF216C;
L_08AF216C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF217C;
      }
      goto L_08AF2174;
    }
L_08AF2174:
    ctx.gpr[31] = (0x08AF217Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF217Cu) goto L_08AF217C;
    return;
L_08AF217C:
    ctx.gpr[31] = (0x08AF2184u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 581u, 0x089BABB4u>(ctx, &aot_mem) && ctx.pc == 0x08AF2184u) goto L_08AF2184;
    return;
L_08AF2184:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AF2190u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 687u, 0x089BB288u>(ctx, &aot_mem) && ctx.pc == 0x08AF2190u) goto L_08AF2190;
    return;
L_08AF2190:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[16] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_08AF21AC;
    }
    goto L_08AF219C;
L_08AF219C:
    ctx.gpr[31] = (0x08AF21A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF21A4u) goto L_08AF21A4;
    return;
L_08AF21A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AF21AC;
L_08AF21AC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AF21C0;
      }
      goto L_08AF21B4;
    }
L_08AF21B4:
    ctx.gpr[31] = (0x08AF21BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF21BCu) goto L_08AF21BC;
    return;
L_08AF21BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AF21C0;
L_08AF21C0:
    ctx.gpr[31] = (0x08AF21C8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 686u, 0x089BB280u>(ctx, &aot_mem) && ctx.pc == 0x08AF21C8u) goto L_08AF21C8;
    return;
L_08AF21C8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF21EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF222Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF222Cu) goto L_08AF222C;
    return;
L_08AF222C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AF2264;
      }
      goto L_08AF2238;
    }
L_08AF2238:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08AF2244u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AF2244u) goto L_08AF2244;
    return;
L_08AF2244:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF225C;
      }
      goto L_08AF2250;
    }
L_08AF2250:
    ctx.gpr[31] = (0x08AF2258u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2258u) goto L_08AF2258;
    return;
L_08AF2258:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08AF225C;
L_08AF225C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AF2264;
L_08AF2264:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF2278u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2278u) goto L_08AF2278;
    return;
L_08AF2278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF228C;
    }
    goto L_08AF2284;
L_08AF2284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF2290;
      }
      goto L_08AF228C;
    }
L_08AF228C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF2290;
L_08AF2290:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AF229Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08AF229Cu) goto L_08AF229C;
    return;
L_08AF229C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7986)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AF2300;
      }
      goto L_08AF22AC;
    }
L_08AF22AC:
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[18] = (2239u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32064));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[6] | 32u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF2308;
      }
      goto L_08AF22F8;
    }
L_08AF22F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2318;
      }
      goto L_08AF2300;
    }
L_08AF2300:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF23B8;
      }
      goto L_08AF2308;
    }
L_08AF2308:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AF2308;
      }
      goto L_08AF2318;
    }
L_08AF2318:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2330;
      }
      goto L_08AF2324;
    }
L_08AF2324:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(126), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7986)));
    goto L_08AF2330;
L_08AF2330:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] << 6u);
      if (branch_taken) {
          goto L_08AF2370;
      }
      goto L_08AF2340;
    }
L_08AF2340:
    ctx.gpr[8] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
    goto L_08AF2354;
L_08AF2354:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF2354;
      }
      goto L_08AF2370;
    }
L_08AF2370:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
      if (branch_taken) {
          goto L_08AF23AC;
      }
      goto L_08AF237C;
    }
L_08AF237C:
    ctx.gpr[7] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
    goto L_08AF2398;
L_08AF2398:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AF2398;
      }
      goto L_08AF23AC;
    }
L_08AF23AC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7986), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    goto L_08AF23B8;
L_08AF23B8:
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
L_08AF23DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF23FCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF23FCu) goto L_08AF23FC;
    return;
L_08AF23FC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7986)));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2239u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32064));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF243C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2464u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2464u) goto L_08AF2464;
    return;
L_08AF2464:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF2478;
      }
      goto L_08AF2470;
    }
L_08AF2470:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF24AC;
      }
      goto L_08AF2478;
    }
L_08AF2478:
    ctx.gpr[31] = (0x08AF2480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08AF2480u) goto L_08AF2480;
    return;
L_08AF2480:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(412)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF2494u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2494u) goto L_08AF2494;
    return;
L_08AF2494:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AF24AC;
      }
      goto L_08AF24AC;
    }
L_08AF24AC:
    ctx.gpr[31] = (0x08AF24B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF24B4u) goto L_08AF24B4;
    return;
L_08AF24B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF24C4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 184u, 0x088191BCu>(ctx, &aot_mem) && ctx.pc == 0x08AF24C4u) goto L_08AF24C4;
    return;
L_08AF24C4:
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
L_08AF24DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF24FCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF24FCu) goto L_08AF24FC;
    return;
L_08AF24FC:
    ctx.gpr[31] = (0x08AF2504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2504u) goto L_08AF2504;
    return;
L_08AF2504:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[31] = (0x08AF2510u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 191u, 0x08819248u>(ctx, &aot_mem) && ctx.pc == 0x08AF2510u) goto L_08AF2510;
    return;
L_08AF2510:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2524:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2544u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2544u) goto L_08AF2544;
    return;
L_08AF2544:
    ctx.gpr[31] = (0x08AF254Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF254Cu) goto L_08AF254C;
    return;
L_08AF254C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF255Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 112u, 0x08818BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AF255Cu) goto L_08AF255C;
    return;
L_08AF255C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2570:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2590u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2590u) goto L_08AF2590;
    return;
L_08AF2590:
    ctx.gpr[31] = (0x08AF2598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2598u) goto L_08AF2598;
    return;
L_08AF2598:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF25A8u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 112u, 0x08818BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AF25A8u) goto L_08AF25A8;
    return;
L_08AF25A8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF25BC:
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
    ctx.gpr[31] = (0x08AF25F0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF25F0u) goto L_08AF25F0;
    return;
L_08AF25F0:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AF2628;
      }
      goto L_08AF2610;
    }
L_08AF2610:
    ctx.gpr[4] = (50042u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF2638;
      }
      goto L_08AF2628;
    }
L_08AF2628:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AF2634u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2634u) goto L_08AF2634;
    return;
L_08AF2634:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AF2638;
L_08AF2638:
    ctx.gpr[31] = (0x08AF2640u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2640u) goto L_08AF2640;
    return;
L_08AF2640:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AF2660u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 145u, 0x08818E30u>(ctx, &aot_mem) && ctx.pc == 0x08AF2660u) goto L_08AF2660;
    return;
L_08AF2660:
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
L_08AF2684:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF26BCu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF26BCu) goto L_08AF26BC;
    return;
L_08AF26BC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08AF26E8;
      }
      goto L_08AF26E0;
    }
L_08AF26E0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AF26E8;
L_08AF26E8:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08AF2704;
    }
    goto L_08AF26F8;
L_08AF26F8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08AF2704;
L_08AF2704:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[22] = ctx.fpr[13] + ctx.fpr[24];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AF272Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF272Cu) goto L_08AF272C;
    return;
L_08AF272C:
    ctx.fpr[26] = ctx.fpr[20] - ctx.fpr[26];
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AF274C;
      }
      goto L_08AF2744;
    }
L_08AF2744:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2750;
      }
      goto L_08AF274C;
    }
L_08AF274C:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AF2750;
L_08AF2750:
    ctx.gpr[31] = (0x08AF2758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2758u) goto L_08AF2758;
    return;
L_08AF2758:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AF277Cu);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 158u, 0x08818F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF277Cu) goto L_08AF277C;
    return;
L_08AF277C:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF27A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF27C4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF27C4u) goto L_08AF27C4;
    return;
L_08AF27C4:
    ctx.gpr[31] = (0x08AF27CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF27CCu) goto L_08AF27CC;
    return;
L_08AF27CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF27DCu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 112u, 0x08818BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AF27DCu) goto L_08AF27DC;
    return;
L_08AF27DC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF27F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2818u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2818u) goto L_08AF2818;
    return;
L_08AF2818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08AF2824u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08AF2824u) goto L_08AF2824;
    return;
L_08AF2824:
    ctx.gpr[31] = (0x08AF282Cu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF282Cu) goto L_08AF282C;
    return;
L_08AF282C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08AF2840u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 132u, 0x08818D20u>(ctx, &aot_mem) && ctx.pc == 0x08AF2840u) goto L_08AF2840;
    return;
L_08AF2840:
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
L_08AF2858:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2880u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2880u) goto L_08AF2880;
    return;
L_08AF2880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08AF288Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08AF288Cu) goto L_08AF288C;
    return;
L_08AF288C:
    ctx.gpr[31] = (0x08AF2894u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2894u) goto L_08AF2894;
    return;
L_08AF2894:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x08AF28A8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 132u, 0x08818D20u>(ctx, &aot_mem) && ctx.pc == 0x08AF28A8u) goto L_08AF28A8;
    return;
L_08AF28A8:
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
L_08AF28C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF28E8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF28E8u) goto L_08AF28E8;
    return;
L_08AF28E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08AF28F4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08AF28F4u) goto L_08AF28F4;
    return;
L_08AF28F4:
    ctx.gpr[31] = (0x08AF28FCu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF28FCu) goto L_08AF28FC;
    return;
L_08AF28FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 11u);
    ctx.gpr[31] = (0x08AF2910u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 132u, 0x08818D20u>(ctx, &aot_mem) && ctx.pc == 0x08AF2910u) goto L_08AF2910;
    return;
L_08AF2910:
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
L_08AF2928:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2950u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2950u) goto L_08AF2950;
    return;
L_08AF2950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08AF295Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08AF295Cu) goto L_08AF295C;
    return;
L_08AF295C:
    ctx.gpr[31] = (0x08AF2964u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2964u) goto L_08AF2964;
    return;
L_08AF2964:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x08AF2978u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 132u, 0x08818D20u>(ctx, &aot_mem) && ctx.pc == 0x08AF2978u) goto L_08AF2978;
    return;
L_08AF2978:
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
L_08AF2990:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF29B8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF29B8u) goto L_08AF29B8;
    return;
L_08AF29B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08AF29C4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08AF29C4u) goto L_08AF29C4;
    return;
L_08AF29C4:
    ctx.gpr[31] = (0x08AF29CCu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF29CCu) goto L_08AF29CC;
    return;
L_08AF29CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AF29E0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 132u, 0x08818D20u>(ctx, &aot_mem) && ctx.pc == 0x08AF29E0u) goto L_08AF29E0;
    return;
L_08AF29E0:
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
L_08AF29F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2A20u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2A20u) goto L_08AF2A20;
    return;
L_08AF2A20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08AF2A2Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08AF2A2Cu) goto L_08AF2A2C;
    return;
L_08AF2A2C:
    ctx.gpr[31] = (0x08AF2A34u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2A34u) goto L_08AF2A34;
    return;
L_08AF2A34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[31] = (0x08AF2A48u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 132u, 0x08818D20u>(ctx, &aot_mem) && ctx.pc == 0x08AF2A48u) goto L_08AF2A48;
    return;
L_08AF2A48:
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
L_08AF2A60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2A88u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2A88u) goto L_08AF2A88;
    return;
L_08AF2A88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08AF2A94u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08AF2A94u) goto L_08AF2A94;
    return;
L_08AF2A94:
    ctx.gpr[31] = (0x08AF2A9Cu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2A9Cu) goto L_08AF2A9C;
    return;
L_08AF2A9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 18u);
    ctx.gpr[31] = (0x08AF2AB0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 132u, 0x08818D20u>(ctx, &aot_mem) && ctx.pc == 0x08AF2AB0u) goto L_08AF2AB0;
    return;
L_08AF2AB0:
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
L_08AF2AC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2AF0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2AF0u) goto L_08AF2AF0;
    return;
L_08AF2AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[31] = (0x08AF2AFCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem) && ctx.pc == 0x08AF2AFCu) goto L_08AF2AFC;
    return;
L_08AF2AFC:
    ctx.gpr[31] = (0x08AF2B04u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2B04u) goto L_08AF2B04;
    return;
L_08AF2B04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 21u);
    ctx.gpr[31] = (0x08AF2B18u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 132u, 0x08818D20u>(ctx, &aot_mem) && ctx.pc == 0x08AF2B18u) goto L_08AF2B18;
    return;
L_08AF2B18:
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
L_08AF2B30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2B58u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2B58u) goto L_08AF2B58;
    return;
L_08AF2B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08AF2B64u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08AF2B64u) goto L_08AF2B64;
    return;
L_08AF2B64:
    ctx.gpr[31] = (0x08AF2B6Cu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2B6Cu) goto L_08AF2B6C;
    return;
L_08AF2B6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 22u);
    ctx.gpr[31] = (0x08AF2B80u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 132u, 0x08818D20u>(ctx, &aot_mem) && ctx.pc == 0x08AF2B80u) goto L_08AF2B80;
    return;
L_08AF2B80:
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
L_08AF2B98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2BD0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2BD0u) goto L_08AF2BD0;
    return;
L_08AF2BD0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08AF2BFC;
      }
      goto L_08AF2BF4;
    }
L_08AF2BF4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AF2BFC;
L_08AF2BFC:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08AF2C18;
    }
    goto L_08AF2C0C;
L_08AF2C0C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08AF2C18;
L_08AF2C18:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[22] = ctx.fpr[13] + ctx.fpr[24];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AF2C40u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2C40u) goto L_08AF2C40;
    return;
L_08AF2C40:
    ctx.fpr[26] = ctx.fpr[20] - ctx.fpr[26];
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08AF2C60;
      }
      goto L_08AF2C58;
    }
L_08AF2C58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF2C64;
      }
      goto L_08AF2C60;
    }
L_08AF2C60:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AF2C64;
L_08AF2C64:
    ctx.gpr[31] = (0x08AF2C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2C6Cu) goto L_08AF2C6C;
    return;
L_08AF2C6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 24u);
    ctx.gpr[31] = (0x08AF2C90u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 158u, 0x08818F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2C90u) goto L_08AF2C90;
    return;
L_08AF2C90:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2CB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2CECu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2CECu) goto L_08AF2CEC;
    return;
L_08AF2CEC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AF2D00u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2D00u) goto L_08AF2D00;
    return;
L_08AF2D00:
    ctx.gpr[31] = (0x08AF2D08u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2D08u) goto L_08AF2D08;
    return;
L_08AF2D08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 24u);
    ctx.gpr[31] = (0x08AF2D28u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 145u, 0x08818E30u>(ctx, &aot_mem) && ctx.pc == 0x08AF2D28u) goto L_08AF2D28;
    return;
L_08AF2D28:
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
L_08AF2D4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2D78u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2D78u) goto L_08AF2D78;
    return;
L_08AF2D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08AF2D84u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08AF2D84u) goto L_08AF2D84;
    return;
L_08AF2D84:
    ctx.gpr[31] = (0x08AF2D8Cu);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2D8Cu) goto L_08AF2D8C;
    return;
L_08AF2D8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF2DA0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 197u, 0x088192E0u>(ctx, &aot_mem) && ctx.pc == 0x08AF2DA0u) goto L_08AF2DA0;
    return;
L_08AF2DA0:
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
L_08AF2DBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2DDCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2DDCu) goto L_08AF2DDC;
    return;
L_08AF2DDC:
    ctx.gpr[31] = (0x08AF2DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2DE4u) goto L_08AF2DE4;
    return;
L_08AF2DE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF2DF4u);
    ctx.gpr[6] = (0u | 35u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 112u, 0x08818BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AF2DF4u) goto L_08AF2DF4;
    return;
L_08AF2DF4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2E08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2E28u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2E28u) goto L_08AF2E28;
    return;
L_08AF2E28:
    ctx.gpr[31] = (0x08AF2E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2E30u) goto L_08AF2E30;
    return;
L_08AF2E30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF2E40u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 112u, 0x08818BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AF2E40u) goto L_08AF2E40;
    return;
L_08AF2E40:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF2E54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2E7Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2E7Cu) goto L_08AF2E7C;
    return;
L_08AF2E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08AF2E88u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08AF2E88u) goto L_08AF2E88;
    return;
L_08AF2E88:
    ctx.gpr[31] = (0x08AF2E90u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2E90u) goto L_08AF2E90;
    return;
L_08AF2E90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 41u);
    ctx.gpr[31] = (0x08AF2EA4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 132u, 0x08818D20u>(ctx, &aot_mem) && ctx.pc == 0x08AF2EA4u) goto L_08AF2EA4;
    return;
L_08AF2EA4:
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
L_08AF2EBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2EE4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2EE4u) goto L_08AF2EE4;
    return;
L_08AF2EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08AF2EF0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08AF2EF0u) goto L_08AF2EF0;
    return;
L_08AF2EF0:
    ctx.gpr[31] = (0x08AF2EF8u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2EF8u) goto L_08AF2EF8;
    return;
L_08AF2EF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 13u);
    ctx.gpr[31] = (0x08AF2F0Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 132u, 0x08818D20u>(ctx, &aot_mem) && ctx.pc == 0x08AF2F0Cu) goto L_08AF2F0C;
    return;
L_08AF2F0C:
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
L_08AF2F24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2F4Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2F4Cu) goto L_08AF2F4C;
    return;
L_08AF2F4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08AF2F58u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08AF2F58u) goto L_08AF2F58;
    return;
L_08AF2F58:
    ctx.gpr[31] = (0x08AF2F60u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2F60u) goto L_08AF2F60;
    return;
L_08AF2F60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 46u);
    ctx.gpr[31] = (0x08AF2F74u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 132u, 0x08818D20u>(ctx, &aot_mem) && ctx.pc == 0x08AF2F74u) goto L_08AF2F74;
    return;
L_08AF2F74:
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
L_08AF2F8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF2FC0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF2FC0u) goto L_08AF2FC0;
    return;
L_08AF2FC0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AF2FD4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2FD4u) goto L_08AF2FD4;
    return;
L_08AF2FD4:
    ctx.gpr[31] = (0x08AF2FDCu);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF2FDCu) goto L_08AF2FDC;
    return;
L_08AF2FDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 49u);
    ctx.gpr[31] = (0x08AF2FFCu);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 145u, 0x08818E30u>(ctx, &aot_mem) && ctx.pc == 0x08AF2FFCu) goto L_08AF2FFC;
    return;
L_08AF2FFC:
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
L_08AF3020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF3048u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3048u) goto L_08AF3048;
    return;
L_08AF3048:
    ctx.gpr[31] = (0x08AF3050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3050u) goto L_08AF3050;
    return;
L_08AF3050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[4] << 16u);
    ctx.gpr[8] = (ctx.gpr[6] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF3078u);
    ctx.gpr[6] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 171u, 0x08819094u>(ctx, &aot_mem) && ctx.pc == 0x08AF3078u) goto L_08AF3078;
    return;
L_08AF3078:
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
L_08AF3090:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF30C4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF30C4u) goto L_08AF30C4;
    return;
L_08AF30C4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AF30D8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF30D8u) goto L_08AF30D8;
    return;
L_08AF30D8:
    ctx.gpr[31] = (0x08AF30E0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF30E0u) goto L_08AF30E0;
    return;
L_08AF30E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 25u);
    ctx.gpr[31] = (0x08AF3100u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 145u, 0x08818E30u>(ctx, &aot_mem) && ctx.pc == 0x08AF3100u) goto L_08AF3100;
    return;
L_08AF3100:
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
L_08AF3124:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF3144u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3144u) goto L_08AF3144;
    return;
L_08AF3144:
    ctx.gpr[31] = (0x08AF314Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF314Cu) goto L_08AF314C;
    return;
L_08AF314C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF315Cu);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 112u, 0x08818BD4u>(ctx, &aot_mem) && ctx.pc == 0x08AF315Cu) goto L_08AF315C;
    return;
L_08AF315C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3170:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08AF31A4u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF31A4u) goto L_08AF31A4;
    return;
L_08AF31A4:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[12])) && ctx.fpr[22] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AF31DC;
      }
      goto L_08AF31C4;
    }
L_08AF31C4:
    ctx.gpr[4] = (50042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF31EC;
      }
      goto L_08AF31DC;
    }
L_08AF31DC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AF31E8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF31E8u) goto L_08AF31E8;
    return;
L_08AF31E8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AF31EC;
L_08AF31EC:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29704));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_08AF3214;
    }
    goto L_08AF3204;
L_08AF3204:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AF3224;
      }
      goto L_08AF320C;
    }
L_08AF320C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_08AF3228;
      }
      goto L_08AF3214;
    }
L_08AF3214:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3224;
      }
      goto L_08AF321C;
    }
L_08AF321C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 4u);
      if (branch_taken) {
          goto L_08AF3228;
      }
      goto L_08AF3224;
    }
L_08AF3224:
    ctx.gpr[16] = (0u | 2u);
    goto L_08AF3228;
L_08AF3228:
    ctx.gpr[31] = (0x08AF3230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3230u) goto L_08AF3230;
    return;
L_08AF3230:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AF3258u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 211u, 0x088193FCu>(ctx, &aot_mem) && ctx.pc == 0x08AF3258u) goto L_08AF3258;
    return;
L_08AF3258:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF3260;
      }
      goto L_08AF3260;
    }
L_08AF3260:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3280:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF32A0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF32A0u) goto L_08AF32A0;
    return;
L_08AF32A0:
    ctx.gpr[31] = (0x08AF32A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF32A8u) goto L_08AF32A8;
    return;
L_08AF32A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[31] = (0x08AF32B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 225u, 0x0881951Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF32B4u) goto L_08AF32B4;
    return;
L_08AF32B4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF32C8:
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
    ctx.gpr[31] = (0x08AF32F8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF32F8u) goto L_08AF32F8;
    return;
L_08AF32F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08AF3304u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08AF3304u) goto L_08AF3304;
    return;
L_08AF3304:
    ctx.gpr[31] = (0x08AF330Cu);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF330Cu) goto L_08AF330C;
    return;
L_08AF330C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF331Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 72u, 0x08818918u>(ctx, &aot_mem) && ctx.pc == 0x08AF331Cu) goto L_08AF331C;
    return;
L_08AF331C:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF3348;
      }
      goto L_08AF3340;
    }
L_08AF3340:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF3390;
      }
      goto L_08AF3348;
    }
L_08AF3348:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF3374;
      }
      goto L_08AF3368;
    }
L_08AF3368:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF3390;
      }
      goto L_08AF3374;
    }
L_08AF3374:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3390;
      }
      goto L_08AF338C;
    }
L_08AF338C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AF3390;
L_08AF3390:
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
L_08AF33AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF33D4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF33D4u) goto L_08AF33D4;
    return;
L_08AF33D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08AF33E0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08AF33E0u) goto L_08AF33E0;
    return;
L_08AF33E0:
    ctx.gpr[31] = (0x08AF33E8u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF33E8u) goto L_08AF33E8;
    return;
L_08AF33E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF33F8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 84u, 0x08818A24u>(ctx, &aot_mem) && ctx.pc == 0x08AF33F8u) goto L_08AF33F8;
    return;
L_08AF33F8:
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
L_08AF3410:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF3430u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3430u) goto L_08AF3430;
    return;
L_08AF3430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08AF343Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08AF343Cu) goto L_08AF343C;
    return;
L_08AF343C:
    ctx.gpr[31] = (0x08AF3444u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3444u) goto L_08AF3444;
    return;
L_08AF3444:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF3450u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 92u, 0x08818AA8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3450u) goto L_08AF3450;
    return;
L_08AF3450:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3464:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AF34A0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF34A0u) goto L_08AF34A0;
    return;
L_08AF34A0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AF34B4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08AF34B4u) goto L_08AF34B4;
    return;
L_08AF34B4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08AF34D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 674u, 0x088638D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF34D0u) goto L_08AF34D0;
    return;
L_08AF34D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF34F4;
      }
      goto L_08AF34EC;
    }
L_08AF34EC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AF353C;
      }
      goto L_08AF34F4;
    }
L_08AF34F4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF3520;
      }
      goto L_08AF3514;
    }
L_08AF3514:
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF353C;
      }
      goto L_08AF3520;
    }
L_08AF3520:
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF353C;
      }
      goto L_08AF3538;
    }
L_08AF3538:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AF353C;
L_08AF353C:
    ctx.gpr[2] = (0u | 0u);
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
L_08AF3560:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF3590u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3590u) goto L_08AF3590;
    return;
L_08AF3590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AF35A0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 719u, 0x08863B54u>(ctx, &aot_mem) && ctx.pc == 0x08AF35A0u) goto L_08AF35A0;
    return;
L_08AF35A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF35C4;
      }
      goto L_08AF35BC;
    }
L_08AF35BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF360C;
      }
      goto L_08AF35C4;
    }
L_08AF35C4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF35F0;
      }
      goto L_08AF35E4;
    }
L_08AF35E4:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF360C;
      }
      goto L_08AF35F0;
    }
L_08AF35F0:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF360C;
      }
      goto L_08AF3608;
    }
L_08AF3608:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AF360C;
L_08AF360C:
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
L_08AF3628:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF3648u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3648u) goto L_08AF3648;
    return;
L_08AF3648:
    ctx.gpr[31] = (0x08AF3650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3650u) goto L_08AF3650;
    return;
L_08AF3650:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[31] = (0x08AF365Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 80u, 0x088189B4u>(ctx, &aot_mem) && ctx.pc == 0x08AF365Cu) goto L_08AF365C;
    return;
L_08AF365C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3670:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[21] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF36A8u);
    ctx.gpr[7] = (ctx.gpr[21] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF36A8u) goto L_08AF36A8;
    return;
L_08AF36A8:
    ctx.gpr[31] = (0x08AF36B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF36B0u) goto L_08AF36B0;
    return;
L_08AF36B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(260));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF3738;
      }
      goto L_08AF36E0;
    }
L_08AF36E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AF36F0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 96u, 0x08818B00u>(ctx, &aot_mem) && ctx.pc == 0x08AF36F0u) goto L_08AF36F0;
    return;
L_08AF36F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3728;
      }
      goto L_08AF3710;
    }
L_08AF3710:
    ctx.gpr[31] = (0x08AF3718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08AF3718u) goto L_08AF3718;
    return;
L_08AF3718:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3728;
      }
      goto L_08AF3720;
    }
L_08AF3720:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF3738;
      }
      goto L_08AF3728;
    }
L_08AF3728:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF36E0;
      }
      goto L_08AF3738;
    }
L_08AF3738:
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
          goto L_08AF3764;
      }
      goto L_08AF375C;
    }
L_08AF375C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08AF37AC;
      }
      goto L_08AF3764;
    }
L_08AF3764:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF3790;
      }
      goto L_08AF3784;
    }
L_08AF3784:
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF37AC;
      }
      goto L_08AF3790;
    }
L_08AF3790:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF37AC;
      }
      goto L_08AF37A8;
    }
L_08AF37A8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AF37AC;
L_08AF37AC:
    ctx.gpr[2] = (0u | 0u);
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
L_08AF37D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF37E4u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 920u, 0x08867D0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF37E4u) goto L_08AF37E4;
    return;
L_08AF37E4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF37F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF3804u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 36u, 0x088681F8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3804u) goto L_08AF3804;
    return;
L_08AF3804:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3814:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF3824u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 110u, 0x088686D4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3824u) goto L_08AF3824;
    return;
L_08AF3824:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3834:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF3844u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 180u, 0x08868B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3844u) goto L_08AF3844;
    return;
L_08AF3844:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3854:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF3884u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3884u) goto L_08AF3884;
    return;
L_08AF3884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08AF3890u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08AF3890u) goto L_08AF3890;
    return;
L_08AF3890:
    ctx.gpr[31] = (0x08AF3898u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3898u) goto L_08AF3898;
    return;
L_08AF3898:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AF38B0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 106u, 0x08818B84u>(ctx, &aot_mem) && ctx.pc == 0x08AF38B0u) goto L_08AF38B0;
    return;
L_08AF38B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF38C0;
      }
      goto L_08AF38B8;
    }
L_08AF38B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF38C4;
      }
      goto L_08AF38C0;
    }
L_08AF38C0:
    ctx.gpr[4] = (0u | 0u);
    goto L_08AF38C4;
L_08AF38C4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF38E8;
      }
      goto L_08AF38E0;
    }
L_08AF38E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF3930;
      }
      goto L_08AF38E8;
    }
L_08AF38E8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF3914;
      }
      goto L_08AF3908;
    }
L_08AF3908:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF3930;
      }
      goto L_08AF3914;
    }
L_08AF3914:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3930;
      }
      goto L_08AF392C;
    }
L_08AF392C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AF3930;
L_08AF3930:
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
L_08AF394C:
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
    ctx.gpr[31] = (0x08AF397Cu);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF397Cu) goto L_08AF397C;
    return;
L_08AF397C:
    ctx.gpr[31] = (0x08AF3984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3984u) goto L_08AF3984;
    return;
L_08AF3984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(260));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF39B4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08AF39B4u) goto L_08AF39B4;
    return;
L_08AF39B4:
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
L_08AF39D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF39F8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF39F8u) goto L_08AF39F8;
    return;
L_08AF39F8:
    ctx.gpr[31] = (0x08AF3A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3A00u) goto L_08AF3A00;
    return;
L_08AF3A00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[31] = (0x08AF3A0Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 244u, 0x08819688u>(ctx, &aot_mem) && ctx.pc == 0x08AF3A0Cu) goto L_08AF3A0C;
    return;
L_08AF3A0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF3A30;
      }
      goto L_08AF3A28;
    }
L_08AF3A28:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF3A78;
      }
      goto L_08AF3A30;
    }
L_08AF3A30:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF3A5C;
      }
      goto L_08AF3A50;
    }
L_08AF3A50:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AF3A78;
      }
      goto L_08AF3A5C;
    }
L_08AF3A5C:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3A78;
      }
      goto L_08AF3A74;
    }
L_08AF3A74:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AF3A78;
L_08AF3A78:
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
L_08AF3A90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF3AB8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3AB8u) goto L_08AF3AB8;
    return;
L_08AF3AB8:
    ctx.gpr[31] = (0x08AF3AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3AC0u) goto L_08AF3AC0;
    return;
L_08AF3AC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF3AE0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 235u, 0x088195BCu>(ctx, &aot_mem) && ctx.pc == 0x08AF3AE0u) goto L_08AF3AE0;
    return;
L_08AF3AE0:
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
L_08AF3AF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF3B20u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3B20u) goto L_08AF3B20;
    return;
L_08AF3B20:
    ctx.gpr[31] = (0x08AF3B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3B28u) goto L_08AF3B28;
    return;
L_08AF3B28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AF3B48u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 235u, 0x088195BCu>(ctx, &aot_mem) && ctx.pc == 0x08AF3B48u) goto L_08AF3B48;
    return;
L_08AF3B48:
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
L_08AF3B60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF3B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08AF3B70u) goto L_08AF3B70;
    return;
L_08AF3B70:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3B88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF3BB0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3BB0u) goto L_08AF3BB0;
    return;
L_08AF3BB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF3BD0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3BD0u) goto L_08AF3BD0;
    return;
L_08AF3BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3BFC;
      }
      goto L_08AF3BDC;
    }
L_08AF3BDC:
    ctx.gpr[4] = (2240u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08AF3BF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25888));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 914u, 0x08AA3BE4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3BF4u) goto L_08AF3BF4;
    return;
L_08AF3BF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3C14;
      }
      goto L_08AF3BFC;
    }
L_08AF3BFC:
    ctx.gpr[4] = (2240u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AF3C14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25888));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 914u, 0x08AA3BE4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3C14u) goto L_08AF3C14;
    return;
L_08AF3C14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF3C1C;
      }
      goto L_08AF3C1C;
    }
L_08AF3C1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3C30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AF3C44u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3C44u) goto L_08AF3C44;
    return;
L_08AF3C44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[4] = (2240u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08AF3C58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25888));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 933u, 0x08AA3D1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3C58u) goto L_08AF3C58;
    return;
L_08AF3C58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF3C60;
      }
      goto L_08AF3C60;
    }
L_08AF3C60:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3C6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AF3C94u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3C94u) goto L_08AF3C94;
    return;
L_08AF3C94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF3CB4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3CB4u) goto L_08AF3CB4;
    return;
L_08AF3CB4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (2240u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08AF3CE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25888));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 949u, 0x08AA3E10u>(ctx, &aot_mem) && ctx.pc == 0x08AF3CE0u) goto L_08AF3CE0;
    return;
L_08AF3CE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF3CE8;
      }
      goto L_08AF3CE8;
    }
L_08AF3CE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3CFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AF3D10u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3D10u) goto L_08AF3D10;
    return;
L_08AF3D10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[4] = (2240u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08AF3D24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25888));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 938u, 0x08AA3D70u>(ctx, &aot_mem) && ctx.pc == 0x08AF3D24u) goto L_08AF3D24;
    return;
L_08AF3D24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF3D2C;
      }
      goto L_08AF3D2C;
    }
L_08AF3D2C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3D38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[6] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(29704), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF3D58u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08AF3D58u) goto L_08AF3D58;
    return;
L_08AF3D58:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3D68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AF3D88u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3D88u) goto L_08AF3D88;
    return;
L_08AF3D88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (2240u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25888));
      if (branch_taken) {
          goto L_08AF3DA4;
      }
      goto L_08AF3D98;
    }
L_08AF3D98:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(333), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AF3DA8;
      }
      goto L_08AF3DA4;
    }
L_08AF3DA4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(333), static_cast<std::uint8_t>(0u));
    goto L_08AF3DA8;
L_08AF3DA8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF3DBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF3DECu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3DECu) goto L_08AF3DEC;
    return;
L_08AF3DEC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] - ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF3E0Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3E0Cu) goto L_08AF3E0C;
    return;
L_08AF3E0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF3E20;
      }
      goto L_08AF3E18;
    }
L_08AF3E18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08AF3E24;
      }
      goto L_08AF3E20;
    }
L_08AF3E20:
    ctx.gpr[16] = (0u | 0u);
    goto L_08AF3E24;
L_08AF3E24:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2240u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AF3E40u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25888));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3E40u) goto L_08AF3E40;
    return;
L_08AF3E40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF3E54;
    }
    goto L_08AF3E4C;
L_08AF3E4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF3E58;
      }
      goto L_08AF3E54;
    }
L_08AF3E54:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF3E58;
L_08AF3E58:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AF3E6Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 914u, 0x08AA3BE4u>(ctx, &aot_mem) && ctx.pc == 0x08AF3E6Cu) goto L_08AF3E6C;
    return;
L_08AF3E6C:
    ctx.gpr[2] = (0u | 0u);
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
L_08AF3E8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AF3EC0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3EC0u) goto L_08AF3EC0;
    return;
L_08AF3EC0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] - ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF3EE0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3EE0u) goto L_08AF3EE0;
    return;
L_08AF3EE0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2240u << 16u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF3F04u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25888));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3F04u) goto L_08AF3F04;
    return;
L_08AF3F04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF3F18;
    }
    goto L_08AF3F10;
L_08AF3F10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF3F1C;
      }
      goto L_08AF3F18;
    }
L_08AF3F18:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF3F1C;
L_08AF3F1C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08AF3F40u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 949u, 0x08AA3E10u>(ctx, &aot_mem) && ctx.pc == 0x08AF3F40u) goto L_08AF3F40;
    return;
L_08AF3F40:
    ctx.gpr[2] = (0u | 0u);
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
L_08AF3F60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AF3FA4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 367u, 0x088623D0u>(ctx, &aot_mem) && ctx.pc == 0x08AF3FA4u) goto L_08AF3FA4;
    return;
L_08AF3FA4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[19] = (ctx.gpr[2] - ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AF3FC0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3FC0u) goto L_08AF3FC0;
    return;
L_08AF3FC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[17] = (2240u << 16u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AF3FE4u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25888));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08AF3FE4u) goto L_08AF3FE4;
    return;
L_08AF3FE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08AF3FF8;
    }
    goto L_08AF3FF0;
L_08AF3FF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF3FFC;
      }
      goto L_08AF3FF8;
    }
L_08AF3FF8:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08AF3FFC;
L_08AF3FFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08AF4000u; return;
}

void recomp_unit_0187(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0187_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_187(Runtime &runtime) {
    runtime.register_generated_unit(187u, 0x08AF0000u, 16384u, &recomp_unit_0187, &recomp_unit_0187_entry);
    runtime.register_function(0x08AF0000u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0010u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0040u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0064u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0090u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF009Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF00F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0114u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0144u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0168u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF01F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0200u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0208u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF020Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0218u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0228u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0278u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0280u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0288u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0298u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF02A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF02B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF02C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF02D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF02F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF02FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0318u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF032Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0338u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF035Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0384u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF03D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF03F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0420u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF049Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF04F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0504u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0518u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0538u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0568u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0574u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0580u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0594u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF05F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF060Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF062Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF065Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0668u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0674u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0688u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF06F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0704u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0730u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF073Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0748u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0750u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0754u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0758u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0770u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF077Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0784u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0788u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0794u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF07E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF080Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0838u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0844u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0850u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0858u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF085Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0860u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0878u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0884u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF088Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0890u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF089Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF08BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF08F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0914u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0944u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0950u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF095Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0964u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0968u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF096Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0980u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF098Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0994u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0998u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF09F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A04u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0A9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AA8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AB8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0ADCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AE4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AE8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AF4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0AFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B78u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0B9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0BA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0BC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0BE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C3Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C74u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C7Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0C9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0CA8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0CB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0CB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0CC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0CCCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0CD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0CECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D3Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D4Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D7Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0D98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DA8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DE8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0DFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E74u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E78u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0E9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0EA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0EA8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0EB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0F98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0FDCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0FECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF0FF8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1004u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF100Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1010u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1014u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF102Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1038u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1040u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1044u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1050u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF10A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF10B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF10BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF10FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF110Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1134u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1154u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1160u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF116Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1174u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1178u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF117Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1194u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF11FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1204u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF120Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1218u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1220u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1224u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF122Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF123Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1258u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1268u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1274u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF127Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1280u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF128Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF12F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1300u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1308u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF130Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1314u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1328u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1334u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF133Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1340u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF134Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1358u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1360u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1364u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1378u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1394u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF13FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1404u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1418u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1424u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF142Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1430u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF143Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1448u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1450u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1454u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1468u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1484u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF14BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF14C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF14D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF14DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF14E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF14E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF14FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1508u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1510u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1514u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1520u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1538u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1544u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF154Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1554u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF155Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1578u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1580u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF15A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF15CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1604u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1610u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF161Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1624u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1628u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF162Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1644u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1650u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1658u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF165Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1668u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1680u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF168Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1694u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF169Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF16ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1714u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1740u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF174Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1758u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1760u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1764u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1768u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1780u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF178Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1794u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1798u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF17E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1804u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1830u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF183Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1848u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1850u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1854u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1858u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1870u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF187Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1884u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1888u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1894u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF18B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF18E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF190Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1938u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1944u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1950u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1958u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF195Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1960u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1978u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1984u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF198Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1990u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF199Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF19BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF19F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A14u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A64u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A74u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1A98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AC4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1AE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B4Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B64u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B78u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1B90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BD8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BDCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BE4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1BFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C14u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C3Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1C9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CCCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1CF8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D04u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D2Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D34u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1D8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1DC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1DCCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1DD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1DD8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1DF8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1E74u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EA0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EB8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1ECCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1ED8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EE4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1EF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F3Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F64u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F7Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1F94u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FA0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF1FE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2004u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2034u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2040u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF204Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2054u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2058u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF205Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2074u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2080u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2088u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF208Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2098u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF20FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2104u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF210Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2114u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2118u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2120u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2128u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2130u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2138u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2140u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2148u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2150u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF215Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2164u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF216Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2174u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF217Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2184u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2190u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF219Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF21A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF21ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF21B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF21BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF21C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF21C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF21ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF222Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2238u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2244u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2250u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2258u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF225Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2264u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2278u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2284u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF228Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2290u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF229Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF22ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF22F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2300u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2308u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2318u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2324u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2330u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2340u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2354u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2370u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF237Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2398u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF23FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF243Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2464u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2470u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2478u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2480u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2494u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF24ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF24B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF24C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF24DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF24FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2504u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2510u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2524u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2544u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF254Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF255Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2570u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2590u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2598u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF25F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2610u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2628u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2634u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2638u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2640u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2660u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2684u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF26F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2704u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF272Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2744u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF274Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2750u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2758u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF277Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF27F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2818u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2824u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF282Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2840u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2858u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2880u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF288Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2894u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF28FCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2910u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2928u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2950u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF295Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2964u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2978u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2990u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29CCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF29F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A2Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A34u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A94u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2A9Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2AB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2AC8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2AF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2AFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B04u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B64u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B80u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2B98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BF4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2BFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C64u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2C90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CB8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2CECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D4Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D78u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D84u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2D8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2DA0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2DBCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2DDCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2DE4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2DF4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E08u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E7Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2E90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EBCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EE4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2EF8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F4Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F74u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2F8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FD4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FDCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF2FFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3020u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3048u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3050u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3078u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3090u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30D8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF30E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3100u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3124u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3144u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF314Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF315Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3170u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31A4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31DCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF31ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3204u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF320Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3214u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF321Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3224u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3228u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3230u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3258u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3260u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3280u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32C8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF32F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3304u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF330Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF331Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3340u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3348u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3368u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3374u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF338Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3390u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF33F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3410u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3430u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF343Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3444u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3450u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3464u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF34A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF34B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF34D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF34ECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF34F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3514u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3520u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3538u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF353Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3560u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3590u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF35A0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF35BCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF35C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF35E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF35F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3608u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF360Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3628u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3648u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3650u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF365Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3670u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF36A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF36B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF36E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF36F0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3710u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3718u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3720u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3728u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3738u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF375Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3764u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3784u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3790u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF37A8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF37ACu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF37D4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF37E4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF37F4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3804u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3814u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3824u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3834u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3844u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3854u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3884u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3890u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3898u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF38B0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF38B8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF38C0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF38C4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF38E0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF38E8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3908u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3914u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF392Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3930u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF394Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF397Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3984u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF39B4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF39D0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF39F8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A00u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A50u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A5Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A74u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A78u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3A90u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3AB8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3AC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3AE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3AF8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B28u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B48u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B70u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3B88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3BB0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3BD0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3BDCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3BF4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3BFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C14u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C30u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C44u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3C94u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3CB4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3CE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3CE8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3CFCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D2Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D38u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D68u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D88u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3D98u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3DA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3DA8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3DBCu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3DECu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E0Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E20u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E24u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E4Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E54u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E58u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E6Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3E8Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3EC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3EE0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F04u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F10u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F18u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F1Cu, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F40u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3F60u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3FA4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3FC0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3FE4u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3FF0u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3FF8u, &recomp_unit_0187, "recomp_unit_0187");
    runtime.register_function(0x08AF3FFCu, &recomp_unit_0187, "recomp_unit_0187");
}
} // namespace psprecomp
