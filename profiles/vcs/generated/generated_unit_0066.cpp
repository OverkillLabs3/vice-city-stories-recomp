#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0066[4090] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 13, 0, 14, 0, 15, 0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0,
    0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 26, 0, 0, 27, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0,
    33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 36, 0, 37, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 41, 0, 0, 0, 0,
    0, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56,
    0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 63, 0,
    0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 68, 0, 0, 69, 0,
    0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0,
    0, 75, 0, 76, 0, 0, 0, 77, 0, 78, 0, 79, 0, 80, 0, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 84, 0, 85, 0, 86, 0, 87,
    0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 99, 0, 0, 100, 0, 101, 102, 0, 0, 0,
    0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0,
    0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 114, 0, 115, 0, 0, 116, 0,
    0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0,
    0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 139,
    0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0,
    0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170,
    0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 184, 0, 185, 0, 186, 0, 0, 187, 0,
    0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 196, 0, 197, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0,
    202, 0, 203, 0, 0, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 0, 0, 209, 0, 210, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0,
    0, 0, 213, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0,
    0, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 226, 0, 0, 227, 0, 228, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 242,
    0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 0, 254, 0, 255, 0, 0, 0, 0, 256, 0, 257, 0, 0,
    258, 0, 259, 0, 0, 0, 0, 260, 0, 261, 0, 0, 262, 0, 263, 0, 0, 0, 0, 264, 265, 0, 266, 0, 267, 0, 0, 268, 0, 0, 0, 0,
    0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0,
    279, 0, 280, 0, 0, 281, 0, 282, 0, 283, 0, 284, 0, 285, 0, 286, 287, 0, 288, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291,
    0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 304, 0, 305,
    0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 311, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 316, 0, 317, 318, 0, 319, 0, 0, 0, 320,
    0, 321, 0, 322, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 329,
    0, 330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0,
    340, 0, 341, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0,
    0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0,
    0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0, 0,
    0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 365, 0, 0,
    0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 370, 0, 0, 371, 0, 0, 0, 372, 0, 0,
    373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 378, 0, 379, 380, 0, 0, 0, 0,
    381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 384, 0, 385, 386, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0,
    0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 399, 0, 400, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 405, 0, 0, 406, 0, 407, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0,
    0, 411, 0, 412, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 426, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0,
    0, 0, 0, 0, 430, 0, 431, 0, 432, 0, 0, 433, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0,
    0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 441, 0, 0, 442, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445,
    0, 446, 0, 0, 447, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0,
    452, 0, 453, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 457, 458, 0, 459, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 462,
    0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 465, 0, 466, 0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 0, 470, 0, 0, 471, 0, 472, 0,
    0, 473, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 482, 0, 483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0,
    0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 486, 0, 487, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 496, 0, 497, 0, 498, 499, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0,
    0, 504, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 511, 512, 0, 513,
    0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 516, 0, 0, 0, 517, 0, 518, 0, 519, 0, 0, 0, 0, 0, 520, 0, 521, 0, 522, 0, 0, 523,
    0, 0, 524, 0, 0, 525, 0, 526, 0, 527, 0, 0, 0, 528, 0, 529, 0, 0, 0, 530, 0, 531, 0, 0, 0, 532, 0, 533, 0, 534, 0, 535,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0,
    0, 0, 539, 0, 540, 0, 541, 0, 542, 0, 0, 0, 543, 0, 0, 544, 0, 0, 545, 0, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0, 0, 0,
    549, 0, 0, 550, 0, 0, 551, 0, 0, 0, 552, 0, 0, 553, 0, 0, 554, 555, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557,
    0, 0, 0, 0, 558, 0, 559, 0, 0, 560, 0, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 0,
    0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 571, 0, 0, 0, 0, 0,
    572, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0,
    0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0, 579, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 585, 0, 586, 0, 587, 0, 588, 0,
    0, 0, 0, 0, 0, 0, 589, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 593, 0, 0, 0, 0, 594,
    0, 0, 595, 0, 596, 0, 597, 0, 598, 0, 599, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 602, 0, 0, 0, 603, 0, 0, 604, 0, 605, 0,
    0, 0, 606, 0, 0, 0, 607, 0, 0, 608, 0, 0, 0, 609, 0, 0, 610, 0, 611, 0, 0, 0, 612, 0, 0, 0, 613, 0, 0, 614, 0, 0,
    0, 615, 0, 0, 616, 0, 617, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 620, 0, 0, 0, 621, 0, 0, 622, 0, 623, 0, 0, 0, 624, 0,
    0, 0, 625, 0, 0, 626, 0, 0, 0, 627, 0, 0, 628, 0, 629, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 632, 0, 0, 0, 633, 0, 0,
    634, 0, 635, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 639, 0, 0, 0,
    640, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 643, 0, 644, 0, 645, 0, 646, 0, 0, 0, 0, 0,
    0, 647, 0, 0, 0, 648, 649, 0, 0, 650, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 656, 0, 657, 0, 658, 0,
    0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 661, 0, 662, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 665, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 670, 0, 0,
    0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 673, 0, 674, 0, 0, 0, 0, 0, 675, 0, 676, 0, 677, 678, 0, 0,
    679, 0, 680, 0, 681, 0, 682, 0, 683, 0, 0, 0, 0, 684, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 0,
    688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 690, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 694,
    0, 0, 0, 695, 0, 696, 0, 697, 0, 0, 698, 0, 0, 0, 0, 699, 0, 700, 0, 0, 701, 0, 0, 702, 0, 0, 0, 0, 703, 0, 704, 0,
    0, 705, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 708, 0, 0, 0,
    0, 709, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0,
    0, 0, 0, 0, 0, 712, 0, 0, 713, 0, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0,
    0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 719, 0, 720, 721, 0, 0, 722, 723, 0, 0, 0, 724,
    725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 729, 730,
    0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 733, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0, 0,
    0, 0, 0, 737, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 741, 0, 0,
    0, 742, 0, 0, 743, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 747, 0, 0,
    0, 748, 0, 0, 749, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 752, 0, 0, 753, 0, 0, 754, 0, 0, 0, 755,
    0, 756, 0, 757, 0, 758, 0, 759, 0, 0, 0, 760, 761, 762, 0, 763, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 765, 0, 0, 0, 0, 0,
    766, 0, 0, 0, 767, 0, 768, 0, 769, 0, 770, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 775, 0, 776, 777, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 780, 0, 781, 0, 782, 0, 0, 0, 783, 0, 784, 0, 785, 0, 0, 0, 0, 786, 0, 787, 0, 788, 0, 0, 789, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 791, 0, 792, 0, 0, 793, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 795, 0, 0, 796, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 798, 0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 800, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 803, 0, 804, 0, 805, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 808, 0, 0, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 811, 0, 812, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 814, 0, 815, 0, 0, 0, 0, 0, 0, 0, 816, 0, 817, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 818, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 821, 0, 822,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 823, 0, 824, 0, 0, 825, 0, 826, 0, 827, 828, 0, 829, 0, 0, 0, 0, 0, 0, 830, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 0, 832, 0, 0,
    0, 0, 833, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 0,
    0, 0, 0, 0, 0, 836, 0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 839, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 0, 0, 841, 0, 0, 842, 0, 0, 0, 0, 0, 843, 0, 0, 844, 0, 0, 0, 0, 0, 845,
    0, 846, 0, 847, 0, 848, 0, 849, 0, 0, 0, 0, 0, 850, 0, 851, 0, 852, 0, 0, 853, 0, 0, 0, 0, 854, 0, 0, 855, 0, 0, 856,
    0, 857, 0, 858, 0, 859, 0, 860, 0, 0, 861, 0, 862, 863, 0, 0, 864, 0, 0, 0, 0, 865, 0, 0, 866, 0, 0, 867, 0, 868, 0, 869,
    0, 870, 0, 871, 0, 0, 872, 0, 873, 874, 0, 0, 875, 0, 0, 0, 0, 0, 876, 0, 0, 877, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 878, 0, 0, 0, 0, 0, 0, 0, 879, 0, 0, 0, 880, 0, 0, 0, 0, 0, 881, 0, 0, 882, 0, 0,
    0, 883, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 884, 0, 0, 0, 885, 0, 886, 0, 887, 0, 888, 0, 0, 0, 0,
    0, 0, 0, 0, 889, 0, 890, 0, 0, 0, 891, 0, 892, 0, 893, 0, 894, 0, 895, 896, 0, 897, 0, 0, 0, 898,
};
void recomp_unit_0066_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0890C000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0066[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0890C000;
    case 2u: goto L_0890C010;
    case 3u: goto L_0890C030;
    case 4u: goto L_0890C038;
    case 5u: goto L_0890C040;
    case 6u: goto L_0890C050;
    case 7u: goto L_0890C074;
    case 8u: goto L_0890C098;
    case 9u: goto L_0890C0A0;
    case 10u: goto L_0890C0C8;
    case 11u: goto L_0890C0CC;
    case 12u: goto L_0890C0DC;
    case 13u: goto L_0890C108;
    case 14u: goto L_0890C110;
    case 15u: goto L_0890C118;
    case 16u: goto L_0890C120;
    case 17u: goto L_0890C12C;
    case 18u: goto L_0890C148;
    case 19u: goto L_0890C158;
    case 20u: goto L_0890C160;
    case 21u: goto L_0890C168;
    case 22u: goto L_0890C170;
    case 23u: goto L_0890C178;
    case 24u: goto L_0890C190;
    case 25u: goto L_0890C1A0;
    case 26u: goto L_0890C1A8;
    case 27u: goto L_0890C1B4;
    case 28u: goto L_0890C1BC;
    case 29u: goto L_0890C1CC;
    case 30u: goto L_0890C1D4;
    case 31u: goto L_0890C1E4;
    case 32u: goto L_0890C1F4;
    case 33u: goto L_0890C200;
    case 34u: goto L_0890C218;
    case 35u: goto L_0890C22C;
    case 36u: goto L_0890C238;
    case 37u: goto L_0890C240;
    case 38u: goto L_0890C248;
    case 39u: goto L_0890C258;
    case 40u: goto L_0890C264;
    case 41u: goto L_0890C26C;
    case 42u: goto L_0890C288;
    case 43u: goto L_0890C298;
    case 44u: goto L_0890C2A4;
    case 45u: goto L_0890C2AC;
    case 46u: goto L_0890C2C8;
    case 47u: goto L_0890C2DC;
    case 48u: goto L_0890C2F0;
    case 49u: goto L_0890C308;
    case 50u: goto L_0890C314;
    case 51u: goto L_0890C324;
    case 52u: goto L_0890C32C;
    case 53u: goto L_0890C338;
    case 54u: goto L_0890C354;
    case 55u: goto L_0890C370;
    case 56u: goto L_0890C37C;
    case 57u: goto L_0890C394;
    case 58u: goto L_0890C3AC;
    case 59u: goto L_0890C3B4;
    case 60u: goto L_0890C3C4;
    case 61u: goto L_0890C3DC;
    case 62u: goto L_0890C3E4;
    case 63u: goto L_0890C3F8;
    case 64u: goto L_0890C41C;
    case 65u: goto L_0890C42C;
    case 66u: goto L_0890C458;
    case 67u: goto L_0890C464;
    case 68u: goto L_0890C46C;
    case 69u: goto L_0890C478;
    case 70u: goto L_0890C484;
    case 71u: goto L_0890C4A0;
    case 72u: goto L_0890C4D0;
    case 73u: goto L_0890C4EC;
    case 74u: goto L_0890C4F4;
    case 75u: goto L_0890C504;
    case 76u: goto L_0890C50C;
    case 77u: goto L_0890C51C;
    case 78u: goto L_0890C524;
    case 79u: goto L_0890C52C;
    case 80u: goto L_0890C534;
    case 81u: goto L_0890C544;
    case 82u: goto L_0890C550;
    case 83u: goto L_0890C55C;
    case 84u: goto L_0890C564;
    case 85u: goto L_0890C56C;
    case 86u: goto L_0890C574;
    case 87u: goto L_0890C57C;
    case 88u: goto L_0890C584;
    case 89u: goto L_0890C58C;
    case 90u: goto L_0890C594;
    case 91u: goto L_0890C59C;
    case 92u: goto L_0890C5A4;
    case 93u: goto L_0890C5AC;
    case 94u: goto L_0890C5B4;
    case 95u: goto L_0890C5BC;
    case 96u: goto L_0890C5C4;
    case 97u: goto L_0890C5CC;
    case 98u: goto L_0890C5D4;
    case 99u: goto L_0890C5D8;
    case 100u: goto L_0890C5E4;
    case 101u: goto L_0890C5EC;
    case 102u: goto L_0890C5F0;
    case 103u: goto L_0890C604;
    case 104u: goto L_0890C63C;
    case 105u: goto L_0890C644;
    case 106u: goto L_0890C64C;
    case 107u: goto L_0890C65C;
    case 108u: goto L_0890C674;
    case 109u: goto L_0890C68C;
    case 110u: goto L_0890C6B4;
    case 111u: goto L_0890C6C0;
    case 112u: goto L_0890C6D0;
    case 113u: goto L_0890C6DC;
    case 114u: goto L_0890C6E4;
    case 115u: goto L_0890C6EC;
    case 116u: goto L_0890C6F8;
    case 117u: goto L_0890C704;
    case 118u: goto L_0890C710;
    case 119u: goto L_0890C728;
    case 120u: goto L_0890C734;
    case 121u: goto L_0890C73C;
    case 122u: goto L_0890C744;
    case 123u: goto L_0890C74C;
    case 124u: goto L_0890C754;
    case 125u: goto L_0890C75C;
    case 126u: goto L_0890C764;
    case 127u: goto L_0890C774;
    case 128u: goto L_0890C798;
    case 129u: goto L_0890C7AC;
    case 130u: goto L_0890C7B4;
    case 131u: goto L_0890C7C0;
    case 132u: goto L_0890C7C8;
    case 133u: goto L_0890C7D0;
    case 134u: goto L_0890C7D8;
    case 135u: goto L_0890C7E0;
    case 136u: goto L_0890C7E8;
    case 137u: goto L_0890C7F0;
    case 138u: goto L_0890C7F8;
    case 139u: goto L_0890C7FC;
    case 140u: goto L_0890C80C;
    case 141u: goto L_0890C818;
    case 142u: goto L_0890C820;
    case 143u: goto L_0890C828;
    case 144u: goto L_0890C830;
    case 145u: goto L_0890C838;
    case 146u: goto L_0890C840;
    case 147u: goto L_0890C848;
    case 148u: goto L_0890C84C;
    case 149u: goto L_0890C854;
    case 150u: goto L_0890C888;
    case 151u: goto L_0890C898;
    case 152u: goto L_0890C8B8;
    case 153u: goto L_0890C8C0;
    case 154u: goto L_0890C8D8;
    case 155u: goto L_0890C8E4;
    case 156u: goto L_0890C900;
    case 157u: goto L_0890C90C;
    case 158u: goto L_0890C928;
    case 159u: goto L_0890C930;
    case 160u: goto L_0890C944;
    case 161u: goto L_0890C950;
    case 162u: goto L_0890C960;
    case 163u: goto L_0890C96C;
    case 164u: goto L_0890C988;
    case 165u: goto L_0890C998;
    case 166u: goto L_0890C9A4;
    case 167u: goto L_0890C9AC;
    case 168u: goto L_0890C9C0;
    case 169u: goto L_0890C9E4;
    case 170u: goto L_0890C9FC;
    case 171u: goto L_0890CA0C;
    case 172u: goto L_0890CA18;
    case 173u: goto L_0890CA20;
    case 174u: goto L_0890CA2C;
    case 175u: goto L_0890CA38;
    case 176u: goto L_0890CA44;
    case 177u: goto L_0890CA4C;
    case 178u: goto L_0890CA60;
    case 179u: goto L_0890CA8C;
    case 180u: goto L_0890CA9C;
    case 181u: goto L_0890CAA8;
    case 182u: goto L_0890CAC8;
    case 183u: goto L_0890CAD4;
    case 184u: goto L_0890CADC;
    case 185u: goto L_0890CAE4;
    case 186u: goto L_0890CAEC;
    case 187u: goto L_0890CAF8;
    case 188u: goto L_0890CB14;
    case 189u: goto L_0890CB24;
    case 190u: goto L_0890CB3C;
    case 191u: goto L_0890CB4C;
    case 192u: goto L_0890CB64;
    case 193u: goto L_0890CB80;
    case 194u: goto L_0890CB98;
    case 195u: goto L_0890CBA0;
    case 196u: goto L_0890CBB0;
    case 197u: goto L_0890CBB8;
    case 198u: goto L_0890CBC0;
    case 199u: goto L_0890CBC8;
    case 200u: goto L_0890CBD8;
    case 201u: goto L_0890CBF4;
    case 202u: goto L_0890CC00;
    case 203u: goto L_0890CC08;
    case 204u: goto L_0890CC18;
    case 205u: goto L_0890CC20;
    case 206u: goto L_0890CC28;
    case 207u: goto L_0890CC30;
    case 208u: goto L_0890CC38;
    case 209u: goto L_0890CC48;
    case 210u: goto L_0890CC50;
    case 211u: goto L_0890CC58;
    case 212u: goto L_0890CC6C;
    case 213u: goto L_0890CC88;
    case 214u: goto L_0890CC90;
    case 215u: goto L_0890CCA0;
    case 216u: goto L_0890CCB4;
    case 217u: goto L_0890CCC4;
    case 218u: goto L_0890CCCC;
    case 219u: goto L_0890CCF4;
    case 220u: goto L_0890CD08;
    case 221u: goto L_0890CD18;
    case 222u: goto L_0890CD24;
    case 223u: goto L_0890CD2C;
    case 224u: goto L_0890CD3C;
    case 225u: goto L_0890CD48;
    case 226u: goto L_0890CD50;
    case 227u: goto L_0890CD5C;
    case 228u: goto L_0890CD64;
    case 229u: goto L_0890CD78;
    case 230u: goto L_0890CD98;
    case 231u: goto L_0890CDE0;
    case 232u: goto L_0890CDF4;
    case 233u: goto L_0890CE20;
    case 234u: goto L_0890CE28;
    case 235u: goto L_0890CE30;
    case 236u: goto L_0890CE38;
    case 237u: goto L_0890CE40;
    case 238u: goto L_0890CE48;
    case 239u: goto L_0890CE50;
    case 240u: goto L_0890CE60;
    case 241u: goto L_0890CE70;
    case 242u: goto L_0890CE7C;
    case 243u: goto L_0890CE88;
    case 244u: goto L_0890CE90;
    case 245u: goto L_0890CEAC;
    case 246u: goto L_0890CECC;
    case 247u: goto L_0890CED8;
    case 248u: goto L_0890CEF4;
    case 249u: goto L_0890CF14;
    case 250u: goto L_0890CF20;
    case 251u: goto L_0890CF28;
    case 252u: goto L_0890CF3C;
    case 253u: goto L_0890CF44;
    case 254u: goto L_0890CF50;
    case 255u: goto L_0890CF58;
    case 256u: goto L_0890CF6C;
    case 257u: goto L_0890CF74;
    case 258u: goto L_0890CF80;
    case 259u: goto L_0890CF88;
    case 260u: goto L_0890CF9C;
    case 261u: goto L_0890CFA4;
    case 262u: goto L_0890CFB0;
    case 263u: goto L_0890CFB8;
    case 264u: goto L_0890CFCC;
    case 265u: goto L_0890CFD0;
    case 266u: goto L_0890CFD8;
    case 267u: goto L_0890CFE0;
    case 268u: goto L_0890CFEC;
    case 269u: goto L_0890D004;
    case 270u: goto L_0890D020;
    case 271u: goto L_0890D030;
    case 272u: goto L_0890D05C;
    case 273u: goto L_0890D08C;
    case 274u: goto L_0890D0A0;
    case 275u: goto L_0890D0D8;
    case 276u: goto L_0890D0E0;
    case 277u: goto L_0890D170;
    case 278u: goto L_0890D178;
    case 279u: goto L_0890D180;
    case 280u: goto L_0890D188;
    case 281u: goto L_0890D194;
    case 282u: goto L_0890D19C;
    case 283u: goto L_0890D1A4;
    case 284u: goto L_0890D1AC;
    case 285u: goto L_0890D1B4;
    case 286u: goto L_0890D1BC;
    case 287u: goto L_0890D1C0;
    case 288u: goto L_0890D1C8;
    case 289u: goto L_0890D1D4;
    case 290u: goto L_0890D1E8;
    case 291u: goto L_0890D1FC;
    case 292u: goto L_0890D204;
    case 293u: goto L_0890D20C;
    case 294u: goto L_0890D228;
    case 295u: goto L_0890D230;
    case 296u: goto L_0890D2A0;
    case 297u: goto L_0890D2BC;
    case 298u: goto L_0890D2D4;
    case 299u: goto L_0890D2E8;
    case 300u: goto L_0890D318;
    case 301u: goto L_0890D324;
    case 302u: goto L_0890D354;
    case 303u: goto L_0890D36C;
    case 304u: goto L_0890D374;
    case 305u: goto L_0890D37C;
    case 306u: goto L_0890D384;
    case 307u: goto L_0890D394;
    case 308u: goto L_0890D3A4;
    case 309u: goto L_0890D3D4;
    case 310u: goto L_0890D3DC;
    case 311u: goto L_0890D408;
    case 312u: goto L_0890D41C;
    case 313u: goto L_0890D424;
    case 314u: goto L_0890D43C;
    case 315u: goto L_0890D44C;
    case 316u: goto L_0890D458;
    case 317u: goto L_0890D460;
    case 318u: goto L_0890D464;
    case 319u: goto L_0890D46C;
    case 320u: goto L_0890D47C;
    case 321u: goto L_0890D484;
    case 322u: goto L_0890D48C;
    case 323u: goto L_0890D490;
    case 324u: goto L_0890D498;
    case 325u: goto L_0890D4C8;
    case 326u: goto L_0890D4D0;
    case 327u: goto L_0890D4E0;
    case 328u: goto L_0890D4F4;
    case 329u: goto L_0890D4FC;
    case 330u: goto L_0890D504;
    case 331u: goto L_0890D510;
    case 332u: goto L_0890D524;
    case 333u: goto L_0890D544;
    case 334u: goto L_0890D554;
    case 335u: goto L_0890D55C;
    case 336u: goto L_0890D5A0;
    case 337u: goto L_0890D5C0;
    case 338u: goto L_0890D5D0;
    case 339u: goto L_0890D5E8;
    case 340u: goto L_0890D600;
    case 341u: goto L_0890D608;
    case 342u: goto L_0890D61C;
    case 343u: goto L_0890D628;
    case 344u: goto L_0890D654;
    case 345u: goto L_0890D670;
    case 346u: goto L_0890D678;
    case 347u: goto L_0890D688;
    case 348u: goto L_0890D6A0;
    case 349u: goto L_0890D6A8;
    case 350u: goto L_0890D6B0;
    case 351u: goto L_0890D6F4;
    case 352u: goto L_0890D708;
    case 353u: goto L_0890D720;
    case 354u: goto L_0890D734;
    case 355u: goto L_0890D740;
    case 356u: goto L_0890D75C;
    case 357u: goto L_0890D768;
    case 358u: goto L_0890D774;
    case 359u: goto L_0890D794;
    case 360u: goto L_0890D7A0;
    case 361u: goto L_0890D7B8;
    case 362u: goto L_0890D7C0;
    case 363u: goto L_0890D7E0;
    case 364u: goto L_0890D7E8;
    case 365u: goto L_0890D7F4;
    case 366u: goto L_0890D80C;
    case 367u: goto L_0890D81C;
    case 368u: goto L_0890D848;
    case 369u: goto L_0890D850;
    case 370u: goto L_0890D858;
    case 371u: goto L_0890D864;
    case 372u: goto L_0890D874;
    case 373u: goto L_0890D880;
    case 374u: goto L_0890D894;
    case 375u: goto L_0890D8B0;
    case 376u: goto L_0890D8C8;
    case 377u: goto L_0890D8D8;
    case 378u: goto L_0890D8E0;
    case 379u: goto L_0890D8E8;
    case 380u: goto L_0890D8EC;
    case 381u: goto L_0890D900;
    case 382u: goto L_0890D918;
    case 383u: goto L_0890D928;
    case 384u: goto L_0890D930;
    case 385u: goto L_0890D938;
    case 386u: goto L_0890D93C;
    case 387u: goto L_0890D94C;
    case 388u: goto L_0890D960;
    case 389u: goto L_0890D970;
    case 390u: goto L_0890D990;
    case 391u: goto L_0890D998;
    case 392u: goto L_0890D9B4;
    case 393u: goto L_0890D9C0;
    case 394u: goto L_0890D9CC;
    case 395u: goto L_0890D9E8;
    case 396u: goto L_0890DA20;
    case 397u: goto L_0890DA2C;
    case 398u: goto L_0890DA38;
    case 399u: goto L_0890DA40;
    case 400u: goto L_0890DA48;
    case 401u: goto L_0890DA54;
    case 402u: goto L_0890DA5C;
    case 403u: goto L_0890DA8C;
    case 404u: goto L_0890DA98;
    case 405u: goto L_0890DAA8;
    case 406u: goto L_0890DAB4;
    case 407u: goto L_0890DABC;
    case 408u: goto L_0890DAC8;
    case 409u: goto L_0890DAD0;
    case 410u: goto L_0890DAEC;
    case 411u: goto L_0890DB04;
    case 412u: goto L_0890DB0C;
    case 413u: goto L_0890DB24;
    case 414u: goto L_0890DB2C;
    case 415u: goto L_0890DB38;
    case 416u: goto L_0890DB44;
    case 417u: goto L_0890DB5C;
    case 418u: goto L_0890DBA8;
    case 419u: goto L_0890DBB8;
    case 420u: goto L_0890DBCC;
    case 421u: goto L_0890DBD8;
    case 422u: goto L_0890DC00;
    case 423u: goto L_0890DC10;
    case 424u: goto L_0890DC1C;
    case 425u: goto L_0890DC34;
    case 426u: goto L_0890DC3C;
    case 427u: goto L_0890DC44;
    case 428u: goto L_0890DC50;
    case 429u: goto L_0890DC74;
    case 430u: goto L_0890DC90;
    case 431u: goto L_0890DC98;
    case 432u: goto L_0890DCA0;
    case 433u: goto L_0890DCAC;
    case 434u: goto L_0890DCB8;
    case 435u: goto L_0890DCC8;
    case 436u: goto L_0890DCE4;
    case 437u: goto L_0890DCF0;
    case 438u: goto L_0890DD04;
    case 439u: goto L_0890DD14;
    case 440u: goto L_0890DD28;
    case 441u: goto L_0890DD30;
    case 442u: goto L_0890DD3C;
    case 443u: goto L_0890DD44;
    case 444u: goto L_0890DD58;
    case 445u: goto L_0890DD7C;
    case 446u: goto L_0890DD84;
    case 447u: goto L_0890DD90;
    case 448u: goto L_0890DD98;
    case 449u: goto L_0890DDAC;
    case 450u: goto L_0890DDD0;
    case 451u: goto L_0890DDE0;
    case 452u: goto L_0890DE00;
    case 453u: goto L_0890DE08;
    case 454u: goto L_0890DE14;
    case 455u: goto L_0890DE20;
    case 456u: goto L_0890DE38;
    case 457u: goto L_0890DE44;
    case 458u: goto L_0890DE48;
    case 459u: goto L_0890DE50;
    case 460u: goto L_0890DE58;
    case 461u: goto L_0890DE60;
    case 462u: goto L_0890DE7C;
    case 463u: goto L_0890DE94;
    case 464u: goto L_0890DE9C;
    case 465u: goto L_0890DEAC;
    case 466u: goto L_0890DEB4;
    case 467u: goto L_0890DEBC;
    case 468u: goto L_0890DEC8;
    case 469u: goto L_0890DED4;
    case 470u: goto L_0890DEE4;
    case 471u: goto L_0890DEF0;
    case 472u: goto L_0890DEF8;
    case 473u: goto L_0890DF04;
    case 474u: goto L_0890DF10;
    case 475u: goto L_0890DF20;
    case 476u: goto L_0890DF30;
    case 477u: goto L_0890DF4C;
    case 478u: goto L_0890DF58;
    case 479u: goto L_0890DF64;
    case 480u: goto L_0890DFB0;
    case 481u: goto L_0890DFB8;
    case 482u: goto L_0890DFC0;
    case 483u: goto L_0890DFC8;
    case 484u: goto L_0890DFE8;
    case 485u: goto L_0890E008;
    case 486u: goto L_0890E088;
    case 487u: goto L_0890E090;
    case 488u: goto L_0890E098;
    case 489u: goto L_0890E110;
    case 490u: goto L_0890E134;
    case 491u: goto L_0890E150;
    case 492u: goto L_0890E190;
    case 493u: goto L_0890E198;
    case 494u: goto L_0890E1B8;
    case 495u: goto L_0890E1D4;
    case 496u: goto L_0890E210;
    case 497u: goto L_0890E218;
    case 498u: goto L_0890E220;
    case 499u: goto L_0890E224;
    case 500u: goto L_0890E244;
    case 501u: goto L_0890E254;
    case 502u: goto L_0890E268;
    case 503u: goto L_0890E270;
    case 504u: goto L_0890E284;
    case 505u: goto L_0890E28C;
    case 506u: goto L_0890E2A4;
    case 507u: goto L_0890E2B0;
    case 508u: goto L_0890E2C0;
    case 509u: goto L_0890E2D8;
    case 510u: goto L_0890E2E0;
    case 511u: goto L_0890E2F0;
    case 512u: goto L_0890E2F4;
    case 513u: goto L_0890E2FC;
    case 514u: goto L_0890E310;
    case 515u: goto L_0890E318;
    case 516u: goto L_0890E328;
    case 517u: goto L_0890E338;
    case 518u: goto L_0890E340;
    case 519u: goto L_0890E348;
    case 520u: goto L_0890E360;
    case 521u: goto L_0890E368;
    case 522u: goto L_0890E370;
    case 523u: goto L_0890E37C;
    case 524u: goto L_0890E388;
    case 525u: goto L_0890E394;
    case 526u: goto L_0890E39C;
    case 527u: goto L_0890E3A4;
    case 528u: goto L_0890E3B4;
    case 529u: goto L_0890E3BC;
    case 530u: goto L_0890E3CC;
    case 531u: goto L_0890E3D4;
    case 532u: goto L_0890E3E4;
    case 533u: goto L_0890E3EC;
    case 534u: goto L_0890E3F4;
    case 535u: goto L_0890E3FC;
    case 536u: goto L_0890E42C;
    case 537u: goto L_0890E430;
    case 538u: goto L_0890E468;
    case 539u: goto L_0890E488;
    case 540u: goto L_0890E490;
    case 541u: goto L_0890E498;
    case 542u: goto L_0890E4A0;
    case 543u: goto L_0890E4B0;
    case 544u: goto L_0890E4BC;
    case 545u: goto L_0890E4C8;
    case 546u: goto L_0890E4D8;
    case 547u: goto L_0890E4E4;
    case 548u: goto L_0890E4F0;
    case 549u: goto L_0890E500;
    case 550u: goto L_0890E50C;
    case 551u: goto L_0890E518;
    case 552u: goto L_0890E528;
    case 553u: goto L_0890E534;
    case 554u: goto L_0890E540;
    case 555u: goto L_0890E544;
    case 556u: goto L_0890E568;
    case 557u: goto L_0890E57C;
    case 558u: goto L_0890E590;
    case 559u: goto L_0890E598;
    case 560u: goto L_0890E5A4;
    case 561u: goto L_0890E5B8;
    case 562u: goto L_0890E5CC;
    case 563u: goto L_0890E5DC;
    case 564u: goto L_0890E5EC;
    case 565u: goto L_0890E608;
    case 566u: goto L_0890E620;
    case 567u: goto L_0890E628;
    case 568u: goto L_0890E634;
    case 569u: goto L_0890E648;
    case 570u: goto L_0890E65C;
    case 571u: goto L_0890E668;
    case 572u: goto L_0890E680;
    case 573u: goto L_0890E69C;
    case 574u: goto L_0890E6F0;
    case 575u: goto L_0890E710;
    case 576u: goto L_0890E724;
    case 577u: goto L_0890E734;
    case 578u: goto L_0890E74C;
    case 579u: goto L_0890E754;
    case 580u: goto L_0890E768;
    case 581u: goto L_0890E798;
    case 582u: goto L_0890E7AC;
    case 583u: goto L_0890E7C4;
    case 584u: goto L_0890E7D4;
    case 585u: goto L_0890E7E0;
    case 586u: goto L_0890E7E8;
    case 587u: goto L_0890E7F0;
    case 588u: goto L_0890E7F8;
    case 589u: goto L_0890E818;
    case 590u: goto L_0890E824;
    case 591u: goto L_0890E858;
    case 592u: goto L_0890E860;
    case 593u: goto L_0890E868;
    case 594u: goto L_0890E87C;
    case 595u: goto L_0890E888;
    case 596u: goto L_0890E890;
    case 597u: goto L_0890E898;
    case 598u: goto L_0890E8A0;
    case 599u: goto L_0890E8A8;
    case 600u: goto L_0890E8B8;
    case 601u: goto L_0890E8C8;
    case 602u: goto L_0890E8D4;
    case 603u: goto L_0890E8E4;
    case 604u: goto L_0890E8F0;
    case 605u: goto L_0890E8F8;
    case 606u: goto L_0890E908;
    case 607u: goto L_0890E918;
    case 608u: goto L_0890E924;
    case 609u: goto L_0890E934;
    case 610u: goto L_0890E940;
    case 611u: goto L_0890E948;
    case 612u: goto L_0890E958;
    case 613u: goto L_0890E968;
    case 614u: goto L_0890E974;
    case 615u: goto L_0890E984;
    case 616u: goto L_0890E990;
    case 617u: goto L_0890E998;
    case 618u: goto L_0890E9A8;
    case 619u: goto L_0890E9B8;
    case 620u: goto L_0890E9C4;
    case 621u: goto L_0890E9D4;
    case 622u: goto L_0890E9E0;
    case 623u: goto L_0890E9E8;
    case 624u: goto L_0890E9F8;
    case 625u: goto L_0890EA08;
    case 626u: goto L_0890EA14;
    case 627u: goto L_0890EA24;
    case 628u: goto L_0890EA30;
    case 629u: goto L_0890EA38;
    case 630u: goto L_0890EA48;
    case 631u: goto L_0890EA58;
    case 632u: goto L_0890EA64;
    case 633u: goto L_0890EA74;
    case 634u: goto L_0890EA80;
    case 635u: goto L_0890EA88;
    case 636u: goto L_0890EAA4;
    case 637u: goto L_0890EAD0;
    case 638u: goto L_0890EB58;
    case 639u: goto L_0890EB70;
    case 640u: goto L_0890EB80;
    case 641u: goto L_0890EBA4;
    case 642u: goto L_0890EBC4;
    case 643u: goto L_0890EBD0;
    case 644u: goto L_0890EBD8;
    case 645u: goto L_0890EBE0;
    case 646u: goto L_0890EBE8;
    case 647u: goto L_0890EC04;
    case 648u: goto L_0890EC14;
    case 649u: goto L_0890EC18;
    case 650u: goto L_0890EC24;
    case 651u: goto L_0890EC30;
    case 652u: goto L_0890EC7C;
    case 653u: goto L_0890ECB0;
    case 654u: goto L_0890ECBC;
    case 655u: goto L_0890ECE0;
    case 656u: goto L_0890ECE8;
    case 657u: goto L_0890ECF0;
    case 658u: goto L_0890ECF8;
    case 659u: goto L_0890ED0C;
    case 660u: goto L_0890ED2C;
    case 661u: goto L_0890ED38;
    case 662u: goto L_0890ED40;
    case 663u: goto L_0890ED48;
    case 664u: goto L_0890ED60;
    case 665u: goto L_0890ED78;
    case 666u: goto L_0890EDA0;
    case 667u: goto L_0890EDB0;
    case 668u: goto L_0890EDC8;
    case 669u: goto L_0890EDEC;
    case 670u: goto L_0890EDF4;
    case 671u: goto L_0890EE04;
    case 672u: goto L_0890EE34;
    case 673u: goto L_0890EE40;
    case 674u: goto L_0890EE48;
    case 675u: goto L_0890EE60;
    case 676u: goto L_0890EE68;
    case 677u: goto L_0890EE70;
    case 678u: goto L_0890EE74;
    case 679u: goto L_0890EE80;
    case 680u: goto L_0890EE88;
    case 681u: goto L_0890EE90;
    case 682u: goto L_0890EE98;
    case 683u: goto L_0890EEA0;
    case 684u: goto L_0890EEB4;
    case 685u: goto L_0890EEC4;
    case 686u: goto L_0890EEDC;
    case 687u: goto L_0890EEEC;
    case 688u: goto L_0890EF00;
    case 689u: goto L_0890EF34;
    case 690u: goto L_0890EF40;
    case 691u: goto L_0890EF4C;
    case 692u: goto L_0890EF6C;
    case 693u: goto L_0890EF74;
    case 694u: goto L_0890EF7C;
    case 695u: goto L_0890EF8C;
    case 696u: goto L_0890EF94;
    case 697u: goto L_0890EF9C;
    case 698u: goto L_0890EFA8;
    case 699u: goto L_0890EFBC;
    case 700u: goto L_0890EFC4;
    case 701u: goto L_0890EFD0;
    case 702u: goto L_0890EFDC;
    case 703u: goto L_0890EFF0;
    case 704u: goto L_0890EFF8;
    case 705u: goto L_0890F004;
    case 706u: goto L_0890F00C;
    case 707u: goto L_0890F064;
    case 708u: goto L_0890F070;
    case 709u: goto L_0890F084;
    case 710u: goto L_0890F090;
    case 711u: goto L_0890F0F4;
    case 712u: goto L_0890F114;
    case 713u: goto L_0890F120;
    case 714u: goto L_0890F134;
    case 715u: goto L_0890F148;
    case 716u: goto L_0890F16C;
    case 717u: goto L_0890F188;
    case 718u: goto L_0890F1C0;
    case 719u: goto L_0890F1D0;
    case 720u: goto L_0890F1D8;
    case 721u: goto L_0890F1DC;
    case 722u: goto L_0890F1E8;
    case 723u: goto L_0890F1EC;
    case 724u: goto L_0890F1FC;
    case 725u: goto L_0890F200;
    case 726u: goto L_0890F23C;
    case 727u: goto L_0890F24C;
    case 728u: goto L_0890F26C;
    case 729u: goto L_0890F278;
    case 730u: goto L_0890F27C;
    case 731u: goto L_0890F28C;
    case 732u: goto L_0890F2A8;
    case 733u: goto L_0890F2B8;
    case 734u: goto L_0890F2C8;
    case 735u: goto L_0890F2DC;
    case 736u: goto L_0890F2F0;
    case 737u: goto L_0890F30C;
    case 738u: goto L_0890F314;
    case 739u: goto L_0890F33C;
    case 740u: goto L_0890F368;
    case 741u: goto L_0890F374;
    case 742u: goto L_0890F384;
    case 743u: goto L_0890F390;
    case 744u: goto L_0890F39C;
    case 745u: goto L_0890F3BC;
    case 746u: goto L_0890F3E8;
    case 747u: goto L_0890F3F4;
    case 748u: goto L_0890F404;
    case 749u: goto L_0890F410;
    case 750u: goto L_0890F41C;
    case 751u: goto L_0890F43C;
    case 752u: goto L_0890F454;
    case 753u: goto L_0890F460;
    case 754u: goto L_0890F46C;
    case 755u: goto L_0890F47C;
    case 756u: goto L_0890F484;
    case 757u: goto L_0890F48C;
    case 758u: goto L_0890F494;
    case 759u: goto L_0890F49C;
    case 760u: goto L_0890F4AC;
    case 761u: goto L_0890F4B0;
    case 762u: goto L_0890F4B4;
    case 763u: goto L_0890F4BC;
    case 764u: goto L_0890F4D8;
    case 765u: goto L_0890F4E8;
    case 766u: goto L_0890F500;
    case 767u: goto L_0890F510;
    case 768u: goto L_0890F518;
    case 769u: goto L_0890F520;
    case 770u: goto L_0890F528;
    case 771u: goto L_0890F530;
    case 772u: goto L_0890F554;
    case 773u: goto L_0890F5A0;
    case 774u: goto L_0890F620;
    case 775u: goto L_0890F628;
    case 776u: goto L_0890F630;
    case 777u: goto L_0890F634;
    case 778u: goto L_0890F644;
    case 779u: goto L_0890F660;
    case 780u: goto L_0890F68C;
    case 781u: goto L_0890F694;
    case 782u: goto L_0890F69C;
    case 783u: goto L_0890F6AC;
    case 784u: goto L_0890F6B4;
    case 785u: goto L_0890F6BC;
    case 786u: goto L_0890F6D0;
    case 787u: goto L_0890F6D8;
    case 788u: goto L_0890F6E0;
    case 789u: goto L_0890F6EC;
    case 790u: goto L_0890F71C;
    case 791u: goto L_0890F728;
    case 792u: goto L_0890F730;
    case 793u: goto L_0890F73C;
    case 794u: goto L_0890F748;
    case 795u: goto L_0890F794;
    case 796u: goto L_0890F7A0;
    case 797u: goto L_0890F7BC;
    case 798u: goto L_0890F7CC;
    case 799u: goto L_0890F7E0;
    case 800u: goto L_0890F820;
    case 801u: goto L_0890F828;
    case 802u: goto L_0890F850;
    case 803u: goto L_0890F888;
    case 804u: goto L_0890F890;
    case 805u: goto L_0890F898;
    case 806u: goto L_0890F8AC;
    case 807u: goto L_0890F8D8;
    case 808u: goto L_0890F908;
    case 809u: goto L_0890F924;
    case 810u: goto L_0890F95C;
    case 811u: goto L_0890F964;
    case 812u: goto L_0890F96C;
    case 813u: goto L_0890F994;
    case 814u: goto L_0890F9B0;
    case 815u: goto L_0890F9B8;
    case 816u: goto L_0890F9D8;
    case 817u: goto L_0890F9E0;
    case 818u: goto L_0890FA0C;
    case 819u: goto L_0890FA3C;
    case 820u: goto L_0890FA68;
    case 821u: goto L_0890FA74;
    case 822u: goto L_0890FA7C;
    case 823u: goto L_0890FAAC;
    case 824u: goto L_0890FAB4;
    case 825u: goto L_0890FAC0;
    case 826u: goto L_0890FAC8;
    case 827u: goto L_0890FAD0;
    case 828u: goto L_0890FAD4;
    case 829u: goto L_0890FADC;
    case 830u: goto L_0890FAF8;
    case 831u: goto L_0890FB68;
    case 832u: goto L_0890FB74;
    case 833u: goto L_0890FB88;
    case 834u: goto L_0890FB9C;
    case 835u: goto L_0890FBF4;
    case 836u: goto L_0890FC14;
    case 837u: goto L_0890FC24;
    case 838u: goto L_0890FC40;
    case 839u: goto L_0890FC60;
    case 840u: goto L_0890FC94;
    case 841u: goto L_0890FCB4;
    case 842u: goto L_0890FCC0;
    case 843u: goto L_0890FCD8;
    case 844u: goto L_0890FCE4;
    case 845u: goto L_0890FCFC;
    case 846u: goto L_0890FD04;
    case 847u: goto L_0890FD0C;
    case 848u: goto L_0890FD14;
    case 849u: goto L_0890FD1C;
    case 850u: goto L_0890FD34;
    case 851u: goto L_0890FD3C;
    case 852u: goto L_0890FD44;
    case 853u: goto L_0890FD50;
    case 854u: goto L_0890FD64;
    case 855u: goto L_0890FD70;
    case 856u: goto L_0890FD7C;
    case 857u: goto L_0890FD84;
    case 858u: goto L_0890FD8C;
    case 859u: goto L_0890FD94;
    case 860u: goto L_0890FD9C;
    case 861u: goto L_0890FDA8;
    case 862u: goto L_0890FDB0;
    case 863u: goto L_0890FDB4;
    case 864u: goto L_0890FDC0;
    case 865u: goto L_0890FDD4;
    case 866u: goto L_0890FDE0;
    case 867u: goto L_0890FDEC;
    case 868u: goto L_0890FDF4;
    case 869u: goto L_0890FDFC;
    case 870u: goto L_0890FE04;
    case 871u: goto L_0890FE0C;
    case 872u: goto L_0890FE18;
    case 873u: goto L_0890FE20;
    case 874u: goto L_0890FE24;
    case 875u: goto L_0890FE30;
    case 876u: goto L_0890FE48;
    case 877u: goto L_0890FE54;
    case 878u: goto L_0890FEA0;
    case 879u: goto L_0890FEC0;
    case 880u: goto L_0890FED0;
    case 881u: goto L_0890FEE8;
    case 882u: goto L_0890FEF4;
    case 883u: goto L_0890FF04;
    case 884u: goto L_0890FF44;
    case 885u: goto L_0890FF54;
    case 886u: goto L_0890FF5C;
    case 887u: goto L_0890FF64;
    case 888u: goto L_0890FF6C;
    case 889u: goto L_0890FF90;
    case 890u: goto L_0890FF98;
    case 891u: goto L_0890FFA8;
    case 892u: goto L_0890FFB0;
    case 893u: goto L_0890FFB8;
    case 894u: goto L_0890FFC0;
    case 895u: goto L_0890FFC8;
    case 896u: goto L_0890FFCC;
    case 897u: goto L_0890FFD4;
    case 898u: goto L_0890FFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0890C000:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_0890C030;
      }
      goto L_0890C010;
    }
L_0890C010:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0890C050;
      }
      goto L_0890C030;
    }
L_0890C030:
    ctx.gpr[31] = (0x0890C038u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x0890C038u) goto L_0890C038;
    return;
L_0890C038:
    ctx.gpr[31] = (0x0890C040u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x0890C040u) goto L_0890C040;
    return;
L_0890C040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1352), ctx.gpr[4]);
    goto L_0890C050;
L_0890C050:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890C074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C0C8;
      }
      goto L_0890C098;
    }
L_0890C098:
    ctx.gpr[31] = (0x0890C0A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x0890C0A0u) goto L_0890C0A0;
    return;
L_0890C0A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1924))))));
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23472));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1924), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0890C0CC;
      }
      goto L_0890C0C8;
    }
L_0890C0C8:
    ctx.gpr[2] = (0u | 0u);
    goto L_0890C0CC;
L_0890C0CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890C0DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C120;
      }
      goto L_0890C108;
    }
L_0890C108:
    ctx.gpr[31] = (0x0890C110u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 332u, 0x0890932Cu>(ctx, &aot_mem) && ctx.pc == 0x0890C110u) goto L_0890C110;
    return;
L_0890C110:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C120;
      }
      goto L_0890C118;
    }
L_0890C118:
    ctx.gpr[31] = (0x0890C120u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x0890C120u) goto L_0890C120;
    return;
L_0890C120:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1716)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C160;
      }
      goto L_0890C12C;
    }
L_0890C12C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C160;
      }
      goto L_0890C148;
    }
L_0890C148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890C170;
      }
      goto L_0890C158;
    }
L_0890C158:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C1BC;
      }
      goto L_0890C160;
    }
L_0890C160:
    ctx.gpr[31] = (0x0890C168u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890C354;
L_0890C168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C338;
      }
      goto L_0890C170;
    }
L_0890C170:
    ctx.gpr[31] = (0x0890C178u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890C354;
L_0890C178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1740), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C1B4;
      }
      goto L_0890C190;
    }
L_0890C190:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_0890C1A8;
      }
      goto L_0890C1A0;
    }
L_0890C1A0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890C1B4;
      }
      goto L_0890C1A8;
    }
L_0890C1A8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0890C1B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 108u, 0x089387ACu>(ctx, &aot_mem) && ctx.pc == 0x0890C1B4u) goto L_0890C1B4;
    return;
L_0890C1B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C338;
      }
      goto L_0890C1BC;
    }
L_0890C1BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C240;
      }
      goto L_0890C1CC;
    }
L_0890C1CC:
    ctx.gpr[31] = (0x0890C1D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0890C1D4u) goto L_0890C1D4;
    return;
L_0890C1D4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 512 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C22C;
      }
      goto L_0890C1E4;
    }
L_0890C1E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890C1F4u);
    ctx.gpr[6] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0890C1F4u) goto L_0890C1F4;
    return;
L_0890C1F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C218;
      }
      goto L_0890C200;
    }
L_0890C200:
    ctx.gpr[5] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_0890C218;
L_0890C218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0890C308;
      }
      goto L_0890C22C;
    }
L_0890C22C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890C238u);
    ctx.gpr[5] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x0890C238u) goto L_0890C238;
    return;
L_0890C238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C308;
      }
      goto L_0890C240;
    }
L_0890C240:
    ctx.gpr[31] = (0x0890C248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0890C248u) goto L_0890C248;
    return;
L_0890C248:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C288;
      }
      goto L_0890C258;
    }
L_0890C258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0890C264u);
    ctx.gpr[5] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 211u, 0x0886D4F4u>(ctx, &aot_mem) && ctx.pc == 0x0890C264u) goto L_0890C264;
    return;
L_0890C264:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890C288;
      }
      goto L_0890C26C;
    }
L_0890C26C:
    ctx.gpr[8] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0890C288u);
    ctx.gpr[7] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0890C288u) goto L_0890C288;
    return;
L_0890C288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890C308;
      }
      goto L_0890C298;
    }
L_0890C298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0890C2A4u);
    ctx.gpr[5] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 211u, 0x0886D4F4u>(ctx, &aot_mem) && ctx.pc == 0x0890C2A4u) goto L_0890C2A4;
    return;
L_0890C2A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890C308;
      }
      goto L_0890C2AC;
    }
L_0890C2AC:
    ctx.gpr[8] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0890C2C8u);
    ctx.gpr[7] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0890C2C8u) goto L_0890C2C8;
    return;
L_0890C2C8:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0890C2DCu);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x0890C2DCu) goto L_0890C2DC;
    return;
L_0890C2DC:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x0890C2F0u);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem) && ctx.pc == 0x0890C2F0u) goto L_0890C2F0;
    return;
L_0890C2F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    ctx.gpr[31] = (0x0890C308u);
    ctx.gpr[5] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x0890C308u) goto L_0890C308;
    return;
L_0890C308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1740)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C338;
      }
      goto L_0890C314;
    }
L_0890C314:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C338;
      }
      goto L_0890C324;
    }
L_0890C324:
    ctx.gpr[31] = (0x0890C32Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890C354;
L_0890C32C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1740), ctx.gpr[4]);
    goto L_0890C338;
L_0890C338:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890C354:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890C370u);
    ctx.gpr[6] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0890C370u) goto L_0890C370;
    return;
L_0890C370:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C394;
      }
      goto L_0890C37C;
    }
L_0890C37C:
    ctx.gpr[5] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_0890C394;
L_0890C394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x0890C3ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x0890C3ACu) goto L_0890C3AC;
    return;
L_0890C3AC:
    ctx.gpr[31] = (0x0890C3B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0890C3B4u) goto L_0890C3B4;
    return;
L_0890C3B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890C41C;
      }
      goto L_0890C3C4;
    }
L_0890C3C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 8192u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[5]);
    ctx.gpr[31] = (0x0890C3DCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x0890C3DCu) goto L_0890C3DC;
    return;
L_0890C3DC:
    ctx.gpr[31] = (0x0890C3E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0890C3E4u) goto L_0890C3E4;
    return;
L_0890C3E4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20236)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20240)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0890C3F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0890C3F8u) goto L_0890C3F8;
    return;
L_0890C3F8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x0890C41Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x0890C41Cu) goto L_0890C41C;
    return;
L_0890C41C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890C42C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[8] = (0u | 20u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0890C46C;
      }
      goto L_0890C458;
    }
L_0890C458:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0890C464u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x0890C464u) goto L_0890C464;
    return;
L_0890C464:
    ctx.gpr[31] = (0x0890C46Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem) && ctx.pc == 0x0890C46Cu) goto L_0890C46C;
    return;
L_0890C46C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0890C478u);
    ctx.gpr[5] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0890C478u) goto L_0890C478;
    return;
L_0890C478:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0890C484u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x0890C484u) goto L_0890C484;
    return;
L_0890C484:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1736), 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x0890C4A0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x0890C4A0u) goto L_0890C4A0;
    return;
L_0890C4A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1740), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1736), ctx.gpr[4]);
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
L_0890C4D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890C4ECu);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_0890FD50;
L_0890C4EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890C5BC;
      }
      goto L_0890C4F4;
    }
L_0890C4F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(311)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890C5B4;
      }
      goto L_0890C504;
    }
L_0890C504:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0890C5AC;
      }
      goto L_0890C50C;
    }
L_0890C50C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 66u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 67u);
      if (branch_taken) {
          goto L_0890C5A4;
      }
      goto L_0890C51C;
    }
L_0890C51C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 68u);
      if (branch_taken) {
          goto L_0890C5A4;
      }
      goto L_0890C524;
    }
L_0890C524:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 54u);
      if (branch_taken) {
          goto L_0890C5A4;
      }
      goto L_0890C52C;
    }
L_0890C52C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890C5A4;
      }
      goto L_0890C534;
    }
L_0890C534:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0890C59C;
      }
      goto L_0890C544;
    }
L_0890C544:
    ctx.gpr[6] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890C594;
      }
      goto L_0890C550;
    }
L_0890C550:
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890C58C;
      }
      goto L_0890C55C;
    }
L_0890C55C:
    ctx.gpr[31] = (0x0890C564u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890D44C;
L_0890C564:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890C584;
      }
      goto L_0890C56C;
    }
L_0890C56C:
    ctx.gpr[31] = (0x0890C574u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0890D46C;
L_0890C574:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
        goto L_0890C5D8;
    }
    goto L_0890C57C;
L_0890C57C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C5C4;
      }
      goto L_0890C584;
    }
L_0890C584:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890C5F0;
      }
      goto L_0890C58C;
    }
L_0890C58C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890C5F0;
      }
      goto L_0890C594;
    }
L_0890C594:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890C5F0;
      }
      goto L_0890C59C;
    }
L_0890C59C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0890C5F0;
      }
      goto L_0890C5A4;
    }
L_0890C5A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890C5F0;
      }
      goto L_0890C5AC;
    }
L_0890C5AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890C5F0;
      }
      goto L_0890C5B4;
    }
L_0890C5B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890C5F0;
      }
      goto L_0890C5BC;
    }
L_0890C5BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890C5F0;
      }
      goto L_0890C5C4;
    }
L_0890C5C4:
    ctx.gpr[31] = (0x0890C5CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890D46C;
L_0890C5CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C5EC;
      }
      goto L_0890C5D4;
    }
L_0890C5D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    goto L_0890C5D8;
L_0890C5D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890C5EC;
      }
      goto L_0890C5E4;
    }
L_0890C5E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890C5F0;
      }
      goto L_0890C5EC;
    }
L_0890C5EC:
    ctx.gpr[2] = (0u | 1u);
    goto L_0890C5F0;
L_0890C5F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890C604:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[8] = (0u | 24u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0890C73C;
      }
      goto L_0890C63C;
    }
L_0890C63C:
    ctx.gpr[31] = (0x0890C644u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 655u, 0x08906F34u>(ctx, &aot_mem) && ctx.pc == 0x0890C644u) goto L_0890C644;
    return;
L_0890C644:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C73C;
      }
      goto L_0890C64C;
    }
L_0890C64C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890C73C;
      }
      goto L_0890C65C;
    }
L_0890C65C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890C674u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890C674u) goto L_0890C674;
    return;
L_0890C674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890C68Cu);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890C68Cu) goto L_0890C68C;
    return;
L_0890C68C:
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
          goto L_0890C73C;
      }
      goto L_0890C6B4;
    }
L_0890C6B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (2237u << 16u);
      if (branch_taken) {
          goto L_0890C6E4;
      }
      goto L_0890C6C0;
    }
L_0890C6C0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x0890C6D0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x0890C6D0u) goto L_0890C6D0;
    return;
L_0890C6D0:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0890C744;
      }
      goto L_0890C6DC;
    }
L_0890C6DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_0890C75C;
      }
      goto L_0890C6E4;
    }
L_0890C6E4:
    ctx.gpr[31] = (0x0890C6ECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem) && ctx.pc == 0x0890C6ECu) goto L_0890C6EC;
    return;
L_0890C6EC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0890C6F8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem) && ctx.pc == 0x0890C6F8u) goto L_0890C6F8;
    return;
L_0890C6F8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0890C704u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 188u, 0x08910AD4u>(ctx, &aot_mem) && ctx.pc == 0x0890C704u) goto L_0890C704;
    return;
L_0890C704:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0890C710u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x0890C710u) goto L_0890C710;
    return;
L_0890C710:
    ctx.gpr[4] = (ctx.gpr[16] & 65535u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2274), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (16128u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0890C728u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 298u, 0x089110BCu>(ctx, &aot_mem) && ctx.pc == 0x0890C728u) goto L_0890C728;
    return;
L_0890C728:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0890C734u);
    ctx.gpr[5] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0890C734u) goto L_0890C734;
    return;
L_0890C734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C774;
      }
      goto L_0890C73C;
    }
L_0890C73C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C774;
      }
      goto L_0890C744;
    }
L_0890C744:
    ctx.gpr[31] = (0x0890C74Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem) && ctx.pc == 0x0890C74Cu) goto L_0890C74C;
    return;
L_0890C74C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_0890C75C;
      }
      goto L_0890C754;
    }
L_0890C754:
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[21] & 255u);
    goto L_0890C75C;
L_0890C75C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C6E4;
      }
      goto L_0890C764;
    }
L_0890C764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(680)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890C6E4;
      }
      goto L_0890C774;
    }
L_0890C774:
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
L_0890C798:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890C7ACu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0890C7ACu) goto L_0890C7AC;
    return;
L_0890C7AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890C7D0;
      }
      goto L_0890C7B4;
    }
L_0890C7B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0890C7D8;
      }
      goto L_0890C7C0;
    }
L_0890C7C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_0890C7F8;
      }
      goto L_0890C7C8;
    }
L_0890C7C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C7F8;
      }
      goto L_0890C7D0;
    }
L_0890C7D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890C7FC;
      }
      goto L_0890C7D8;
    }
L_0890C7D8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0890C7F0;
      }
      goto L_0890C7E0;
    }
L_0890C7E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C7F8;
      }
      goto L_0890C7E8;
    }
L_0890C7E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890C7FC;
      }
      goto L_0890C7F0;
    }
L_0890C7F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0890C7FC;
      }
      goto L_0890C7F8;
    }
L_0890C7F8:
    ctx.gpr[2] = (0u | 1u);
    goto L_0890C7FC;
L_0890C7FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890C80C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0890C828;
      }
      goto L_0890C818;
    }
L_0890C818:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0890C848;
      }
      goto L_0890C820;
    }
L_0890C820:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C848;
      }
      goto L_0890C828;
    }
L_0890C828:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0890C840;
      }
      goto L_0890C830;
    }
L_0890C830:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C848;
      }
      goto L_0890C838;
    }
L_0890C838:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890C84C;
      }
      goto L_0890C840;
    }
L_0890C840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0890C84C;
      }
      goto L_0890C848;
    }
L_0890C848:
    ctx.gpr[2] = (0u | 1u);
    goto L_0890C84C;
L_0890C84C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890C854:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (50298u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[18] = (0u | 46u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0890C898;
      }
      goto L_0890C888;
    }
L_0890C888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0890C898u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 181u, 0x0886D370u>(ctx, &aot_mem) && ctx.pc == 0x0890C898u) goto L_0890C898;
    return;
L_0890C898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0890C8C0;
      }
      goto L_0890C8B8;
    }
L_0890C8B8:
    ctx.gpr[31] = (0x0890C8C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0890C8C0u) goto L_0890C8C0;
    return;
L_0890C8C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C930;
      }
      goto L_0890C8D8;
    }
L_0890C8D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890C8E4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x0890C8E4u) goto L_0890C8E4;
    return;
L_0890C8E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890C900u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890C900u) goto L_0890C900;
    return;
L_0890C900:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890C90Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x0890C90Cu) goto L_0890C90C;
    return;
L_0890C90C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0890C928u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890C928u) goto L_0890C928;
    return;
L_0890C928:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CA60;
      }
      goto L_0890C930;
    }
L_0890C930:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C988;
      }
      goto L_0890C944;
    }
L_0890C944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1372)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C988;
      }
      goto L_0890C950;
    }
L_0890C950:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890C960u);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem) && ctx.pc == 0x0890C960u) goto L_0890C960;
    return;
L_0890C960:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890C96Cu);
    ctx.gpr[5] = (0u | 119u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x0890C96Cu) goto L_0890C96C;
    return;
L_0890C96C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1372), 0u);
      if (branch_taken) {
          goto L_0890CA60;
      }
      goto L_0890C988;
    }
L_0890C988:
    ctx.gpr[4] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890C9FC;
      }
      goto L_0890C998;
    }
L_0890C998:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890C9A4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x0890C9A4u) goto L_0890C9A4;
    return;
L_0890C9A4:
    ctx.gpr[31] = (0x0890C9ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0890C9ACu) goto L_0890C9AC;
    return;
L_0890C9AC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20236)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20240)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0890C9C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0890C9C0u) goto L_0890C9C0;
    return;
L_0890C9C0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x0890C9E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x0890C9E4u) goto L_0890C9E4;
    return;
L_0890C9E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (65520u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0890CA60;
      }
      goto L_0890C9FC;
    }
L_0890C9FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890CA60;
      }
      goto L_0890CA0C;
    }
L_0890CA0C:
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_0890CA20;
      }
      goto L_0890CA18;
    }
L_0890CA18:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890CA38;
      }
      goto L_0890CA20;
    }
L_0890CA20:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890CA2Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x0890CA2Cu) goto L_0890CA2C;
    return;
L_0890CA2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
      if (branch_taken) {
          goto L_0890CA4C;
      }
      goto L_0890CA38;
    }
L_0890CA38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890CA44u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x0890CA44u) goto L_0890CA44;
    return;
L_0890CA44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
    goto L_0890CA4C;
L_0890CA4C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890CA60u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890CA60u) goto L_0890CA60;
    return;
L_0890CA60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
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
L_0890CA8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CAA8;
      }
      goto L_0890CA9C;
    }
L_0890CA9C:
    ctx.gpr[6] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0890CAA8;
L_0890CAA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(456)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[7] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0890CAD4;
      }
      goto L_0890CAC8;
    }
L_0890CAC8:
    ctx.gpr[7] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_0890CADC;
      }
      goto L_0890CAD4;
    }
L_0890CAD4:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    goto L_0890CADC;
L_0890CADC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CAEC;
      }
      goto L_0890CAE4;
    }
L_0890CAE4:
    ctx.gpr[31] = (0x0890CAECu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0890CAECu) goto L_0890CAEC;
    return;
L_0890CAEC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890CAF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0890CC30;
      }
      goto L_0890CB14;
    }
L_0890CB14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 146u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890CB80;
      }
      goto L_0890CB24;
    }
L_0890CB24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x0890CB3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x0890CB3Cu) goto L_0890CB3C;
    return;
L_0890CB3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890CB64;
      }
      goto L_0890CB4C;
    }
L_0890CB4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1732), ctx.gpr[5]);
    ctx.gpr[31] = (0x0890CB64u);
    ctx.gpr[5] = (0u | 45u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0890CB64u) goto L_0890CB64;
    return;
L_0890CB64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0890CC58;
      }
      goto L_0890CB80;
    }
L_0890CB80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CBC8;
      }
      goto L_0890CB98;
    }
L_0890CB98:
    ctx.gpr[31] = (0x0890CBA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x0890CBA0u) goto L_0890CBA0;
    return;
L_0890CBA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 31u);
      if (branch_taken) {
          goto L_0890CBB8;
      }
      goto L_0890CBB0;
    }
L_0890CBB0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890CC58;
      }
      goto L_0890CBB8;
    }
L_0890CBB8:
    ctx.gpr[31] = (0x0890CBC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0890CBC0u) goto L_0890CBC0;
    return;
L_0890CBC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CC58;
      }
      goto L_0890CBC8;
    }
L_0890CBC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890CC58;
      }
      goto L_0890CBD8;
    }
L_0890CBD8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0890CC00;
      }
      goto L_0890CBF4;
    }
L_0890CBF4:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0890CC00;
L_0890CC00:
    ctx.gpr[31] = (0x0890CC08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x0890CC08u) goto L_0890CC08;
    return;
L_0890CC08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 31u);
      if (branch_taken) {
          goto L_0890CC20;
      }
      goto L_0890CC18;
    }
L_0890CC18:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890CC58;
      }
      goto L_0890CC20;
    }
L_0890CC20:
    ctx.gpr[31] = (0x0890CC28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0890CC28u) goto L_0890CC28;
    return;
L_0890CC28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CC58;
      }
      goto L_0890CC30;
    }
L_0890CC30:
    ctx.gpr[31] = (0x0890CC38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x0890CC38u) goto L_0890CC38;
    return;
L_0890CC38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 31u);
      if (branch_taken) {
          goto L_0890CC50;
      }
      goto L_0890CC48;
    }
L_0890CC48:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890CC58;
      }
      goto L_0890CC50;
    }
L_0890CC50:
    ctx.gpr[31] = (0x0890CC58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0890CC58u) goto L_0890CC58;
    return;
L_0890CC58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890CC6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2240), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890CC88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890D7C0;
L_0890CC88:
    ctx.gpr[31] = (0x0890CC90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 450u, 0x08929EE4u>(ctx, &aot_mem) && ctx.pc == 0x0890CC90u) goto L_0890CC90;
    return;
L_0890CC90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890CCA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(456)));
    ctx.gpr[6] = (8192u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CCC4;
      }
      goto L_0890CCB4;
    }
L_0890CCB4:
    ctx.gpr[6] = (57344u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_0890CCC4;
L_0890CCC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890CCCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890CD50;
      }
      goto L_0890CCF4;
    }
L_0890CCF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890CD50;
      }
      goto L_0890CD08;
    }
L_0890CD08:
    ctx.gpr[16] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890CD50;
      }
      goto L_0890CD18;
    }
L_0890CD18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1372)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890CD50;
      }
      goto L_0890CD24;
    }
L_0890CD24:
    ctx.gpr[31] = (0x0890CD2Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0890FF64;
L_0890CD2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[16]);
    ctx.gpr[31] = (0x0890CD3Cu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0890CD3Cu) goto L_0890CD3C;
    return;
L_0890CD3C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1372), ctx.gpr[2]);
    ctx.gpr[31] = (0x0890CD48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 70u, 0x0891C44Cu>(ctx, &aot_mem) && ctx.pc == 0x0890CD48u) goto L_0890CD48;
    return;
L_0890CD48:
    ctx.gpr[31] = (0x0890CD50u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 396u, 0x08929C28u>(ctx, &aot_mem) && ctx.pc == 0x0890CD50u) goto L_0890CD50;
    return;
L_0890CD50:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2240), 0u);
    ctx.gpr[31] = (0x0890CD5Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0890D7C0;
L_0890CD5C:
    ctx.gpr[31] = (0x0890CD64u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 450u, 0x08929EE4u>(ctx, &aot_mem) && ctx.pc == 0x0890CD64u) goto L_0890CD64;
    return;
L_0890CD64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890CD78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890CD98u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x0890CD98u) goto L_0890CD98;
    return;
L_0890CD98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2072), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2064), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2068), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(336), 0u);
    ctx.gpr[31] = (0x0890CDE0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890CDE0u) goto L_0890CDE0;
    return;
L_0890CDE0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890CDF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(472)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0890CE38;
      }
      goto L_0890CE20;
    }
L_0890CE20:
    ctx.gpr[31] = (0x0890CE28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0890D44C;
L_0890CE28:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890CE40;
      }
      goto L_0890CE30;
    }
L_0890CE30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CE60;
      }
      goto L_0890CE38;
    }
L_0890CE38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CFEC;
      }
      goto L_0890CE40;
    }
L_0890CE40:
    ctx.gpr[31] = (0x0890CE48u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x0890CE48u) goto L_0890CE48;
    return;
L_0890CE48:
    ctx.gpr[31] = (0x0890CE50u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 6u, 0x08948040u>(ctx, &aot_mem) && ctx.pc == 0x0890CE50u) goto L_0890CE50;
    return;
L_0890CE50:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0890CE60u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 594u, 0x088EB074u>(ctx, &aot_mem) && ctx.pc == 0x0890CE60u) goto L_0890CE60;
    return;
L_0890CE60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (0u | 235u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0890CED8;
      }
      goto L_0890CE70;
    }
L_0890CE70:
    ctx.gpr[6] = (0u | 242u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890CE90;
      }
      goto L_0890CE7C;
    }
L_0890CE7C:
    ctx.gpr[6] = (0u | 238u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890CF28;
      }
      goto L_0890CE88;
    }
L_0890CE88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 240u);
      if (branch_taken) {
          goto L_0890CF20;
      }
      goto L_0890CE90;
    }
L_0890CE90:
    ctx.gpr[8] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 59u);
    ctx.gpr[31] = (0x0890CEACu);
    ctx.gpr[7] = (0u | 243u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0890CEACu) goto L_0890CEAC;
    return;
L_0890CEAC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890CECCu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem) && ctx.pc == 0x0890CECCu) goto L_0890CECC;
    return;
L_0890CECC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0890CFEC;
      }
      goto L_0890CED8;
    }
L_0890CED8:
    ctx.gpr[8] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 59u);
    ctx.gpr[31] = (0x0890CEF4u);
    ctx.gpr[7] = (0u | 236u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0890CEF4u) goto L_0890CEF4;
    return;
L_0890CEF4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890CF14u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem) && ctx.pc == 0x0890CF14u) goto L_0890CF14;
    return;
L_0890CF14:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0890CFEC;
      }
      goto L_0890CF20;
    }
L_0890CF20:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890CF44;
      }
      goto L_0890CF28;
    }
L_0890CF28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 59u);
    ctx.gpr[31] = (0x0890CF3Cu);
    ctx.gpr[7] = (0u | 237u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x0890CF3Cu) goto L_0890CF3C;
    return;
L_0890CF3C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    goto L_0890CF44;
L_0890CF44:
    ctx.gpr[6] = (0u | 239u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 241u);
      if (branch_taken) {
          goto L_0890CF58;
      }
      goto L_0890CF50;
    }
L_0890CF50:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890CF74;
      }
      goto L_0890CF58;
    }
L_0890CF58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 59u);
    ctx.gpr[31] = (0x0890CF6Cu);
    ctx.gpr[7] = (0u | 236u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x0890CF6Cu) goto L_0890CF6C;
    return;
L_0890CF6C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    goto L_0890CF74;
L_0890CF74:
    ctx.gpr[6] = (0u | 245u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 247u);
      if (branch_taken) {
          goto L_0890CF88;
      }
      goto L_0890CF80;
    }
L_0890CF80:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890CFA4;
      }
      goto L_0890CF88;
    }
L_0890CF88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 59u);
    ctx.gpr[31] = (0x0890CF9Cu);
    ctx.gpr[7] = (0u | 244u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x0890CF9Cu) goto L_0890CF9C;
    return;
L_0890CF9C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    goto L_0890CFA4;
L_0890CFA4:
    ctx.gpr[6] = (0u | 246u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 248u);
      if (branch_taken) {
          goto L_0890CFB8;
      }
      goto L_0890CFB0;
    }
L_0890CFB0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890CFD0;
      }
      goto L_0890CFB8;
    }
L_0890CFB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 59u);
    ctx.gpr[31] = (0x0890CFCCu);
    ctx.gpr[7] = (0u | 243u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x0890CFCCu) goto L_0890CFCC;
    return;
L_0890CFCC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0890CFD0;
L_0890CFD0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890CFE0;
      }
      goto L_0890CFD8;
    }
L_0890CFD8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0890CFE0;
L_0890CFE0:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0890CFEC;
L_0890CFEC:
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
L_0890D004:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0890D08C;
      }
      goto L_0890D020;
    }
L_0890D020:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 147u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890D08C;
      }
      goto L_0890D030;
    }
L_0890D030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (65504u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x0890D05Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x0890D05Cu) goto L_0890D05C;
    return;
L_0890D05C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1732), 0u);
    ctx.gpr[5] = (50298u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[31] = (0x0890D08Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0890D08Cu) goto L_0890D08C;
    return;
L_0890D08C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890D0A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (0u | 13u);
    ctx.gpr[31] = (0x0890D0D8u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 15u, 0x089800C0u>(ctx, &aot_mem) && ctx.pc == 0x0890D0D8u) goto L_0890D0D8;
    return;
L_0890D0D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D20C;
      }
      goto L_0890D0E0;
    }
L_0890D0E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2247u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3872));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0890D188;
      }
      goto L_0890D170;
    }
L_0890D170:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0890D1C0;
      }
      goto L_0890D178;
    }
L_0890D178:
    ctx.gpr[31] = (0x0890D180u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 54u, 0x089902D4u>(ctx, &aot_mem) && ctx.pc == 0x0890D180u) goto L_0890D180;
    return;
L_0890D180:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0890D1C0;
      }
      goto L_0890D188;
    }
L_0890D188:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0890D1A4;
      }
      goto L_0890D194;
    }
L_0890D194:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D1B4;
      }
      goto L_0890D19C;
    }
L_0890D19C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D1C0;
      }
      goto L_0890D1A4;
    }
L_0890D1A4:
    ctx.gpr[31] = (0x0890D1ACu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 58u, 0x08990314u>(ctx, &aot_mem) && ctx.pc == 0x0890D1ACu) goto L_0890D1AC;
    return;
L_0890D1AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0890D1C0;
      }
      goto L_0890D1B4;
    }
L_0890D1B4:
    ctx.gpr[31] = (0x0890D1BCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 62u, 0x08990354u>(ctx, &aot_mem) && ctx.pc == 0x0890D1BCu) goto L_0890D1BC;
    return;
L_0890D1BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0890D1C0;
L_0890D1C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D1E8;
      }
      goto L_0890D1C8;
    }
L_0890D1C8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(692), ctx.gpr[4]);
    ctx.gpr[31] = (0x0890D1D4u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(692));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x0890D1D4u) goto L_0890D1D4;
    return;
L_0890D1D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0890D1FC;
      }
      goto L_0890D1E8;
    }
L_0890D1E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (64512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_0890D1FC;
L_0890D1FC:
    ctx.gpr[31] = (0x0890D204u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 21u, 0x08980164u>(ctx, &aot_mem) && ctx.pc == 0x0890D204u) goto L_0890D204;
    return;
L_0890D204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0890D2D4;
      }
      goto L_0890D20C;
    }
L_0890D20C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0890D228u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 15u, 0x089800C0u>(ctx, &aot_mem) && ctx.pc == 0x0890D228u) goto L_0890D228;
    return;
L_0890D228:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D2BC;
      }
      goto L_0890D230;
    }
L_0890D230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2247u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3872));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[31] = (0x0890D2A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 21u, 0x08980164u>(ctx, &aot_mem) && ctx.pc == 0x0890D2A0u) goto L_0890D2A0;
    return;
L_0890D2A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (64512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0890D2D4;
      }
      goto L_0890D2BC;
    }
L_0890D2BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (64512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    goto L_0890D2D4;
L_0890D2D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890D2E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x0890D318u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 15u, 0x089800C0u>(ctx, &aot_mem) && ctx.pc == 0x0890D318u) goto L_0890D318;
    return;
L_0890D318:
    ctx.gpr[4] = (64512u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0890D384;
      }
      goto L_0890D324;
    }
L_0890D324:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (2247u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3872));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890D384;
      }
      goto L_0890D354;
    }
L_0890D354:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0890D36Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 54u, 0x089902D4u>(ctx, &aot_mem) && ctx.pc == 0x0890D36Cu) goto L_0890D36C;
    return;
L_0890D36C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D37C;
      }
      goto L_0890D374;
    }
L_0890D374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890D394;
      }
      goto L_0890D37C;
    }
L_0890D37C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D394;
      }
      goto L_0890D384;
    }
L_0890D384:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_0890D394;
L_0890D394:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890D3A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x0890D3D4u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 15u, 0x089800C0u>(ctx, &aot_mem) && ctx.pc == 0x0890D3D4u) goto L_0890D3D4;
    return;
L_0890D3D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D424;
      }
      goto L_0890D3DC;
    }
L_0890D3DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2247u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3872));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0890D424;
      }
      goto L_0890D408;
    }
L_0890D408:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[6] = (1024u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[31] = (0x0890D41Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 54u, 0x089902D4u>(ctx, &aot_mem) && ctx.pc == 0x0890D41Cu) goto L_0890D41C;
    return;
L_0890D41C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D43C;
      }
      goto L_0890D424;
    }
L_0890D424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (64512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    goto L_0890D43C;
L_0890D43C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890D44C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D460;
      }
      goto L_0890D458;
    }
L_0890D458:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0890D464;
      }
      goto L_0890D460;
    }
L_0890D460:
    ctx.gpr[2] = (0u | 0u);
    goto L_0890D464;
L_0890D464:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890D46C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_0890D48C;
      }
      goto L_0890D47C;
    }
L_0890D47C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D48C;
      }
      goto L_0890D484;
    }
L_0890D484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0890D490;
      }
      goto L_0890D48C;
    }
L_0890D48C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0890D490;
L_0890D490:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890D498:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890D4C8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0890D4C8u) goto L_0890D4C8;
    return;
L_0890D4C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D4E0;
      }
      goto L_0890D4D0;
    }
L_0890D4D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890D4FC;
      }
      goto L_0890D4E0;
    }
L_0890D4E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
        goto L_0890D504;
    }
    goto L_0890D4F4;
L_0890D4F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D628;
      }
      goto L_0890D4FC;
    }
L_0890D4FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D628;
      }
      goto L_0890D504;
    }
L_0890D504:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890D628;
      }
      goto L_0890D510;
    }
L_0890D510:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16262u << 16u);
      if (branch_taken) {
          goto L_0890D61C;
      }
      goto L_0890D524;
    }
L_0890D524:
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (16672u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 5u);
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    goto L_0890D544;
L_0890D544:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1784)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0890D554u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 627u, 0x089AB048u>(ctx, &aot_mem) && ctx.pc == 0x0890D554u) goto L_0890D554;
    return;
L_0890D554:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D608;
      }
      goto L_0890D55C;
    }
L_0890D55C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1784)));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890D608;
      }
      goto L_0890D5A0;
    }
L_0890D5A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D608;
      }
      goto L_0890D5C0;
    }
L_0890D5C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0890D608;
      }
      goto L_0890D5D0;
    }
L_0890D5D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0890D5E8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x0890D5E8u) goto L_0890D5E8;
    return;
L_0890D5E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1736), ctx.gpr[5]);
    ctx.gpr[31] = (0x0890D600u);
    ctx.gpr[5] = (0u | 153u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x0890D600u) goto L_0890D600;
    return;
L_0890D600:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D628;
      }
      goto L_0890D608;
    }
L_0890D608:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0890D544;
      }
      goto L_0890D61C;
    }
L_0890D61C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1736), ctx.gpr[4]);
    goto L_0890D628;
L_0890D628:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890D654:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890D670u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0890D670u) goto L_0890D670;
    return;
L_0890D670:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D688;
      }
      goto L_0890D678;
    }
L_0890D678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890D6A8;
      }
      goto L_0890D688;
    }
L_0890D688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0890D6B0;
      }
      goto L_0890D6A0;
    }
L_0890D6A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D7A0;
      }
      goto L_0890D6A8;
    }
L_0890D6A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D7A0;
      }
      goto L_0890D6B0;
    }
L_0890D6B0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x0890D6F4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 287u, 0x08899758u>(ctx, &aot_mem) && ctx.pc == 0x0890D6F4u) goto L_0890D6F4;
    return;
L_0890D6F4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D75C;
      }
      goto L_0890D708;
    }
L_0890D708:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890D740;
      }
      goto L_0890D720;
    }
L_0890D720:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (ctx.gpr[17] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D740;
      }
      goto L_0890D734;
    }
L_0890D734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    goto L_0890D740;
L_0890D740:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D708;
      }
      goto L_0890D75C;
    }
L_0890D75C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 40000u);
      if (branch_taken) {
          goto L_0890D794;
      }
      goto L_0890D768;
    }
L_0890D768:
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D794;
      }
      goto L_0890D774;
    }
L_0890D774:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0890D794u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x0890D794u) goto L_0890D794;
    return;
L_0890D794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1736), ctx.gpr[4]);
    goto L_0890D7A0;
L_0890D7A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890D7B8:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890D7C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890D7E0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_0890D44C;
L_0890D7E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D7F4;
      }
      goto L_0890D7E8;
    }
L_0890D7E8:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_0890D7F4;
L_0890D7F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2264), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890D80C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1364)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890D81C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[7] = (0u | 28u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0890D9CC;
      }
      goto L_0890D848;
    }
L_0890D848:
    ctx.gpr[31] = (0x0890D850u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0890D850u) goto L_0890D850;
    return;
L_0890D850:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D9CC;
      }
      goto L_0890D858;
    }
L_0890D858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D9CC;
      }
      goto L_0890D864;
    }
L_0890D864:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890D9CC;
      }
      goto L_0890D874;
    }
L_0890D874:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(562)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D9CC;
      }
      goto L_0890D880;
    }
L_0890D880:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890D9CC;
      }
      goto L_0890D894;
    }
L_0890D894:
    ctx.gpr[7] = (16329u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[7] = (ctx.gpr[7] | 4059u);
    ctx.gpr[6] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_0890D900;
      }
      goto L_0890D8B0;
    }
L_0890D8B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0890D8E0;
      }
      goto L_0890D8C8;
    }
L_0890D8C8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890D8E0;
      }
      goto L_0890D8D8;
    }
L_0890D8D8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
      if (branch_taken) {
          goto L_0890D8EC;
      }
      goto L_0890D8E0;
    }
L_0890D8E0:
    ctx.gpr[31] = (0x0890D8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x0890D8E8u) goto L_0890D8E8;
    return;
L_0890D8E8:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[22];
    goto L_0890D8EC;
L_0890D8EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
      if (branch_taken) {
          goto L_0890D94C;
      }
      goto L_0890D900;
    }
L_0890D900:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0890D930;
      }
      goto L_0890D918;
    }
L_0890D918:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890D930;
      }
      goto L_0890D928;
    }
L_0890D928:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[22];
      if (branch_taken) {
          goto L_0890D93C;
      }
      goto L_0890D930;
    }
L_0890D930:
    ctx.gpr[31] = (0x0890D938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x0890D938u) goto L_0890D938;
    return;
L_0890D938:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[22];
    goto L_0890D93C;
L_0890D93C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_0890D94C;
L_0890D94C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0890D960;
    }
    goto L_0890D960;
L_0890D960:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890D9CC;
      }
      goto L_0890D970;
    }
L_0890D970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1740), ctx.gpr[4]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 2u);
      if (branch_taken) {
          goto L_0890D9C0;
      }
      goto L_0890D990;
    }
L_0890D990:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890D9C0;
      }
      goto L_0890D998;
    }
L_0890D998:
    ctx.gpr[8] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0890D9B4u);
    ctx.gpr[7] = (0u | 125u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0890D9B4u) goto L_0890D9B4;
    return;
L_0890D9B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890D9C0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0890F694;
L_0890D9C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890D9CCu);
    ctx.gpr[5] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0890D9CCu) goto L_0890D9CC;
    return;
L_0890D9CC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890D9E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1740)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890DA2C;
      }
      goto L_0890DA20;
    }
L_0890DA20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890DAD0;
      }
      goto L_0890DA2C;
    }
L_0890DA2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_0890DA5C;
    }
    goto L_0890DA38;
L_0890DA38:
    ctx.gpr[31] = (0x0890DA40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0890DA40u) goto L_0890DA40;
    return;
L_0890DA40:
    ctx.gpr[31] = (0x0890DA48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x0890DA48u) goto L_0890DA48;
    return;
L_0890DA48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890DA54u);
    ctx.gpr[5] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem) && ctx.pc == 0x0890DA54u) goto L_0890DA54;
    return;
L_0890DA54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DC50;
      }
      goto L_0890DA5C;
    }
L_0890DA5C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 101 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890DABC;
      }
      goto L_0890DA8C;
    }
L_0890DA8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890DA98u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0890F694;
L_0890DA98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890DAA8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(900)));
    goto L_0890DF20;
L_0890DAA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890DAB4u);
    ctx.gpr[5] = (0u | 147u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x0890DAB4u) goto L_0890DAB4;
    return;
L_0890DAB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DC50;
      }
      goto L_0890DABC;
    }
L_0890DABC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890DAC8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 188u, 0x08910AD4u>(ctx, &aot_mem) && ctx.pc == 0x0890DAC8u) goto L_0890DAC8;
    return;
L_0890DAC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DC50;
      }
      goto L_0890DAD0;
    }
L_0890DAD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0890DAECu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 395u, 0x089AA270u>(ctx, &aot_mem) && ctx.pc == 0x0890DAECu) goto L_0890DAEC;
    return;
L_0890DAEC:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890DB04u);
    ctx.gpr[5] = (0u | 147u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x0890DB04u) goto L_0890DB04;
    return;
L_0890DB04:
    ctx.gpr[31] = (0x0890DB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0890DB0Cu) goto L_0890DB0C;
    return;
L_0890DB0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (16585u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0890DB38;
      }
      goto L_0890DB24;
    }
L_0890DB24:
    ctx.gpr[31] = (0x0890DB2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0890DB2Cu) goto L_0890DB2C;
    return;
L_0890DB2C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0890DB38u);
    ctx.gpr[5] = (0u | 147u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x0890DB38u) goto L_0890DB38;
    return;
L_0890DB38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890DB44u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x0890DB44u) goto L_0890DB44;
    return;
L_0890DB44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0890DB5Cu);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 561u, 0x08A8EF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0890DB5Cu) goto L_0890DB5C;
    return;
L_0890DB5C:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890DBB8;
      }
      goto L_0890DBA8;
    }
L_0890DBA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0890DBD8;
      }
      goto L_0890DBB8;
    }
L_0890DBB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890DBD8;
      }
      goto L_0890DBCC;
    }
L_0890DBCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0890DBD8;
L_0890DBD8:
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
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890DC50;
      }
      goto L_0890DC00;
    }
L_0890DC00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890DC10u);
    ctx.gpr[6] = (0u | 125u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0890DC10u) goto L_0890DC10;
    return;
L_0890DC10:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DC34;
      }
      goto L_0890DC1C;
    }
L_0890DC1C:
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_0890DC34;
L_0890DC34:
    ctx.gpr[31] = (0x0890DC3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0890DC3Cu) goto L_0890DC3C;
    return;
L_0890DC3C:
    ctx.gpr[31] = (0x0890DC44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x0890DC44u) goto L_0890DC44;
    return;
L_0890DC44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890DC50u);
    ctx.gpr[5] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem) && ctx.pc == 0x0890DC50u) goto L_0890DC50;
    return;
L_0890DC50:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890DC74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 29u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0890DCB8;
      }
      goto L_0890DC90;
    }
L_0890DC90:
    ctx.gpr[31] = (0x0890DC98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0890DC98u) goto L_0890DC98;
    return;
L_0890DC98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DCB8;
      }
      goto L_0890DCA0;
    }
L_0890DCA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DCB8;
      }
      goto L_0890DCAC;
    }
L_0890DCAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890DCB8u);
    ctx.gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0890DCB8u) goto L_0890DCB8;
    return;
L_0890DCB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890DCC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DD84;
      }
      goto L_0890DCE4;
    }
L_0890DCE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DD30;
      }
      goto L_0890DCF0;
    }
L_0890DCF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1740)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DD30;
      }
      goto L_0890DD04;
    }
L_0890DD04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890DD14u);
    ctx.gpr[6] = (0u | 8000u);
    goto L_0890C42C;
L_0890DD14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    ctx.gpr[31] = (0x0890DD28u);
    ctx.gpr[6] = (0u | 8000u);
    goto L_0890C42C;
L_0890DD28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DDD0;
      }
      goto L_0890DD30;
    }
L_0890DD30:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890DD3Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x0890DD3Cu) goto L_0890DD3C;
    return;
L_0890DD3C:
    ctx.gpr[31] = (0x0890DD44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0890DD44u) goto L_0890DD44;
    return;
L_0890DD44:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20236)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20240)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0890DD58u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0890DD58u) goto L_0890DD58;
    return;
L_0890DD58:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x0890DD7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x0890DD7Cu) goto L_0890DD7C;
    return;
L_0890DD7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DDD0;
      }
      goto L_0890DD84;
    }
L_0890DD84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890DD90u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x0890DD90u) goto L_0890DD90;
    return;
L_0890DD90:
    ctx.gpr[31] = (0x0890DD98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0890DD98u) goto L_0890DD98;
    return;
L_0890DD98:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20236)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20240)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0890DDACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0890DDACu) goto L_0890DDAC;
    return;
L_0890DDAC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x0890DDD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x0890DDD0u) goto L_0890DDD0;
    return;
L_0890DDD0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890DDE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    ctx.gpr[31] = (0x0890DE00u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0890DE00u) goto L_0890DE00;
    return;
L_0890DE00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DF10;
      }
      goto L_0890DE08;
    }
L_0890DE08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DF10;
      }
      goto L_0890DE14;
    }
L_0890DE14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0890DE94;
      }
      goto L_0890DE20;
    }
L_0890DE20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    ctx.gpr[6] = (0u | 55u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2228));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890DE48;
      }
      goto L_0890DE38;
    }
L_0890DE38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890DE44u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0890DE44u) goto L_0890DE44;
    return;
L_0890DE44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    goto L_0890DE48;
L_0890DE48:
    ctx.gpr[31] = (0x0890DE50u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 72u, 0x08B00520u>(ctx, &aot_mem) && ctx.pc == 0x0890DE50u) goto L_0890DE50;
    return;
L_0890DE50:
    ctx.gpr[31] = (0x0890DE58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890D44C;
L_0890DE58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DE9C;
      }
      goto L_0890DE60;
    }
L_0890DE60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 496u);
    ctx.gpr[6] = (ctx.gpr[6] >> 4u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890DE9C;
      }
      goto L_0890DE7C;
    }
L_0890DE7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0890DE9C;
      }
      goto L_0890DE94;
    }
L_0890DE94:
    ctx.gpr[31] = (0x0890DE9Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 40u, 0x08B00384u>(ctx, &aot_mem) && ctx.pc == 0x0890DE9Cu) goto L_0890DE9C;
    return;
L_0890DE9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 18u);
      if (branch_taken) {
          goto L_0890DEB4;
      }
      goto L_0890DEAC;
    }
L_0890DEAC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890DEBC;
      }
      goto L_0890DEB4;
    }
L_0890DEB4:
    ctx.gpr[31] = (0x0890DEBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x0890DEBCu) goto L_0890DEBC;
    return;
L_0890DEBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890DEC8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem) && ctx.pc == 0x0890DEC8u) goto L_0890DEC8;
    return;
L_0890DEC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890DED4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x0890DED4u) goto L_0890DED4;
    return;
L_0890DED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890DEF8;
      }
      goto L_0890DEE4;
    }
L_0890DEE4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890DEF0u);
    ctx.gpr[5] = (0u | 58u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0890DEF0u) goto L_0890DEF0;
    return;
L_0890DEF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890DF04;
      }
      goto L_0890DEF8;
    }
L_0890DEF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890DF04u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0890DF04u) goto L_0890DF04;
    return;
L_0890DF04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890DF10u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0890F694;
L_0890DF10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890DF20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(676), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0890DF58;
      }
      goto L_0890DF30;
    }
L_0890DF30:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(460)));
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(460), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(676));
      if (branch_taken) {
          goto L_0890DF58;
      }
      goto L_0890DF4C;
    }
L_0890DF4C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0890DF58u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x0890DF58u) goto L_0890DF58;
    return;
L_0890DF58:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890DF64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(311)));
    ctx.gpr[8] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0890DFC0;
      }
      goto L_0890DFB0;
    }
L_0890DFB0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890DFC8;
      }
      goto L_0890DFB8;
    }
L_0890DFB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (15897u << 16u);
      if (branch_taken) {
          goto L_0890E1B8;
      }
      goto L_0890DFC0;
    }
L_0890DFC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0890E224;
      }
      goto L_0890DFC8;
    }
L_0890DFC8:
    ctx.gpr[6] = (15918u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 5243u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (15897u << 16u);
        goto L_0890E198;
    }
    goto L_0890DFE8;
L_0890DFE8:
    ctx.gpr[6] = (16230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890E090;
      }
      goto L_0890E008;
    }
L_0890E008:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (15692u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[17] = (0u | 1u);
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0890E098;
      }
      goto L_0890E088;
    }
L_0890E088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E150;
      }
      goto L_0890E090;
    }
L_0890E090:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890E224;
      }
      goto L_0890E098;
    }
L_0890E098:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0890E110u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0890E110u) goto L_0890E110;
    return;
L_0890E110:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[13] / ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0890E134;
    }
    goto L_0890E134;
L_0890E134:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E190;
      }
      goto L_0890E150;
    }
L_0890E150:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0890E190u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0890E190u) goto L_0890E190;
    return;
L_0890E190:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E1D4;
      }
      goto L_0890E198;
    }
L_0890E198:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0890E1D4;
      }
      goto L_0890E1B8;
    }
L_0890E1B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0890E1D4;
L_0890E1D4:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0890E210u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem) && ctx.pc == 0x0890E210u) goto L_0890E210;
    return;
L_0890E210:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E220;
      }
      goto L_0890E218;
    }
L_0890E218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0890E224;
      }
      goto L_0890E220;
    }
L_0890E220:
    ctx.gpr[2] = (0u | 0u);
    goto L_0890E224;
L_0890E224:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890E244:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890E268;
      }
      goto L_0890E254;
    }
L_0890E254:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1736)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.gpr[10] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E270;
      }
      goto L_0890E268;
    }
L_0890E268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890E2F4;
      }
      goto L_0890E270;
    }
L_0890E270:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E2F0;
      }
      goto L_0890E284;
    }
L_0890E284:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 17u);
    goto L_0890E28C;
L_0890E28C:
    ctx.gpr[7] = (ctx.gpr[9] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890E2C0;
      }
      goto L_0890E2A4;
    }
L_0890E2A4:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890E2C0;
      }
      goto L_0890E2B0;
    }
L_0890E2B0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1156)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0890E2E0;
      }
      goto L_0890E2C0;
    }
L_0890E2C0:
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[7] << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E28C;
      }
      goto L_0890E2D8;
    }
L_0890E2D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E2F0;
      }
      goto L_0890E2E0;
    }
L_0890E2E0:
    ctx.gpr[5] = (ctx.gpr[10] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1736), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890E2F4;
      }
      goto L_0890E2F0;
    }
L_0890E2F0:
    ctx.gpr[2] = (0u | 1u);
    goto L_0890E2F4;
L_0890E2F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890E2FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890E310u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0890E310u) goto L_0890E310;
    return;
L_0890E310:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E368;
      }
      goto L_0890E318;
    }
L_0890E318:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0890E338;
      }
      goto L_0890E328;
    }
L_0890E328:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0890E340;
      }
      goto L_0890E338;
    }
L_0890E338:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0890E340;
L_0890E340:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E368;
      }
      goto L_0890E348;
    }
L_0890E348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E370;
      }
      goto L_0890E360;
    }
L_0890E360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E3A4;
      }
      goto L_0890E368;
    }
L_0890E368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E5DC;
      }
      goto L_0890E370;
    }
L_0890E370:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890E37Cu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 765u, 0x0892FCA4u>(ctx, &aot_mem) && ctx.pc == 0x0890E37Cu) goto L_0890E37C;
    return;
L_0890E37C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E39C;
      }
      goto L_0890E388;
    }
L_0890E388:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890E394u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 688u, 0x08912BE0u>(ctx, &aot_mem) && ctx.pc == 0x0890E394u) goto L_0890E394;
    return;
L_0890E394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E5DC;
      }
      goto L_0890E39C;
    }
L_0890E39C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E5DC;
      }
      goto L_0890E3A4;
    }
L_0890E3A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890E3B4u);
    ctx.gpr[6] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0890E3B4u) goto L_0890E3B4;
    return;
L_0890E3B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E3F4;
      }
      goto L_0890E3BC;
    }
L_0890E3BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890E3CCu);
    ctx.gpr[6] = (0u | 138u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0890E3CCu) goto L_0890E3CC;
    return;
L_0890E3CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E3EC;
      }
      goto L_0890E3D4;
    }
L_0890E3D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(311)));
    ctx.gpr[5] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890E3FC;
      }
      goto L_0890E3E4;
    }
L_0890E3E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
      if (branch_taken) {
          goto L_0890E430;
      }
      goto L_0890E3EC;
    }
L_0890E3EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E5DC;
      }
      goto L_0890E3F4;
    }
L_0890E3F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E5DC;
      }
      goto L_0890E3FC;
    }
L_0890E3FC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(288));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890E498;
      }
      goto L_0890E42C;
    }
L_0890E42C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    goto L_0890E430;
L_0890E430:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20252)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20256)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0890E468u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem) && ctx.pc == 0x0890E468u) goto L_0890E468;
    return;
L_0890E468:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20228)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20232)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20220)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20224)));
    ctx.gpr[5] = (ctx.gpr[3] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890E4A0;
      }
      goto L_0890E488;
    }
L_0890E488:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0890E4A0;
      }
      goto L_0890E490;
    }
L_0890E490:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
      if (branch_taken) {
          goto L_0890E544;
      }
      goto L_0890E498;
    }
L_0890E498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E5DC;
      }
      goto L_0890E4A0;
    }
L_0890E4A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890E4B0u);
    ctx.gpr[6] = (0u | 214u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0890E4B0u) goto L_0890E4B0;
    return;
L_0890E4B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E4C8;
      }
      goto L_0890E4BC;
    }
L_0890E4BC:
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0890E4C8;
L_0890E4C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890E4D8u);
    ctx.gpr[6] = (0u | 215u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0890E4D8u) goto L_0890E4D8;
    return;
L_0890E4D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E4F0;
      }
      goto L_0890E4E4;
    }
L_0890E4E4:
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0890E4F0;
L_0890E4F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890E500u);
    ctx.gpr[6] = (0u | 216u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0890E500u) goto L_0890E500;
    return;
L_0890E500:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E518;
      }
      goto L_0890E50C;
    }
L_0890E50C:
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0890E518;
L_0890E518:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890E528u);
    ctx.gpr[6] = (0u | 217u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0890E528u) goto L_0890E528;
    return;
L_0890E528:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E540;
      }
      goto L_0890E534;
    }
L_0890E534:
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0890E540;
L_0890E540:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
    goto L_0890E544;
L_0890E544:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1944)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E57C;
      }
      goto L_0890E568;
    }
L_0890E568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0890E590;
      }
      goto L_0890E57C;
    }
L_0890E57C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (64512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    goto L_0890E590;
L_0890E590:
    ctx.gpr[31] = (0x0890E598u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem) && ctx.pc == 0x0890E598u) goto L_0890E598;
    return;
L_0890E598:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890E5A4u);
    ctx.gpr[5] = (0u | 43u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0890E5A4u) goto L_0890E5A4;
    return;
L_0890E5A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0890E5B8u);
    ctx.gpr[7] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x0890E5B8u) goto L_0890E5B8;
    return;
L_0890E5B8:
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890E5CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16080));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x0890E5CCu) goto L_0890E5CC;
    return;
L_0890E5CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0890E5DC;
L_0890E5DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890E5EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0890E648;
      }
      goto L_0890E608;
    }
L_0890E608:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(902))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E628;
      }
      goto L_0890E620;
    }
L_0890E620:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890E754;
      }
      goto L_0890E628;
    }
L_0890E628:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(864));
    ctx.gpr[31] = (0x0890E634u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 565u, 0x08A9F948u>(ctx, &aot_mem) && ctx.pc == 0x0890E634u) goto L_0890E634;
    return;
L_0890E634:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(6528));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E754;
      }
      goto L_0890E648;
    }
L_0890E648:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E668;
      }
      goto L_0890E65C;
    }
L_0890E65C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(904))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890E680;
      }
      goto L_0890E668;
    }
L_0890E668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890E754;
      }
      goto L_0890E680;
    }
L_0890E680:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(908)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0890E69Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 398u, 0x08905E50u>(ctx, &aot_mem) && ctx.pc == 0x0890E69Cu) goto L_0890E69C;
    return;
L_0890E69C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(6528));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6528)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6532)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2060)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890E724;
      }
      goto L_0890E6F0;
    }
L_0890E6F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(904))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(906), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E724;
      }
      goto L_0890E710;
    }
L_0890E710:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(908)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1024), ctx.gpr[4]);
    goto L_0890E724;
L_0890E724:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(906))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(904))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890E74C;
      }
      goto L_0890E734;
    }
L_0890E734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890E754;
      }
      goto L_0890E74C;
    }
L_0890E74C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(6528));
      if (branch_taken) {
          goto L_0890E754;
      }
      goto L_0890E754;
    }
L_0890E754:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890E768:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(460)));
    ctx.gpr[7] = (1024u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(456)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(460), ctx.gpr[6]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(456), ctx.gpr[6]);
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890E798:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0890E7C4;
      }
      goto L_0890E7AC;
    }
L_0890E7AC:
    ctx.gpr[5] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_0890E7C4;
L_0890E7C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0890E7E0;
      }
      goto L_0890E7D4;
    }
L_0890E7D4:
    ctx.gpr[6] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0890E7E8;
      }
      goto L_0890E7E0;
    }
L_0890E7E0:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_0890E7E8;
L_0890E7E8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890E7F8;
      }
      goto L_0890E7F0;
    }
L_0890E7F0:
    ctx.gpr[31] = (0x0890E7F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0890E7F8u) goto L_0890E7F8;
    return;
L_0890E7F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890E818:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1340)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890E824:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1340)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0890E860;
      }
      goto L_0890E858;
    }
L_0890E858:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1340), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_0890E860;
L_0890E860:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890EA88;
      }
      goto L_0890E868;
    }
L_0890E868:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[6] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (20224u << 16u);
      if (branch_taken) {
          goto L_0890EA88;
      }
      goto L_0890E87C;
    }
L_0890E87C:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0890E8F8;
      }
      goto L_0890E888;
    }
L_0890E888:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0890E948;
      }
      goto L_0890E890;
    }
L_0890E890:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0890E998;
      }
      goto L_0890E898;
    }
L_0890E898:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0890E9E8;
      }
      goto L_0890E8A0;
    }
L_0890E8A0:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0890EA38;
      }
      goto L_0890E8A8;
    }
L_0890E8A8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890E8B8u);
    ctx.gpr[5] = (0u | 39u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1009u, 0x08AC7BACu>(ctx, &aot_mem) && ctx.pc == 0x0890E8B8u) goto L_0890E8B8;
    return;
L_0890E8B8:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_0890E8D4;
    }
    goto L_0890E8C8;
L_0890E8C8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0890E8E4;
      }
      goto L_0890E8D4;
    }
L_0890E8D4:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0890E8E4;
L_0890E8E4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0890E8F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem) && ctx.pc == 0x0890E8F0u) goto L_0890E8F0;
    return;
L_0890E8F0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1344), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0890EA88;
      }
      goto L_0890E8F8;
    }
L_0890E8F8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890E908u);
    ctx.gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1009u, 0x08AC7BACu>(ctx, &aot_mem) && ctx.pc == 0x0890E908u) goto L_0890E908;
    return;
L_0890E908:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_0890E924;
    }
    goto L_0890E918;
L_0890E918:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0890E934;
      }
      goto L_0890E924;
    }
L_0890E924:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0890E934;
L_0890E934:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0890E940u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem) && ctx.pc == 0x0890E940u) goto L_0890E940;
    return;
L_0890E940:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1344), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0890EA88;
      }
      goto L_0890E948;
    }
L_0890E948:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890E958u);
    ctx.gpr[5] = (0u | 43u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1009u, 0x08AC7BACu>(ctx, &aot_mem) && ctx.pc == 0x0890E958u) goto L_0890E958;
    return;
L_0890E958:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_0890E974;
    }
    goto L_0890E968;
L_0890E968:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0890E984;
      }
      goto L_0890E974;
    }
L_0890E974:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0890E984;
L_0890E984:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0890E990u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem) && ctx.pc == 0x0890E990u) goto L_0890E990;
    return;
L_0890E990:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1344), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0890EA88;
      }
      goto L_0890E998;
    }
L_0890E998:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890E9A8u);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1009u, 0x08AC7BACu>(ctx, &aot_mem) && ctx.pc == 0x0890E9A8u) goto L_0890E9A8;
    return;
L_0890E9A8:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_0890E9C4;
    }
    goto L_0890E9B8;
L_0890E9B8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0890E9D4;
      }
      goto L_0890E9C4;
    }
L_0890E9C4:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0890E9D4;
L_0890E9D4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0890E9E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem) && ctx.pc == 0x0890E9E0u) goto L_0890E9E0;
    return;
L_0890E9E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1344), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0890EA88;
      }
      goto L_0890E9E8;
    }
L_0890E9E8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890E9F8u);
    ctx.gpr[5] = (0u | 45u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1009u, 0x08AC7BACu>(ctx, &aot_mem) && ctx.pc == 0x0890E9F8u) goto L_0890E9F8;
    return;
L_0890E9F8:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_0890EA14;
    }
    goto L_0890EA08;
L_0890EA08:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0890EA24;
      }
      goto L_0890EA14;
    }
L_0890EA14:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0890EA24;
L_0890EA24:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0890EA30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem) && ctx.pc == 0x0890EA30u) goto L_0890EA30;
    return;
L_0890EA30:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1344), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0890EA88;
      }
      goto L_0890EA38;
    }
L_0890EA38:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890EA48u);
    ctx.gpr[5] = (0u | 53u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1009u, 0x08AC7BACu>(ctx, &aot_mem) && ctx.pc == 0x0890EA48u) goto L_0890EA48;
    return;
L_0890EA48:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_0890EA64;
    }
    goto L_0890EA58;
L_0890EA58:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0890EA74;
      }
      goto L_0890EA64;
    }
L_0890EA64:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_0890EA74;
L_0890EA74:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0890EA80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem) && ctx.pc == 0x0890EA80u) goto L_0890EA80;
    return;
L_0890EA80:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1344), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0890EA88;
      }
      goto L_0890EA88;
    }
L_0890EA88:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890EAA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2120), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 57u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890EB70;
      }
      goto L_0890EAD0;
    }
L_0890EAD0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2116), ctx.gpr[4]);
    ctx.gpr[5] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0890EB58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x0890EB58u) goto L_0890EB58;
    return;
L_0890EB58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890ECF8;
      }
      goto L_0890EB70;
    }
L_0890EB70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890ECF8;
      }
      goto L_0890EB80;
    }
L_0890EB80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 48u);
      if (branch_taken) {
          goto L_0890EBD0;
      }
      goto L_0890EBA4;
    }
L_0890EBA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x0890EBC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x0890EBC4u) goto L_0890EBC4;
    return;
L_0890EBC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x0890EBD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 922u, 0x08907F9Cu>(ctx, &aot_mem) && ctx.pc == 0x0890EBD0u) goto L_0890EBD0;
    return;
L_0890EBD0:
    ctx.gpr[31] = (0x0890EBD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890D44C;
L_0890EBD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890EC14;
      }
      goto L_0890EBE0;
    }
L_0890EBE0:
    ctx.gpr[31] = (0x0890EBE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0890EBE8u) goto L_0890EBE8;
    return;
L_0890EBE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (17530u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890EC04u);
    ctx.gpr[7] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x0890EC04u) goto L_0890EC04;
    return;
L_0890EC04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0890EC18;
      }
      goto L_0890EC14;
    }
L_0890EC14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2116), 0u);
    goto L_0890EC18;
L_0890EC18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1676)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0890ECE0;
      }
      goto L_0890EC24;
    }
L_0890EC24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1896)));
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
        goto L_0890EC7C;
    }
    goto L_0890EC30;
L_0890EC30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1896)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1922)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1896), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1922), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_0890ECB0;
      }
      goto L_0890EC7C;
    }
L_0890EC7C:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    goto L_0890ECB0;
L_0890ECB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1676)));
    ctx.gpr[31] = (0x0890ECBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem) && ctx.pc == 0x0890ECBCu) goto L_0890ECBC;
    return;
L_0890ECBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1892)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1676), ctx.gpr[17]);
    goto L_0890ECE0;
L_0890ECE0:
    ctx.gpr[31] = (0x0890ECE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890D44C;
L_0890ECE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890ECF8;
      }
      goto L_0890ECF0;
    }
L_0890ECF0:
    ctx.gpr[31] = (0x0890ECF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890E2FC;
L_0890ECF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890ED0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0890ED38;
      }
      goto L_0890ED2C;
    }
L_0890ED2C:
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0890ED40;
      }
      goto L_0890ED38;
    }
L_0890ED38:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_0890ED40;
L_0890ED40:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890EDF4;
      }
      goto L_0890ED48;
    }
L_0890ED48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890ED60u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890ED60u) goto L_0890ED60;
    return;
L_0890ED60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890ED78u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890ED78u) goto L_0890ED78;
    return;
L_0890ED78:
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
          goto L_0890EDF4;
      }
      goto L_0890EDA0;
    }
L_0890EDA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890EDF4;
      }
      goto L_0890EDB0;
    }
L_0890EDB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890EDC8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890EDC8u) goto L_0890EDC8;
    return;
L_0890EDC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x0890EDECu);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890EDECu) goto L_0890EDEC;
    return;
L_0890EDEC:
    ctx.gpr[31] = (0x0890EDF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x0890EDF4u) goto L_0890EDF4;
    return;
L_0890EDF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890EE04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890EE34u);
    ctx.gpr[6] = (0u | 160u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0890EE34u) goto L_0890EE34;
    return;
L_0890EE34:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890EE48;
      }
      goto L_0890EE40;
    }
L_0890EE40:
    ctx.gpr[31] = (0x0890EE48u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 235u, 0x0890514Cu>(ctx, &aot_mem) && ctx.pc == 0x0890EE48u) goto L_0890EE48;
    return;
L_0890EE48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890EE60u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890EE60u) goto L_0890EE60;
    return;
L_0890EE60:
    ctx.gpr[31] = (0x0890EE68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0890D44C;
L_0890EE68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890EE74;
      }
      goto L_0890EE70;
    }
L_0890EE70:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_0890EE74;
L_0890EE74:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890EE80u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 146u, 0x08AEC930u>(ctx, &aot_mem) && ctx.pc == 0x0890EE80u) goto L_0890EE80;
    return;
L_0890EE80:
    ctx.gpr[31] = (0x0890EE88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0890D44C;
L_0890EE88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890EEA0;
      }
      goto L_0890EE90;
    }
L_0890EE90:
    ctx.gpr[31] = (0x0890EE98u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 625u, 0x08AD37C0u>(ctx, &aot_mem) && ctx.pc == 0x0890EE98u) goto L_0890EE98;
    return;
L_0890EE98:
    ctx.gpr[31] = (0x0890EEA0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 627u, 0x08AD37E0u>(ctx, &aot_mem) && ctx.pc == 0x0890EEA0u) goto L_0890EEA0;
    return;
L_0890EEA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-20216));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(86), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0890EEB4u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x0890EEB4u) goto L_0890EEB4;
    return;
L_0890EEB4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[28] | 0u);
      if (branch_taken) {
          goto L_0890EEDC;
      }
      goto L_0890EEC4;
    }
L_0890EEC4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-17528), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[28] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_0890EEC4;
      }
      goto L_0890EEDC;
    }
L_0890EEDC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-17528), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890EEECu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x0890EEECu) goto L_0890EEEC;
    return;
L_0890EEEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890EF00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(86), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0890EF34u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890EF34u) goto L_0890EF34;
    return;
L_0890EF34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890EF40u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0890EF40u) goto L_0890EF40;
    return;
L_0890EF40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890EF4Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x0890EF4Cu) goto L_0890EF4C;
    return;
L_0890EF4C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2196), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(640), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0890EF6Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x0890EF6Cu) goto L_0890EF6C;
    return;
L_0890EF6C:
    ctx.gpr[31] = (0x0890EF74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0890EF74u) goto L_0890EF74;
    return;
L_0890EF74:
    ctx.gpr[31] = (0x0890EF7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0890D7C0;
L_0890EF7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890EF8C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(1916), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890EF94:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1916)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890EF9C:
    ctx.gpr[5] = (0u | 2u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1931), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890EFA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1931)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0890EFC4;
      }
      goto L_0890EFBC;
    }
L_0890EFBC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1931), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0890EFC4;
L_0890EFC4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0890EFD0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1168));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem) && ctx.pc == 0x0890EFD0u) goto L_0890EFD0;
    return;
L_0890EFD0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890EFDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890EFF0u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 556u, 0x08AD3328u>(ctx, &aot_mem) && ctx.pc == 0x0890EFF0u) goto L_0890EFF0;
    return;
L_0890EFF0:
    ctx.gpr[31] = (0x0890EFF8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x0890EFF8u) goto L_0890EFF8;
    return;
L_0890EFF8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F004:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F00C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (18804u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 9214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0890F064u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 650u, 0x08976FBCu>(ctx, &aot_mem) && ctx.pc == 0x0890F064u) goto L_0890F064;
    return;
L_0890F064:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_0890F16C;
      }
      goto L_0890F070;
    }
L_0890F070:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x0890F084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 52u, 0x08AB044Cu>(ctx, &aot_mem) && ctx.pc == 0x0890F084u) goto L_0890F084;
    return;
L_0890F084:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0890F16C;
      }
      goto L_0890F090;
    }
L_0890F090:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0890F0F4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 398u, 0x08905E50u>(ctx, &aot_mem) && ctx.pc == 0x0890F0F4u) goto L_0890F0F4;
    return;
L_0890F0F4:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890F16C;
      }
      goto L_0890F114;
    }
L_0890F114:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890F120u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 719u, 0x08B1FB98u>(ctx, &aot_mem) && ctx.pc == 0x0890F120u) goto L_0890F120;
    return;
L_0890F120:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x0890F134u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 943u, 0x0885FFE4u>(ctx, &aot_mem) && ctx.pc == 0x0890F134u) goto L_0890F134;
    return;
L_0890F134:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0890F148u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x0890F148u) goto L_0890F148;
    return;
L_0890F148:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(304))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2200), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2204), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0890F16C;
L_0890F16C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F188:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0890F1D8;
      }
      goto L_0890F1C0;
    }
L_0890F1C0:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0890F1DC;
    }
    goto L_0890F1D0;
L_0890F1D0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_0890F1EC;
      }
      goto L_0890F1D8;
    }
L_0890F1D8:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0890F1DC;
L_0890F1DC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x0890F1E8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x0890F1E8u) goto L_0890F1E8;
    return;
L_0890F1E8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0890F1EC;
L_0890F1EC:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[12])) && ctx.fpr[12] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16073u << 16u);
      if (branch_taken) {
          goto L_0890F200;
      }
      goto L_0890F1FC;
    }
L_0890F1FC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0890F200;
L_0890F200:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16639u << 16u);
      if (branch_taken) {
          goto L_0890F24C;
      }
      goto L_0890F23C;
    }
L_0890F23C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16639u << 16u);
    goto L_0890F24C;
L_0890F24C:
    ctx.gpr[4] = (ctx.gpr[4] | 65534u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[4] = (0u - ctx.gpr[2]);
      if (branch_taken) {
          goto L_0890F278;
      }
      goto L_0890F26C;
    }
L_0890F26C:
    ctx.gpr[2] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u - ctx.gpr[2]);
      if (branch_taken) {
          goto L_0890F27C;
      }
      goto L_0890F278;
    }
L_0890F278:
    ctx.gpr[2] = (ctx.gpr[2] & 7u);
    goto L_0890F27C;
L_0890F27C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F28C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890F2A8u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 571u, 0x088E3E88u>(ctx, &aot_mem) && ctx.pc == 0x0890F2A8u) goto L_0890F2A8;
    return;
L_0890F2A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890F2B8u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_0890F6EC;
L_0890F2B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F2C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890F2DCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0890F2DCu) goto L_0890F2DC;
    return;
L_0890F2DC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20300)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20304)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0890F2F0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0890F2F0u) goto L_0890F2F0;
    return;
L_0890F2F0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0890F314;
      }
      goto L_0890F30C;
    }
L_0890F30C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0890F314;
      }
      goto L_0890F314;
    }
L_0890F314:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F33C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-29));
    ctx.gpr[5] = (ctx.gpr[4] & 28u);
    ctx.gpr[6] = (ctx.gpr[4] & 64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] >> 2u);
      if (branch_taken) {
          goto L_0890F384;
      }
      goto L_0890F368;
    }
L_0890F368:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0890F374u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 807u, 0x08913498u>(ctx, &aot_mem) && ctx.pc == 0x0890F374u) goto L_0890F374;
    return;
L_0890F374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (ctx.gpr[2] & 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
      if (branch_taken) {
          goto L_0890F39C;
      }
      goto L_0890F384;
    }
L_0890F384:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0890F390u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 807u, 0x08913498u>(ctx, &aot_mem) && ctx.pc == 0x0890F390u) goto L_0890F390;
    return;
L_0890F390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (ctx.gpr[2] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    goto L_0890F39C;
L_0890F39C:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F3BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-29));
    ctx.gpr[5] = (ctx.gpr[4] & 28u);
    ctx.gpr[6] = (ctx.gpr[4] & 64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] >> 2u);
      if (branch_taken) {
          goto L_0890F404;
      }
      goto L_0890F3E8;
    }
L_0890F3E8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0890F3F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 807u, 0x08913498u>(ctx, &aot_mem) && ctx.pc == 0x0890F3F4u) goto L_0890F3F4;
    return;
L_0890F3F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (ctx.gpr[2] & 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
      if (branch_taken) {
          goto L_0890F41C;
      }
      goto L_0890F404;
    }
L_0890F404:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0890F410u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 807u, 0x08913498u>(ctx, &aot_mem) && ctx.pc == 0x0890F410u) goto L_0890F410;
    return;
L_0890F410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (ctx.gpr[2] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    goto L_0890F41C;
L_0890F41C:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F43C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (ctx.gpr[5] ^ 58u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F494;
      }
      goto L_0890F454;
    }
L_0890F454:
    ctx.gpr[6] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890F48C;
      }
      goto L_0890F460;
    }
L_0890F460:
    ctx.gpr[6] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0890F484;
      }
      goto L_0890F46C;
    }
L_0890F46C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    ctx.gpr[6] = (ctx.gpr[6] & 4096u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0890F49C;
      }
      goto L_0890F47C;
    }
L_0890F47C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F4B0;
      }
      goto L_0890F484;
    }
L_0890F484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890F4B4;
      }
      goto L_0890F48C;
    }
L_0890F48C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0890F4B4;
      }
      goto L_0890F494;
    }
L_0890F494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890F4B4;
      }
      goto L_0890F49C;
    }
L_0890F49C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F4B0;
      }
      goto L_0890F4AC;
    }
L_0890F4AC:
    ctx.gpr[5] = (0u | 1u);
    goto L_0890F4B0;
L_0890F4B0:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_0890F4B4;
L_0890F4B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F4BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[7] = (0u | 17u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0890F528;
      }
      goto L_0890F4D8;
    }
L_0890F4D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(460)));
    ctx.gpr[6] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F520;
      }
      goto L_0890F4E8;
    }
L_0890F4E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[6] = (ctx.gpr[6] & 256u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F518;
      }
      goto L_0890F500;
    }
L_0890F500:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_0890F530;
      }
      goto L_0890F510;
    }
L_0890F510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F554;
      }
      goto L_0890F518;
    }
L_0890F518:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890F634;
      }
      goto L_0890F520;
    }
L_0890F520:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890F634;
      }
      goto L_0890F528;
    }
L_0890F528:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890F634;
      }
      goto L_0890F530;
    }
L_0890F530:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0890F5A0;
      }
      goto L_0890F554;
    }
L_0890F554:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_0890F5A0;
L_0890F5A0:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0890F620u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem) && ctx.pc == 0x0890F620u) goto L_0890F620;
    return;
L_0890F620:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F630;
      }
      goto L_0890F628;
    }
L_0890F628:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890F634;
      }
      goto L_0890F630;
    }
L_0890F630:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_0890F634;
L_0890F634:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F644:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890F660u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    goto L_0890F188;
L_0890F660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (ctx.gpr[2] & 7u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-29));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F68C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F694:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(780), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0890F6AC;
      }
      goto L_0890F69C;
    }
L_0890F69C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(50))))));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(788), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(784), ctx.gpr[5]);
    goto L_0890F6AC;
L_0890F6AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F6B4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(780)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F6BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F6D8;
      }
      goto L_0890F6D0;
    }
L_0890F6D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890F6E0;
      }
      goto L_0890F6D8;
    }
L_0890F6D8:
    ctx.gpr[31] = (0x0890F6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 666u, 0x08A673F8u>(ctx, &aot_mem) && ctx.pc == 0x0890F6E0u) goto L_0890F6E0;
    return;
L_0890F6E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F6EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(432));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0890F728;
      }
      goto L_0890F71C;
    }
L_0890F71C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(448)));
    ctx.gpr[31] = (0x0890F728u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(448));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x0890F728u) goto L_0890F728;
    return;
L_0890F728:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(448), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0890F794;
      }
      goto L_0890F730;
    }
L_0890F730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F748;
      }
      goto L_0890F73C;
    }
L_0890F73C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(448)));
    ctx.gpr[31] = (0x0890F748u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(448));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x0890F748u) goto L_0890F748;
    return;
L_0890F748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(448)));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(448)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F7A0;
      }
      goto L_0890F794;
    }
L_0890F794:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(448), 0u);
    goto L_0890F7A0;
L_0890F7A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F7BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890F7E0;
      }
      goto L_0890F7CC;
    }
L_0890F7CC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(432));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F820;
      }
      goto L_0890F7E0;
    }
L_0890F7E0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
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
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(432));
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
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F820;
      }
      goto L_0890F820;
    }
L_0890F820:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F828:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(448)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(432));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0890F890;
      }
      goto L_0890F850;
    }
L_0890F850:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(448)));
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(448)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0890F888u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0890F888u) goto L_0890F888;
    return;
L_0890F888:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F898;
      }
      goto L_0890F890;
    }
L_0890F890:
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
    goto L_0890F898;
L_0890F898:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0890F8ACu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 571u, 0x088E3E88u>(ctx, &aot_mem) && ctx.pc == 0x0890F8ACu) goto L_0890F8AC;
    return;
L_0890F8AC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0890F8D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem) && ctx.pc == 0x0890F8D8u) goto L_0890F8D8;
    return;
L_0890F8D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F908:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(432));
      if (branch_taken) {
          goto L_0890F964;
      }
      goto L_0890F924;
    }
L_0890F924:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0890F95Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x0890F95Cu) goto L_0890F95C;
    return;
L_0890F95C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F96C;
      }
      goto L_0890F964;
    }
L_0890F964:
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
    goto L_0890F96C;
L_0890F96C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890F994:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890F9B8;
      }
      goto L_0890F9B0;
    }
L_0890F9B0:
    ctx.gpr[31] = (0x0890F9B8u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(448));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x0890F9B8u) goto L_0890F9B8;
    return;
L_0890F9B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(448), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[31] = (0x0890F9D8u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 321u, 0x08809958u>(ctx, &aot_mem) && ctx.pc == 0x0890F9D8u) goto L_0890F9D8;
    return;
L_0890F9D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890FA0C;
      }
      goto L_0890F9E0;
    }
L_0890F9E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (65520u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0890FA0Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0890FA0Cu) goto L_0890FA0C;
    return;
L_0890FA0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890FA3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (1u << 16u);
      if (branch_taken) {
          goto L_0890FADC;
      }
      goto L_0890FA68;
    }
L_0890FA68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0890FA7C;
      }
      goto L_0890FA74;
    }
L_0890FA74:
    ctx.gpr[31] = (0x0890FA7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0890FA7Cu) goto L_0890FA7C;
    return;
L_0890FA7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(332)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FAC0;
      }
      goto L_0890FAAC;
    }
L_0890FAAC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FAD0;
      }
      goto L_0890FAB4;
    }
L_0890FAB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890FAD0;
      }
      goto L_0890FAC0;
    }
L_0890FAC0:
    ctx.gpr[31] = (0x0890FAC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 620u, 0x0888FEB4u>(ctx, &aot_mem) && ctx.pc == 0x0890FAC8u) goto L_0890FAC8;
    return;
L_0890FAC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0890FAD4;
      }
      goto L_0890FAD0;
    }
L_0890FAD0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_0890FAD4;
L_0890FAD4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890FA68;
      }
      goto L_0890FADC;
    }
L_0890FADC:
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
L_0890FAF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0890FB68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 26u, 0x088F824Cu>(ctx, &aot_mem) && ctx.pc == 0x0890FB68u) goto L_0890FB68;
    return;
L_0890FB68:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x0890FB74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 26u, 0x088F824Cu>(ctx, &aot_mem) && ctx.pc == 0x0890FB74u) goto L_0890FB74;
    return;
L_0890FB74:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0890FB88u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 67u, 0x08B24820u>(ctx, &aot_mem) && ctx.pc == 0x0890FB88u) goto L_0890FB88;
    return;
L_0890FB88:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0890FB9Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 67u, 0x08B24820u>(ctx, &aot_mem) && ctx.pc == 0x0890FB9Cu) goto L_0890FB9C;
    return;
L_0890FB9C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), 0u);
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(180))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(180))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(180))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(180))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (0u == ctx.gpr[17]) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(180))))));
        goto L_0890FC14;
    }
    goto L_0890FBF4;
L_0890FBF4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(180))))));
    ctx.gpr[6] = (ctx.gpr[6] | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(180))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[6] | 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(180))))));
    goto L_0890FC14;
L_0890FC14:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[16];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_0890FC40;
      }
      goto L_0890FC24;
    }
L_0890FC24:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(180))))));
    ctx.gpr[6] = (ctx.gpr[6] | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(180))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] | 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_0890FC40;
L_0890FC40:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(180))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(180))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    ctx.gpr[31] = (0x0890FC60u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 583u, 0x08A2F9E8u>(ctx, &aot_mem) && ctx.pc == 0x0890FC60u) goto L_0890FC60;
    return;
L_0890FC60:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890FC94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0890FCC0;
      }
      goto L_0890FCB4;
    }
L_0890FCB4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890FCC0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem) && ctx.pc == 0x0890FCC0u) goto L_0890FCC0;
    return;
L_0890FCC0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2192), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890FCD8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FD0C;
      }
      goto L_0890FCE4;
    }
L_0890FCE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(902))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FD04;
      }
      goto L_0890FCFC;
    }
L_0890FCFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890FD14;
      }
      goto L_0890FD04;
    }
L_0890FD04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0890FD14;
      }
      goto L_0890FD0C;
    }
L_0890FD0C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1032)));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_0890FD14;
L_0890FD14:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890FD1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1032), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FD44;
      }
      goto L_0890FD34;
    }
L_0890FD34:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890FD44;
      }
      goto L_0890FD3C;
    }
L_0890FD3C:
    ctx.gpr[31] = (0x0890FD44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(864));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 563u, 0x08A9F908u>(ctx, &aot_mem) && ctx.pc == 0x0890FD44u) goto L_0890FD44;
    return;
L_0890FD44:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890FD50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890FD84;
      }
      goto L_0890FD64;
    }
L_0890FD64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1028)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FD7C;
      }
      goto L_0890FD70;
    }
L_0890FD70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1032)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890FD94;
      }
      goto L_0890FD7C;
    }
L_0890FD7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890FDB4;
      }
      goto L_0890FD84;
    }
L_0890FD84:
    ctx.gpr[31] = (0x0890FD8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(864));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 604u, 0x08A9FCACu>(ctx, &aot_mem) && ctx.pc == 0x0890FD8Cu) goto L_0890FD8C;
    return;
L_0890FD8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FDB4;
      }
      goto L_0890FD94;
    }
L_0890FD94:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0890FD7C;
      }
      goto L_0890FD9C;
    }
L_0890FD9C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0890FDA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 99u, 0x08978D08u>(ctx, &aot_mem) && ctx.pc == 0x0890FDA8u) goto L_0890FDA8;
    return;
L_0890FDA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FD7C;
      }
      goto L_0890FDB0;
    }
L_0890FDB0:
    ctx.gpr[2] = (0u | 1u);
    goto L_0890FDB4;
L_0890FDB4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890FDC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890FDF4;
      }
      goto L_0890FDD4;
    }
L_0890FDD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1028)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FDEC;
      }
      goto L_0890FDE0;
    }
L_0890FDE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1032)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890FE04;
      }
      goto L_0890FDEC;
    }
L_0890FDEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0890FE24;
      }
      goto L_0890FDF4;
    }
L_0890FDF4:
    ctx.gpr[31] = (0x0890FDFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(864));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 609u, 0x08A9FCE0u>(ctx, &aot_mem) && ctx.pc == 0x0890FDFCu) goto L_0890FDFC;
    return;
L_0890FDFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FE24;
      }
      goto L_0890FE04;
    }
L_0890FE04:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0890FDEC;
      }
      goto L_0890FE0C;
    }
L_0890FE0C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0890FE18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 108u, 0x08978DB4u>(ctx, &aot_mem) && ctx.pc == 0x0890FE18u) goto L_0890FE18;
    return;
L_0890FE18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FDEC;
      }
      goto L_0890FE20;
    }
L_0890FE20:
    ctx.gpr[2] = (0u | 1u);
    goto L_0890FE24;
L_0890FE24:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890FE30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0890FEA0;
      }
      goto L_0890FE48;
    }
L_0890FE48:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(864));
    ctx.gpr[31] = (0x0890FE54u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 565u, 0x08A9F948u>(ctx, &aot_mem) && ctx.pc == 0x0890FE54u) goto L_0890FE54;
    return;
L_0890FE54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_0890FEC0;
      }
      goto L_0890FEA0;
    }
L_0890FEA0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1032)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    goto L_0890FEC0;
L_0890FEC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890FED0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4199)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0890FF04;
      }
      goto L_0890FEE8;
    }
L_0890FEE8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(864));
    ctx.gpr[31] = (0x0890FEF4u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 565u, 0x08A9F948u>(ctx, &aot_mem) && ctx.pc == 0x0890FEF4u) goto L_0890FEF4;
    return;
L_0890FEF4:
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890FF44;
      }
      goto L_0890FF04;
    }
L_0890FF04:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1032)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0890FF44;
L_0890FF44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890FF54:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1132), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890FF5C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1132)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890FF64:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1032), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0890FF6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0890FF90u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 648u, 0x08912938u>(ctx, &aot_mem) && ctx.pc == 0x0890FF90u) goto L_0890FF90;
    return;
L_0890FF90:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890FFB0;
      }
      goto L_0890FF98;
    }
L_0890FF98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890FFC0;
      }
      goto L_0890FFA8;
    }
L_0890FFA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_0890FFB8;
      }
      goto L_0890FFB0;
    }
L_0890FFB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 2u, 0x08910004u>(ctx, &aot_mem); return;
      }
      goto L_0890FFB8;
    }
L_0890FFB8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890FFC8;
      }
      goto L_0890FFC0;
    }
L_0890FFC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 2000u);
      if (branch_taken) {
          goto L_0890FFCC;
      }
      goto L_0890FFC8;
    }
L_0890FFC8:
    ctx.gpr[18] = (0u | 250u);
    goto L_0890FFCC;
L_0890FFCC:
    ctx.gpr[31] = (0x0890FFD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x0890FFD4u) goto L_0890FFD4;
    return;
L_0890FFD4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0890FFE4u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x0890FFE4u) goto L_0890FFE4;
    return;
L_0890FFE4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2244)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08910004u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 152u, 0x0891CA20u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0066(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0066_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_66(Runtime &runtime) {
    runtime.register_generated_unit(66u, 0x0890C000u, 16384u, &recomp_unit_0066, &recomp_unit_0066_entry);
    runtime.register_function(0x0890C000u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C010u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C030u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C038u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C040u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C050u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C074u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C098u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C0A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C0C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C0CCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C0DCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C108u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C110u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C118u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C120u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C12Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C148u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C158u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C160u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C168u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C170u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C178u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C190u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C1A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C1A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C1B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C1BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C1CCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C1D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C1E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C1F4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C200u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C218u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C22Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C238u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C240u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C248u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C258u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C264u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C26Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C288u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C298u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C2A4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C2ACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C2C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C2DCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C2F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C308u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C314u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C324u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C32Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C338u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C354u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C370u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C37Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C394u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C3ACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C3B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C3C4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C3DCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C3E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C3F8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C41Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C42Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C458u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C464u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C46Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C478u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C484u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C4A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C4D0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C4ECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C4F4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C504u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C50Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C51Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C524u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C52Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C534u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C544u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C550u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C55Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C564u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C56Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C574u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C57Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C584u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C58Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C594u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C59Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C5A4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C5ACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C5B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C5BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C5C4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C5CCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C5D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C5D8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C5E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C5ECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C5F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C604u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C63Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C644u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C64Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C65Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C674u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C68Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C6B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C6C0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C6D0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C6DCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C6E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C6ECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C6F8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C704u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C710u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C728u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C734u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C73Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C744u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C74Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C754u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C75Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C764u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C774u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C798u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C7ACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C7B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C7C0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C7C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C7D0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C7D8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C7E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C7E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C7F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C7F8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C7FCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C80Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C818u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C820u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C828u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C830u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C838u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C840u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C848u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C84Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C854u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C888u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C898u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C8B8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C8C0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C8D8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C8E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C900u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C90Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C928u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C930u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C944u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C950u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C960u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C96Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C988u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C998u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C9A4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C9ACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C9C0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C9E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890C9FCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CA0Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CA18u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CA20u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CA2Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CA38u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CA44u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CA4Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CA60u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CA8Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CA9Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CAA8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CAC8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CAD4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CADCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CAE4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CAECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CAF8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CB14u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CB24u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CB3Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CB4Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CB64u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CB80u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CB98u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CBA0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CBB0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CBB8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CBC0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CBC8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CBD8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CBF4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC00u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC08u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC18u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC20u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC28u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC30u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC38u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC48u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC50u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC58u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC6Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC88u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CC90u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CCA0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CCB4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CCC4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CCCCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CCF4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CD08u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CD18u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CD24u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CD2Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CD3Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CD48u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CD50u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CD5Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CD64u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CD78u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CD98u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CDE0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CDF4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE20u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE28u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE30u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE38u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE40u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE48u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE50u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE60u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE70u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE7Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE88u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CE90u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CEACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CECCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CED8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CEF4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CF14u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CF20u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CF28u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CF3Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CF44u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CF50u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CF58u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CF6Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CF74u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CF80u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CF88u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CF9Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CFA4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CFB0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CFB8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CFCCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CFD0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CFD8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CFE0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890CFECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D004u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D020u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D030u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D05Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D08Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D0A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D0D8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D0E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D170u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D178u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D180u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D188u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D194u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D19Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D1A4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D1ACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D1B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D1BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D1C0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D1C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D1D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D1E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D1FCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D204u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D20Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D228u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D230u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D2A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D2BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D2D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D2E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D318u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D324u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D354u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D36Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D374u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D37Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D384u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D394u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D3A4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D3D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D3DCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D408u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D41Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D424u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D43Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D44Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D458u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D460u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D464u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D46Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D47Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D484u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D48Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D490u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D498u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D4C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D4D0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D4E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D4F4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D4FCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D504u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D510u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D524u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D544u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D554u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D55Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D5A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D5C0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D5D0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D5E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D600u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D608u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D61Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D628u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D654u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D670u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D678u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D688u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D6A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D6A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D6B0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D6F4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D708u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D720u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D734u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D740u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D75Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D768u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D774u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D794u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D7A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D7B8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D7C0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D7E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D7E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D7F4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D80Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D81Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D848u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D850u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D858u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D864u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D874u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D880u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D894u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D8B0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D8C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D8D8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D8E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D8E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D8ECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D900u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D918u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D928u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D930u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D938u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D93Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D94Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D960u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D970u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D990u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D998u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D9B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D9C0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D9CCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890D9E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA20u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA2Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA38u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA40u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA48u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA54u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA5Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA8Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DA98u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DAA8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DAB4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DABCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DAC8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DAD0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DAECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DB04u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DB0Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DB24u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DB2Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DB38u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DB44u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DB5Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DBA8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DBB8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DBCCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DBD8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DC00u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DC10u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DC1Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DC34u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DC3Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DC44u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DC50u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DC74u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DC90u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DC98u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DCA0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DCACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DCB8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DCC8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DCE4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DCF0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DD04u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DD14u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DD28u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DD30u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DD3Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DD44u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DD58u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DD7Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DD84u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DD90u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DD98u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DDACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DDD0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DDE0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DE00u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DE08u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DE14u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DE20u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DE38u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DE44u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DE48u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DE50u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DE58u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DE60u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DE7Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DE94u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DE9Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DEACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DEB4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DEBCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DEC8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DED4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DEE4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DEF0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DEF8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DF04u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DF10u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DF20u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DF30u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DF4Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DF58u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DF64u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DFB0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DFB8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DFC0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DFC8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890DFE8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E008u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E088u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E090u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E098u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E110u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E134u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E150u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E190u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E198u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E1B8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E1D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E210u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E218u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E220u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E224u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E244u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E254u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E268u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E270u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E284u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E28Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E2A4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E2B0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E2C0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E2D8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E2E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E2F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E2F4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E2FCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E310u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E318u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E328u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E338u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E340u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E348u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E360u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E368u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E370u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E37Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E388u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E394u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E39Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E3A4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E3B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E3BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E3CCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E3D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E3E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E3ECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E3F4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E3FCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E42Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E430u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E468u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E488u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E490u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E498u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E4A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E4B0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E4BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E4C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E4D8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E4E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E4F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E500u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E50Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E518u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E528u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E534u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E540u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E544u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E568u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E57Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E590u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E598u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E5A4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E5B8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E5CCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E5DCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E5ECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E608u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E620u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E628u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E634u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E648u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E65Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E668u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E680u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E69Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E6F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E710u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E724u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E734u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E74Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E754u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E768u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E798u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E7ACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E7C4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E7D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E7E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E7E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E7F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E7F8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E818u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E824u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E858u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E860u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E868u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E87Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E888u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E890u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E898u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E8A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E8A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E8B8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E8C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E8D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E8E4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E8F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E8F8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E908u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E918u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E924u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E934u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E940u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E948u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E958u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E968u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E974u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E984u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E990u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E998u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E9A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E9B8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E9C4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E9D4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E9E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E9E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890E9F8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EA08u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EA14u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EA24u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EA30u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EA38u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EA48u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EA58u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EA64u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EA74u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EA80u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EA88u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EAA4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EAD0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EB58u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EB70u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EB80u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EBA4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EBC4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EBD0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EBD8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EBE0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EBE8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EC04u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EC14u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EC18u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EC24u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EC30u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EC7Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ECB0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ECBCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ECE0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ECE8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ECF0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ECF8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ED0Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ED2Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ED38u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ED40u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ED48u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ED60u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890ED78u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EDA0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EDB0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EDC8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EDECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EDF4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EE04u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EE34u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EE40u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EE48u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EE60u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EE68u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EE70u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EE74u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EE80u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EE88u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EE90u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EE98u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EEA0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EEB4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EEC4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EEDCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EEECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EF00u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EF34u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EF40u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EF4Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EF6Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EF74u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EF7Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EF8Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EF94u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EF9Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EFA8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EFBCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EFC4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EFD0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EFDCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EFF0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890EFF8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F004u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F00Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F064u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F070u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F084u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F090u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F0F4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F114u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F120u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F134u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F148u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F16Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F188u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F1C0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F1D0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F1D8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F1DCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F1E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F1ECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F1FCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F200u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F23Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F24Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F26Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F278u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F27Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F28Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F2A8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F2B8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F2C8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F2DCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F2F0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F30Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F314u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F33Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F368u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F374u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F384u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F390u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F39Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F3BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F3E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F3F4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F404u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F410u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F41Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F43Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F454u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F460u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F46Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F47Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F484u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F48Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F494u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F49Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F4ACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F4B0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F4B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F4BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F4D8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F4E8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F500u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F510u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F518u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F520u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F528u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F530u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F554u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F5A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F620u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F628u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F630u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F634u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F644u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F660u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F68Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F694u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F69Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F6ACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F6B4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F6BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F6D0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F6D8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F6E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F6ECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F71Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F728u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F730u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F73Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F748u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F794u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F7A0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F7BCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F7CCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F7E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F820u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F828u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F850u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F888u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F890u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F898u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F8ACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F8D8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F908u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F924u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F95Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F964u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F96Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F994u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F9B0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F9B8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F9D8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890F9E0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FA0Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FA3Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FA68u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FA74u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FA7Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FAACu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FAB4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FAC0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FAC8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FAD0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FAD4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FADCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FAF8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FB68u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FB74u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FB88u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FB9Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FBF4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FC14u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FC24u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FC40u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FC60u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FC94u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FCB4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FCC0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FCD8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FCE4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FCFCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FD04u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FD0Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FD14u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FD1Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FD34u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FD3Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FD44u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FD50u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FD64u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FD70u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FD7Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FD84u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FD8Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FD94u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FD9Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FDA8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FDB0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FDB4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FDC0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FDD4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FDE0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FDECu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FDF4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FDFCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FE04u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FE0Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FE18u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FE20u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FE24u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FE30u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FE48u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FE54u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FEA0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FEC0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FED0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FEE8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FEF4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FF04u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FF44u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FF54u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FF5Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FF64u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FF6Cu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FF90u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FF98u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FFA8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FFB0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FFB8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FFC0u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FFC8u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FFCCu, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FFD4u, &recomp_unit_0066, "recomp_unit_0066");
    runtime.register_function(0x0890FFE4u, &recomp_unit_0066, "recomp_unit_0066");
}
} // namespace psprecomp
