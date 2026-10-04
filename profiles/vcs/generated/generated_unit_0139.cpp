#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0139[4085] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 6, 0, 0, 7, 0, 0,
    8, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 20, 0, 0, 0, 0, 21, 0, 22, 0, 23, 0, 24, 0, 0, 0, 25, 0, 26, 0, 0, 0, 27, 0, 28, 0, 29, 0, 30, 0, 0,
    0, 31, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 41, 0,
    42, 0, 43, 0, 44, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0, 0, 62, 0, 0, 0, 0,
    0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0,
    0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 76, 0, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 86, 0, 87, 0, 88, 0, 0,
    0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0,
    0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0,
    106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 112,
    0, 0, 113, 0, 0, 114, 0, 115, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 122, 123, 0, 0, 0,
    124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 128, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0,
    0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0, 149, 150, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153, 0, 154, 0, 0,
    155, 0, 0, 156, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 163, 164, 0, 0, 0, 0, 0, 0,
    0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 173, 174, 0, 0, 0, 0, 0, 175, 0, 176, 0, 177, 0, 0, 178, 0,
    0, 179, 0, 0, 180, 181, 0, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 188, 0, 0, 189, 0, 190, 0,
    191, 0, 0, 192, 0, 0, 193, 0, 0, 194, 195, 0, 0, 0, 196, 0, 197, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 201, 202, 0, 0, 203,
    0, 204, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 209, 0, 0, 210, 0, 211, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 215, 216,
    0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 0, 228, 0, 0, 229, 0, 230, 231, 0, 232, 0, 233, 0, 234, 0, 0, 235, 0,
    0, 236, 0, 237, 238, 0, 239, 0, 240, 0, 241, 0, 0, 242, 0, 0, 243, 0, 244, 245, 0, 246, 0, 247, 0, 248, 0, 0, 249, 0, 0, 250,
    0, 251, 252, 0, 253, 0, 254, 0, 255, 0, 0, 256, 0, 0, 257, 0, 258, 259, 0, 260, 0, 261, 0, 262, 0, 0, 263, 0, 0, 264, 0, 265,
    266, 0, 267, 0, 268, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 272, 273, 0, 274, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285,
    0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0,
    0, 0, 0, 0, 292, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 296, 0, 0, 0, 0, 0, 0, 297,
    0, 0, 0, 0, 298, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    303, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 309, 0, 310, 0, 0, 0, 0,
    0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0,
    0, 0, 0, 317, 0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 327, 0, 0, 0, 0, 328, 0, 329, 0, 330, 0, 331, 332,
    0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 338, 0, 0, 0, 339, 340, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0,
    350, 0, 351, 0, 352, 0, 0, 353, 0, 354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 357, 358, 359, 0, 360, 0, 361, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0,
    0, 0, 365, 0, 0, 0, 366, 0, 367, 0, 0, 368, 0, 369, 0, 0, 370, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 377, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 0,
    0, 383, 0, 384, 0, 385, 0, 0, 386, 0, 0, 0, 387, 0, 0, 388, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0,
    0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 397, 0, 398, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 402,
    0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0,
    407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 418, 0,
    0, 0, 419, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0,
    0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 431, 0, 432, 0,
    433, 0, 434, 0, 435, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440,
    0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0,
    0, 0, 470, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 476, 0, 477, 478, 0, 0, 0, 0, 0, 0, 0,
    479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 483, 0, 0, 484, 0,
    0, 0, 485, 0, 486, 0, 487, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 493,
    0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 496, 0, 497, 0, 498, 0, 499, 0, 500, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0,
    503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 505, 0, 506, 0, 507, 0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 515, 0, 516, 0, 517, 518, 0, 0, 0,
    0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0,
    0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 527, 0, 0, 0, 528, 0, 0, 529, 0, 0, 530, 0, 0, 531, 0, 0, 0,
    532, 0, 0, 533, 0, 534, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 538, 539, 0, 0, 0, 0, 540, 0, 0, 541, 0,
    542, 0, 0, 0, 543, 0, 0, 544, 0, 545, 0, 0, 546, 0, 547, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    549, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 554, 0, 555, 0, 556, 0, 0, 0, 557, 0, 0, 0,
    0, 0, 558, 0, 559, 0, 560, 0, 561, 0, 562, 0, 563, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 567, 0, 568, 0, 0, 0,
    0, 569, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 573, 0, 0, 574, 0, 575, 0, 0, 576, 0, 577, 0, 578,
    0, 579, 0, 580, 0, 581, 0, 582, 0, 583, 0, 584, 0, 585, 0, 586, 0, 587, 0, 0, 0, 588, 0, 589, 0, 590, 0, 0, 0, 591, 0, 0,
    0, 0, 0, 0, 592, 0, 593, 0, 594, 0, 595, 0, 0, 0, 596, 0, 597, 0, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0, 0, 600, 0, 601,
    0, 0, 0, 0, 602, 0, 603, 0, 0, 0, 0, 604, 0, 605, 0, 0, 606, 0, 607, 0, 608, 0, 609, 0, 610, 0, 611, 0, 612, 0, 0, 0,
    613, 0, 614, 0, 0, 615, 0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 620, 0, 621, 0, 622, 0, 623, 0, 624,
    0, 625, 0, 626, 0, 0, 0, 0, 627, 0, 628, 0, 0, 0, 0, 629, 630, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 632, 0, 0, 633, 0,
    0, 0, 0, 0, 0, 0, 0, 634, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 637, 0, 638, 0, 639, 0, 640, 0, 641, 0, 642,
    0, 0, 643, 0, 644, 0, 0, 645, 0, 646, 0, 0, 647, 0, 648, 0, 0, 649, 0, 650, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 652, 0, 0, 653, 0, 654, 0, 655, 0, 0, 0, 656, 0, 657, 0, 658, 0, 659, 0, 0, 0, 0, 660, 0, 661, 0, 0, 0, 0, 662,
    663, 0, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 666, 0, 667, 0, 0, 668, 0, 0, 669, 0, 0, 670, 0, 0, 671, 0, 672, 0, 0, 0,
    0, 0, 673, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 678, 0, 0, 0, 0, 0, 679, 680, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 685, 0, 686, 0, 0, 0, 0, 687, 0, 0, 688, 0, 689, 0, 690, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0,
    0, 0, 0, 0, 0, 693, 0, 694, 0, 0, 0, 695, 0, 0, 696, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0,
    699, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 0, 702, 0, 0, 703, 0, 0, 704, 0, 705, 0, 0, 0, 706, 0, 0, 707, 0, 0, 0,
    708, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 710, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 715, 716, 0, 0,
    717, 0, 0, 0, 718, 719, 0, 720, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 723, 724, 0, 0, 0, 725, 0, 726, 0, 727, 0,
    0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 731, 0, 732, 0,
    0, 733, 0, 0, 734, 0, 0, 0, 735, 0, 736, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0,
    0, 739, 0, 0, 0, 0, 740, 0, 741, 0, 0, 742, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    744, 0, 0, 0, 0, 0, 745, 0, 0, 746, 0, 747, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 750, 0, 751, 0, 752, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 754, 0, 0, 0, 755,
    0, 0, 0, 756, 0, 757, 0, 758, 0, 759, 0, 760, 0, 0, 761, 0, 0, 762, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 764, 0, 765, 0, 766, 0, 0, 0, 767, 0, 0, 768, 0, 0, 0, 0, 0, 0, 769, 0, 770, 0, 0, 771, 0,
    772, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 775, 0, 0, 776, 0, 0, 777, 0, 0, 0, 0, 0,
    0, 778, 0, 779, 0, 780, 0, 781, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 783, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 788, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 794, 0, 0, 795, 0, 796, 0, 797, 0, 798, 0, 0, 799, 0, 800,
    0, 0, 0, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 803, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 805, 0, 806, 0, 0, 0, 807, 0, 808, 0, 0, 809, 0, 0, 0, 0, 810, 0, 0, 0, 0, 811, 0, 812, 813,
    0, 0, 0, 814, 815, 0, 0, 816, 0, 0, 0, 0, 0, 817, 0, 818, 0, 0, 0, 819, 0, 0, 820, 0, 0, 0, 0, 821, 0, 0, 822, 0,
    823, 0, 0, 0, 0, 0, 0, 824, 0, 825, 0, 0, 0, 0, 826, 0, 827, 0, 0, 0, 828, 0, 829, 0, 0, 830, 0, 831, 0, 832, 0, 0,
    0, 0, 833, 0, 0, 834, 0, 0, 0, 0, 835, 0, 836, 0, 837, 0, 0, 0, 838, 0, 839, 0, 840, 0, 0, 841, 0, 0, 842, 0, 0, 843,
    0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 845, 0, 846, 0, 0, 847, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0, 849, 0, 0, 850, 0,
    0, 851, 0, 852, 0, 0, 853, 0, 854, 0, 0, 855, 0, 0, 856, 0, 0, 0, 0, 0, 0, 0, 0, 0, 857, 0, 0, 858, 0, 859, 0, 860,
    0, 0, 861, 0, 0, 0, 862, 0, 863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 865, 0, 866, 0, 867, 0, 0, 0, 0,
    0, 0, 0, 868, 0, 0, 0, 0, 0, 0, 0, 869, 0, 870, 0, 0, 0, 871, 0, 0, 0, 872, 0, 0, 0, 0, 0, 0, 873, 0, 0, 0,
    0, 874, 0, 0, 0, 0, 875, 0, 0, 0, 0, 0, 876, 0, 0, 0, 0, 877, 0, 0, 878, 0, 0, 0, 0, 0, 879, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 880, 0, 881, 0, 0, 882, 0, 0, 883, 0, 0, 0, 0, 0, 0, 884, 0, 0, 885, 0, 886, 0, 0,
    0, 0, 0, 0, 887, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 888, 0, 889, 0, 0, 0, 0, 890, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 891, 0, 0, 892, 0, 893, 0, 0, 0, 894, 0, 0, 0, 895, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 897, 0, 0, 0, 898, 0, 0, 899, 0, 0, 0, 0, 0, 0, 0, 0, 0, 900,
};
void recomp_unit_0139_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A30000u;
        entry_id = (entry_delta < 16340u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0139[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A30000;
    case 2u: goto L_08A30054;
    case 3u: goto L_08A3005C;
    case 4u: goto L_08A300D4;
    case 5u: goto L_08A300D8;
    case 6u: goto L_08A300E8;
    case 7u: goto L_08A300F4;
    case 8u: goto L_08A30100;
    case 9u: goto L_08A30108;
    case 10u: goto L_08A30110;
    case 11u: goto L_08A30160;
    case 12u: goto L_08A30168;
    case 13u: goto L_08A301A0;
    case 14u: goto L_08A301D0;
    case 15u: goto L_08A301D8;
    case 16u: goto L_08A30224;
    case 17u: goto L_08A30240;
    case 18u: goto L_08A30248;
    case 19u: goto L_08A30274;
    case 20u: goto L_08A30288;
    case 21u: goto L_08A3029C;
    case 22u: goto L_08A302A4;
    case 23u: goto L_08A302AC;
    case 24u: goto L_08A302B4;
    case 25u: goto L_08A302C4;
    case 26u: goto L_08A302CC;
    case 27u: goto L_08A302DC;
    case 28u: goto L_08A302E4;
    case 29u: goto L_08A302EC;
    case 30u: goto L_08A302F4;
    case 31u: goto L_08A30304;
    case 32u: goto L_08A30314;
    case 33u: goto L_08A3031C;
    case 34u: goto L_08A30334;
    case 35u: goto L_08A30364;
    case 36u: goto L_08A303F4;
    case 37u: goto L_08A303FC;
    case 38u: goto L_08A3044C;
    case 39u: goto L_08A30458;
    case 40u: goto L_08A3046C;
    case 41u: goto L_08A30478;
    case 42u: goto L_08A30480;
    case 43u: goto L_08A30488;
    case 44u: goto L_08A30490;
    case 45u: goto L_08A304A8;
    case 46u: goto L_08A304B0;
    case 47u: goto L_08A30500;
    case 48u: goto L_08A30508;
    case 49u: goto L_08A30588;
    case 50u: goto L_08A30590;
    case 51u: goto L_08A30598;
    case 52u: goto L_08A305A0;
    case 53u: goto L_08A305A8;
    case 54u: goto L_08A305B4;
    case 55u: goto L_08A305CC;
    case 56u: goto L_08A3060C;
    case 57u: goto L_08A30614;
    case 58u: goto L_08A306C8;
    case 59u: goto L_08A306D0;
    case 60u: goto L_08A306D8;
    case 61u: goto L_08A306E0;
    case 62u: goto L_08A306EC;
    case 63u: goto L_08A30710;
    case 64u: goto L_08A30738;
    case 65u: goto L_08A30754;
    case 66u: goto L_08A30768;
    case 67u: goto L_08A30774;
    case 68u: goto L_08A30788;
    case 69u: goto L_08A30794;
    case 70u: goto L_08A307B0;
    case 71u: goto L_08A307B8;
    case 72u: goto L_08A307CC;
    case 73u: goto L_08A307DC;
    case 74u: goto L_08A307E4;
    case 75u: goto L_08A307F8;
    case 76u: goto L_08A3080C;
    case 77u: goto L_08A30818;
    case 78u: goto L_08A30820;
    case 79u: goto L_08A30828;
    case 80u: goto L_08A30830;
    case 81u: goto L_08A30838;
    case 82u: goto L_08A30840;
    case 83u: goto L_08A30848;
    case 84u: goto L_08A30850;
    case 85u: goto L_08A30858;
    case 86u: goto L_08A30864;
    case 87u: goto L_08A3086C;
    case 88u: goto L_08A30874;
    case 89u: goto L_08A30884;
    case 90u: goto L_08A30894;
    case 91u: goto L_08A308A4;
    case 92u: goto L_08A308B4;
    case 93u: goto L_08A308C4;
    case 94u: goto L_08A308D4;
    case 95u: goto L_08A308E4;
    case 96u: goto L_08A308F4;
    case 97u: goto L_08A30904;
    case 98u: goto L_08A30914;
    case 99u: goto L_08A30924;
    case 100u: goto L_08A3092C;
    case 101u: goto L_08A30934;
    case 102u: goto L_08A3093C;
    case 103u: goto L_08A30944;
    case 104u: goto L_08A30958;
    case 105u: goto L_08A3096C;
    case 106u: goto L_08A30980;
    case 107u: goto L_08A30994;
    case 108u: goto L_08A309A8;
    case 109u: goto L_08A309BC;
    case 110u: goto L_08A309C4;
    case 111u: goto L_08A309DC;
    case 112u: goto L_08A309FC;
    case 113u: goto L_08A30A08;
    case 114u: goto L_08A30A14;
    case 115u: goto L_08A30A1C;
    case 116u: goto L_08A30A20;
    case 117u: goto L_08A30A30;
    case 118u: goto L_08A30A40;
    case 119u: goto L_08A30A48;
    case 120u: goto L_08A30A50;
    case 121u: goto L_08A30A58;
    case 122u: goto L_08A30A6C;
    case 123u: goto L_08A30A70;
    case 124u: goto L_08A30A80;
    case 125u: goto L_08A30AB4;
    case 126u: goto L_08A30AC0;
    case 127u: goto L_08A30ACC;
    case 128u: goto L_08A30AD4;
    case 129u: goto L_08A30ADC;
    case 130u: goto L_08A30AE8;
    case 131u: goto L_08A30AF4;
    case 132u: goto L_08A30B08;
    case 133u: goto L_08A30B10;
    case 134u: goto L_08A30B30;
    case 135u: goto L_08A30B38;
    case 136u: goto L_08A30B40;
    case 137u: goto L_08A30B50;
    case 138u: goto L_08A30B5C;
    case 139u: goto L_08A30B74;
    case 140u: goto L_08A30B94;
    case 141u: goto L_08A30B9C;
    case 142u: goto L_08A30BCC;
    case 143u: goto L_08A30BD4;
    case 144u: goto L_08A30BD8;
    case 145u: goto L_08A30BF0;
    case 146u: goto L_08A30C14;
    case 147u: goto L_08A30C24;
    case 148u: goto L_08A30C30;
    case 149u: goto L_08A30C38;
    case 150u: goto L_08A30C3C;
    case 151u: goto L_08A30C54;
    case 152u: goto L_08A30C60;
    case 153u: goto L_08A30C6C;
    case 154u: goto L_08A30C74;
    case 155u: goto L_08A30C80;
    case 156u: goto L_08A30C8C;
    case 157u: goto L_08A30C94;
    case 158u: goto L_08A30CA8;
    case 159u: goto L_08A30CB0;
    case 160u: goto L_08A30CC4;
    case 161u: goto L_08A30CCC;
    case 162u: goto L_08A30CD8;
    case 163u: goto L_08A30CE0;
    case 164u: goto L_08A30CE4;
    case 165u: goto L_08A30D04;
    case 166u: goto L_08A30D50;
    case 167u: goto L_08A30D60;
    case 168u: goto L_08A30D68;
    case 169u: goto L_08A30D94;
    case 170u: goto L_08A30D9C;
    case 171u: goto L_08A30DA8;
    case 172u: goto L_08A30DB4;
    case 173u: goto L_08A30DC0;
    case 174u: goto L_08A30DC4;
    case 175u: goto L_08A30DDC;
    case 176u: goto L_08A30DE4;
    case 177u: goto L_08A30DEC;
    case 178u: goto L_08A30DF8;
    case 179u: goto L_08A30E04;
    case 180u: goto L_08A30E10;
    case 181u: goto L_08A30E14;
    case 182u: goto L_08A30E2C;
    case 183u: goto L_08A30E34;
    case 184u: goto L_08A30E3C;
    case 185u: goto L_08A30E48;
    case 186u: goto L_08A30E54;
    case 187u: goto L_08A30E60;
    case 188u: goto L_08A30E64;
    case 189u: goto L_08A30E70;
    case 190u: goto L_08A30E78;
    case 191u: goto L_08A30E80;
    case 192u: goto L_08A30E8C;
    case 193u: goto L_08A30E98;
    case 194u: goto L_08A30EA4;
    case 195u: goto L_08A30EA8;
    case 196u: goto L_08A30EB8;
    case 197u: goto L_08A30EC0;
    case 198u: goto L_08A30EC8;
    case 199u: goto L_08A30ED4;
    case 200u: goto L_08A30EE0;
    case 201u: goto L_08A30EEC;
    case 202u: goto L_08A30EF0;
    case 203u: goto L_08A30EFC;
    case 204u: goto L_08A30F04;
    case 205u: goto L_08A30F0C;
    case 206u: goto L_08A30F18;
    case 207u: goto L_08A30F24;
    case 208u: goto L_08A30F30;
    case 209u: goto L_08A30F34;
    case 210u: goto L_08A30F40;
    case 211u: goto L_08A30F48;
    case 212u: goto L_08A30F50;
    case 213u: goto L_08A30F5C;
    case 214u: goto L_08A30F68;
    case 215u: goto L_08A30F78;
    case 216u: goto L_08A30F7C;
    case 217u: goto L_08A30F84;
    case 218u: goto L_08A30FA8;
    case 219u: goto L_08A30FB4;
    case 220u: goto L_08A30FB8;
    case 221u: goto L_08A30FC0;
    case 222u: goto L_08A31000;
    case 223u: goto L_08A31028;
    case 224u: goto L_08A31080;
    case 225u: goto L_08A310A0;
    case 226u: goto L_08A310A8;
    case 227u: goto L_08A310B0;
    case 228u: goto L_08A310BC;
    case 229u: goto L_08A310C8;
    case 230u: goto L_08A310D0;
    case 231u: goto L_08A310D4;
    case 232u: goto L_08A310DC;
    case 233u: goto L_08A310E4;
    case 234u: goto L_08A310EC;
    case 235u: goto L_08A310F8;
    case 236u: goto L_08A31104;
    case 237u: goto L_08A3110C;
    case 238u: goto L_08A31110;
    case 239u: goto L_08A31118;
    case 240u: goto L_08A31120;
    case 241u: goto L_08A31128;
    case 242u: goto L_08A31134;
    case 243u: goto L_08A31140;
    case 244u: goto L_08A31148;
    case 245u: goto L_08A3114C;
    case 246u: goto L_08A31154;
    case 247u: goto L_08A3115C;
    case 248u: goto L_08A31164;
    case 249u: goto L_08A31170;
    case 250u: goto L_08A3117C;
    case 251u: goto L_08A31184;
    case 252u: goto L_08A31188;
    case 253u: goto L_08A31190;
    case 254u: goto L_08A31198;
    case 255u: goto L_08A311A0;
    case 256u: goto L_08A311AC;
    case 257u: goto L_08A311B8;
    case 258u: goto L_08A311C0;
    case 259u: goto L_08A311C4;
    case 260u: goto L_08A311CC;
    case 261u: goto L_08A311D4;
    case 262u: goto L_08A311DC;
    case 263u: goto L_08A311E8;
    case 264u: goto L_08A311F4;
    case 265u: goto L_08A311FC;
    case 266u: goto L_08A31200;
    case 267u: goto L_08A31208;
    case 268u: goto L_08A31210;
    case 269u: goto L_08A31218;
    case 270u: goto L_08A31224;
    case 271u: goto L_08A31230;
    case 272u: goto L_08A3123C;
    case 273u: goto L_08A31240;
    case 274u: goto L_08A31248;
    case 275u: goto L_08A3124C;
    case 276u: goto L_08A3128C;
    case 277u: goto L_08A312A0;
    case 278u: goto L_08A312A8;
    case 279u: goto L_08A312B4;
    case 280u: goto L_08A312E0;
    case 281u: goto L_08A31328;
    case 282u: goto L_08A31330;
    case 283u: goto L_08A31340;
    case 284u: goto L_08A31360;
    case 285u: goto L_08A3137C;
    case 286u: goto L_08A313A0;
    case 287u: goto L_08A313A8;
    case 288u: goto L_08A313B4;
    case 289u: goto L_08A313D0;
    case 290u: goto L_08A313E0;
    case 291u: goto L_08A313EC;
    case 292u: goto L_08A31410;
    case 293u: goto L_08A31414;
    case 294u: goto L_08A3143C;
    case 295u: goto L_08A3145C;
    case 296u: goto L_08A31460;
    case 297u: goto L_08A3147C;
    case 298u: goto L_08A31490;
    case 299u: goto L_08A31494;
    case 300u: goto L_08A314B4;
    case 301u: goto L_08A314C8;
    case 302u: goto L_08A314D4;
    case 303u: goto L_08A31500;
    case 304u: goto L_08A31508;
    case 305u: goto L_08A31524;
    case 306u: goto L_08A31530;
    case 307u: goto L_08A31554;
    case 308u: goto L_08A3155C;
    case 309u: goto L_08A31564;
    case 310u: goto L_08A3156C;
    case 311u: goto L_08A3158C;
    case 312u: goto L_08A315A8;
    case 313u: goto L_08A315BC;
    case 314u: goto L_08A315CC;
    case 315u: goto L_08A315DC;
    case 316u: goto L_08A315F8;
    case 317u: goto L_08A3160C;
    case 318u: goto L_08A31614;
    case 319u: goto L_08A31620;
    case 320u: goto L_08A3162C;
    case 321u: goto L_08A31638;
    case 322u: goto L_08A31640;
    case 323u: goto L_08A31654;
    case 324u: goto L_08A31688;
    case 325u: goto L_08A316BC;
    case 326u: goto L_08A316C4;
    case 327u: goto L_08A316CC;
    case 328u: goto L_08A316E0;
    case 329u: goto L_08A316E8;
    case 330u: goto L_08A316F0;
    case 331u: goto L_08A316F8;
    case 332u: goto L_08A316FC;
    case 333u: goto L_08A31710;
    case 334u: goto L_08A31728;
    case 335u: goto L_08A31750;
    case 336u: goto L_08A31764;
    case 337u: goto L_08A31770;
    case 338u: goto L_08A31790;
    case 339u: goto L_08A317A0;
    case 340u: goto L_08A317A4;
    case 341u: goto L_08A317AC;
    case 342u: goto L_08A317C4;
    case 343u: goto L_08A317E8;
    case 344u: goto L_08A317F0;
    case 345u: goto L_08A31820;
    case 346u: goto L_08A3182C;
    case 347u: goto L_08A31848;
    case 348u: goto L_08A31850;
    case 349u: goto L_08A3186C;
    case 350u: goto L_08A31880;
    case 351u: goto L_08A31888;
    case 352u: goto L_08A31890;
    case 353u: goto L_08A3189C;
    case 354u: goto L_08A318A4;
    case 355u: goto L_08A318B4;
    case 356u: goto L_08A318C4;
    case 357u: goto L_08A318D8;
    case 358u: goto L_08A318DC;
    case 359u: goto L_08A318E0;
    case 360u: goto L_08A318E8;
    case 361u: goto L_08A318F0;
    case 362u: goto L_08A3193C;
    case 363u: goto L_08A3196C;
    case 364u: goto L_08A31978;
    case 365u: goto L_08A31988;
    case 366u: goto L_08A31998;
    case 367u: goto L_08A319A0;
    case 368u: goto L_08A319AC;
    case 369u: goto L_08A319B4;
    case 370u: goto L_08A319C0;
    case 371u: goto L_08A319C8;
    case 372u: goto L_08A319DC;
    case 373u: goto L_08A31A0C;
    case 374u: goto L_08A31A1C;
    case 375u: goto L_08A31A3C;
    case 376u: goto L_08A31A44;
    case 377u: goto L_08A31A50;
    case 378u: goto L_08A31A58;
    case 379u: goto L_08A31A60;
    case 380u: goto L_08A31A68;
    case 381u: goto L_08A31A70;
    case 382u: goto L_08A31A78;
    case 383u: goto L_08A31A84;
    case 384u: goto L_08A31A8C;
    case 385u: goto L_08A31A94;
    case 386u: goto L_08A31AA0;
    case 387u: goto L_08A31AB0;
    case 388u: goto L_08A31ABC;
    case 389u: goto L_08A31AC4;
    case 390u: goto L_08A31AD4;
    case 391u: goto L_08A31AE4;
    case 392u: goto L_08A31AF4;
    case 393u: goto L_08A31B04;
    case 394u: goto L_08A31B14;
    case 395u: goto L_08A31B24;
    case 396u: goto L_08A31B30;
    case 397u: goto L_08A31B38;
    case 398u: goto L_08A31B40;
    case 399u: goto L_08A31B48;
    case 400u: goto L_08A31B58;
    case 401u: goto L_08A31B74;
    case 402u: goto L_08A31B7C;
    case 403u: goto L_08A31B8C;
    case 404u: goto L_08A31BAC;
    case 405u: goto L_08A31BD4;
    case 406u: goto L_08A31BE8;
    case 407u: goto L_08A31C00;
    case 408u: goto L_08A31C30;
    case 409u: goto L_08A31C3C;
    case 410u: goto L_08A31C60;
    case 411u: goto L_08A31C6C;
    case 412u: goto L_08A31C98;
    case 413u: goto L_08A31CA4;
    case 414u: goto L_08A31CB4;
    case 415u: goto L_08A31CC4;
    case 416u: goto L_08A31D0C;
    case 417u: goto L_08A31D70;
    case 418u: goto L_08A31D78;
    case 419u: goto L_08A31D88;
    case 420u: goto L_08A31D90;
    case 421u: goto L_08A31DA4;
    case 422u: goto L_08A31DC0;
    case 423u: goto L_08A31DE8;
    case 424u: goto L_08A31DF4;
    case 425u: goto L_08A31E04;
    case 426u: goto L_08A31E10;
    case 427u: goto L_08A31E1C;
    case 428u: goto L_08A31E38;
    case 429u: goto L_08A31E50;
    case 430u: goto L_08A31E68;
    case 431u: goto L_08A31E70;
    case 432u: goto L_08A31E78;
    case 433u: goto L_08A31E80;
    case 434u: goto L_08A31E88;
    case 435u: goto L_08A31E90;
    case 436u: goto L_08A31E98;
    case 437u: goto L_08A31EA4;
    case 438u: goto L_08A31ECC;
    case 439u: goto L_08A31EE4;
    case 440u: goto L_08A31EFC;
    case 441u: goto L_08A31F18;
    case 442u: goto L_08A31F2C;
    case 443u: goto L_08A31F3C;
    case 444u: goto L_08A31F80;
    case 445u: goto L_08A31F90;
    case 446u: goto L_08A31FAC;
    case 447u: goto L_08A31FC0;
    case 448u: goto L_08A31FD0;
    case 449u: goto L_08A32014;
    case 450u: goto L_08A32024;
    case 451u: goto L_08A32040;
    case 452u: goto L_08A32050;
    case 453u: goto L_08A3205C;
    case 454u: goto L_08A320A0;
    case 455u: goto L_08A320B0;
    case 456u: goto L_08A320CC;
    case 457u: goto L_08A320DC;
    case 458u: goto L_08A320E8;
    case 459u: goto L_08A32124;
    case 460u: goto L_08A32134;
    case 461u: goto L_08A32150;
    case 462u: goto L_08A32160;
    case 463u: goto L_08A3216C;
    case 464u: goto L_08A321A8;
    case 465u: goto L_08A321B8;
    case 466u: goto L_08A321C0;
    case 467u: goto L_08A321C8;
    case 468u: goto L_08A321E4;
    case 469u: goto L_08A321EC;
    case 470u: goto L_08A32208;
    case 471u: goto L_08A32218;
    case 472u: goto L_08A32224;
    case 473u: goto L_08A32260;
    case 474u: goto L_08A32270;
    case 475u: goto L_08A322C8;
    case 476u: goto L_08A322D4;
    case 477u: goto L_08A322DC;
    case 478u: goto L_08A322E0;
    case 479u: goto L_08A32300;
    case 480u: goto L_08A3231C;
    case 481u: goto L_08A3235C;
    case 482u: goto L_08A32364;
    case 483u: goto L_08A3236C;
    case 484u: goto L_08A32378;
    case 485u: goto L_08A32388;
    case 486u: goto L_08A32390;
    case 487u: goto L_08A32398;
    case 488u: goto L_08A323A4;
    case 489u: goto L_08A323B4;
    case 490u: goto L_08A323C8;
    case 491u: goto L_08A323D8;
    case 492u: goto L_08A323E0;
    case 493u: goto L_08A323FC;
    case 494u: goto L_08A3240C;
    case 495u: goto L_08A3241C;
    case 496u: goto L_08A3242C;
    case 497u: goto L_08A32434;
    case 498u: goto L_08A3243C;
    case 499u: goto L_08A32444;
    case 500u: goto L_08A3244C;
    case 501u: goto L_08A32454;
    case 502u: goto L_08A3245C;
    case 503u: goto L_08A32480;
    case 504u: goto L_08A324B4;
    case 505u: goto L_08A324BC;
    case 506u: goto L_08A324C4;
    case 507u: goto L_08A324CC;
    case 508u: goto L_08A324D4;
    case 509u: goto L_08A324DC;
    case 510u: goto L_08A324FC;
    case 511u: goto L_08A32558;
    case 512u: goto L_08A32588;
    case 513u: goto L_08A325B8;
    case 514u: goto L_08A325D4;
    case 515u: goto L_08A325DC;
    case 516u: goto L_08A325E4;
    case 517u: goto L_08A325EC;
    case 518u: goto L_08A325F0;
    case 519u: goto L_08A32614;
    case 520u: goto L_08A3261C;
    case 521u: goto L_08A32630;
    case 522u: goto L_08A32648;
    case 523u: goto L_08A32670;
    case 524u: goto L_08A32688;
    case 525u: goto L_08A326AC;
    case 526u: goto L_08A326B4;
    case 527u: goto L_08A326BC;
    case 528u: goto L_08A326CC;
    case 529u: goto L_08A326D8;
    case 530u: goto L_08A326E4;
    case 531u: goto L_08A326F0;
    case 532u: goto L_08A32700;
    case 533u: goto L_08A3270C;
    case 534u: goto L_08A32714;
    case 535u: goto L_08A32728;
    case 536u: goto L_08A32730;
    case 537u: goto L_08A32740;
    case 538u: goto L_08A32754;
    case 539u: goto L_08A32758;
    case 540u: goto L_08A3276C;
    case 541u: goto L_08A32778;
    case 542u: goto L_08A32780;
    case 543u: goto L_08A32790;
    case 544u: goto L_08A3279C;
    case 545u: goto L_08A327A4;
    case 546u: goto L_08A327B0;
    case 547u: goto L_08A327B8;
    case 548u: goto L_08A327C0;
    case 549u: goto L_08A32800;
    case 550u: goto L_08A3280C;
    case 551u: goto L_08A3281C;
    case 552u: goto L_08A3282C;
    case 553u: goto L_08A32844;
    case 554u: goto L_08A32850;
    case 555u: goto L_08A32858;
    case 556u: goto L_08A32860;
    case 557u: goto L_08A32870;
    case 558u: goto L_08A32888;
    case 559u: goto L_08A32890;
    case 560u: goto L_08A32898;
    case 561u: goto L_08A328A0;
    case 562u: goto L_08A328A8;
    case 563u: goto L_08A328B0;
    case 564u: goto L_08A328BC;
    case 565u: goto L_08A328CC;
    case 566u: goto L_08A328E0;
    case 567u: goto L_08A328E8;
    case 568u: goto L_08A328F0;
    case 569u: goto L_08A32904;
    case 570u: goto L_08A3290C;
    case 571u: goto L_08A3293C;
    case 572u: goto L_08A32944;
    case 573u: goto L_08A3294C;
    case 574u: goto L_08A32958;
    case 575u: goto L_08A32960;
    case 576u: goto L_08A3296C;
    case 577u: goto L_08A32974;
    case 578u: goto L_08A3297C;
    case 579u: goto L_08A32984;
    case 580u: goto L_08A3298C;
    case 581u: goto L_08A32994;
    case 582u: goto L_08A3299C;
    case 583u: goto L_08A329A4;
    case 584u: goto L_08A329AC;
    case 585u: goto L_08A329B4;
    case 586u: goto L_08A329BC;
    case 587u: goto L_08A329C4;
    case 588u: goto L_08A329D4;
    case 589u: goto L_08A329DC;
    case 590u: goto L_08A329E4;
    case 591u: goto L_08A329F4;
    case 592u: goto L_08A32A10;
    case 593u: goto L_08A32A18;
    case 594u: goto L_08A32A20;
    case 595u: goto L_08A32A28;
    case 596u: goto L_08A32A38;
    case 597u: goto L_08A32A40;
    case 598u: goto L_08A32A4C;
    case 599u: goto L_08A32A54;
    case 600u: goto L_08A32A74;
    case 601u: goto L_08A32A7C;
    case 602u: goto L_08A32A90;
    case 603u: goto L_08A32A98;
    case 604u: goto L_08A32AAC;
    case 605u: goto L_08A32AB4;
    case 606u: goto L_08A32AC0;
    case 607u: goto L_08A32AC8;
    case 608u: goto L_08A32AD0;
    case 609u: goto L_08A32AD8;
    case 610u: goto L_08A32AE0;
    case 611u: goto L_08A32AE8;
    case 612u: goto L_08A32AF0;
    case 613u: goto L_08A32B00;
    case 614u: goto L_08A32B08;
    case 615u: goto L_08A32B14;
    case 616u: goto L_08A32B1C;
    case 617u: goto L_08A32B2C;
    case 618u: goto L_08A32B40;
    case 619u: goto L_08A32B54;
    case 620u: goto L_08A32B5C;
    case 621u: goto L_08A32B64;
    case 622u: goto L_08A32B6C;
    case 623u: goto L_08A32B74;
    case 624u: goto L_08A32B7C;
    case 625u: goto L_08A32B84;
    case 626u: goto L_08A32B8C;
    case 627u: goto L_08A32BA0;
    case 628u: goto L_08A32BA8;
    case 629u: goto L_08A32BBC;
    case 630u: goto L_08A32BC0;
    case 631u: goto L_08A32BE4;
    case 632u: goto L_08A32BEC;
    case 633u: goto L_08A32BF8;
    case 634u: goto L_08A32C1C;
    case 635u: goto L_08A32C24;
    case 636u: goto L_08A32C4C;
    case 637u: goto L_08A32C54;
    case 638u: goto L_08A32C5C;
    case 639u: goto L_08A32C64;
    case 640u: goto L_08A32C6C;
    case 641u: goto L_08A32C74;
    case 642u: goto L_08A32C7C;
    case 643u: goto L_08A32C88;
    case 644u: goto L_08A32C90;
    case 645u: goto L_08A32C9C;
    case 646u: goto L_08A32CA4;
    case 647u: goto L_08A32CB0;
    case 648u: goto L_08A32CB8;
    case 649u: goto L_08A32CC4;
    case 650u: goto L_08A32CCC;
    case 651u: goto L_08A32CD4;
    case 652u: goto L_08A32D08;
    case 653u: goto L_08A32D14;
    case 654u: goto L_08A32D1C;
    case 655u: goto L_08A32D24;
    case 656u: goto L_08A32D34;
    case 657u: goto L_08A32D3C;
    case 658u: goto L_08A32D44;
    case 659u: goto L_08A32D4C;
    case 660u: goto L_08A32D60;
    case 661u: goto L_08A32D68;
    case 662u: goto L_08A32D7C;
    case 663u: goto L_08A32D80;
    case 664u: goto L_08A32D9C;
    case 665u: goto L_08A32DA4;
    case 666u: goto L_08A32DB0;
    case 667u: goto L_08A32DB8;
    case 668u: goto L_08A32DC4;
    case 669u: goto L_08A32DD0;
    case 670u: goto L_08A32DDC;
    case 671u: goto L_08A32DE8;
    case 672u: goto L_08A32DF0;
    case 673u: goto L_08A32E08;
    case 674u: goto L_08A32E10;
    case 675u: goto L_08A32E38;
    case 676u: goto L_08A32E48;
    case 677u: goto L_08A32EAC;
    case 678u: goto L_08A32EB8;
    case 679u: goto L_08A32ED0;
    case 680u: goto L_08A32ED4;
    case 681u: goto L_08A32EDC;
    case 682u: goto L_08A32F0C;
    case 683u: goto L_08A32F1C;
    case 684u: goto L_08A32F2C;
    case 685u: goto L_08A32F9C;
    case 686u: goto L_08A32FA4;
    case 687u: goto L_08A32FB8;
    case 688u: goto L_08A32FC4;
    case 689u: goto L_08A32FCC;
    case 690u: goto L_08A32FD4;
    case 691u: goto L_08A32FDC;
    case 692u: goto L_08A32FF0;
    case 693u: goto L_08A33014;
    case 694u: goto L_08A3301C;
    case 695u: goto L_08A3302C;
    case 696u: goto L_08A33038;
    case 697u: goto L_08A33040;
    case 698u: goto L_08A33070;
    case 699u: goto L_08A33080;
    case 700u: goto L_08A330A0;
    case 701u: goto L_08A330A8;
    case 702u: goto L_08A330B4;
    case 703u: goto L_08A330C0;
    case 704u: goto L_08A330CC;
    case 705u: goto L_08A330D4;
    case 706u: goto L_08A330E4;
    case 707u: goto L_08A330F0;
    case 708u: goto L_08A33100;
    case 709u: goto L_08A33108;
    case 710u: goto L_08A3312C;
    case 711u: goto L_08A33130;
    case 712u: goto L_08A33164;
    case 713u: goto L_08A331A4;
    case 714u: goto L_08A331E8;
    case 715u: goto L_08A331F0;
    case 716u: goto L_08A331F4;
    case 717u: goto L_08A33200;
    case 718u: goto L_08A33210;
    case 719u: goto L_08A33214;
    case 720u: goto L_08A3321C;
    case 721u: goto L_08A33228;
    case 722u: goto L_08A33248;
    case 723u: goto L_08A33254;
    case 724u: goto L_08A33258;
    case 725u: goto L_08A33268;
    case 726u: goto L_08A33270;
    case 727u: goto L_08A33278;
    case 728u: goto L_08A33294;
    case 729u: goto L_08A332A8;
    case 730u: goto L_08A332E8;
    case 731u: goto L_08A332F0;
    case 732u: goto L_08A332F8;
    case 733u: goto L_08A33304;
    case 734u: goto L_08A33310;
    case 735u: goto L_08A33320;
    case 736u: goto L_08A33328;
    case 737u: goto L_08A33334;
    case 738u: goto L_08A33378;
    case 739u: goto L_08A33384;
    case 740u: goto L_08A33398;
    case 741u: goto L_08A333A0;
    case 742u: goto L_08A333AC;
    case 743u: goto L_08A333B4;
    case 744u: goto L_08A33400;
    case 745u: goto L_08A33418;
    case 746u: goto L_08A33424;
    case 747u: goto L_08A3342C;
    case 748u: goto L_08A33440;
    case 749u: goto L_08A334A8;
    case 750u: goto L_08A334B0;
    case 751u: goto L_08A334B8;
    case 752u: goto L_08A334C0;
    case 753u: goto L_08A334DC;
    case 754u: goto L_08A334EC;
    case 755u: goto L_08A334FC;
    case 756u: goto L_08A3350C;
    case 757u: goto L_08A33514;
    case 758u: goto L_08A3351C;
    case 759u: goto L_08A33524;
    case 760u: goto L_08A3352C;
    case 761u: goto L_08A33538;
    case 762u: goto L_08A33544;
    case 763u: goto L_08A33554;
    case 764u: goto L_08A3359C;
    case 765u: goto L_08A335A4;
    case 766u: goto L_08A335AC;
    case 767u: goto L_08A335BC;
    case 768u: goto L_08A335C8;
    case 769u: goto L_08A335E4;
    case 770u: goto L_08A335EC;
    case 771u: goto L_08A335F8;
    case 772u: goto L_08A33600;
    case 773u: goto L_08A33608;
    case 774u: goto L_08A33648;
    case 775u: goto L_08A33650;
    case 776u: goto L_08A3365C;
    case 777u: goto L_08A33668;
    case 778u: goto L_08A33684;
    case 779u: goto L_08A3368C;
    case 780u: goto L_08A33694;
    case 781u: goto L_08A3369C;
    case 782u: goto L_08A336BC;
    case 783u: goto L_08A336D4;
    case 784u: goto L_08A336DC;
    case 785u: goto L_08A33748;
    case 786u: goto L_08A33750;
    case 787u: goto L_08A337D8;
    case 788u: goto L_08A337E0;
    case 789u: goto L_08A33814;
    case 790u: goto L_08A33838;
    case 791u: goto L_08A33840;
    case 792u: goto L_08A33874;
    case 793u: goto L_08A338AC;
    case 794u: goto L_08A338C4;
    case 795u: goto L_08A338D0;
    case 796u: goto L_08A338D8;
    case 797u: goto L_08A338E0;
    case 798u: goto L_08A338E8;
    case 799u: goto L_08A338F4;
    case 800u: goto L_08A338FC;
    case 801u: goto L_08A33918;
    case 802u: goto L_08A33948;
    case 803u: goto L_08A33950;
    case 804u: goto L_08A33964;
    case 805u: goto L_08A3399C;
    case 806u: goto L_08A339A4;
    case 807u: goto L_08A339B4;
    case 808u: goto L_08A339BC;
    case 809u: goto L_08A339C8;
    case 810u: goto L_08A339DC;
    case 811u: goto L_08A339F0;
    case 812u: goto L_08A339F8;
    case 813u: goto L_08A339FC;
    case 814u: goto L_08A33A0C;
    case 815u: goto L_08A33A10;
    case 816u: goto L_08A33A1C;
    case 817u: goto L_08A33A34;
    case 818u: goto L_08A33A3C;
    case 819u: goto L_08A33A4C;
    case 820u: goto L_08A33A58;
    case 821u: goto L_08A33A6C;
    case 822u: goto L_08A33A78;
    case 823u: goto L_08A33A80;
    case 824u: goto L_08A33A9C;
    case 825u: goto L_08A33AA4;
    case 826u: goto L_08A33AB8;
    case 827u: goto L_08A33AC0;
    case 828u: goto L_08A33AD0;
    case 829u: goto L_08A33AD8;
    case 830u: goto L_08A33AE4;
    case 831u: goto L_08A33AEC;
    case 832u: goto L_08A33AF4;
    case 833u: goto L_08A33B08;
    case 834u: goto L_08A33B14;
    case 835u: goto L_08A33B28;
    case 836u: goto L_08A33B30;
    case 837u: goto L_08A33B38;
    case 838u: goto L_08A33B48;
    case 839u: goto L_08A33B50;
    case 840u: goto L_08A33B58;
    case 841u: goto L_08A33B64;
    case 842u: goto L_08A33B70;
    case 843u: goto L_08A33B7C;
    case 844u: goto L_08A33BA0;
    case 845u: goto L_08A33BAC;
    case 846u: goto L_08A33BB4;
    case 847u: goto L_08A33BC0;
    case 848u: goto L_08A33BE4;
    case 849u: goto L_08A33BEC;
    case 850u: goto L_08A33BF8;
    case 851u: goto L_08A33C04;
    case 852u: goto L_08A33C0C;
    case 853u: goto L_08A33C18;
    case 854u: goto L_08A33C20;
    case 855u: goto L_08A33C2C;
    case 856u: goto L_08A33C38;
    case 857u: goto L_08A33C60;
    case 858u: goto L_08A33C6C;
    case 859u: goto L_08A33C74;
    case 860u: goto L_08A33C7C;
    case 861u: goto L_08A33C88;
    case 862u: goto L_08A33C98;
    case 863u: goto L_08A33CA0;
    case 864u: goto L_08A33CD4;
    case 865u: goto L_08A33CDC;
    case 866u: goto L_08A33CE4;
    case 867u: goto L_08A33CEC;
    case 868u: goto L_08A33D0C;
    case 869u: goto L_08A33D2C;
    case 870u: goto L_08A33D34;
    case 871u: goto L_08A33D44;
    case 872u: goto L_08A33D54;
    case 873u: goto L_08A33D70;
    case 874u: goto L_08A33D84;
    case 875u: goto L_08A33D98;
    case 876u: goto L_08A33DB0;
    case 877u: goto L_08A33DC4;
    case 878u: goto L_08A33DD0;
    case 879u: goto L_08A33DE8;
    case 880u: goto L_08A33E24;
    case 881u: goto L_08A33E2C;
    case 882u: goto L_08A33E38;
    case 883u: goto L_08A33E44;
    case 884u: goto L_08A33E60;
    case 885u: goto L_08A33E6C;
    case 886u: goto L_08A33E74;
    case 887u: goto L_08A33E90;
    case 888u: goto L_08A33EC0;
    case 889u: goto L_08A33EC8;
    case 890u: goto L_08A33EDC;
    case 891u: goto L_08A33F14;
    case 892u: goto L_08A33F20;
    case 893u: goto L_08A33F28;
    case 894u: goto L_08A33F38;
    case 895u: goto L_08A33F48;
    case 896u: goto L_08A33F54;
    case 897u: goto L_08A33F8C;
    case 898u: goto L_08A33F9C;
    case 899u: goto L_08A33FA8;
    case 900u: goto L_08A33FD0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A30000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A300D4;
      }
      goto L_08A30054;
    }
L_08A30054:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 6u);
      if (branch_taken) {
          goto L_08A300D8;
      }
      goto L_08A3005C;
    }
L_08A3005C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30334;
      }
      goto L_08A300D4;
    }
L_08A300D4:
    ctx.gpr[22] = (0u | 2u);
    goto L_08A300D8;
L_08A300D8:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30304;
      }
      goto L_08A300E8;
    }
L_08A300E8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
        goto L_08A30100;
    }
    goto L_08A300F4;
L_08A300F4:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A30100;
      }
      goto L_08A30100;
    }
L_08A30100:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A30110;
      }
      goto L_08A30108;
    }
L_08A30108:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A30110;
L_08A30110:
    ctx.gpr[4] = (ctx.gpr[23] << 4u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30168;
      }
      goto L_08A30160;
    }
L_08A30160:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A30168;
L_08A30168:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A301A0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem) && ctx.pc == 0x08A301A0u) goto L_08A301A0;
    return;
L_08A301A0:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A302C4;
      }
      goto L_08A301D0;
    }
L_08A301D0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30240;
      }
      goto L_08A301D8;
    }
L_08A301D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[12])) && ctx.fpr[20] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A30248;
      }
      goto L_08A30224;
    }
L_08A30224:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A302C4;
      }
      goto L_08A30240;
    }
L_08A30240:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30334;
      }
      goto L_08A30248;
    }
L_08A30248:
    ctx.fpr[12] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A302AC;
      }
      goto L_08A30274;
    }
L_08A30274:
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7164)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x08A30288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08A30288u) goto L_08A30288;
    return;
L_08A30288:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7084)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7088)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A3029Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3029Cu) goto L_08A3029C;
    return;
L_08A3029C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A302B4;
      }
      goto L_08A302A4;
    }
L_08A302A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30334;
      }
      goto L_08A302AC;
    }
L_08A302AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30334;
      }
      goto L_08A302B4;
    }
L_08A302B4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A302C4;
L_08A302C4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A302F4;
      }
      goto L_08A302CC;
    }
L_08A302CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A302F4;
      }
      goto L_08A302DC;
    }
L_08A302DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A302EC;
      }
      goto L_08A302E4;
    }
L_08A302E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A302F4;
      }
      goto L_08A302EC;
    }
L_08A302EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A302F4;
      }
      goto L_08A302F4;
    }
L_08A302F4:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A300E8;
      }
      goto L_08A30304;
    }
L_08A30304:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3031C;
      }
      goto L_08A30314;
    }
L_08A30314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30334;
      }
      goto L_08A3031C;
    }
L_08A3031C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A30334u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A30364;
L_08A30334:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30364:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-432));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[7] = (ctx.gpr[7] | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[7]));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A303FC;
      }
      goto L_08A303F4;
    }
L_08A303F4:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08A303FC;
L_08A303FC:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A306EC;
      }
      goto L_08A3044C;
    }
L_08A3044C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3046C;
      }
      goto L_08A30458;
    }
L_08A30458:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30478;
      }
      goto L_08A3046C;
    }
L_08A3046C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A30478u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08A30478u) goto L_08A30478;
    return;
L_08A30478:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30490;
      }
      goto L_08A30480;
    }
L_08A30480:
    ctx.gpr[31] = (0x08A30488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 66u, 0x08B24818u>(ctx, &aot_mem) && ctx.pc == 0x08A30488u) goto L_08A30488;
    return;
L_08A30488:
    ctx.gpr[31] = (0x08A30490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 66u, 0x08B24818u>(ctx, &aot_mem) && ctx.pc == 0x08A30490u) goto L_08A30490;
    return;
L_08A30490:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A304A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem) && ctx.pc == 0x08A304A8u) goto L_08A304A8;
    return;
L_08A304A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A305A8;
      }
      goto L_08A304B0;
    }
L_08A304B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A30500u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A30500u) goto L_08A30500;
    return;
L_08A30500:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A305A0;
      }
      goto L_08A30508;
    }
L_08A30508:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30598;
      }
      goto L_08A30588;
    }
L_08A30588:
    ctx.gpr[31] = (0x08A30590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 66u, 0x08B24818u>(ctx, &aot_mem) && ctx.pc == 0x08A30590u) goto L_08A30590;
    return;
L_08A30590:
    ctx.gpr[31] = (0x08A30598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 66u, 0x08B24818u>(ctx, &aot_mem) && ctx.pc == 0x08A30598u) goto L_08A30598;
    return;
L_08A30598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A306EC;
      }
      goto L_08A305A0;
    }
L_08A305A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A306E0;
      }
      goto L_08A305A8;
    }
L_08A305A8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A305B4u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 66u, 0x08B24818u>(ctx, &aot_mem) && ctx.pc == 0x08A305B4u) goto L_08A305B4;
    return;
L_08A305B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A305CCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 66u, 0x08B24818u>(ctx, &aot_mem) && ctx.pc == 0x08A305CCu) goto L_08A305CC;
    return;
L_08A305CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[7] = (0u | 1u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A3060Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A3060Cu) goto L_08A3060C;
    return;
L_08A3060C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A306E0;
      }
      goto L_08A30614;
    }
L_08A30614:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
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
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A306D8;
      }
      goto L_08A306C8;
    }
L_08A306C8:
    ctx.gpr[31] = (0x08A306D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 66u, 0x08B24818u>(ctx, &aot_mem) && ctx.pc == 0x08A306D0u) goto L_08A306D0;
    return;
L_08A306D0:
    ctx.gpr[31] = (0x08A306D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 66u, 0x08B24818u>(ctx, &aot_mem) && ctx.pc == 0x08A306D8u) goto L_08A306D8;
    return;
L_08A306D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A306EC;
      }
      goto L_08A306E0;
    }
L_08A306E0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A3044C;
      }
      goto L_08A306EC;
    }
L_08A306EC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30710:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7164)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7168)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A30738u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7124), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 66u, 0x08B24818u>(ctx, &aot_mem) && ctx.pc == 0x08A30738u) goto L_08A30738;
    return;
L_08A30738:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30754:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A30768u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 764u, 0x08ADB348u>(ctx, &aot_mem) && ctx.pc == 0x08A30768u) goto L_08A30768;
    return;
L_08A30768:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30774:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A30788u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 786u, 0x08ADB4C4u>(ctx, &aot_mem) && ctx.pc == 0x08A30788u) goto L_08A30788;
    return;
L_08A30788:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30794:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A307B0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08A307B0u) goto L_08A307B0;
    return;
L_08A307B0:
    ctx.gpr[31] = (0x08A307B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 544u, 0x08AD323Cu>(ctx, &aot_mem) && ctx.pc == 0x08A307B8u) goto L_08A307B8;
    return;
L_08A307B8:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (0u | 336u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A307CCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08A307CCu) goto L_08A307CC;
    return;
L_08A307CC:
    ctx.gpr[16] = (2237u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x08A307DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x08A307DCu) goto L_08A307DC;
    return;
L_08A307DC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A30874;
      }
      goto L_08A307E4;
    }
L_08A307E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x08A307F8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08A307F8u) goto L_08A307F8;
    return;
L_08A307F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(154)));
    ctx.gpr[31] = (0x08A3080Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08A3080Cu) goto L_08A3080C;
    return;
L_08A3080C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A30818u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x08A30818u) goto L_08A30818;
    return;
L_08A30818:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A30838;
      }
      goto L_08A30820;
    }
L_08A30820:
    ctx.gpr[31] = (0x08A30828u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem) && ctx.pc == 0x08A30828u) goto L_08A30828;
    return;
L_08A30828:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A30838;
      }
      goto L_08A30830;
    }
L_08A30830:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] & 255u);
    goto L_08A30838;
L_08A30838:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3093C;
      }
      goto L_08A30840;
    }
L_08A30840:
    ctx.gpr[31] = (0x08A30848u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x08A30848u) goto L_08A30848;
    return;
L_08A30848:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A3086C;
      }
      goto L_08A30850;
    }
L_08A30850:
    ctx.gpr[31] = (0x08A30858u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem) && ctx.pc == 0x08A30858u) goto L_08A30858;
    return;
L_08A30858:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A3086C;
      }
      goto L_08A30864;
    }
L_08A30864:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] & 255u);
    goto L_08A3086C;
L_08A3086C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3093C;
      }
      goto L_08A30874;
    }
L_08A30874:
    ctx.gpr[4] = (0u | 342u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A30884u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08A30884u) goto L_08A30884;
    return;
L_08A30884:
    ctx.gpr[4] = (0u | 342u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A30894u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08A30894u) goto L_08A30894;
    return;
L_08A30894:
    ctx.gpr[4] = (0u | 344u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A308A4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08A308A4u) goto L_08A308A4;
    return;
L_08A308A4:
    ctx.gpr[4] = (0u | 345u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A308B4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08A308B4u) goto L_08A308B4;
    return;
L_08A308B4:
    ctx.gpr[4] = (0u | 346u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A308C4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08A308C4u) goto L_08A308C4;
    return;
L_08A308C4:
    ctx.gpr[4] = (0u | 349u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A308D4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08A308D4u) goto L_08A308D4;
    return;
L_08A308D4:
    ctx.gpr[4] = (0u | 353u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A308E4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08A308E4u) goto L_08A308E4;
    return;
L_08A308E4:
    ctx.gpr[4] = (0u | 348u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A308F4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08A308F4u) goto L_08A308F4;
    return;
L_08A308F4:
    ctx.gpr[4] = (0u | 359u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A30904u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08A30904u) goto L_08A30904;
    return;
L_08A30904:
    ctx.gpr[4] = (0u | 357u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A30914u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08A30914u) goto L_08A30914;
    return;
L_08A30914:
    ctx.gpr[4] = (0u | 363u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A30924u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08A30924u) goto L_08A30924;
    return;
L_08A30924:
    ctx.gpr[31] = (0x08A3092Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x08A3092Cu) goto L_08A3092C;
    return;
L_08A3092C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A30944;
      }
      goto L_08A30934;
    }
L_08A30934:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A309BC;
      }
      goto L_08A3093C;
    }
L_08A3093C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A309C4;
      }
      goto L_08A30944;
    }
L_08A30944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(162)));
    ctx.gpr[31] = (0x08A30958u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08A30958u) goto L_08A30958;
    return;
L_08A30958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(158)));
    ctx.gpr[31] = (0x08A3096Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08A3096Cu) goto L_08A3096C;
    return;
L_08A3096C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (0x08A30980u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08A30980u) goto L_08A30980;
    return;
L_08A30980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(146)));
    ctx.gpr[31] = (0x08A30994u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08A30994u) goto L_08A30994;
    return;
L_08A30994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (0x08A309A8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08A309A8u) goto L_08A309A8;
    return;
L_08A309A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(150)));
    ctx.gpr[31] = (0x08A309BCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08A309BCu) goto L_08A309BC;
    return;
L_08A309BC:
    ctx.gpr[31] = (0x08A309C4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08A309C4u) goto L_08A309C4;
    return;
L_08A309C4:
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
L_08A309DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2237u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30A70;
      }
      goto L_08A309FC;
    }
L_08A309FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A30A50;
      }
      goto L_08A30A08;
    }
L_08A30A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08A30A20;
    }
    goto L_08A30A14;
L_08A30A14:
    ctx.gpr[31] = (0x08A30A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30A1Cu) goto L_08A30A1C;
    return;
L_08A30A1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08A30A20;
L_08A30A20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A30A40;
      }
      goto L_08A30A30;
    }
L_08A30A30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A30A48;
      }
      goto L_08A30A40;
    }
L_08A30A40:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A30A48;
L_08A30A48:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30A58;
      }
      goto L_08A30A50;
    }
L_08A30A50:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A30A70;
      }
      goto L_08A30A58;
    }
L_08A30A58:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(288));
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
    ctx.gpr[31] = (0x08A30A6Cu);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08A30A80;
L_08A30A6C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(0u));
    goto L_08A30A70;
L_08A30A70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30A80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A30AB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem) && ctx.pc == 0x08A30AB4u) goto L_08A30AB4;
    return;
L_08A30AB4:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30ACC;
      }
      goto L_08A30AC0;
    }
L_08A30AC0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7652), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A30AD4;
      }
      goto L_08A30ACC;
    }
L_08A30ACC:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7652), ctx.gpr[4]);
    goto L_08A30AD4;
L_08A30AD4:
    ctx.gpr[31] = (0x08A30ADCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 587u, 0x08AD3578u>(ctx, &aot_mem) && ctx.pc == 0x08A30ADCu) goto L_08A30ADC;
    return;
L_08A30ADC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A30B38;
      }
      goto L_08A30AE8;
    }
L_08A30AE8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A30AF4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 559u, 0x08946D60u>(ctx, &aot_mem) && ctx.pc == 0x08A30AF4u) goto L_08A30AF4;
    return;
L_08A30AF4:
    ctx.gpr[16] = (2238u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A30B08u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 334u, 0x08911320u>(ctx, &aot_mem) && ctx.pc == 0x08A30B08u) goto L_08A30B08;
    return;
L_08A30B08:
    ctx.gpr[31] = (0x08A30B10u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 569u, 0x08946E58u>(ctx, &aot_mem) && ctx.pc == 0x08A30B10u) goto L_08A30B10;
    return;
L_08A30B10:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A30B40;
      }
      goto L_08A30B30;
    }
L_08A30B30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A30B74;
      }
      goto L_08A30B38;
    }
L_08A30B38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A30CE4;
      }
      goto L_08A30B40;
    }
L_08A30B40:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A30B50u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08A30B50u) goto L_08A30B50;
    return;
L_08A30B50:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A30B5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 160u, 0x08AD0AE4u>(ctx, &aot_mem) && ctx.pc == 0x08A30B5Cu) goto L_08A30B5C;
    return;
L_08A30B5C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A30B74;
L_08A30B74:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7072)));
    ctx.gpr[31] = (0x08A30B94u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 695u, 0x0890EF8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30B94u) goto L_08A30B94;
    return;
L_08A30B94:
    ctx.gpr[31] = (0x08A30B9Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 571u, 0x08946EA8u>(ctx, &aot_mem) && ctx.pc == 0x08A30B9Cu) goto L_08A30B9C;
    return;
L_08A30B9C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(776)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20960));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A30BCCu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 146u, 0x08AEC930u>(ctx, &aot_mem) && ctx.pc == 0x08A30BCCu) goto L_08A30BCC;
    return;
L_08A30BCC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A30BD8;
      }
      goto L_08A30BD4;
    }
L_08A30BD4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A30BD8;
L_08A30BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A30BF0u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A30BF0u) goto L_08A30BF0;
    return;
L_08A30BF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(86), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A30C14u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A30C14u) goto L_08A30C14;
    return;
L_08A30C14:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(776), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08A30C24u);
    ctx.gpr[4] = (0u | 224u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A30C24u) goto L_08A30C24;
    return;
L_08A30C24:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30C3C;
      }
      goto L_08A30C30;
    }
L_08A30C30:
    ctx.gpr[31] = (0x08A30C38u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 678u, 0x088239DCu>(ctx, &aot_mem) && ctx.pc == 0x08A30C38u) goto L_08A30C38;
    return;
L_08A30C38:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A30C3C;
L_08A30C3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A30C54u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A30C54u) goto L_08A30C54;
    return;
L_08A30C54:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x08A30C60u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 759u, 0x08933F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30C60u) goto L_08A30C60;
    return;
L_08A30C60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A30C6Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 623u, 0x088BAFE8u>(ctx, &aot_mem) && ctx.pc == 0x08A30C6Cu) goto L_08A30C6C;
    return;
L_08A30C6C:
    ctx.gpr[31] = (0x08A30C74u);
    ctx.gpr[4] = (0u | 228u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A30C74u) goto L_08A30C74;
    return;
L_08A30C74:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30C8C;
      }
      goto L_08A30C80;
    }
L_08A30C80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A30C8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 483u, 0x089D2B68u>(ctx, &aot_mem) && ctx.pc == 0x08A30C8Cu) goto L_08A30C8C;
    return;
L_08A30C8C:
    ctx.gpr[31] = (0x08A30C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A30C94u) goto L_08A30C94;
    return;
L_08A30C94:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A30CA8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08A30CA8u) goto L_08A30CA8;
    return;
L_08A30CA8:
    ctx.gpr[31] = (0x08A30CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A30CB0u) goto L_08A30CB0;
    return;
L_08A30CB0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[6] = (0u | 999u);
    ctx.gpr[31] = (0x08A30CC4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08A30CC4u) goto L_08A30CC4;
    return;
L_08A30CC4:
    ctx.gpr[31] = (0x08A30CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A30CCCu) goto L_08A30CCC;
    return;
L_08A30CCC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A30CD8u);
    ctx.gpr[5] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30CD8u) goto L_08A30CD8;
    return;
L_08A30CD8:
    ctx.gpr[31] = (0x08A30CE0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 569u, 0x08946E58u>(ctx, &aot_mem) && ctx.pc == 0x08A30CE0u) goto L_08A30CE0;
    return;
L_08A30CE0:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08A30CE4;
L_08A30CE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30D04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A30D50u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 544u, 0x08AD323Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30D50u) goto L_08A30D50;
    return;
L_08A30D50:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[31] = (0x08A30D60u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08A30D60u) goto L_08A30D60;
    return;
L_08A30D60:
    ctx.gpr[31] = (0x08A30D68u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08A30D68u) goto L_08A30D68;
    return;
L_08A30D68:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A30D94u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 217u, 0x08AECC3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30D94u) goto L_08A30D94;
    return;
L_08A30D94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30DDC;
      }
      goto L_08A30D9C;
    }
L_08A30D9C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A30DA8u);
    ctx.gpr[4] = (0u | 1584u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08A30DA8u) goto L_08A30DA8;
    return;
L_08A30DA8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A30DC4;
      }
      goto L_08A30DB4;
    }
L_08A30DB4:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A30DC0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 581u, 0x08A5A7FCu>(ctx, &aot_mem) && ctx.pc == 0x08A30DC0u) goto L_08A30DC0;
    return;
L_08A30DC0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A30DC4;
L_08A30DC4:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A30F84;
      }
      goto L_08A30DDC;
    }
L_08A30DDC:
    ctx.gpr[31] = (0x08A30DE4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 229u, 0x08AECCC0u>(ctx, &aot_mem) && ctx.pc == 0x08A30DE4u) goto L_08A30DE4;
    return;
L_08A30DE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30E2C;
      }
      goto L_08A30DEC;
    }
L_08A30DEC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A30DF8u);
    ctx.gpr[4] = (0u | 1632u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08A30DF8u) goto L_08A30DF8;
    return;
L_08A30DF8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A30E14;
      }
      goto L_08A30E04;
    }
L_08A30E04:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A30E10u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 304u, 0x08969648u>(ctx, &aot_mem) && ctx.pc == 0x08A30E10u) goto L_08A30E10;
    return;
L_08A30E10:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A30E14;
L_08A30E14:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1280))))));
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A30F84;
      }
      goto L_08A30E2C;
    }
L_08A30E2C:
    ctx.gpr[31] = (0x08A30E34u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 241u, 0x08AECD48u>(ctx, &aot_mem) && ctx.pc == 0x08A30E34u) goto L_08A30E34;
    return;
L_08A30E34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30E70;
      }
      goto L_08A30E3C;
    }
L_08A30E3C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A30E48u);
    ctx.gpr[4] = (0u | 1984u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08A30E48u) goto L_08A30E48;
    return;
L_08A30E48:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A30E64;
      }
      goto L_08A30E54;
    }
L_08A30E54:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A30E60u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 406u, 0x08B199C8u>(ctx, &aot_mem) && ctx.pc == 0x08A30E60u) goto L_08A30E60;
    return;
L_08A30E60:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A30E64;
L_08A30E64:
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08A30F84;
      }
      goto L_08A30E70;
    }
L_08A30E70:
    ctx.gpr[31] = (0x08A30E78u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 193u, 0x08AECB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30E78u) goto L_08A30E78;
    return;
L_08A30E78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30EB8;
      }
      goto L_08A30E80;
    }
L_08A30E80:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A30E8Cu);
    ctx.gpr[4] = (0u | 2080u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08A30E8Cu) goto L_08A30E8C;
    return;
L_08A30E8C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A30EA8;
      }
      goto L_08A30E98;
    }
L_08A30E98:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A30EA4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 226u, 0x089ED94Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30EA4u) goto L_08A30EA4;
    return;
L_08A30EA4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A30EA8;
L_08A30EA8:
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1920), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A30F84;
      }
      goto L_08A30EB8;
    }
L_08A30EB8:
    ctx.gpr[31] = (0x08A30EC0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 205u, 0x08AECBB4u>(ctx, &aot_mem) && ctx.pc == 0x08A30EC0u) goto L_08A30EC0;
    return;
L_08A30EC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30EFC;
      }
      goto L_08A30EC8;
    }
L_08A30EC8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A30ED4u);
    ctx.gpr[4] = (0u | 2064u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08A30ED4u) goto L_08A30ED4;
    return;
L_08A30ED4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A30EF0;
      }
      goto L_08A30EE0;
    }
L_08A30EE0:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A30EECu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 257u, 0x089D96B4u>(ctx, &aot_mem) && ctx.pc == 0x08A30EECu) goto L_08A30EEC;
    return;
L_08A30EEC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A30EF0;
L_08A30EF0:
    ctx.gpr[30] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[30] | 0u);
      if (branch_taken) {
          goto L_08A30F84;
      }
      goto L_08A30EFC;
    }
L_08A30EFC:
    ctx.gpr[31] = (0x08A30F04u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 168u, 0x08AECA18u>(ctx, &aot_mem) && ctx.pc == 0x08A30F04u) goto L_08A30F04;
    return;
L_08A30F04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30F40;
      }
      goto L_08A30F0C;
    }
L_08A30F0C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A30F18u);
    ctx.gpr[4] = (0u | 1184u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08A30F18u) goto L_08A30F18;
    return;
L_08A30F18:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A30F34;
      }
      goto L_08A30F24;
    }
L_08A30F24:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A30F30u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 689u, 0x088A2F88u>(ctx, &aot_mem) && ctx.pc == 0x08A30F30u) goto L_08A30F30;
    return;
L_08A30F30:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A30F34;
L_08A30F34:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A30F84;
      }
      goto L_08A30F40;
    }
L_08A30F40:
    ctx.gpr[31] = (0x08A30F48u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 181u, 0x08AECAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A30F48u) goto L_08A30F48;
    return;
L_08A30F48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30F84;
      }
      goto L_08A30F50;
    }
L_08A30F50:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A30F5Cu);
    ctx.gpr[4] = (0u | 1920u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08A30F5Cu) goto L_08A30F5C;
    return;
L_08A30F5C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A30F7C;
      }
      goto L_08A30F68;
    }
L_08A30F68:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A30F78u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 92u, 0x08834A84u>(ctx, &aot_mem) && ctx.pc == 0x08A30F78u) goto L_08A30F78;
    return;
L_08A30F78:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A30F7C;
L_08A30F7C:
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
    goto L_08A30F84;
L_08A30F84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A30FB8;
      }
      goto L_08A30FA8;
    }
L_08A30FA8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A30FB4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08A30FB4u) goto L_08A30FB4;
    return;
L_08A30FB4:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A30FB8;
L_08A30FB8:
    ctx.gpr[31] = (0x08A30FC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 160u, 0x08AD0AE4u>(ctx, &aot_mem) && ctx.pc == 0x08A30FC0u) goto L_08A30FC0;
    return;
L_08A30FC0:
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[31] = (0x08A31000u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem) && ctx.pc == 0x08A31000u) goto L_08A31000;
    return;
L_08A31000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A31028u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem) && ctx.pc == 0x08A31028u) goto L_08A31028;
    return;
L_08A31028:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(439), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(433), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(427), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[31] = (0x08A31080u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem) && ctx.pc == 0x08A31080u) goto L_08A31080;
    return;
L_08A31080:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(615))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(680), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A310A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A310A0u) goto L_08A310A0;
    return;
L_08A310A0:
    ctx.gpr[31] = (0x08A310A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 181u, 0x08AECAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A310A8u) goto L_08A310A8;
    return;
L_08A310A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A310DC;
      }
      goto L_08A310B0;
    }
L_08A310B0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A310BCu);
    ctx.gpr[4] = (0u | 408u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A310BCu) goto L_08A310BC;
    return;
L_08A310BC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A310D4;
      }
      goto L_08A310C8;
    }
L_08A310C8:
    ctx.gpr[31] = (0x08A310D0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 655u, 0x089F75BCu>(ctx, &aot_mem) && ctx.pc == 0x08A310D0u) goto L_08A310D0;
    return;
L_08A310D0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08A310D4;
L_08A310D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A3124C;
      }
      goto L_08A310DC;
    }
L_08A310DC:
    ctx.gpr[31] = (0x08A310E4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 217u, 0x08AECC3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A310E4u) goto L_08A310E4;
    return;
L_08A310E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31118;
      }
      goto L_08A310EC;
    }
L_08A310EC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A310F8u);
    ctx.gpr[4] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A310F8u) goto L_08A310F8;
    return;
L_08A310F8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A31110;
      }
      goto L_08A31104;
    }
L_08A31104:
    ctx.gpr[31] = (0x08A3110Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 120u, 0x08AA4C80u>(ctx, &aot_mem) && ctx.pc == 0x08A3110Cu) goto L_08A3110C;
    return;
L_08A3110C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08A31110;
L_08A31110:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A3124C;
      }
      goto L_08A31118;
    }
L_08A31118:
    ctx.gpr[31] = (0x08A31120u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 229u, 0x08AECCC0u>(ctx, &aot_mem) && ctx.pc == 0x08A31120u) goto L_08A31120;
    return;
L_08A31120:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31154;
      }
      goto L_08A31128;
    }
L_08A31128:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A31134u);
    ctx.gpr[4] = (0u | 232u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A31134u) goto L_08A31134;
    return;
L_08A31134:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A3114C;
      }
      goto L_08A31140;
    }
L_08A31140:
    ctx.gpr[31] = (0x08A31148u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 292u, 0x08825EACu>(ctx, &aot_mem) && ctx.pc == 0x08A31148u) goto L_08A31148;
    return;
L_08A31148:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08A3114C;
L_08A3114C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A3124C;
      }
      goto L_08A31154;
    }
L_08A31154:
    ctx.gpr[31] = (0x08A3115Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 241u, 0x08AECD48u>(ctx, &aot_mem) && ctx.pc == 0x08A3115Cu) goto L_08A3115C;
    return;
L_08A3115C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31190;
      }
      goto L_08A31164;
    }
L_08A31164:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A31170u);
    ctx.gpr[4] = (0u | 364u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A31170u) goto L_08A31170;
    return;
L_08A31170:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A31188;
      }
      goto L_08A3117C;
    }
L_08A3117C:
    ctx.gpr[31] = (0x08A31184u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 436u, 0x089CE4ECu>(ctx, &aot_mem) && ctx.pc == 0x08A31184u) goto L_08A31184;
    return;
L_08A31184:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08A31188;
L_08A31188:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A3124C;
      }
      goto L_08A31190;
    }
L_08A31190:
    ctx.gpr[31] = (0x08A31198u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 193u, 0x08AECB2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31198u) goto L_08A31198;
    return;
L_08A31198:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A311CC;
      }
      goto L_08A311A0;
    }
L_08A311A0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A311ACu);
    ctx.gpr[4] = (0u | 364u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A311ACu) goto L_08A311AC;
    return;
L_08A311AC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A311C4;
      }
      goto L_08A311B8;
    }
L_08A311B8:
    ctx.gpr[31] = (0x08A311C0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 900u, 0x08B1BF3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A311C0u) goto L_08A311C0;
    return;
L_08A311C0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08A311C4;
L_08A311C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A3124C;
      }
      goto L_08A311CC;
    }
L_08A311CC:
    ctx.gpr[31] = (0x08A311D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 205u, 0x08AECBB4u>(ctx, &aot_mem) && ctx.pc == 0x08A311D4u) goto L_08A311D4;
    return;
L_08A311D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31208;
      }
      goto L_08A311DC;
    }
L_08A311DC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A311E8u);
    ctx.gpr[4] = (0u | 364u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A311E8u) goto L_08A311E8;
    return;
L_08A311E8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A31200;
      }
      goto L_08A311F4;
    }
L_08A311F4:
    ctx.gpr[31] = (0x08A311FCu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 561u, 0x0881B29Cu>(ctx, &aot_mem) && ctx.pc == 0x08A311FCu) goto L_08A311FC;
    return;
L_08A311FC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08A31200;
L_08A31200:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A3124C;
      }
      goto L_08A31208;
    }
L_08A31208:
    ctx.gpr[31] = (0x08A31210u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 168u, 0x08AECA18u>(ctx, &aot_mem) && ctx.pc == 0x08A31210u) goto L_08A31210;
    return;
L_08A31210:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31248;
      }
      goto L_08A31218;
    }
L_08A31218:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A31224u);
    ctx.gpr[4] = (0u | 176u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A31224u) goto L_08A31224;
    return;
L_08A31224:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31240;
      }
      goto L_08A31230;
    }
L_08A31230:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A3123Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 788u, 0x0886BDE8u>(ctx, &aot_mem) && ctx.pc == 0x08A3123Cu) goto L_08A3123C;
    return;
L_08A3123C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08A31240;
L_08A31240:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A3124C;
      }
      goto L_08A31248;
    }
L_08A31248:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A3124C;
L_08A3124C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3128C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A312A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 689u, 0x08ADADFCu>(ctx, &aot_mem) && ctx.pc == 0x08A312A0u) goto L_08A312A0;
    return;
L_08A312A0:
    ctx.gpr[31] = (0x08A312A8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-7060));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A312A8u) goto L_08A312A8;
    return;
L_08A312A8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A312B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A312E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 258u, 0x08AAB1ECu>(ctx, &aot_mem) && ctx.pc == 0x08A312E0u) goto L_08A312E0;
    return;
L_08A312E0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7032)));
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-12000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7032), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    goto L_08A31328;
L_08A31328:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31360;
      }
      goto L_08A31330;
    }
L_08A31330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31360;
      }
      goto L_08A31340;
    }
L_08A31340:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(3) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A31328;
      }
      goto L_08A31360;
    }
L_08A31360:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08A3137C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A313A0u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    goto L_08A313D0;
L_08A313A0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A313B4;
      }
      goto L_08A313A8;
    }
L_08A313A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A313B4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A31508;
L_08A313B4:
    ctx.gpr[2] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
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
L_08A313D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A313E0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    goto L_08A313EC;
L_08A313E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A313EC:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A3143C;
      }
      goto L_08A31410;
    }
L_08A31410:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A31414;
L_08A31414:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    if (ctx.gpr[4] != ctx.gpr[8]) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08A31414;
    }
    goto L_08A3143C;
L_08A3143C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[8] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A314B4;
      }
      goto L_08A3145C;
    }
L_08A3145C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-12000));
    goto L_08A31460;
L_08A31460:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == ctx.gpr[11]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08A31494;
    }
    goto L_08A3147C;
L_08A3147C:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A3147C;
      }
      goto L_08A31490;
    }
L_08A31490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08A31494;
L_08A31494:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A31460;
      }
      goto L_08A314B4;
    }
L_08A314B4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(30)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A31500;
      }
      goto L_08A314C8;
    }
L_08A314C8:
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-11872));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A314D4;
L_08A314D4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(30)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[8]);
    if (ctx.gpr[4] != ctx.gpr[8]) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08A314D4;
    }
    goto L_08A31500;
L_08A31500:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31508:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A31524u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 523u, 0x08ABE6BCu>(ctx, &aot_mem) && ctx.pc == 0x08A31524u) goto L_08A31524;
    return;
L_08A31524:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31530:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7028)));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-11872));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-7028), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31554:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3155C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31564:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3156C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2279u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(26496));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A3158Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 451u, 0x088DF69Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3158Cu) goto L_08A3158C;
    return;
L_08A3158C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26172));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A315A8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-7000));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08A315A8u) goto L_08A315A8;
    return;
L_08A315A8:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(9880));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-6988));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A315BCu);
    ctx.gpr[7] = (0u | 40u);
    goto L_08A312B4;
L_08A315BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A315CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1780))))));
    ctx.gpr[2] = (ctx.gpr[4] & 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A315DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A31640;
      }
      goto L_08A315F8;
    }
L_08A315F8:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29376));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A3160Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A33164;
L_08A3160C:
    ctx.gpr[31] = (0x08A31614u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2332)));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 516u, 0x08AA761Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31614u) goto L_08A31614;
    return;
L_08A31614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2332)));
    ctx.gpr[31] = (0x08A31620u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 489u, 0x08AA7380u>(ctx, &aot_mem) && ctx.pc == 0x08A31620u) goto L_08A31620;
    return;
L_08A31620:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3162Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 416u, 0x08905FECu>(ctx, &aot_mem) && ctx.pc == 0x08A3162Cu) goto L_08A3162C;
    return;
L_08A3162C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31640;
      }
      goto L_08A31638;
    }
L_08A31638:
    ctx.gpr[31] = (0x08A31640u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 477u, 0x08906308u>(ctx, &aot_mem) && ctx.pc == 0x08A31640u) goto L_08A31640;
    return;
L_08A31640:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31654:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2328)));
    ctx.gpr[19] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A316E8;
      }
      goto L_08A31688;
    }
L_08A31688:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[18] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2296)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2288));
      if (branch_taken) {
          goto L_08A31848;
      }
      goto L_08A316BC;
    }
L_08A316BC:
    ctx.gpr[31] = (0x08A316C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A316C4u) goto L_08A316C4;
    return;
L_08A316C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31848;
      }
      goto L_08A316CC;
    }
L_08A316CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
        goto L_08A316FC;
    }
    goto L_08A316E0;
L_08A316E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A316F0;
      }
      goto L_08A316E8;
    }
L_08A316E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31850;
      }
      goto L_08A316F0;
    }
L_08A316F0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31848;
      }
      goto L_08A316F8;
    }
L_08A316F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    goto L_08A316FC;
L_08A316FC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A31710u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31710u) goto L_08A31710;
    return;
L_08A31710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A31728u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31728u) goto L_08A31728;
    return;
L_08A31728:
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
          goto L_08A31848;
      }
      goto L_08A31750;
    }
L_08A31750:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A317A0;
      }
      goto L_08A31764;
    }
L_08A31764:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31790;
      }
      goto L_08A31770;
    }
L_08A31770:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2296), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(816), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2296)));
      if (branch_taken) {
          goto L_08A317A4;
      }
      goto L_08A31790;
    }
L_08A31790:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A31764;
      }
      goto L_08A317A0;
    }
L_08A317A0:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2296)));
    goto L_08A317A4;
L_08A317A4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31850;
      }
      goto L_08A317AC;
    }
L_08A317AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A317C4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A317C4u) goto L_08A317C4;
    return;
L_08A317C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08A317E8u);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A317E8u) goto L_08A317E8;
    return;
L_08A317E8:
    ctx.gpr[31] = (0x08A317F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08A317F0u) goto L_08A317F0;
    return;
L_08A317F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(640), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A31820u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08A31820u) goto L_08A31820;
    return;
L_08A31820:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3182Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem) && ctx.pc == 0x08A3182Cu) goto L_08A3182C;
    return;
L_08A3182C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 16384u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2300), static_cast<std::uint8_t>(0u));
    goto L_08A31848;
L_08A31848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31850;
      }
      goto L_08A31850;
    }
L_08A31850:
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
L_08A3186C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A31880u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A31880u) goto L_08A31880;
    return;
L_08A31880:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3196C;
      }
      goto L_08A31888;
    }
L_08A31888:
    ctx.gpr[31] = (0x08A31890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A31890u) goto L_08A31890;
    return;
L_08A31890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3196C;
      }
      goto L_08A3189C;
    }
L_08A3189C:
    ctx.gpr[31] = (0x08A318A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A318A4u) goto L_08A318A4;
    return;
L_08A318A4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(558)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A318DC;
      }
      goto L_08A318B4;
    }
L_08A318B4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(558)));
    ctx.gpr[7] = (0u | 65535u);
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08A318E0;
    }
    goto L_08A318C4;
L_08A318C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u | 80u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A318E0;
      }
      goto L_08A318D8;
    }
L_08A318D8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A318DC;
L_08A318DC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A318E0;
L_08A318E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3196C;
      }
      goto L_08A318E8;
    }
L_08A318E8:
    ctx.gpr[31] = (0x08A318F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A318F0u) goto L_08A318F0;
    return;
L_08A318F0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3196C;
      }
      goto L_08A3193C;
    }
L_08A3193C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A3196Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 659u, 0x089474A8u>(ctx, &aot_mem) && ctx.pc == 0x08A3196Cu) goto L_08A3196C;
    return;
L_08A3196C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2296)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31A0C;
      }
      goto L_08A31978;
    }
L_08A31978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A31998;
      }
      goto L_08A31988;
    }
L_08A31988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A31A0C;
      }
      goto L_08A31998;
    }
L_08A31998:
    ctx.gpr[31] = (0x08A319A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A319A0u) goto L_08A319A0;
    return;
L_08A319A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31A0C;
      }
      goto L_08A319AC;
    }
L_08A319AC:
    ctx.gpr[31] = (0x08A319B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A319B4u) goto L_08A319B4;
    return;
L_08A319B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31A0C;
      }
      goto L_08A319C0;
    }
L_08A319C0:
    ctx.gpr[31] = (0x08A319C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A319C8u) goto L_08A319C8;
    return;
L_08A319C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31A0C;
      }
      goto L_08A319DC;
    }
L_08A319DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A31A0Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 659u, 0x089474A8u>(ctx, &aot_mem) && ctx.pc == 0x08A31A0Cu) goto L_08A31A0C;
    return;
L_08A31A0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31A1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A31A3Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08A31A3Cu) goto L_08A31A3C;
    return;
L_08A31A3C:
    ctx.gpr[31] = (0x08A31A44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x08A31A44u) goto L_08A31A44;
    return;
L_08A31A44:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31A68;
      }
      goto L_08A31A50;
    }
L_08A31A50:
    ctx.gpr[31] = (0x08A31A58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 655u, 0x08906F34u>(ctx, &aot_mem) && ctx.pc == 0x08A31A58u) goto L_08A31A58;
    return;
L_08A31A58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31A78;
      }
      goto L_08A31A60;
    }
L_08A31A60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31A84;
      }
      goto L_08A31A68;
    }
L_08A31A68:
    ctx.gpr[31] = (0x08A31A70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A33164;
L_08A31A70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31BE8;
      }
      goto L_08A31A78;
    }
L_08A31A78:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A31A84u);
    ctx.gpr[5] = (0u | 65u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08A31A84u) goto L_08A31A84;
    return;
L_08A31A84:
    ctx.gpr[31] = (0x08A31A8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08A31A8Cu) goto L_08A31A8C;
    return;
L_08A31A8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31ABC;
      }
      goto L_08A31A94;
    }
L_08A31A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31ABC;
      }
      goto L_08A31AA0;
    }
L_08A31AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A31ABC;
      }
      goto L_08A31AB0;
    }
L_08A31AB0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A31ABCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 930u, 0x089AFEFCu>(ctx, &aot_mem) && ctx.pc == 0x08A31ABCu) goto L_08A31ABC;
    return;
L_08A31ABC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31B38;
      }
      goto L_08A31AC4;
    }
L_08A31AC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 65u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A31B14;
      }
      goto L_08A31AD4;
    }
L_08A31AD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A31B14;
      }
      goto L_08A31AE4;
    }
L_08A31AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A31B14;
      }
      goto L_08A31AF4;
    }
L_08A31AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A31B14;
      }
      goto L_08A31B04;
    }
L_08A31B04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A31B38;
      }
      goto L_08A31B14;
    }
L_08A31B14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A31B24u);
    ctx.gpr[6] = (0u | 151u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08A31B24u) goto L_08A31B24;
    return;
L_08A31B24:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A31B58;
      }
      goto L_08A31B30;
    }
L_08A31B30:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08A31B48;
      }
      goto L_08A31B38;
    }
L_08A31B38:
    ctx.gpr[31] = (0x08A31B40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A33164;
L_08A31B40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31BE8;
      }
      goto L_08A31B48;
    }
L_08A31B48:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A31B74;
      }
      goto L_08A31B58;
    }
L_08A31B58:
    ctx.gpr[8] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A31B74u);
    ctx.gpr[7] = (0u | 151u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x08A31B74u) goto L_08A31B74;
    return;
L_08A31B74:
    ctx.gpr[31] = (0x08A31B7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x08A31B7Cu) goto L_08A31B7C;
    return;
L_08A31B7C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(816));
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08A31B8Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 608u, 0x089F3910u>(ctx, &aot_mem) && ctx.pc == 0x08A31B8Cu) goto L_08A31B8C;
    return;
L_08A31B8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x08A31BACu);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08A31BACu) goto L_08A31BAC;
    return;
L_08A31BAC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A31BD4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x08A31BD4u) goto L_08A31BD4;
    return;
L_08A31BD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A31BE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08A31BE8u) goto L_08A31BE8;
    return;
L_08A31BE8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31C00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08A31C30u);
    ctx.gpr[5] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08A31C30u) goto L_08A31C30;
    return;
L_08A31C30:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08A31C3Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 719u, 0x08B1FB98u>(ctx, &aot_mem) && ctx.pc == 0x08A31C3Cu) goto L_08A31C3C;
    return;
L_08A31C3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A31C6C;
      }
      goto L_08A31C60;
    }
L_08A31C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2316)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31CC4;
      }
      goto L_08A31C6C;
    }
L_08A31C6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A31C98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x08A31C98u) goto L_08A31C98;
    return;
L_08A31C98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A31CA4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08A31CA4u) goto L_08A31CA4;
    return;
L_08A31CA4:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2308), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A31CB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 509u, 0x08909EBCu>(ctx, &aot_mem) && ctx.pc == 0x08A31CB4u) goto L_08A31CB4;
    return;
L_08A31CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A31E1C;
      }
      goto L_08A31CC4;
    }
L_08A31CC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2304)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (15172u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
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
    ctx.gpr[4] = (48373u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A31D0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x08A31D0Cu) goto L_08A31D0C;
    return;
L_08A31D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] >> 22u);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(200));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A31D70u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31D70u) goto L_08A31D70;
    return;
L_08A31D70:
    ctx.gpr[31] = (0x08A31D78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 6u, 0x08860314u>(ctx, &aot_mem) && ctx.pc == 0x08A31D78u) goto L_08A31D78;
    return;
L_08A31D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2320)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2304)));
    ctx.gpr[31] = (0x08A31D88u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 859u, 0x0893FED0u>(ctx, &aot_mem) && ctx.pc == 0x08A31D88u) goto L_08A31D88;
    return;
L_08A31D88:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
        goto L_08A31DC0;
    }
    goto L_08A31D90;
L_08A31D90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
        goto L_08A31DC0;
    }
    goto L_08A31DA4;
L_08A31DA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08A31E10;
      }
      goto L_08A31DC0;
    }
L_08A31DC0:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A31DE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x08A31DE8u) goto L_08A31DE8;
    return;
L_08A31DE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A31DF4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08A31DF4u) goto L_08A31DF4;
    return;
L_08A31DF4:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2308), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A31E04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 509u, 0x08909EBCu>(ctx, &aot_mem) && ctx.pc == 0x08A31E04u) goto L_08A31E04;
    return;
L_08A31E04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    goto L_08A31E10;
L_08A31E10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A31E1Cu);
    ctx.gpr[5] = (0u | 111u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08A31E1Cu) goto L_08A31E1C;
    return;
L_08A31E1C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31E38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2308)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31E98;
      }
      goto L_08A31E50;
    }
L_08A31E50:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(5832)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31E68:
    ctx.gpr[31] = (0x08A31E70u);
    ctx.gpr[5] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31E70u) goto L_08A31E70;
    return;
L_08A31E70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31E98;
      }
      goto L_08A31E78;
    }
L_08A31E78:
    ctx.gpr[31] = (0x08A31E80u);
    ctx.gpr[5] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31E80u) goto L_08A31E80;
    return;
L_08A31E80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31E98;
      }
      goto L_08A31E88;
    }
L_08A31E88:
    ctx.gpr[31] = (0x08A31E90u);
    ctx.gpr[5] = (0u | 27u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31E90u) goto L_08A31E90;
    return;
L_08A31E90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31E98;
      }
      goto L_08A31E98;
    }
L_08A31E98:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31EA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A31ECCu);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 838u, 0x08913670u>(ctx, &aot_mem) && ctx.pc == 0x08A31ECCu) goto L_08A31ECC;
    return;
L_08A31ECC:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29376));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2308), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A32270;
      }
      goto L_08A31EE4;
    }
L_08A31EE4:
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[18]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(5864)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A31F18u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31F18u) goto L_08A31F18;
    return;
L_08A31F18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (0u | 1000u);
    ctx.gpr[31] = (0x08A31F2Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08A31F2Cu) goto L_08A31F2C;
    return;
L_08A31F2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[31] = (0x08A31F3Cu);
    ctx.gpr[6] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 31u, 0x0890819Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31F3Cu) goto L_08A31F3C;
    return;
L_08A31F3C:
    ctx.gpr[4] = (0u | 60u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1929), static_cast<std::uint8_t>(0u));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16288u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2000u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1932), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A31F80;
    }
    goto L_08A31F80;
L_08A31F80:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1934), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A32270;
      }
      goto L_08A31F90;
    }
L_08A31F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 119u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A31FACu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31FACu) goto L_08A31FAC;
    return;
L_08A31FAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (0u | 1000u);
    ctx.gpr[31] = (0x08A31FC0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08A31FC0u) goto L_08A31FC0;
    return;
L_08A31FC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[31] = (0x08A31FD0u);
    ctx.gpr[6] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 31u, 0x0890819Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31FD0u) goto L_08A31FD0;
    return;
L_08A31FD0:
    ctx.gpr[4] = (0u | 60u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1929), static_cast<std::uint8_t>(0u));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16288u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2000u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1932), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A32014;
    }
    goto L_08A32014;
L_08A32014:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1934), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A32270;
      }
      goto L_08A32024;
    }
L_08A32024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A32040u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A32040u) goto L_08A32040;
    return;
L_08A32040:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[31] = (0x08A32050u);
    ctx.gpr[6] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 31u, 0x0890819Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32050u) goto L_08A32050;
    return;
L_08A32050:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3205Cu);
    ctx.gpr[5] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3205Cu) goto L_08A3205C;
    return;
L_08A3205C:
    ctx.gpr[4] = (0u | 68u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 800u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17096u << 16u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1932), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A320A0;
    }
    goto L_08A320A0;
L_08A320A0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1934), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A32270;
      }
      goto L_08A320B0;
    }
L_08A320B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A320CCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A320CCu) goto L_08A320CC;
    return;
L_08A320CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 27u);
    ctx.gpr[31] = (0x08A320DCu);
    ctx.gpr[6] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 31u, 0x0890819Cu>(ctx, &aot_mem) && ctx.pc == 0x08A320DCu) goto L_08A320DC;
    return;
L_08A320DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A320E8u);
    ctx.gpr[5] = (0u | 27u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem) && ctx.pc == 0x08A320E8u) goto L_08A320E8;
    return;
L_08A320E8:
    ctx.gpr[4] = (0u | 76u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1200u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1932), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A32124;
    }
    goto L_08A32124;
L_08A32124:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1934), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A32270;
      }
      goto L_08A32134;
    }
L_08A32134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A32150u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A32150u) goto L_08A32150;
    return;
L_08A32150:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 27u);
    ctx.gpr[31] = (0x08A32160u);
    ctx.gpr[6] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 31u, 0x0890819Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32160u) goto L_08A32160;
    return;
L_08A32160:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3216Cu);
    ctx.gpr[5] = (0u | 27u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3216Cu) goto L_08A3216C;
    return;
L_08A3216C:
    ctx.gpr[4] = (0u | 84u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 800u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1932), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A321A8;
    }
    goto L_08A321A8;
L_08A321A8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1934), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A32270;
      }
      goto L_08A321B8;
    }
L_08A321B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A321EC;
      }
      goto L_08A321C0;
    }
L_08A321C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A321EC;
      }
      goto L_08A321C8;
    }
L_08A321C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 117u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A321E4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A321E4u) goto L_08A321E4;
    return;
L_08A321E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32208;
      }
      goto L_08A321EC;
    }
L_08A321EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A32208u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A32208u) goto L_08A32208;
    return;
L_08A32208:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[31] = (0x08A32218u);
    ctx.gpr[6] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 31u, 0x0890819Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32218u) goto L_08A32218;
    return;
L_08A32218:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A32224u);
    ctx.gpr[5] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32224u) goto L_08A32224;
    return;
L_08A32224:
    ctx.gpr[4] = (0u | 76u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1200u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1932), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A32260;
    }
    goto L_08A32260;
L_08A32260:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1934), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A32270;
      }
      goto L_08A32270;
    }
L_08A32270:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2296), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2298), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2297), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2299), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2300), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2301), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2302), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2340), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2288), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2312), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2316), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2324), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2328), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2336), 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A322C8u);
    ctx.gpr[4] = (0u | 576u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08A322C8u) goto L_08A322C8;
    return;
L_08A322C8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A322E0;
      }
      goto L_08A322D4;
    }
L_08A322D4:
    ctx.gpr[31] = (0x08A322DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 488u, 0x08AA7374u>(ctx, &aot_mem) && ctx.pc == 0x08A322DCu) goto L_08A322DC;
    return;
L_08A322DC:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08A322E0;
L_08A322E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2332), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A32300u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A32300u) goto L_08A32300;
    return;
L_08A32300:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08A3231C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2308)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A32364;
      }
      goto L_08A3235C;
    }
L_08A3235C:
    ctx.gpr[31] = (0x08A32364u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A31C00;
L_08A32364:
    ctx.gpr[31] = (0x08A3236Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 832u, 0x0891FD10u>(ctx, &aot_mem) && ctx.pc == 0x08A3236Cu) goto L_08A3236C;
    return;
L_08A3236C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2312)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32398;
      }
      goto L_08A32378;
    }
L_08A32378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A32390;
      }
      goto L_08A32388;
    }
L_08A32388:
    ctx.gpr[31] = (0x08A32390u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 161u, 0x08A349F0u>(ctx, &aot_mem) && ctx.pc == 0x08A32390u) goto L_08A32390;
    return;
L_08A32390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33130;
      }
      goto L_08A32398;
    }
L_08A32398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A323E0;
      }
      goto L_08A323A4;
    }
L_08A323A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2332)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A323E0;
      }
      goto L_08A323B4;
    }
L_08A323B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2332)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(572)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A323E0;
      }
      goto L_08A323C8;
    }
L_08A323C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A323E0;
      }
      goto L_08A323D8;
    }
L_08A323D8:
    ctx.gpr[31] = (0x08A323E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2332)));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 541u, 0x08AA7770u>(ctx, &aot_mem) && ctx.pc == 0x08A323E0u) goto L_08A323E0;
    return;
L_08A323E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32454;
      }
      goto L_08A323FC;
    }
L_08A323FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[18] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A32444;
      }
      goto L_08A3240C;
    }
L_08A3240C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[19] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A3243C;
      }
      goto L_08A3241C;
    }
L_08A3241C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3245C;
      }
      goto L_08A3242C;
    }
L_08A3242C:
    ctx.gpr[31] = (0x08A32434u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A31A1C;
L_08A32434:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33130;
      }
      goto L_08A3243C;
    }
L_08A3243C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33130;
      }
      goto L_08A32444;
    }
L_08A32444:
    ctx.gpr[31] = (0x08A3244Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A33164;
L_08A3244C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2196), 0u);
      if (branch_taken) {
          goto L_08A33130;
      }
      goto L_08A32454;
    }
L_08A32454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33130;
      }
      goto L_08A3245C;
    }
L_08A3245C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x08A32480u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 382u, 0x08A45F20u>(ctx, &aot_mem) && ctx.pc == 0x08A32480u) goto L_08A32480;
    return;
L_08A32480:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1940)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1944)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[20] = (2238u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-6992));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[22] = (0u | 65u);
      if (branch_taken) {
          goto L_08A324BC;
      }
      goto L_08A324B4;
    }
L_08A324B4:
    ctx.gpr[31] = (0x08A324BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 753u, 0x0890748Cu>(ctx, &aot_mem) && ctx.pc == 0x08A324BCu) goto L_08A324BC;
    return;
L_08A324BC:
    ctx.gpr[31] = (0x08A324C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A324C4u) goto L_08A324C4;
    return;
L_08A324C4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_08A324DC;
    }
    goto L_08A324CC;
L_08A324CC:
    ctx.gpr[31] = (0x08A324D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A324D4u) goto L_08A324D4;
    return;
L_08A324D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A324FC;
      }
      goto L_08A324DC;
    }
L_08A324DC:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    goto L_08A324FC;
L_08A324FC:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A325B8;
      }
      goto L_08A32558;
    }
L_08A32558:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A325B8;
      }
      goto L_08A32588;
    }
L_08A32588:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A326B4;
      }
      goto L_08A325B8;
    }
L_08A325B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2292)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_08A325F0;
    }
    goto L_08A325D4;
L_08A325D4:
    ctx.gpr[31] = (0x08A325DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A325DCu) goto L_08A325DC;
    return;
L_08A325DC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
        goto L_08A3261C;
    }
    goto L_08A325E4;
L_08A325E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A326B4;
      }
      goto L_08A325EC;
    }
L_08A325EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    goto L_08A325F0;
L_08A325F0:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A32614u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 108u, 0x08A346B4u>(ctx, &aot_mem) && ctx.pc == 0x08A32614u) goto L_08A32614;
    return;
L_08A32614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33130;
      }
      goto L_08A3261C;
    }
L_08A3261C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A32630u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A32630u) goto L_08A32630;
    return;
L_08A32630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A32648u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A32648u) goto L_08A32648;
    return;
L_08A32648:
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
          goto L_08A326B4;
      }
      goto L_08A32670;
    }
L_08A32670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A32688u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A32688u) goto L_08A32688;
    return;
L_08A32688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08A326ACu);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A326ACu) goto L_08A326AC;
    return;
L_08A326AC:
    ctx.gpr[31] = (0x08A326B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x08A326B4u) goto L_08A326B4;
    return;
L_08A326B4:
    ctx.gpr[31] = (0x08A326BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A326BCu) goto L_08A326BC;
    return;
L_08A326BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2296)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u | 55u);
      if (branch_taken) {
          goto L_08A32850;
      }
      goto L_08A326CC;
    }
L_08A326CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A32850;
      }
      goto L_08A326D8;
    }
L_08A326D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A32850;
      }
      goto L_08A326E4;
    }
L_08A326E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A32850;
      }
      goto L_08A326F0;
    }
L_08A326F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(2312)));
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A32714;
      }
      goto L_08A32700;
    }
L_08A32700:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3270Cu);
    ctx.gpr[5] = (0u | 131u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08A3270Cu) goto L_08A3270C;
    return;
L_08A3270C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32850;
      }
      goto L_08A32714;
    }
L_08A32714:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3276C;
      }
      goto L_08A32728;
    }
L_08A32728:
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_08A32730;
L_08A32730:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A32758;
      }
      goto L_08A32740;
    }
L_08A32740:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2228));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A32758;
      }
      goto L_08A32754;
    }
L_08A32754:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A32758;
L_08A32758:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A32730;
      }
      goto L_08A3276C;
    }
L_08A3276C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A327A4;
      }
      goto L_08A32778;
    }
L_08A32778:
    ctx.gpr[31] = (0x08A32780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08A32780u) goto L_08A32780;
    return;
L_08A32780:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A32850;
      }
      goto L_08A32790;
    }
L_08A32790:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3279Cu);
    ctx.gpr[5] = (0u | 129u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08A3279Cu) goto L_08A3279C;
    return;
L_08A3279C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32850;
      }
      goto L_08A327A4;
    }
L_08A327A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A327B0u);
    ctx.gpr[5] = (0u | 134u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08A327B0u) goto L_08A327B0;
    return;
L_08A327B0:
    ctx.gpr[31] = (0x08A327B8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08A327B8u) goto L_08A327B8;
    return;
L_08A327B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32850;
      }
      goto L_08A327C0;
    }
L_08A327C0:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A32850;
      }
      goto L_08A32800;
    }
L_08A32800:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3280Cu);
    ctx.gpr[5] = (0u | 135u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08A3280Cu) goto L_08A3280C;
    return;
L_08A3280C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A32850;
      }
      goto L_08A3281C;
    }
L_08A3281C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A32850;
      }
      goto L_08A3282C;
    }
L_08A3282C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A32844u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x08A32844u) goto L_08A32844;
    return;
L_08A32844:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A32850u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x08A32850u) goto L_08A32850;
    return;
L_08A32850:
    ctx.gpr[31] = (0x08A32858u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A32858u) goto L_08A32858;
    return;
L_08A32858:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A328A0;
      }
      goto L_08A32860;
    }
L_08A32860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2308)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32898;
      }
      goto L_08A32870;
    }
L_08A32870:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(5896)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A32888:
    ctx.gpr[31] = (0x08A32890u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A33440;
L_08A32890:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3293C;
      }
      goto L_08A32898;
    }
L_08A32898:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3293C;
      }
      goto L_08A328A0;
    }
L_08A328A0:
    ctx.gpr[31] = (0x08A328A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08A328A8u) goto L_08A328A8;
    return;
L_08A328A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3293C;
      }
      goto L_08A328B0;
    }
L_08A328B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3293C;
      }
      goto L_08A328BC;
    }
L_08A328BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A3293C;
      }
      goto L_08A328CC;
    }
L_08A328CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(149))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3293C;
      }
      goto L_08A328E0;
    }
L_08A328E0:
    ctx.gpr[31] = (0x08A328E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 500u, 0x0890E244u>(ctx, &aot_mem) && ctx.pc == 0x08A328E8u) goto L_08A328E8;
    return;
L_08A328E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3293C;
      }
      goto L_08A328F0;
    }
L_08A328F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3293C;
      }
      goto L_08A32904;
    }
L_08A32904:
    ctx.gpr[31] = (0x08A3290Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem) && ctx.pc == 0x08A3290Cu) goto L_08A3290C;
    return;
L_08A3290C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A3293C;
L_08A3293C:
    ctx.gpr[31] = (0x08A32944u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A32944u) goto L_08A32944;
    return;
L_08A32944:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32958;
      }
      goto L_08A3294C;
    }
L_08A3294C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A32960;
      }
      goto L_08A32958;
    }
L_08A32958:
    ctx.gpr[31] = (0x08A32960u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A3186C;
L_08A32960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_08A32994;
      }
      goto L_08A3296C;
    }
L_08A3296C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_08A32D24;
      }
      goto L_08A32974;
    }
L_08A32974:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_08A3299C;
      }
      goto L_08A3297C;
    }
L_08A3297C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A32AE8;
      }
      goto L_08A32984;
    }
L_08A32984:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A32D24;
      }
      goto L_08A3298C;
    }
L_08A3298C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32DB8;
      }
      goto L_08A32994;
    }
L_08A32994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32DB8;
      }
      goto L_08A3299C;
    }
L_08A3299C:
    ctx.gpr[31] = (0x08A329A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 3u, 0x08910020u>(ctx, &aot_mem) && ctx.pc == 0x08A329A4u) goto L_08A329A4;
    return;
L_08A329A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A329BC;
      }
      goto L_08A329AC;
    }
L_08A329AC:
    ctx.gpr[31] = (0x08A329B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A329B4u) goto L_08A329B4;
    return;
L_08A329B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32AE0;
      }
      goto L_08A329BC;
    }
L_08A329BC:
    ctx.gpr[31] = (0x08A329C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 85u, 0x08910510u>(ctx, &aot_mem) && ctx.pc == 0x08A329C4u) goto L_08A329C4;
    return;
L_08A329C4:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A329D4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 298u, 0x089110BCu>(ctx, &aot_mem) && ctx.pc == 0x08A329D4u) goto L_08A329D4;
    return;
L_08A329D4:
    ctx.gpr[31] = (0x08A329DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 461u, 0x08916ABCu>(ctx, &aot_mem) && ctx.pc == 0x08A329DCu) goto L_08A329DC;
    return;
L_08A329DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32AE0;
      }
      goto L_08A329E4;
    }
L_08A329E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A32AD8;
      }
      goto L_08A329F4;
    }
L_08A329F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2292)));
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A32AD8;
      }
      goto L_08A32A10;
    }
L_08A32A10:
    ctx.gpr[31] = (0x08A32A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A32A18u) goto L_08A32A18;
    return;
L_08A32A18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32AD8;
      }
      goto L_08A32A20;
    }
L_08A32A20:
    ctx.gpr[31] = (0x08A32A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A32A28u) goto L_08A32A28;
    return;
L_08A32A28:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A32A54;
      }
      goto L_08A32A38;
    }
L_08A32A38:
    ctx.gpr[31] = (0x08A32A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A32A40u) goto L_08A32A40;
    return;
L_08A32A40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A32A4Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 108u, 0x08A346B4u>(ctx, &aot_mem) && ctx.pc == 0x08A32A4Cu) goto L_08A32A4C;
    return;
L_08A32A4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32AE0;
      }
      goto L_08A32A54;
    }
L_08A32A54:
    ctx.gpr[4] = (16294u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2292)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A32AC8;
      }
      goto L_08A32A74;
    }
L_08A32A74:
    ctx.gpr[31] = (0x08A32A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A32A7Cu) goto L_08A32A7C;
    return;
L_08A32A7C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A32AAC;
      }
      goto L_08A32A90;
    }
L_08A32A90:
    ctx.gpr[31] = (0x08A32A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A32A98u) goto L_08A32A98;
    return;
L_08A32A98:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A32AC8;
      }
      goto L_08A32AAC;
    }
L_08A32AAC:
    ctx.gpr[31] = (0x08A32AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A32AB4u) goto L_08A32AB4;
    return;
L_08A32AB4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A32AC0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 108u, 0x08A346B4u>(ctx, &aot_mem) && ctx.pc == 0x08A32AC0u) goto L_08A32AC0;
    return;
L_08A32AC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32AE0;
      }
      goto L_08A32AC8;
    }
L_08A32AC8:
    ctx.gpr[31] = (0x08A32AD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A32AD0u) goto L_08A32AD0;
    return;
L_08A32AD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32AE0;
      }
      goto L_08A32AD8;
    }
L_08A32AD8:
    ctx.gpr[31] = (0x08A32AE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A32AE0u) goto L_08A32AE0;
    return;
L_08A32AE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32DB8;
      }
      goto L_08A32AE8;
    }
L_08A32AE8:
    ctx.gpr[31] = (0x08A32AF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A32AF0u) goto L_08A32AF0;
    return;
L_08A32AF0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A32CCC;
      }
      goto L_08A32B00;
    }
L_08A32B00:
    ctx.gpr[31] = (0x08A32B08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A32B08u) goto L_08A32B08;
    return;
L_08A32B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32B40;
      }
      goto L_08A32B14;
    }
L_08A32B14:
    ctx.gpr[31] = (0x08A32B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A32B1Cu) goto L_08A32B1C;
    return;
L_08A32B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(562)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32B40;
      }
      goto L_08A32B2C;
    }
L_08A32B2C:
    ctx.gpr[5] = (16294u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A32B40u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 298u, 0x089110BCu>(ctx, &aot_mem) && ctx.pc == 0x08A32B40u) goto L_08A32B40;
    return;
L_08A32B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32D1C;
      }
      goto L_08A32B54;
    }
L_08A32B54:
    ctx.gpr[31] = (0x08A32B5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 461u, 0x08916ABCu>(ctx, &aot_mem) && ctx.pc == 0x08A32B5Cu) goto L_08A32B5C;
    return;
L_08A32B5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32D1C;
      }
      goto L_08A32B64;
    }
L_08A32B64:
    ctx.gpr[31] = (0x08A32B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A32B6Cu) goto L_08A32B6C;
    return;
L_08A32B6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32BEC;
      }
      goto L_08A32B74;
    }
L_08A32B74:
    ctx.gpr[31] = (0x08A32B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A32B7Cu) goto L_08A32B7C;
    return;
L_08A32B7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32BEC;
      }
      goto L_08A32B84;
    }
L_08A32B84:
    ctx.gpr[31] = (0x08A32B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A32B8Cu) goto L_08A32B8C;
    return;
L_08A32B8C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 61u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_08A32BC0;
    }
    goto L_08A32BA0;
L_08A32BA0:
    ctx.gpr[31] = (0x08A32BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A32BA8u) goto L_08A32BA8;
    return;
L_08A32BA8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A32BEC;
      }
      goto L_08A32BBC;
    }
L_08A32BBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    goto L_08A32BC0;
L_08A32BC0:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A32BE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 108u, 0x08A346B4u>(ctx, &aot_mem) && ctx.pc == 0x08A32BE4u) goto L_08A32BE4;
    return;
L_08A32BE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32D1C;
      }
      goto L_08A32BEC;
    }
L_08A32BEC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A32BF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x08A32BF8u) goto L_08A32BF8;
    return;
L_08A32BF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A32CB8;
      }
      goto L_08A32C1C;
    }
L_08A32C1C:
    ctx.gpr[31] = (0x08A32C24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x08A32C24u) goto L_08A32C24;
    return;
L_08A32C24:
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A32CB8;
      }
      goto L_08A32C4C;
    }
L_08A32C4C:
    ctx.gpr[31] = (0x08A32C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A32C54u) goto L_08A32C54;
    return;
L_08A32C54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32CC4;
      }
      goto L_08A32C5C;
    }
L_08A32C5C:
    ctx.gpr[31] = (0x08A32C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A32C64u) goto L_08A32C64;
    return;
L_08A32C64:
    ctx.gpr[31] = (0x08A32C6Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 327u, 0x08B011C8u>(ctx, &aot_mem) && ctx.pc == 0x08A32C6Cu) goto L_08A32C6C;
    return;
L_08A32C6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32CC4;
      }
      goto L_08A32C74;
    }
L_08A32C74:
    ctx.gpr[31] = (0x08A32C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A32C7Cu) goto L_08A32C7C;
    return;
L_08A32C7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(562)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32CC4;
      }
      goto L_08A32C88;
    }
L_08A32C88:
    ctx.gpr[31] = (0x08A32C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A32C90u) goto L_08A32C90;
    return;
L_08A32C90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A32CC4;
      }
      goto L_08A32C9C;
    }
L_08A32C9C:
    ctx.gpr[31] = (0x08A32CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A32CA4u) goto L_08A32CA4;
    return;
L_08A32CA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A32CB0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 148u, 0x089A9038u>(ctx, &aot_mem) && ctx.pc == 0x08A32CB0u) goto L_08A32CB0;
    return;
L_08A32CB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32CC4;
      }
      goto L_08A32CB8;
    }
L_08A32CB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A32CC4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08A32CC4u) goto L_08A32CC4;
    return;
L_08A32CC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32D1C;
      }
      goto L_08A32CCC;
    }
L_08A32CCC:
    ctx.gpr[31] = (0x08A32CD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32CD4u) goto L_08A32CD4;
    return;
L_08A32CD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A32D08u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x08A32D08u) goto L_08A32D08;
    return;
L_08A32D08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A32D14u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem) && ctx.pc == 0x08A32D14u) goto L_08A32D14;
    return;
L_08A32D14:
    ctx.gpr[31] = (0x08A32D1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08A32D1Cu) goto L_08A32D1C;
    return;
L_08A32D1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32DB8;
      }
      goto L_08A32D24;
    }
L_08A32D24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A32DB0;
      }
      goto L_08A32D34;
    }
L_08A32D34:
    ctx.gpr[31] = (0x08A32D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A32D3Cu) goto L_08A32D3C;
    return;
L_08A32D3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32DB0;
      }
      goto L_08A32D44;
    }
L_08A32D44:
    ctx.gpr[31] = (0x08A32D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A32D4Cu) goto L_08A32D4C;
    return;
L_08A32D4C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (16294u << 16u);
      if (branch_taken) {
          goto L_08A32D80;
      }
      goto L_08A32D60;
    }
L_08A32D60:
    ctx.gpr[31] = (0x08A32D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A32D68u) goto L_08A32D68;
    return;
L_08A32D68:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A32DB0;
      }
      goto L_08A32D7C;
    }
L_08A32D7C:
    ctx.gpr[4] = (16294u << 16u);
    goto L_08A32D80;
L_08A32D80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2292)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A32DB0;
      }
      goto L_08A32D9C;
    }
L_08A32D9C:
    ctx.gpr[31] = (0x08A32DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A32DA4u) goto L_08A32DA4;
    return;
L_08A32DA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A32DB0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 108u, 0x08A346B4u>(ctx, &aot_mem) && ctx.pc == 0x08A32DB0u) goto L_08A32DB0;
    return;
L_08A32DB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32DB8;
      }
      goto L_08A32DB8;
    }
L_08A32DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32DD0;
      }
      goto L_08A32DC4;
    }
L_08A32DC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A32DD0u);
    ctx.gpr[5] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08A32DD0u) goto L_08A32DD0;
    return;
L_08A32DD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32F0C;
      }
      goto L_08A32DDC;
    }
L_08A32DDC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A32DE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem) && ctx.pc == 0x08A32DE8u) goto L_08A32DE8;
    return;
L_08A32DE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32E10;
      }
      goto L_08A32DF0;
    }
L_08A32DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A32E08u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A32E08u) goto L_08A32E08;
    return;
L_08A32E08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A32ED4;
      }
      goto L_08A32E10;
    }
L_08A32E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[4] = (ctx.gpr[4] >> 22u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A32ED4;
      }
      goto L_08A32E38;
    }
L_08A32E38:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08A32E48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 54u, 0x08A1C648u>(ctx, &aot_mem) && ctx.pc == 0x08A32E48u) goto L_08A32E48;
    return;
L_08A32E48:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08A32EACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32EACu) goto L_08A32EAC;
    return;
L_08A32EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32ED4;
      }
      goto L_08A32EB8;
    }
L_08A32EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A32ED0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A32ED0u) goto L_08A32ED0;
    return;
L_08A32ED0:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A32ED4;
L_08A32ED4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32F0C;
      }
      goto L_08A32EDC;
    }
L_08A32EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A32F0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 716u, 0x088E76D4u>(ctx, &aot_mem) && ctx.pc == 0x08A32F0Cu) goto L_08A32F0C;
    return;
L_08A32F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2336)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (15395u << 16u);
      if (branch_taken) {
          goto L_08A33108;
      }
      goto L_08A32F1C;
    }
L_08A32F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (15395u << 16u);
      if (branch_taken) {
          goto L_08A33108;
      }
      goto L_08A32F2C;
    }
L_08A32F2C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16166u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16051u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08A32F9Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem) && ctx.pc == 0x08A32F9Cu) goto L_08A32F9C;
    return;
L_08A32F9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33080;
      }
      goto L_08A32FA4;
    }
L_08A32FA4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2336), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2300), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A32FB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A33164;
L_08A32FB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A32FC4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x08A32FC4u) goto L_08A32FC4;
    return;
L_08A32FC4:
    ctx.gpr[31] = (0x08A32FCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08A32FCCu) goto L_08A32FCC;
    return;
L_08A32FCC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3301C;
      }
      goto L_08A32FD4;
    }
L_08A32FD4:
    ctx.gpr[31] = (0x08A32FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08A32FDCu) goto L_08A32FDC;
    return;
L_08A32FDC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6956)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6960)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A32FF0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32FF0u) goto L_08A32FF0;
    return;
L_08A32FF0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A33014u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x08A33014u) goto L_08A33014;
    return;
L_08A33014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33070;
      }
      goto L_08A3301C;
    }
L_08A3301C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A33038;
      }
      goto L_08A3302C;
    }
L_08A3302C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A33038u);
    ctx.gpr[5] = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08A33038u) goto L_08A33038;
    return;
L_08A33038:
    ctx.gpr[31] = (0x08A33040u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem) && ctx.pc == 0x08A33040u) goto L_08A33040;
    return;
L_08A33040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(148), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A33070;
L_08A33070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2328), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A33080;
    }
L_08A33080:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2336), 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A330A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem) && ctx.pc == 0x08A330A0u) goto L_08A330A0;
    return;
L_08A330A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33100;
      }
      goto L_08A330A8;
    }
L_08A330A8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1396));
    goto L_08A330B4;
L_08A330B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A330D4;
      }
      goto L_08A330C0;
    }
L_08A330C0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A330CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 15u, 0x08908080u>(ctx, &aot_mem) && ctx.pc == 0x08A330CCu) goto L_08A330CC;
    return;
L_08A330CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A330E4;
      }
      goto L_08A330D4;
    }
L_08A330D4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08A330B4;
      }
      goto L_08A330E4;
    }
L_08A330E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A330F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08A330F0u) goto L_08A330F0;
    return;
L_08A330F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_08A33100;
L_08A33100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33130;
      }
      goto L_08A33108;
    }
L_08A33108:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(264)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A33130;
      }
      goto L_08A3312C;
    }
L_08A3312C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2336), 0u);
    goto L_08A33130;
L_08A33130:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A33164:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    ctx.gpr[17] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A3342C;
      }
      goto L_08A331A4;
    }
L_08A331A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2288));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08A331F0;
      }
      goto L_08A331E8;
    }
L_08A331E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
      if (branch_taken) {
          goto L_08A331F4;
      }
      goto L_08A331F0;
    }
L_08A331F0:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_08A331F4;
L_08A331F4:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2296)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A3342C;
      }
      goto L_08A33200;
    }
L_08A33200:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2296), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A33268;
      }
      goto L_08A33210;
    }
L_08A33210:
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    goto L_08A33214;
L_08A33214:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33248;
      }
      goto L_08A3321C;
    }
L_08A3321C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A33248;
      }
      goto L_08A33228;
    }
L_08A33228:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(816), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A33258;
      }
      goto L_08A33248;
    }
L_08A33248:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33258;
      }
      goto L_08A33254;
    }
L_08A33254:
    ctx.gpr[5] = (ctx.gpr[7] & 255u);
    goto L_08A33258;
L_08A33258:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A33214;
      }
      goto L_08A33268;
    }
L_08A33268:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A33294;
      }
      goto L_08A33270;
    }
L_08A33270:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33294;
      }
      goto L_08A33278;
    }
L_08A33278:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(816)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(816), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(816), 0u);
    goto L_08A33294;
L_08A33294:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2196), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(640), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A332A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x08A332A8u) goto L_08A332A8;
    return;
L_08A332A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2300), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2301), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2302), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A332E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08A332E8u) goto L_08A332E8;
    return;
L_08A332E8:
    ctx.gpr[31] = (0x08A332F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x08A332F0u) goto L_08A332F0;
    return;
L_08A332F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3342C;
      }
      goto L_08A332F8;
    }
L_08A332F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33328;
      }
      goto L_08A33304;
    }
L_08A33304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33328;
      }
      goto L_08A33310;
    }
L_08A33310:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A33320u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08A33320u) goto L_08A33320;
    return;
L_08A33320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3342C;
      }
      goto L_08A33328;
    }
L_08A33328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A333A0;
      }
      goto L_08A33334;
    }
L_08A33334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A333A0;
      }
      goto L_08A33378;
    }
L_08A33378:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A33384u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x08A33384u) goto L_08A33384;
    return;
L_08A33384:
    ctx.gpr[6] = (16416u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A33398u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 751u, 0x0890AED8u>(ctx, &aot_mem) && ctx.pc == 0x08A33398u) goto L_08A33398;
    return;
L_08A33398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33424;
      }
      goto L_08A333A0;
    }
L_08A333A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A333ACu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x08A333ACu) goto L_08A333AC;
    return;
L_08A333AC:
    ctx.gpr[31] = (0x08A333B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A333B4u) goto L_08A333B4;
    return;
L_08A333B4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A33400u);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 779u, 0x0890B0A8u>(ctx, &aot_mem) && ctx.pc == 0x08A33400u) goto L_08A33400;
    return;
L_08A33400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A33418u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x08A33418u) goto L_08A33418;
    return;
L_08A33418:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A33424u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08A33424u) goto L_08A33424;
    return;
L_08A33424:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3342C;
      }
      goto L_08A3342C;
    }
L_08A3342C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A33440:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[16]);
    ctx.gpr[16] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A334A8u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A334A8u) goto L_08A334A8;
    return;
L_08A334A8:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_08A334C0;
    }
    goto L_08A334B0;
L_08A334B0:
    ctx.gpr[31] = (0x08A334B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A334B8u) goto L_08A334B8;
    return;
L_08A334B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A334DC;
      }
      goto L_08A334C0;
    }
L_08A334C0:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A334DC;
L_08A334DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A334FC;
      }
      goto L_08A334EC;
    }
L_08A334EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3351C;
      }
      goto L_08A334FC;
    }
L_08A334FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A33514;
      }
      goto L_08A3350C;
    }
L_08A3350C:
    ctx.gpr[31] = (0x08A33514u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A33164;
L_08A33514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 107u, 0x08A34680u>(ctx, &aot_mem); return;
      }
      goto L_08A3351C;
    }
L_08A3351C:
    ctx.gpr[31] = (0x08A33524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 526u, 0x08AAE958u>(ctx, &aot_mem) && ctx.pc == 0x08A33524u) goto L_08A33524;
    return;
L_08A33524:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A335EC;
      }
      goto L_08A3352C;
    }
L_08A3352C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2296)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A335EC;
      }
      goto L_08A33538;
    }
L_08A33538:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2297)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A335EC;
      }
      goto L_08A33544;
    }
L_08A33544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33648;
      }
      goto L_08A33554;
    }
L_08A33554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(460)));
    ctx.gpr[20] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2302), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2297), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(456)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2049));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A3359Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3359Cu) goto L_08A3359C;
    return;
L_08A3359C:
    ctx.gpr[31] = (0x08A335A4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08A335A4u) goto L_08A335A4;
    return;
L_08A335A4:
    ctx.gpr[31] = (0x08A335ACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A33164;
L_08A335AC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(640), 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A335BCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x08A335BCu) goto L_08A335BC;
    return;
L_08A335BC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A335C8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem) && ctx.pc == 0x08A335C8u) goto L_08A335C8;
    return;
L_08A335C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2292)));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A33648;
      }
      goto L_08A335E4;
    }
L_08A335E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2300), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_08A33648;
      }
      goto L_08A335EC;
    }
L_08A335EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2302)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33648;
      }
      goto L_08A335F8;
    }
L_08A335F8:
    ctx.gpr[31] = (0x08A33600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 526u, 0x08AAE958u>(ctx, &aot_mem) && ctx.pc == 0x08A33600u) goto L_08A33600;
    return;
L_08A33600:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33648;
      }
      goto L_08A33608;
    }
L_08A33608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(460)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2302), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2297), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2300), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (65408u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A33648u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A33164;
L_08A33648:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 22u, 0x08A341B0u>(ctx, &aot_mem); return;
      }
      goto L_08A33650;
    }
L_08A33650:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2297)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33CE4;
      }
      goto L_08A3365C;
    }
L_08A3365C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2296)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A339BC;
      }
      goto L_08A33668;
    }
L_08A33668:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A33684u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem) && ctx.pc == 0x08A33684u) goto L_08A33684;
    return;
L_08A33684:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A339BC;
      }
      goto L_08A3368C;
    }
L_08A3368C:
    ctx.gpr[31] = (0x08A33694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A33694u) goto L_08A33694;
    return;
L_08A33694:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A339BC;
      }
      goto L_08A3369C;
    }
L_08A3369C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x08A336BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08A336BCu) goto L_08A336BC;
    return;
L_08A336BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2292)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A339BC;
      }
      goto L_08A336D4;
    }
L_08A336D4:
    ctx.gpr[31] = (0x08A336DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A336DCu) goto L_08A336DC;
    return;
L_08A336DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(324)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A339BC;
      }
      goto L_08A33748;
    }
L_08A33748:
    ctx.gpr[31] = (0x08A33750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A33750u) goto L_08A33750;
    return;
L_08A33750:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A337E0;
      }
      goto L_08A337D8;
    }
L_08A337D8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A33814;
      }
      goto L_08A337E0;
    }
L_08A337E0:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A33814;
L_08A33814:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A33840;
      }
      goto L_08A33838;
    }
L_08A33838:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A33874;
      }
      goto L_08A33840;
    }
L_08A33840:
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A33874;
L_08A33874:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
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
          goto L_08A339A4;
      }
      goto L_08A338AC;
    }
L_08A338AC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A338C4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x08A338C4u) goto L_08A338C4;
    return;
L_08A338C4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A338D0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08A338D0u) goto L_08A338D0;
    return;
L_08A338D0:
    ctx.gpr[31] = (0x08A338D8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 332u, 0x0890932Cu>(ctx, &aot_mem) && ctx.pc == 0x08A338D8u) goto L_08A338D8;
    return;
L_08A338D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A339BC;
      }
      goto L_08A338E0;
    }
L_08A338E0:
    ctx.gpr[31] = (0x08A338E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A338E8u) goto L_08A338E8;
    return;
L_08A338E8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A338F4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 716u, 0x088E76D4u>(ctx, &aot_mem) && ctx.pc == 0x08A338F4u) goto L_08A338F4;
    return;
L_08A338F4:
    ctx.gpr[31] = (0x08A338FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08A338FCu) goto L_08A338FC;
    return;
L_08A338FC:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6948)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6952)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A33918u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33918u) goto L_08A33918;
    return;
L_08A33918:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A33948u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 613u, 0x0890A5BCu>(ctx, &aot_mem) && ctx.pc == 0x08A33948u) goto L_08A33948;
    return;
L_08A33948:
    ctx.gpr[31] = (0x08A33950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08A33950u) goto L_08A33950;
    return;
L_08A33950:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6944)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A33964u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33964u) goto L_08A33964;
    return;
L_08A33964:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6932)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6936)));
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
    ctx.gpr[31] = (0x08A3399Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem) && ctx.pc == 0x08A3399Cu) goto L_08A3399C;
    return;
L_08A3399C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A339BC;
      }
      goto L_08A339A4;
    }
L_08A339A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A339BC;
      }
      goto L_08A339B4;
    }
L_08A339B4:
    ctx.gpr[31] = (0x08A339BCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A339BCu) goto L_08A339BC;
    return;
L_08A339BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2296)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A339DC;
      }
      goto L_08A339C8;
    }
L_08A339C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33B58;
      }
      goto L_08A339DC;
    }
L_08A339DC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A339F8;
      }
      goto L_08A339F0;
    }
L_08A339F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
      if (branch_taken) {
          goto L_08A339FC;
      }
      goto L_08A339F8;
    }
L_08A339F8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_08A339FC;
L_08A339FC:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2292)));
      if (branch_taken) {
          goto L_08A33A4C;
      }
      goto L_08A33A0C;
    }
L_08A33A0C:
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    goto L_08A33A10;
L_08A33A10:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33A3C;
      }
      goto L_08A33A1C;
    }
L_08A33A1C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(816)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(2292)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A33A3C;
      }
      goto L_08A33A34;
    }
L_08A33A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(816)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2292)));
    goto L_08A33A3C;
L_08A33A3C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A33A10;
      }
      goto L_08A33A4C;
    }
L_08A33A4C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2296)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33AEC;
      }
      goto L_08A33A58;
    }
L_08A33A58:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33A80;
      }
      goto L_08A33A6C;
    }
L_08A33A6C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A33A78u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A31654;
L_08A33A78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33B50;
      }
      goto L_08A33A80;
    }
L_08A33A80:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2292)));
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A33AB8;
      }
      goto L_08A33A9C;
    }
L_08A33A9C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33B50;
      }
      goto L_08A33AA4;
    }
L_08A33AA4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2292)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A33B50;
      }
      goto L_08A33AB8;
    }
L_08A33AB8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33AD8;
      }
      goto L_08A33AC0;
    }
L_08A33AC0:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A33AD8;
      }
      goto L_08A33AD0;
    }
L_08A33AD0:
    ctx.gpr[31] = (0x08A33AD8u);
    // nop
    goto L_08A33164;
L_08A33AD8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A33AE4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A31654;
L_08A33AE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33B50;
      }
      goto L_08A33AEC;
    }
L_08A33AEC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33B50;
      }
      goto L_08A33AF4;
    }
L_08A33AF4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33B50;
      }
      goto L_08A33B08;
    }
L_08A33B08:
    ctx.gpr[5] = (16672u << 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A33B38;
      }
      goto L_08A33B14;
    }
L_08A33B14:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2292)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A33B38;
      }
      goto L_08A33B28;
    }
L_08A33B28:
    ctx.gpr[31] = (0x08A33B30u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A33164;
L_08A33B30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33B50;
      }
      goto L_08A33B38;
    }
L_08A33B38:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A33B50;
      }
      goto L_08A33B48;
    }
L_08A33B48:
    ctx.gpr[31] = (0x08A33B50u);
    // nop
    goto L_08A33164;
L_08A33B50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33B64;
      }
      goto L_08A33B58;
    }
L_08A33B58:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A33B64u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A31654;
L_08A33B64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2296)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 107u, 0x08A34680u>(ctx, &aot_mem); return;
      }
      goto L_08A33B70;
    }
L_08A33B70:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33BB4;
      }
      goto L_08A33B7C;
    }
L_08A33B7C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33BB4;
      }
      goto L_08A33BA0;
    }
L_08A33BA0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A33BACu);
    ctx.gpr[5] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33BACu) goto L_08A33BAC;
    return;
L_08A33BAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33C2C;
      }
      goto L_08A33BB4;
    }
L_08A33BB4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A33C2C;
      }
      goto L_08A33BC0;
    }
L_08A33BC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33C2C;
      }
      goto L_08A33BE4;
    }
L_08A33BE4:
    ctx.gpr[31] = (0x08A33BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08A33BECu) goto L_08A33BEC;
    return;
L_08A33BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33C2C;
      }
      goto L_08A33BF8;
    }
L_08A33BF8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A33C04u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem) && ctx.pc == 0x08A33C04u) goto L_08A33C04;
    return;
L_08A33C04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A33C20;
      }
      goto L_08A33C0C;
    }
L_08A33C0C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A33C18u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33C18u) goto L_08A33C18;
    return;
L_08A33C18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33C2C;
      }
      goto L_08A33C20;
    }
L_08A33C20:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A33C2Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33C2Cu) goto L_08A33C2C;
    return;
L_08A33C2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2299)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33C6C;
      }
      goto L_08A33C38;
    }
L_08A33C38:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A33C6C;
      }
      goto L_08A33C60;
    }
L_08A33C60:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A33C6Cu);
    ctx.gpr[5] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08A33C6Cu) goto L_08A33C6C;
    return;
L_08A33C6C:
    ctx.gpr[31] = (0x08A33C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08A33C74u) goto L_08A33C74;
    return;
L_08A33C74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 107u, 0x08A34680u>(ctx, &aot_mem); return;
      }
      goto L_08A33C7C;
    }
L_08A33C7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2299)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33C98;
      }
      goto L_08A33C88;
    }
L_08A33C88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2299), static_cast<std::uint8_t>(0u));
    goto L_08A33C98;
L_08A33C98:
    ctx.gpr[31] = (0x08A33CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem) && ctx.pc == 0x08A33CA0u) goto L_08A33CA0;
    return;
L_08A33CA0:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2292)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 107u, 0x08A34680u>(ctx, &aot_mem); return;
      }
      goto L_08A33CD4;
    }
L_08A33CD4:
    ctx.gpr[31] = (0x08A33CDCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A33164;
L_08A33CDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 107u, 0x08A34680u>(ctx, &aot_mem); return;
      }
      goto L_08A33CE4;
    }
L_08A33CE4:
    ctx.gpr[31] = (0x08A33CECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A31E38;
L_08A33CEC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x08A33D0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x08A33D0Cu) goto L_08A33D0C;
    return;
L_08A33D0C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A33D2Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x08A33D2Cu) goto L_08A33D2C;
    return;
L_08A33D2C:
    ctx.gpr[31] = (0x08A33D34u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 332u, 0x0890932Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33D34u) goto L_08A33D34;
    return;
L_08A33D34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33D70;
      }
      goto L_08A33D44;
    }
L_08A33D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 21u, 0x08A341A8u>(ctx, &aot_mem); return;
      }
      goto L_08A33D54;
    }
L_08A33D54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 21u, 0x08A341A8u>(ctx, &aot_mem); return;
      }
      goto L_08A33D70;
    }
L_08A33D70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33F28;
      }
      goto L_08A33D84;
    }
L_08A33D84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2292)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A33F14;
      }
      goto L_08A33D98;
    }
L_08A33D98:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A33DB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem) && ctx.pc == 0x08A33DB0u) goto L_08A33DB0;
    return;
L_08A33DB0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(724)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A33DC4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem) && ctx.pc == 0x08A33DC4u) goto L_08A33DC4;
    return;
L_08A33DC4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A33DD0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33DD0u) goto L_08A33DD0;
    return;
L_08A33DD0:
    ctx.gpr[7] = (ctx.gpr[18] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A33DE8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 239u, 0x088619ACu>(ctx, &aot_mem) && ctx.pc == 0x08A33DE8u) goto L_08A33DE8;
    return;
L_08A33DE8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08A33E24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33E24u) goto L_08A33E24;
    return;
L_08A33E24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33E44;
      }
      goto L_08A33E2C;
    }
L_08A33E2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33EC0;
      }
      goto L_08A33E38;
    }
L_08A33E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A33EC0;
      }
      goto L_08A33E44;
    }
L_08A33E44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A33E60u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A33E60u) goto L_08A33E60;
    return;
L_08A33E60:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A33E6Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 716u, 0x088E76D4u>(ctx, &aot_mem) && ctx.pc == 0x08A33E6Cu) goto L_08A33E6C;
    return;
L_08A33E6C:
    ctx.gpr[31] = (0x08A33E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08A33E74u) goto L_08A33E74;
    return;
L_08A33E74:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6948)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6952)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A33E90u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33E90u) goto L_08A33E90;
    return;
L_08A33E90:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A33EC0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 613u, 0x0890A5BCu>(ctx, &aot_mem) && ctx.pc == 0x08A33EC0u) goto L_08A33EC0;
    return;
L_08A33EC0:
    ctx.gpr[31] = (0x08A33EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08A33EC8u) goto L_08A33EC8;
    return;
L_08A33EC8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6944)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A33EDCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33EDCu) goto L_08A33EDC;
    return;
L_08A33EDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6932)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6936)));
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
    ctx.gpr[31] = (0x08A33F14u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem) && ctx.pc == 0x08A33F14u) goto L_08A33F14;
    return;
L_08A33F14:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A33F20u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08A33F20u) goto L_08A33F20;
    return;
L_08A33F20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 21u, 0x08A341A8u>(ctx, &aot_mem); return;
      }
      goto L_08A33F28;
    }
L_08A33F28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 21u, 0x08A341A8u>(ctx, &aot_mem); return;
      }
      goto L_08A33F38;
    }
L_08A33F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 21u, 0x08A341A8u>(ctx, &aot_mem); return;
      }
      goto L_08A33F48;
    }
L_08A33F48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2302)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 21u, 0x08A341A8u>(ctx, &aot_mem); return;
      }
      goto L_08A33F54;
    }
L_08A33F54:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2292)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 4u, 0x08A34020u>(ctx, &aot_mem); return;
      }
      goto L_08A33F8C;
    }
L_08A33F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A33FA8;
      }
      goto L_08A33F9C;
    }
L_08A33F9C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A33FA8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 696u, 0x089AB4FCu>(ctx, &aot_mem) && ctx.pc == 0x08A33FA8u) goto L_08A33FA8;
    return;
L_08A33FA8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 21u, 0x08A341A8u>(ctx, &aot_mem); return;
      }
      goto L_08A33FD0;
    }
L_08A33FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2297), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (65408u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A34000u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A31654;
}

void recomp_unit_0139(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0139_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_139(Runtime &runtime) {
    runtime.register_generated_unit(139u, 0x08A30000u, 16384u, &recomp_unit_0139, &recomp_unit_0139_entry);
    runtime.register_function(0x08A30000u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30054u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3005Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A300D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A300D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A300E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A300F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30100u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30108u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30110u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30160u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30168u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A301A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A301D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A301D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30224u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30240u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30248u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30274u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30288u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3029Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30304u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30314u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3031Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30334u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30364u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A303F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A303FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3044Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30458u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3046Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30478u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30480u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30488u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30490u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A304A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A304B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30500u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30508u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30588u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30590u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30598u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A305A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A305A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A305B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A305CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3060Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30614u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A306C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A306D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A306D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A306E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A306ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30710u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30738u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30754u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30768u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30774u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30788u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30794u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A307B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A307B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A307CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A307DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A307E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A307F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3080Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30818u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30820u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30828u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30830u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30838u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30840u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30848u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30850u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30858u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30864u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3086Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30874u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30884u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30894u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A308A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A308B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A308C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A308D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A308E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A308F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30904u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30914u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30924u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3092Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30934u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3093Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30944u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30958u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3096Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30980u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30994u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A309A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A309BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A309C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A309DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A309FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A30u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A48u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A58u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A6Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A70u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A80u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30AB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30AC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30ACCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30AD4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30ADCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30AE8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30AF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B30u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B5Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B74u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B94u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30BCCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30BD4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30BD8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30BF0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C30u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C54u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C60u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C6Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C74u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C80u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C8Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C94u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30CA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30CB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30CC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30CCCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30CD8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30CE0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30CE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D60u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D68u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D94u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30DA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30DB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30DC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30DC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30DDCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30DE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30DECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30DF8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E2Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E34u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E48u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E54u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E60u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E64u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E70u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E78u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E80u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E8Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E98u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30EA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30EA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30EB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30EC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30EC8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30ED4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30EE0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30EECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30EF0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30EFCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F18u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F30u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F34u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F48u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F5Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F68u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F78u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F7Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30FA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30FB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30FB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30FC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31000u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31028u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31080u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31104u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3110Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31110u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31118u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31120u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31128u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31134u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31140u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31148u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3114Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31154u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3115Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31164u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31170u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3117Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31184u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31188u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31190u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31198u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A311A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A311ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A311B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A311C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A311C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A311CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A311D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A311DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A311E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A311F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A311FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31200u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31208u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31210u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31218u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31224u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31230u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3123Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31240u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31248u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3124Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3128Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A312A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A312A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A312B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A312E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31328u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31330u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31340u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31360u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3137Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A313A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A313A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A313B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A313D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A313E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A313ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31410u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31414u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3143Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3145Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31460u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3147Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31490u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31494u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A314B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A314C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A314D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31500u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31508u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31524u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31530u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31554u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3155Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31564u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3156Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3158Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3160Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31614u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31620u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3162Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31638u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31640u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31654u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31688u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31710u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31728u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31750u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31764u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31770u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31790u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31820u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3182Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31848u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31850u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3186Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31880u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31888u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31890u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3189Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3193Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3196Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31978u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31988u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31998u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A319A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A319ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A319B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A319C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A319C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A319DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A44u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A58u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A60u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A68u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A70u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A78u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A8Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A94u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31AA0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31AB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31ABCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31AC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31AD4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31AE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31AF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B30u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B48u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B58u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B74u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B7Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B8Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31BACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31BD4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31BE8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C00u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C30u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C60u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C6Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C98u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31CA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31CB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31CC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D70u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D78u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D88u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D90u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31DA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31DC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31DE8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31DF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E68u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E70u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E78u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E80u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E88u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E90u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E98u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31EA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31ECCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31EE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31EFCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F18u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F2Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F80u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F90u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31FACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31FC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31FD0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32014u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32024u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32040u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32050u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3205Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A320A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A320B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A320CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A320DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A320E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32124u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32134u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32150u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32160u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3216Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A321A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A321B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A321C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A321C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A321E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A321ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32208u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32218u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32224u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32260u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32270u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A322C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A322D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A322DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A322E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32300u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3231Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3235Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32364u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3236Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32378u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32388u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32390u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32398u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A323A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A323B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A323C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A323D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A323E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A323FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3240Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3241Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3242Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32434u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3243Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32444u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3244Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32454u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3245Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32480u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A324B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A324BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A324C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A324CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A324D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A324DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A324FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32558u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32588u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32614u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3261Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32630u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32648u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32670u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32688u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32700u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3270Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32714u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32728u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32730u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32740u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32754u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32758u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3276Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32778u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32780u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32790u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3279Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A327A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A327B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A327B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A327C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32800u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3280Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3281Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3282Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32844u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32850u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32858u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32860u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32870u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32888u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32890u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32898u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32904u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3290Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3293Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32944u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3294Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32958u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32960u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3296Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32974u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3297Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32984u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3298Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32994u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3299Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A329A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A329ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A329B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A329BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A329C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A329D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A329DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A329E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A329F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A18u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A28u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A4Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A54u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A74u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A7Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A90u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A98u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32AACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32AB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32AC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32AC8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32AD0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32AD8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32AE0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32AE8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32AF0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B00u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B2Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B54u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B5Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B64u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B6Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B74u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B7Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B8Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BA0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BBCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BF8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C4Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C54u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C5Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C64u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C6Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C74u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C7Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C88u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C90u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CCCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CD4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D34u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D44u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D4Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D60u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D68u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D7Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D80u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DD0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DDCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DE8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DF0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E48u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32ED0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32ED4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EDCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F2Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FCCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FD4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FDCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FF0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33014u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3301Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3302Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33038u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33040u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33070u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33080u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33100u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33108u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3312Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33130u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33164u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A331A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A331E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A331F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A331F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33200u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33210u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33214u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3321Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33228u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33248u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33254u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33258u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33268u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33270u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33278u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33294u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A332A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A332E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A332F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A332F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33304u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33310u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33320u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33328u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33334u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33378u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33384u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33398u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A333A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A333ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A333B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33400u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33418u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33424u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3342Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33440u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A334A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A334B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A334B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A334C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A334DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A334ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A334FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3350Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33514u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3351Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33524u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3352Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33538u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33544u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33554u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3359Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33600u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33608u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33648u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33650u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3365Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33668u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33684u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3368Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33694u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3369Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A336BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A336D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A336DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33748u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33750u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A337D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A337E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33814u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33838u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33840u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33874u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A338ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A338C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A338D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A338D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A338E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A338E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A338F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A338FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33918u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33948u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33950u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33964u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3399Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A34u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A4Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A58u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A6Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A78u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A80u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33AA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33AB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33AC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33AD0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33AD8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33AE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33AECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33AF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B28u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B30u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B48u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B58u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B64u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B70u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B7Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33BA0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33BACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33BB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33BC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33BE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33BECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33BF8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C18u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C2Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C60u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C6Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C74u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C7Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C88u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33C98u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33CA0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33CD4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33CDCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33CE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33CECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D2Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D34u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D44u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D54u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D70u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D98u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33DB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33DC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33DD0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33DE8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E2Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E44u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E60u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E6Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E74u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E90u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33EC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33EC8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33EDCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F28u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F48u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F54u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F8Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33FA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33FD0u, &recomp_unit_0139, "recomp_unit_0139");
}
} // namespace psprecomp
